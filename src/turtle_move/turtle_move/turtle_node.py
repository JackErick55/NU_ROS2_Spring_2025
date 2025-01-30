#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist, Vector3
from turtlesim.msg import Pose 

rate_hz = 10
time_period = 1 / rate_hz

class TurtleNode(Node):

    def __init__(self):
        super().__init__("turtle_node")
        self.get_logger().info("This is turtle_node")
        self._velocity = 2.0

        self.declare_parameter("xmin", 2.0)
        self.declare_parameter("xmax", 7.0)

        self._xmin = self.get_parameter("xmin").value
        self._xmax = self.get_parameter("xmax").value
        self.get_logger().debug(f"Xmin: {self._xmin} Xmax: {self._xmax}")
        
        self.pub_ = self.create_publisher(
            Twist, "cmd_vel", 10)

        self.pub_.publish(Twist(linear=Vector3(x=self._velocity)))

        self.get_logger().info("This is turtle_node")
        self._sub = self.create_subscription(
            Pose, "/turtle1/pose", self.pose_callback, 10)

    def pose_callback(self, pose):
        if pose.x > self._xmax and self._velocity > 0:
            self._velocity *= -1.0
        elif pose.x < self._xmin and self._velocity < 0:
            self._velocity *= -1.0

        cmd = Twist()
        cmd.linear.x = self._velocity  # Set linear velocity
        cmd.angular.z = 0.0  # No angular velocity (straight line movement)

        # Publish the command to control the turtle
        self.pub_.publish(cmd)

        self.get_logger().info(f"Pose: x={pose.x}, y={pose.y}, theta={pose.theta}, Publishing cmd: linear.x={cmd.linear.x}, angular.z={cmd.angular.z}")


        

def main(args=None):
    rclpy.init(args=args)
    node = TurtleNode()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
