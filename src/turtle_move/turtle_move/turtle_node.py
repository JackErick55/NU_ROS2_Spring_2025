#!/usr/bin/env python3
import rclpy
from rclpy.node import Node

class TurtleNode(Node):

    def __init__(self):
        super().__init__("turtle_node")
        self.get_logger().info("Hello from Turtle Node")

def main(args=None):
    rclpy.init(args=args)
    node = TurtleNode()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()