#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
from turtlesim.msg import Pose 

rate_hz = 10
time_period = 1 / rate_hz

class TurtleNode(Node):

    def __init__(self):
        super().__init__("turtle_node")
        self.pub_ = self.create_publisher(
            Twist, "/turtle1/cmd_vel", 10)
        self.get_logger().info("This is turtle_node")
        self.sub_ = self.create_subscription(
            Pose, "/turtle1/pose", self.pose_callback, 10)

    def pose_callback(self, pose: Pose):
        cmd = Twist()
        if pose.x > 7.0 or pose.x < 2.0 or pose.y > 7.0 or pose.y < 2.0:
            cmd.linear.x = 1.0
            cmd.angular.z = 0.9
        else:
            cmd.linear.x = 5.0
            cmd.angular.z = 0.0
        self.pub_.publish(cmd)
        self.get_logger().info(
            f"Received pose: x={pose.x}, y={pose.y}, theta={pose.theta}")


def main(args=None):
    rclpy.init(args=args)
    node = TurtleNode()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
