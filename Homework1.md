# Homework1

waypoint.py

```python
#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from std_srvs.srv import Empty
from turtle_interfaces.srv import Waypoints
from geometry_msgs.msg import Point
from turtlesim.srv import TeleportAbsolute, Spawn, Kill
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

        # Create a timer to call the function at the specified rate
        self.timer = self.create_timer(self.timer_period, self.issue_command)

        # Create the toggle service
        self.toggle_service = self.create_service(Empty, 'toggle', self.toggle_callback)

        # Create the load service
        self.load_service = self.create_service(Waypoints, 'load', self.load_callback)

        # Create clients for teleport and kill services
        self.teleport_client = self.create_client(TeleportAbsolute, '/turtle1/teleport_absolute')
        self.kill_client = self.create_client(Kill, '/kill')
        self.spawn_client = self.create_client(Spawn, '/spawn')

    def issue_command(self):
        """Executed at a fixed frequency. Logs DEBUG messages only when moving."""
        if self.moving:
            self.get_logger().debug("Issuing Command!")

    def toggle_callback(self, request, response):
        """Toggles between MOVING and STOPPED states."""
        self.moving = not self.moving  # Flip the state

        if self.moving:
            self.get_logger().info("Starting.")
        else:
            self.get_logger().info("Stopping.")

        return response

    def load_callback(self, request, response):
        """Handles the load service: Kills, spawns, draws Xs, places turtle at first waypoint, and computes distance."""
        self.get_logger().info("Loading waypoints...")

        # Kill and respawn the turtle (reset the environment)
        self.call_reset_service()

        # Draw X and compute distance
        total_distance = self.process_waypoints(request.waypoints)

        # Place the turtle at the first waypoint
        if request.waypoints:
            first_wp = request.waypoints[0]
            self.teleport_turtle(first_wp.x, first_wp.y)

        # Stop the turtle
        self.moving = False
        self.get_logger().info(f"Waypoints loaded. Total cycle distance: {total_distance:.2f}")

        response.distance = total_distance
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

    def teleport_turtle(self, x, y):
        """Teleports the turtle to a given position."""
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

        self.teleport_turtle(x - diagonal_offset, y - diagonal_offset)
        self.teleport_turtle(x + diagonal_offset, y + diagonal_offset)

        self.teleport_turtle(x - diagonal_offset, y + diagonal_offset)
        self.teleport_turtle(x + diagonal_offset, y - diagonal_offset)

def main(args=None):
    rclpy.init(args=args)
    node = WaypointNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
```

package.xml

```xml
<?xml version="1.0"?>
<?xml-model href="http://download.ros.org/schema/package_format3.xsd" schematypens="http://www.w3.org/2001/XMLSchema"?>
<package format="3">
  <name>turtle_control</name>
  <version>0.0.0</version>
  <description>Controls a turtle in turtlesim using waypoints</description>
  <maintainer email="jackerick0212@gmail.com">jack</maintainer>
  <license>Apache-2.0</license>

  <depend>rclpy</depend>
  <depend>std_srvs</depend>
  <depend>turtlesim</depend>
  <depend>geometry_msgs</depend>
  <depend>turtle_interfaces</depend>

  <test_depend>ament_copyright</test_depend>
  <test_depend>ament_flake8</test_depend>
  <test_depend>ament_pep257</test_depend>
  <test_depend>python3-pytest</test_depend>

  <export>
    <build_type>ament_python</build_type>
  </export>
</package>
```

setup.py

```python
from setuptools import find_packages, setup

package_name = 'turtle_control'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools', 'rclpy', 'std_srvs', 'turtle_interfaces', 'geometry_msgs'],
    zip_safe=True,
    maintainer='jack',
    maintainer_email='<jackerick0212@gmail.com>',
    description='Controls a turtle in turtlesim using waypoints',
    license='Apache-2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'waypoint = turtle_control.waypoint:main',
        ],
    },
)
```

launch
|-- waypoints.launch.xml

```bash
<launch>
    <node pkg="turtlesim" exec="turtlesim_node" name="sim">
        <param name="background_r" value="255"/>
        <param name="background_g" value="255"/>
        <param name="background_b" value="255"/>
    </node>

    <node pkg="turtle_control" exec="waypoint" name="waypoint">
        <param name="frequency" value="100"/>
        <rosparam file="$(find-pkg-share turtle_control)/config/waypoints.yaml"/>
    </node>
</launch>
```

## turtle_interfaces

CMakeLists.txt

```txt
cmake_minimum_required(VERSION 3.8)
project(turtle_interfaces)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(rosidl_default_generators REQUIRED)

rosidl_generate_interfaces(${PROJECT_NAME}
  "srv/Waypoints.srv"
  DEPENDENCIES geometry_msgs
)
# uncomment the following section in order to fill in
# further dependencies manually.
# find_package(<dependency> REQUIRED)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # comment the line when a copyright and license is added to all source files
  set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # comment the line when this package is in a git repo and when
  # a copyright and license is added to all source files
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
```

package.xml

```xml
<?xml version="1.0"?>
<package format="3">
  <name>turtle_interfaces</name>
  <version>0.0.0</version>
  <description>Interfaces for turtle control</description>
  <maintainer email="jackerick0212@gmail.com">jack</maintainer>
  <license>Apache-2.0</license>

  <buildtool_depend>ament_cmake</buildtool_depend>
  <depend>geometry_msgs</depend>
  <depend>std_msgs</depend>
  <depend>rosidl_default_generators</depend>
  <member_of_group>rosidl_interface_packages</member_of_group>

  <test_depend>ament_lint_auto</test_depend>
  <test_depend>ament_lint_common</test_depend>

  <export>
    <build_type>ament_cmake</build_type>
  </export>
</package>
```

srv
|-- Waypoints.srv

```srv
geometry_msgs/Point[] waypoints
---

float64 distance
```
