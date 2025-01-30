#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist

class TurtleNode(Node):

    def __init__(self):
        super().__init__("turtle_node")
        self.pub_ = self.create_publisher(Twist, "/turtle1/cmd_vel", 10)
        self.timer_ = self.create_timer(0.1, self.send_velocity_command)
        self.get_logger().info("This is the turtle_node")

    def send_velocity_command(self):
        msg = Twist
        msg.linear.x = 0.1
        self.pub_.publish(msg)

def main(args=None):
    rclpy.init(args=args)
    node = TurtleNode()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
