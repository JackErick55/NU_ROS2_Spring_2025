#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from std_srvs.srv import Empty
from turtle_interfaces.srv import Waypoints
from geometry_msgs.msg import Point, Pose
from turtlesim.srv import TeleportAbsolute, Spawn, Kill, SetPen
import math
import time

class WaypointNode(Node):
    def __init__(self):
        super().__init__('waypoint')

        # Declare and get the frequency parameter
        self.declare_parameter('frequency', 90.0)
        frequency = self.get_parameter('frequency').value
        self.timer_period = 1.0 / frequency  # Convert Hz to seconds

        # State variables
        self.moving = False  # Start in STOPPED state
        self.waypoints = []  # List of waypoints
        self.current_waypoint_index = 0  # Track the current waypoint
        self.total_distance = 0.0  # Total distance for the waypoint cycle
        self.waypoints_loaded = False  # Flag to track if waypoints have been loaded

        # Create a timer to call the function at the specified rate
        self.timer = self.create_timer(self.timer_period, self.issue_command)

        # Create the toggle service
        self.toggle_service = self.create_service(Empty, 'toggle', self.toggle_callback)

        # Create the load service
        self.load_service = self.create_service(Waypoints, 'load', self.load_callback)

        # Create clients for teleport, kill, and setpen services
        self.teleport_client = self.create_client(TeleportAbsolute, '/turtle1/teleport_absolute')
        self.kill_client = self.create_client(Kill, '/kill')
        self.spawn_client = self.create_client(Spawn, '/spawn')
        self.set_pen_client = self.create_client(SetPen, '/turtle1/set_pen')

        # Create the pose subscription
        self.pose_subscription = self.create_subscription(Pose, '/turtle1/pose',
                                                           self.pose_callback, 10 )

    def load_callback(self, request, response):
        """Handles the load service: Kills, spawns, draws Xs, places turtle at first waypoint, and computes distance."""
        
        # Check if waypoints have already been loaded
        if self.waypoints_loaded:
            self.get_logger().info("Waypoints have already been loaded. Skipping load.")
            response.distance = self.total_distance
            return response  # Skip further processing if waypoints are already loaded

        self.get_logger().info("Loading waypoints...")

        # Kill and respawn the turtle (reset the environment)
        self.call_reset_service()

        # Process the waypoints: draw Xs and compute total distance
        self.total_distance = self.process_waypoints(request.waypoints)

        # Only teleport if the turtle is in the moving state
        if self.moving and request.waypoints:
            first_wp = request.waypoints[0]
            self.teleport_turtle(first_wp.x, first_wp.y)

        # Stop the turtle after loading the waypoints
        self.moving = False
        self.current_waypoint_index = 0  # Start at the first waypoint
        self.waypoints = request.waypoints  # Store the waypoints
        self.waypoints_loaded = True  # Set the flag indicating waypoints are loaded

        self.get_logger().info(f"Waypoints loaded. Total cycle distance: {self.total_distance:.2f} units.")

        # Return the computed total distance as the response
        response.distance = self.total_distance
        return response

    def issue_command(self):
        """Executed at a fixed frequency. Logs DEBUG messages only when moving."""
        if self.moving and self.waypoints:
            # Get the current waypoint
            current_wp = self.waypoints[self.current_waypoint_index]
            self.get_logger().debug(f"Moving to waypoint {self.current_waypoint_index + 1}: ({current_wp.x}, {current_wp.y})")

            # Move the turtle to the current waypoint, only if moving
            if self.moving:
                self.teleport_turtle(current_wp.x, current_wp.y)

            # Draw an X at the current waypoint
            self.draw_x(current_wp.x, current_wp.y)

            # Move to the next waypoint (wrap around if at the end)
            self.current_waypoint_index = (self.current_waypoint_index + 1) % len(self.waypoints)
        elif not self.moving:
            self.get_logger().debug("Movement is stopped, not issuing command.")

    def toggle_callback(self, request, response):
        """Toggles between MOVING and STOPPED states."""
        self.moving = not self.moving  # Flip the state

        if self.moving:
            self.get_logger().info("Starting movement.")
        else:
            self.get_logger().info("Stopping movement.")

        return response

    def call_reset_service(self):
        """Kills and respawns the turtle."""
        self.call_kill_service()  # Kill the current turtle
        time.sleep(1)  # Wait before spawning a new one
        self.call_spawn_service()  # Spawn a new turtle

    def call_kill_service(self):
        """Kills the turtle using the Kill service."""
        while not self.kill_client.wait_for_service(timeout_sec=1.0):
            self.get_logger().warn("Waiting for /kill service...")
        req = Kill.Request()
        req.name = 'turtle1'
        self.kill_client.call_async(req)

    def call_spawn_service(self):
        """Spawns a new turtle."""
        while not self.spawn_client.wait_for_service(timeout_sec=1.0):
            self.get_logger().warn("Waiting for /spawn service...")
        req = Spawn.Request()
        req.x = 5.0
        req.y = 5.0
        req.theta = 0.0
        req.name = 'turtle1'
        self.spawn_client.call_async(req)

    def set_pen_down(self):
        """Sets the pen down to start drawing."""
        while not self.set_pen_client.wait_for_service(timeout_sec=1.0):
            self.get_logger().warn("Waiting for /turtle1/set_pen service...")
        req = SetPen.Request()
        req.r = 255
        req.g = 255
        req.b = 255
        req.width = 2
        req.off = 0  # Set pen down
        self.set_pen_client.call_async(req)

    def set_pen_up(self):
        """Sets the pen up to stop drawing."""
        while not self.set_pen_client.wait_for_service(timeout_sec=1.0):
            self.get_logger().warn("Waiting for /turtle1/set_pen service...")
        req = SetPen.Request()
        req.r = 255
        req.g = 255
        req.b = 255
        req.width = 2
        req.off = 1  # Set pen up
        self.set_pen_client.call_async(req)

    def teleport_turtle(self, x, y):
        """Teleports the turtle to a given position only if it is in the moving state."""
        if self.moving:
            while not self.teleport_client.wait_for_service(timeout_sec=1.0):
                self.get_logger().warn("Waiting for /turtle1/teleport_absolute service...")
            req = TeleportAbsolute.Request()
            req.x = x
            req.y = y
            req.theta = 0.0
            self.teleport_client.call_async(req)
            time.sleep(0.5)  # Ensure teleport completes

    def process_waypoints(self, waypoints):
        """Draws an X at each waypoint and calculates total cycle distance."""
        total_distance = 0.0

        if len(waypoints) < 2:
            return total_distance  # No distance to compute

        # Iterate over waypoints to calculate distance
        for i in range(len(waypoints)):
            wp1 = waypoints[i]
            wp2 = waypoints[(i + 1) % len(waypoints)]  # Loop back to first point
            segment_distance = math.sqrt((wp2.x - wp1.x) ** 2 + (wp2.y - wp1.y) ** 2)
            total_distance += segment_distance

            # Draw an X at each waypoint
            self.draw_x(wp1.x, wp1.y)

        return total_distance

    def draw_x(self, x, y):
        """Draws an X at a given position by teleporting the turtle."""
        diagonal_offset = 0.2  # X size

        # Lift the pen to avoid drawing lines between Xs
        self.set_pen_up()

        # Teleport to the four corners of the X
        self.teleport_turtle(x - diagonal_offset, y - diagonal_offset)
        self.set_pen_down()  # Start drawing
        self.teleport_turtle(x + diagonal_offset, y + diagonal_offset)

        self.set_pen_up()  # Lift pen to move
        self.teleport_turtle(x - diagonal_offset, y + diagonal_offset)
        self.set_pen_down()  # Start drawing
        self.teleport_turtle(x + diagonal_offset, y - diagonal_offset)

        # Lift the pen after drawing the X
        self.set_pen_up()

    def pose_callback(self, msg):
        """Callback function to store position and orientation."""
        self.x = msg.x
        self.y = msg.y
        self.theta = msg.theta

def main(args=None):
    rclpy.init(args=args)
    node = WaypointNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
