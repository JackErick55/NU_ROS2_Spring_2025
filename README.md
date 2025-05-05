# MEE ROS2 Humble Course with Python

## Table of Contents

### **Week1 - Introduction and Setup**

- **Class 1 - Course Overview**
  - What's ROS2
  - Where we are going **(Update at the end of the Semester)**
  - What you'll need

- **Class 2 - Setup OS, IDE, Terminator, ROS2, and Python**
  - Virtual Machine with Ubuntu 24.04
  - Install VS Code and Extentsions
  - Install Terminator
  - Install ROS2 Humble

- **Homework 1**
  - Watch video on Python and follow along
    - [Functions](https://www.youtube.com/watch?v=89cGQjB5R4M)
    - [Obeject oriented Programming Classes](https://www.youtube.com/watch?v=q2SGW2VgwAM)

### **Week 2 - Crash Course in Python Functions and Classes**

- **Class 3 - Basic Bash Commands and Understanding of Python Functions and Classes**
  - Basic Bash Commands
  - Terminator
  - What is Python? / Why do we use Python?
  - Explain Python Functions
  - Explain Python Classes  

- **Class 4 - Terminator and Python Lab**
  - Overview of last class
  - Function Exercises
  - Class Exercises
  - Outline Homework Assignment
    - Time for Questions

- **Homework 2**:
  - Work in Terminator
    - git clone F1Tenth repo
    - Work though F1Tenth Github
  - **Python Functions and Classes**

### **Week 3 - Understanding ROS2 Setup and Structure**

- **Class 5 - Overview of ROS2 Humble**
  - Explain File structure
  - Explain and Setup ...
    - Workspace
    - Packages
    - Nodes

- **Class 6 - Create Your Own Node**
  - **Explain Git and Github**
  - Overview of `my_python_pkg`
  - Outline Homework Assignment
    - Time for Questions

- **Homework 3**:
  - Create a Node and fill in comments

### **Week 4 - ROS2 Comunication using Interfaces**

- **Class 7 - Brief Overview of ROS2 Interfaces**
  - 3 Communications Types
     1. Topics
        - `ros2 run demo_nodes_cpp talker`
        - `ros2 run demo_nodes_cpp listener`
        - `rqt_graph`
          - include pic
     2. Services
        - `ros2 run demo_nodes_cpp add_two_ints_server`
        - `ros2 run demo_nodes_cpp add_two_ints_client`
     3. Actions
        - Short description on when to use but we won't go into depth on this

- **Class 8 - Create Basic Publisher and Subscriber**
  - Overview of Topics
  - Analogy of Publishers and Subscribers
  - How to Write a Publisher
    - What infomation is needed
      - How to find the info you need
    - How to structure the code in the node
  - How to Write a Subscriber
    - What infomation is needed
      - How to find the info you need
    - How to structure the code in the node

- **Homework 4**:
  - Build a Publish Package
  - Build a Subscriber Package
  - Setup all the Dependencies
  - Use `ros2 run` to execute the code

### **Week 5 - Publisher and Subcriber Lab and Simulation Setup**

- **Class 9 - Publisher and Subcriber Lab**
  - Quiz over ROS2 file structure
  - Review Publisher and Subscriber
  - Introduce PubSub Project
  - Give time for questions

- **Class 10 - Simulation Setup**
  - Setting Up Docker
  - Setting up Simulation
  - Running Keyboard Teleop to control Car in Sim

### **Week 6 - Understanding of How to Operate Car in Sim**

- **Class 11 - Create Drive Forward Package**
  - Understand how to build ROS2 package in Docker

- **Clas 12 - Lab Day for Drive Forward**

### **Week 7 - Emergency Stopping**

### **Week 8 - PID Wall Follower**
  
## Week 1  - Introduction and Setup

## Class 1 - Course Overview (Date)

- What's ROS2
- Where we are going
- What you'll need

### What's ROS2

**ROS 2** (Robot Operating System 2) is an open-source framework for developing robotic applications. It is the successor to ROS 1 and is designed to provide better performance, flexibility, and scalability, especially for real-time and distributed systems.

At its core, ROS 2 provides a set of software libraries and tools that facilitate communication between different components of a robotic system. It follows a publish-subscribe architecture using a middleware called Data Distribution Service (DDS), which allows nodes (individual processes) to communicate efficiently over a network in real time.

**Key Features of ROS 2:**

- **Scalability:** Supports small embedded systems to large distributed robots.
- **Real-time Capability:** Improves performance for time-sensitive applications.
- **Cross-Platform Support:** Works on Linux, Windows, and macOS.
- **Modular Design:** Allows developers to use only the necessary components.

ROS 2 is widely used in autonomous vehicles, industrial automation, drones, and research. It helps developers focus on higher-level robotics functionality by handling low-level communication, control, and data management.

### Where we are going

We will start with setting up the Ubuntu 24.04 OS and other softwares such as ROS2, VS Code, and Terminator. We are then going to go through and understand how to use each software.

We will start with a crash course in the python necessary to understand functiuons and classes used in ROS2 Nodes. Then we will move into how ROS2 works, what commands you need to tourbleshoot, and what we need to run packages.

After gaining this understanding about ROS2 we can move into our fist publisher and subscrider activity. This activity is a crucial element of understanding how the racecar and simulator operate.

The with will transition into the F1tenth simulator, working towards on car testing. To do this we focus on safety with Automatic Emergency Braking and a PID wall follower algorithm. These algorithms with directly transition to the racecar.

### What you'll need

- Ubuntu 24.04 by (dual booting or vurtual machine)
- ROS2 Humble
- Terminator
- VS code
- A Built Car

## Class 2 - Setup OS, IDE, Terminator, ROS2, and Python (Date)

- Ubuntu 24.04
- Install VS Code and Extentsions
- Install Terminator
- Install ROS2 Humble

### Setup Virtual Machine with Ubuntu 24.04

### Install VS Code and Extentsions

To download and install Visual Studio Code via the command line on Ubuntu 24.04, follow these steps:

1. Update Packages

    ``` bash
    sudo apt update
    sudo apt upgrade
    ```

2. Install Visual Studio Code

    ```bash
    sudo snap install code --classic
    ```

Now, you can launch VS Code from the command line using: `code`

**Extensions**:
There are several extentions that you will want to install in VS code. You can go to the left side bar menu and go to the `Extensions Tab`.

Once there install

- **Markdown**

  ![alt text](<README_Pics/Screenshot from 2025-03-28 12-00-01.png>)

- **ROS**

  ![alt text](<README_Pics/Screenshot from 2025-03-28 11-39-09.png>)
  
- **Python**

  ![alt text](<README_Pics/Screenshot from 2025-03-28 11-41-29.png>)

- **Python Debuger**

  ![alt text](<README_Pics/Screenshot from 2025-03-28 11-42-18.png>)

- **Pylance**

  ![alt text](<README_Pics/Screenshot from 2025-03-28 12-03-58.png>)

- **C/C++**

  ![alt text](<README_Pics/Screenshot from 2025-03-28 12-01-02.png>)

- **CMake**

  ![alt text](<README_Pics/Screenshot from 2025-03-28 12-01-34.png>)

- **CMake Tools**

  ![alt text](<README_Pics/Screenshot from 2025-03-28 12-02-35.png>)

### Install ROS2 Humble

To download ROS2 Humble go to [ROS2 Website](https://docs.ros.org/en/humble/Installation/Alternatives/Ubuntu-Development-Setup.html)

### Install Terminator

``` bash
sudo apt install terminator
```

### Using Terminator

Terminator is a powerful terminal emulator that allows you to split windows and work efficiently with multiple terminals at once.

#### Basic Terminator Commands

- Split horizontally: `Ctrl` + `Shift` + `O`
- Split vertically: `Ctrl` + `Shift` + `E`
- Navigate between terminals: `Ctrl` + `Shift` + `Arrow Key`
- Close a terminal pane: `Ctrl` + `Shift` + `W`
- Open a new tab: `Ctrl` + `Shift` + `T`

## Homework 1

- Watch video on Python and follow along. Not expected to fully understand both topics as they will be explained further in the next class.
  - [Functions](https://www.youtube.com/watch?v=89cGQjB5R4M)
  - [Obeject oriented Programming Classes](https://www.youtube.com/watch?v=q2SGW2VgwAM)

## Week 2 - Crash Course in Python Functions and Classes

## Class 3 - Basic Bash Commands and Understanding of Python Functions and Classes

- What is a Bash Session
- Basic Bash Commands
- Terminator
- What is Python? / Why do we use Python?
- Explain Python Functions
- Explain Python Classes  

### What is a Bash Session

Imagine you’re using your computer, but instead of clicking on icons and using a mouse, you’re typing commands to get things done. That’s basically what a Bash session is—it's a way to interact with your computer using text-based commands.

**Breakdown**:

1. Bash (short for Bourne Again Shell) is a command-line interface (CLI) that lets you control your computer by typing instructions instead of using a graphical interface.

2. A session is just the period of time when you have Bash open and are using it to run commands.

**What happens in a Ubuntu Bash session?**

- You open a terminal (a black window with text).

- You type in commands to navigate files, install programs, or run scripts.

- The system responds with outputs (e.g., lists files, confirms installations, or shows errors).

- You can use Bash to automate tasks by writing scripts.

**Why does this matter?**
If you're studying robotics, computer science, IT, or even engineering, learning Bash can help you work efficiently with servers, automate tasks, and understand how operating systems work.

### Basic Bash Commands

Bash (Bourne Again Shell) is a command-line interpreter used in most Linux distributions, including Ubuntu 24.04. Below are some essential Bash commands that will help you navigate and manage your ROS2 development environment.

#### Navigating the File System and Understanding Files/Directroy Management

> **Note:** the `tab` key can be used to auto complete a command, directory name, or file name.

### 1. `ls` - List files and directories in the current directory

```bash
ls
```

> **Note:** Another helpful list command for the terminal that is not used as ofter is `ls -a`. Which list all of the files in the directroy even the hidden files.

### 2. `mkdir <directory-name>` - Create a new directory (Later this is also how you will create a workspace for ROS)

```bash
mkdir ros2_ws
```

### 3. `cd <directory>` - `cd` stands for change directory (Now you can enter the directory you just created)

```bash
cd ros2_ws
```

### 4. `cd ..` - Move back one directory level (In this case it will take you back to the home directory)

```bash
cd ..
```

### 5. Now go back into the `ros2_ws` by using

```bash
cd ros2_ws
```

### 6. `touch <file-name>` - Create an empty file (This will create an example.py file)

```bash
touch example.py
```

### 7. `chmod +x <file-name>` - Make file executable (This will allow the example.py file to be executable)

```bash
chmod +x example.py
```

### 8. Writing the `example.py` file

- Use a text editor to write the `example.py` file by using the following code.

    ```bash
    gedit example.py
    ```

- Inside of the gedit text editor write the following code. Then save and exit.

    ```python
    #!/usr/bin/env python3

    print("Hello and welcome to the example.py file")
    ```

**Explanation:**

- `#!/usr/bin/env python3` - Shebang Line Explanation

    This line is called a shebang, and it tells the system how to run the script. Here's what it does:

  - `#!` → This is the shebang syntax. It must be the very first line of the file.

  - `/usr/bin/env` → This is a utility that locates and runs the correct version of a program based on your environment. It's more flexible than hardcoding the path to Python.

  - `python3` → This tells env to look for the python3 interpreter in your system’s PATH.

- `print("Hello and welcome to the example.py file")`

    This line is a **Python statement** that outputs text to the terminal. Let’s break it down:

  - `print(...)` → This is a built-in Python function that displays whatever is inside the parentheses to the terminal.

  - `"Hello and welcome to the example.py file"` → This is a string, a sequence of characters enclosed in quotation marks. It’s the message you want to display.

### 9. Execute the `example.py` file

- When the following command is executed in the terminal the script should return `Hello and welcome to the example.py file`.

    ```bash
    ./example.py
    ```

### 10.  Now we will move the `examlpe.py` to the Home directory

- `mv <source> <destination>` - Move or rename a file/directory

    ```bash
    mv example.py ~/example.py
    ```

    **Note:**

    `~/`  The ~ (tilde) symbol is a shortcut for your home directory.

    When you use ~/ in a command, it expands to something like /home/your-username/ on most Linux systems.

    **Example:**
    If your username is f1tenth, then:

    ```bash
    mv example.py ~/example.py
    ```

    is the same as:

    ```bash
    mv example.py /home/f1tenth/example.py
    ```

### 11. Move to the Home directory

- `cd` - Typing `cd` only will take you back to Home directory

    ```bash
    cd
    ```

- `ls` - Will allow you to see the `example.py` in the Home directory.

### 12. Next remove `examlpe.py` file form the Home directory

- `rm <file-name>` - Delete a File

    ```bash
    rm example.py
    ```

### 13. Remove `ros2_ws` directory

- `rm -rf <directory-name>` - Delete a directory and its contents

    ```bash
    rm -rf ros2_ws
    ```

---

### Networking and System Information

- `ifconfig` or `ip a` - Show network interfaces and IP addresses

    ```bash
    ifconfig
    ```

- `ping <website>` - Check internet connectivity

    ```bash
    ping google.com
    ```

    **Note:**
    To use these tools you may have to install the net-tools package by running the following command.

    ```bash
    sudo apt install net-tools
    ```

---

### What is Python? / Why do we use Python?

In a robotics class, Python is a crucial programming language because of its simplicity, versatility, and powerful libraries for automation, AI, and hardware control. Let’s break down the key concepts:

Python is a high-level, interpreted programming language known for its readability and ease of use. It is widely used in robotics due to:

- **Simplicity** – Easy to write and understand, making it great for beginners.

- **Large Libraries** – Offers libraries like numpy for math, opencv for computer vision, and ROS (Robot Operating System) for robot programming.

- **Cross-Platform Compatibility** – Works on different operating systems (Windows, macOS, Linux).

- **Integration** – Can communicate with hardware, microcontrollers, and AI models efficiently.

### Explain Python Functions

A function in Python is a block of reusable code that performs a specific task. Functions help make programs modular and efficient.

**Example of a Python function**:

```python
def move_forward(speed):
    print(f"Moving forward at {speed} m/s")

move_forward(1.5)
```

- `def move_forward(speed)`: – Defines a function named move_forward that takes an argument speed.

- `print(f"Moving forward at {speed} m/s")` – Displays the speed at which the robot moves.

  - The `f` before the string tells Python to use an **f-string**, short for formatted string literal.

  - F-strings allow you to embed variables or expressions directly inside a string by placing the variable or expression in curly braces {}.

- `move_forward(1.5)` – Calls the function with a speed of 1.5 m/s.

### Explain Python Classes

A class is a blueprint for creating objects. In robotics, classes help structure code by grouping related properties and functions together.

**Example of a Python class**:

```python
class Robot:
    def __init__(self, name, speed):
        self.name = name
        self.speed = speed

    def move(self):
        print(f"{self.name} is moving at {self.speed} m/s")

# Creating an object
robot1 = Robot("RoboX", 2.0)
robot1.move()
```

- `class Robot`: – Defines a class named Robot.

- `__init__(self, name, speed)`: – A constructor that initializes name and speed when an object is created.

- `move(self)`: – A method that prints the robot's movement.

- `robot1 = Robot("RoboX", 2.0)` – Creates a robot named "RoboX" moving at 2.0 m/s.

- `robot1.move()` – Calls the move method to print movement details.

**How Functions and Classes Applies to Robotics**:

Functions help simplify repetitive tasks like moving a robot forward or turning.

Classes allow us to create structured programs where robots have properties (like speed) and behaviors (like movement).

Python’s simplicity makes it perfect for controlling robotic arms, sensors, and AI-driven automation.

## NEED to add Git integration and GitHub Lecture Notes

### Have Nick add his lecture notes here

## Class 4 - Terminator and Python Lab

- Overview of last class
- Function Exercise
- Class Exercise
- Outline Homework Assignment
  - Time for Questions

### Overview of last class - Class 3

The previous class introduces students to essential **Bash commands** for navigating and managing a Linux-based system, particularly in a robotics development environment. It also covers **Python fundamentals**, including **functions** and **classes**, which are crucial for writing modular and structured code for robotics applications.

**Key Topics Covered in Class 3**:

- Bash Session & Commands

  - Understanding the Bash shell and its role in system interaction.

  - Basic commands for file navigation, management, and execution.

  - Using Terminator for multitasking in a terminal environment.

- Introduction to Python:

- Why Python is widely used in robotics.

- Writing and using functions for reusability and efficiency.

- Understanding object-oriented programming through classes to model robotic behavior.

### Function Exercise: Building a Simple Calculator

**Objective:**

Students will create a Python function that acts as a basic calculator. The function should take three arguments: two numbers and an operation (add, subtract, multiply, or divide). The function should return the result of the operation.

**Instructions:**

1. Define a function called `calculator` that takes three parameters: `num1`, `num2`, and `operation`.

2. Based on the `operation` argument, perform one of the following calculations:
   - Addition (`+`)

   - Subtraction (`-`)

   - Multiplication (`*`)

   - Division (`/`)

3. If the user enters an invalid operation, return an error message.

4. Ensure division by zero is handled correctly.

5. Test the function with different inputs.

**Example Usage:**

```python
print(calculator(10, 5, "add"))       # Output: 15
print(calculator(10, 5, "subtract"))  # Output: 5
print(calculator(10, 5, "multiply"))  # Output: 50
print(calculator(10, 5, "divide"))    # Output: 2.0
print(calculator(10, 0, "divide"))    # Output: "Error: Division by zero is not allowed."
print(calculator(10, 5, "modulus"))   # Output: "Error: Invalid operation."
```

**My solution:**

```python
#!/usr/bin/env python3

num1 = 20
num2 = 5

def calculator(num1, num2, operation):
    if operation == "add":
        return num1 + num2
    elif operation == "subtract":
        return num1 - num2
    elif operation == "multiply":
        return num1 * num2
    elif operation == "divide":
        if num2 == 0:
            return "Error: Division by zero is not allowed."
        return num1 / num2
    else:
        return "Error: Invalid operation."
    
print("This is a calculator")
print(calculator(num1, num2, "add"))       # Output: 25
print(calculator(num1, num2, "subtract"))  # Output: 15
print(calculator(num1, num2, "multiply"))  # Output: 10
print(calculator(num1, num2, "divide"))    # Output: 4.0
```

### Class Exercise: Building a Library Management System (Using Classes)

**Objective:**

Students will create a class-based system to manage books in a library. The system should allow adding books, removing books, and displaying available books.

**Instructions:**

1. Create a class called Library with the following attributes:
    - books: A list to store book names.

2. Implement the following methods:
    - add_book(book_name): Adds a book to the library.
    - remove_book(book_name): Removes a book from the library if it exists.
    - display_books(): Prints all available books in the library.

3. Create an instance of the Library class and test adding, removing, and displaying books.

**Example Usage:**

```python
my_library = Library()
my_library.add_book("1984")
# Output: "1984" has been added to the library.
my_library.add_book("Brave New World")
# Output: "Brave New World" has been added to the library.
my_library.display_books()
# Output: Available books: ['1984', 'Brave New World']

my_library.remove_book("1984")
my_library.display_books()
# Output: Available books: ['Brave New World']

my_library.remove_book("The Catcher in the Rye")
# Output: "Error: Book not found in library."
```

My Solution:

```python
#!/usr/bin/env python3

class Library:
    def __init__(self):
        self.books = []

    def add_book(self, book_name):
        self.books.append(book_name)
        print(f'"{book_name}" has been added to the library.')

    def remove_book(self, book_name):
        if book_name in self.books:
            self.books.remove(book_name)
            print(f'"{book_name}" has been removed from the library.')
        else:
            print("Error: Book not found in library.")

    def display_books(self):
        if self.books:
            print("Available books:", self.books)
        else:
            print("The library is currently empty.")

# Testing the Library Class
my_library = Library()
my_library.add_book("1984")
my_library.add_book("Brave New World")
my_library.display_books()
my_library.remove_book("1984")
my_library.display_books()
my_library.remove_book("The Catcher in the Rye")
```

## Outline Homework Assignment - Homework 2

### Objective

In this homework, you'll clone the F1Tenth GitHub repository and explore key directories within the f1tenth_system. You'll also learn how to navigate directories, list files, and print file contents using Bash commands. The goal is to familiarize yourself with using the terminal in a ROS2-based environment.

### Part 1: Cloning the F1Tenth Repository and Setting up the F1Tenth Workspace

First, we’ll create a ROS 2 workspace for the F1Tenth driver stack with the following commands. We’ll be using `f1tenth_ws` as the name of our workspace going forward in `Homework 2`.

```bash
cd $HOME
mkdir -p f1tenth_ws/src
```

Then, make this into a ROS 2 workspace by running:

```bash
cd f1tenth_ws
colcon build
```

Next, we’ll clone the repo into the src directory of our workspace:

```bash
cd src
git clone https://github.com/f1tenth/f1tenth_system.git
```

Then use the following commands to use the humble-devel branch from the F1tenth repo

```bash
cd f1tenth_system
git checkout humble-devel
```

**Then due to a dependency error with the `ackermann_mux` directroy you will need to edit the .gitmodules. You can do this by entering the `~/f1tenth_ws/src/f1tenth_system$` directory and running the following commands.**

This command ensures that the .gitmodule is in the correct directory. As you should see `.gitmodules` when this command is executed.

```bash
ls -a
```

Next you will edit `.gitmodules` by running the following command.

```bash
nano .gitmodules 
```

Then, once in the nano text editor enter the following code. The reason that you are changing the `ackermann-mux` **branch** to `foxy-devel` is because this is the latest ROS2 branch avalible on GitHub.

To save and exit in nano type `ctrl` + `x` to exit and then `y` to say yes to saving the changes.

```bash
[submodule "vesc"]
    path = vesc
    url = https://github.com/f1tenth/vesc.git
    branch = humble
[submodule "ackermann_mux"]
    path = ackermann_mux
    url = https://github.com/f1tenth/ackermann_mux.git
    branch = foxy-devel
[submodule "teleop_tools"]
    path = teleop_tools
    url = https://github.com/f1tenth/teleop_tools.git
    branch = foxy-devel
```

Then we’ll update the git submodules and pull in all the necessary packages

```bash
git submodule update --init --force --remote
```

After git finishes cloning, we can now install all dependencies for our packages with rosdep:

```bash
cd $HOME/f1tenth_ws
source /opt/ros/humble/setup.bash
rosdep update
rosdep install --from-paths src -i -y
```

Lastly, after dependencies are installed, we can build our workspace again with the driver stack pacakges:

```bash
colcon build
```

You can find more details on how the drivers are set up in the README of the f1tenth_system repo.
Install colcon If you haven't installed colcon yet, follow the step below:

#### Install Colcon

```bash
sudo apt install python3-colcon-common-extensions
```

### Possible Error and Fix

If the following error occurs

``` bash
CMake Error at /opt/ros/humble/share/io_context/cmake/io_context-extras.cmake:17 (find_package):
  By not providing "Findasio_cmake_module.cmake" in CMAKE_MODULE_PATH this
  project has asked CMake to find a package configuration file provided by
  "asio_cmake_module", but CMake did not find one.

  Could not find a package configuration file provided by "asio_cmake_module"
  with any of the following names:

    asio_cmake_moduleConfig.cmake
    asio_cmake_module-config.cmake

  Add the installation prefix of "asio_cmake_module" to CMAKE_PREFIX_PATH or
  set "asio_cmake_module_DIR" to a directory containing one of the above
  files.  If "asio_cmake_module" provides a separate development package or
  SDK, be sure it has been installed.
Call Stack (most recent call first):
  /opt/ros/humble/share/io_context/cmake/io_contextConfig.cmake:41 (include)
  /opt/ros/humble/share/serial_driver/cmake/ament_cmake_export_dependencies-extras.cmake:21 (find_package)
  /opt/ros/humble/share/serial_driver/cmake/serial_driverConfig.cmake:41 (include)
  /opt/ros/humble/share/ament_cmake_auto/cmake/ament_auto_find_build_dependencies.cmake:67 (find_package)
  CMakeLists.txt:14 (ament_auto_find_build_dependencies)
```

Use this command:

```bash
sudo apt update && sudo apt install ros-humble-asio-cmake-module
```

**There will be several warnings please use the following commands to midigate these warnings.**

Code format: `find . -type f -exec sed -i 's/old/new/g' {} \;`

```bash
find . -type f -exec sed -i 's/script-dir/script_dir/g' {} \;
find . -type f -exec sed -i 's/install-script/install_script/g' {} \;
```

### Part 2: Exploring Key Directories

- **Question 1**: Navigate to the ackermann_mux directory inside f1tenth_system.

- **Question 2**: Write a brief description of each key directory in f1tenth_system:

  - `ackermann_mux`

  - `f1tenth_stack`

  - `teleop_tools`

  - `VESC`

- **Deliverable**: Provide photographic proof of each directories contents.

#### Part 3: Listing and Printing Files

- **Question 3**: Use the `ls` command to list the files inside the `ackermann_mux` directory.

- **Question 4**: Use the `cat` command to print the contents of specific files in the directories:

  - `ackermann_mux/config.yaml`

  - `f1tenth_stack/script.py`

  - `teleop_tools/launch/teleop.launch`

  - `VESC/config/vesc_config.yaml`

- **Deliverable**: Provide photographic proof of the output for each printed file.

#### Submission Instructions

- Provide answers to each question.

- Attach photographic proof where requested.

- Submit the document as a PDF or markdown file.

Due Date: [Insert Due Date Here]

## Week 3 - Understanding ROS2 Setup and Structure

## Class 5 - Overview of ROS2 Humble for Python**
  
- Explain File structure
- Explain and Setup ...
  - Workspace
  - Packages
  - Nodes

### Topics

1. Sourcing ROS2 Globally
2. Setting up and Sourcing a ROS2 workspace with bashrc
3. Understanding the ROS2 file structure
4. Creating and navigating a ROS2 package
5. Where to Create Nodes in a Python Package
6. Building a ROS2 package with colcon build
7. Running nodes with ROS2 run
8. Important ROS2 Commands

### Simplified Overview of ROS2

To give a simplified overview of how ROS2 works:

- First, you have to **source** the ROS2 globally.

- Next you have to create a **workspace**, which is where all the files for **ROS2** are kept.

- Then you will need to **source** this particular **workspace**.

- Inside your **workspace**, there will be **four** directories. The one that we are most concerned with is the **`src/`** directory.

- In the **`src/`** directory, all your **packages** will be built.

- A **package** is a group of directories that allows you to create **Nodes**.

- **Nodes** are **small programs** that perform tasks and can talk to each other to share information.

### 1. Sourcing ROS2 Globally

Everytime you open up a **new bash session** (terminal window) you have to source ROS2 globally if you want to use ROS2. To source ROS2 globally you have to run the following command:

```bash
source /opt/ros/humble/setup.bash
```

### 2. Setting Up a ROS2 Workspace

### 2.1 Creating a workspace

Next before we create a ROS2 package, we need to set up a workspace. A ROS2 workspace is just a directory where we store our ROS2 packages.

Run the following commands to create a workspace:

```bash
mkdir -p ~/ros2_ws/src
cd ~/ros2_ws
```

What does this do?

- `mkdir -p ~/ros2_ws/src` → Creates a workspace folder (ros2_ws) with a src/ directory inside it.

  - `-p` — Parent Option in `mkdir`

    - The `-p` flag stands for "parents".
    - It creates the entire directory path, including any parent directories that don’t already exist.
    - It also prevents errors if the directories already exist.

- `cd ~/ros2_ws` → Moves into the workspace directory.

### 2.2 Build the Empty Workspace

Once the workspace is created, use `colcon build` to initialize it. **Ensure you are in the ROS2 workspace directory.**

```bash
colcon build
```

This will create necessary directories such as build/, install/, and log/ in `ros2_ws`.

If the `colcon build` command fails it could be becasue you forgot to install the colcon build dependacies when installing `ROS` use the following command to install the necesary dependencies.

```bash
sudo apt install python3-colcon-common-extensions
```

### 2.3 Source ROS2 workspace

Even though you have source the **Globally** source ROS in for the Ubuntu machine now you have to source the particular workspace that you have just created to let ROS know where you are trying call packages from. You source the workspace be running the following command:

```bash
source ~/ros2_ws/install/setup.bash
```

**Breakdown**:

`source`: Runs a script in the current shell.

`~/ros2_ws/install/setup.bash`

- `~` (tilde) represents the home directory of the current user.
- `ros2_ws` refers to the ROS 2 workspace, a directory where your ROS 2 packages and projects are built.
- `install/` is a subdirectory inside the workspace where built packages and dependencies are installed.
- `setup.bash` is a script that sets up environment variables needed to use ROS 2.

### 2.4 Setup `bashrc`

**What is bashrc:**

`bashrc` is a file that is ran everytime a terminal window is opened. This is important because adding to this will save you time from running the **ROS2** commands everytime you open up a new terminal.

**Here are some commands that you should add at the end of your bashrc file**:

```bash
source /opt/ros/humble/setup.bash
source ~/ros2_ws/install/setup.bash
source /usr/share/colcon_argcomplete/hook/colcon-argcomplete.bash
source /usr/share/colcon_cd/function/colcon_cd.sh
```

**Command Breakdown**:

1. `source /opt/ros/humble/setup.bash` **Required**
    - Loads the environment for the Humble distribution of ROS 2.
    - This makes ROS 2 core commands available.

2. `source ~/ros2_ws/install/setup.bash`**Required**
    - Sets up the environment for your custom ROS 2 workspace (ros2_ws).
    - Ensures that ROS 2 can find and use packages built in this workspace.
3. `source /usr/share/colcon_argcomplete/hook/colcon-argcomplete.bash` **Optional But Very Helpful**
    - Enables tab completion for colcon, the ROS 2 build system.
    - Helps auto-complete commands like colcon build and colcon test.
4. `source /usr/share/colcon_cd/function/colcon_cd.sh` **Optional But Very Helpful**
    - Adds the colcon_cd function, which allows quick navigation to ROS 2 package directories.
    - Example: colcon_cd my_package takes you directly to the package's folder.

### 3. Understanding the ROS2 File Structure

When working with ROS2, you will see the following structure inside a workspace:

```bash
ros2_ws/
│── src/        # Contains source code and packages
│── build/      # Stores temporary build files
│── install/    # Stores installed packages
│── log/        # Stores log files
```

`src/` → This is where you place all your packages.

`build/` → Used during compilation but not necessary for running the nodes.

`install/` → Stores the compiled packages, allowing them to be executed.

`log/` → Stores log files from previous runs.

**Tip**:

The **tree** command is a great tool for visualizing the structure of directories and files in a hierarchical format. It helps you quickly understand how files are organized, which is especially useful when working with complex projects like ROS 2 workspaces.

To install tree use the following command:

```bash
sudo apt install tree -y
```

The following command is used to list the file structure. **The last number is the number of file levels.**

```bash
tree -L 2
```

Shows only 2 levels deep in the directory tree.

### 4. Creating and Navigating a ROS2 Package

A package is where nodes are stored along with basic setup files for ROS2.

### 4.1 Create a Package

Navigate to the src/ directory and create a new package:

```bash
cd ~/ros2_ws/src
ros2 pkg create --build-type ament_python my_python_pkg
```

This creates a package named my_python_pkg with the following structure:

```bash
my_python_pkg/
│── package.xml  # Package metadata
│── setup.py     # Python package setup
│── my_python_pkg/  # Contains Python scripts
│   ├── __init__.py  # Required for Python module
│── resource/  # Used for package identification
│── setup.cfg  # Configuration file
```

### 5. Where to Create Nodes in a Python Package

A node is a srcipt (code) that communicates with other nodes in a ROS2 system.

Python nodes should be placed inside the `~/ros2_ws/src/my_python_pkg/my_python_pkg/` directory.

Create the python file with the following command:

```bash
touch my_python_node.py
```

After creating the python file you have to make this script executable by running:

```bash
chmod +x my_python_node.py
```

Verify the node is created and executable by going to the ~/ros2_ws/src/my_python_pkg/my_python_pkg/ directory and run:

```bash
ls
```

The `ls` command should return:

init.py <span style="color: green"> **my_python_node.py** </span>

**It is important that the `my_python_node.py` file name is green because this means that the file is created and executable.**

### 6. Building a ROS2 Package with colcon build

After creating the package, navigate back to the workspace root and build it:

```bash
cd ~/ros2_ws
colcon build --packages-select my_python_pkg
```

`colcon build` → builds everything in the workspace unless specified otherwise.

`--packages-select my_python_pkg` → This selects and builds only the `my_python_pkg`. This can be helpful if you don't want to spend the time to rebuild the whole workspace.

If there are no errors, the package will be built successfully.

**After running colcon build the workspace has to be sourced again. (*You have to do this everytime colcon build is executed.*)**

Run the following commands:

```bash
cd ~/ros2_ws
source install/setup.bash
```

### 7. Running Nodes with ros2 run

Using `ros2 run` in ROS 2 is important because it allows you to easily execute nodes (the individual programs that make up a robotic system) without needing to manually set up complex configurations.

**To execute a Python node, use the ros2 run command**:

**7.1 Create code to run in the `my_python_node.py`**

**7.2 Edit the `package.xml` file**

**7.3 Edit the `setup.py` file**

### 7.1 Create code to run in the `my_python_node.py`

```python
#!/usr/bin/env python3
import rclpy
from rclpy.node import Node

class MyNode(Node):

    def __init__(self):
        super().__init__("my_python_node")
        self.counter_ = 0
        self.create_timer(1.0, self.timer_callback)

    def timer_callback(self):
        self.get_logger().info("Hello from my_python_node")


def main(args=None):
    rclpy.init(args=args)
    node = MyNode()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
```

**Code Breakdown**:

#### 7.1.1 Shebang (`#!/usr/bin/env python3`)

```python
#!/usr/bin/env python3
```

- `#!/usr/bin/env python3` - Shebang Line Explanation

    This line is called a shebang, and it tells the system how to run the script. Here's what it does:

  - `#!` → This is the shebang syntax. It must be the very first line of the file.

  - `/usr/bin/env` → This is a utility that locates and runs the correct version of a program based on your environment. It's more flexible than hardcoding the path to Python.

  - `python3` → This tells env to look for the python3 interpreter in your system’s PATH.

#### 7.1.2 Importing Libraries

```python
import rclpy
from rclpy.node import Node
```

- `import rclpy`: This imports the ROS 2 library, which is needed to work with ROS 2 in Python.

- `from rclpy.node import Node`: This imports the Node class from the rclpy.node module.

#### 7.1.3 Creating a Node Class (`MyNode`)

```python
class MyNode(Node):
```

- `class MyNode(Node):`: This line defines a new class called `MyNode`. A class is like a blueprint for creating objects. In this case, the blueprint is for a ROS 2 node.

- `MyNode` inherits from the Node class, meaning it gets all the functionality of a normal ROS 2 node.

#### 7.1.4 Initializing the Node

```python
def __init__(self):
    super().__init__("my_python_node")
    self.counter_ = 0
    self.create_timer(1.0, self.timer_callback)
```

- `def __init__(self):`: This is the *initializer* or *constructor* of the class. It’s automatically called when a new object (node) is created.
- `super().__init__("my_python_node")`: This calls the parent class (`Node`) constructor to set up the basic functionality of the node and gives it the name `"my_python_node"`.
- `self.counter_ = 0`: This line creates a counter variable (`counter_`) and sets it to 0. It’s not being used yet, but it’s ready to be used.
- `self.create_timer(1.0, self.timer_callback)`: This line sets up a `timer` to call the function `timer_callback` every 1.0 seconds (1 second). It's like saying, "Hey, every second, do something."

#### 7.1.5 Timer Callback Function

```python
def timer_callback(self):
    self.get_logger().info("Hello from my_python_node")
```

- `def timer_callback(self):`: This function is called every time the timer triggers (every second, in this case).
- `self.get_logger().info("Hello from my_python_node")`: This line prints a message ("Hello from my_python_node") to the terminal. It's like the node is saying, "Hello!" every second.

#### 7.1.6 Main Function

```python
def main(args=None):
    rclpy.init(args=args)
    node = MyNode()
    rclpy.spin(node)
    rclpy.shutdown()
```

- `def main(args=None):`: This is the main function that will start everything.
- `rclpy.init(args=args)`: This initializes the ROS 2 system and gets it ready to work. It’s like setting up the workspace for the robot to start working.
- `node = MyNode()`: This creates an instance of the `MyNode` class, which means the node starts running.
- `rclpy.spin(node)`: This keeps the node running and listening for events. It’s like saying, "Let the node keep doing its work (printing 'Hello' every second)."
- `rclpy.shutdown()`: This shuts down the ROS 2 node when everything is done (when the program exits).

#### 7.1.7 Check if the Script is Being Run Directly

```python
if __name__ == '__main__':
    main()
```

- `if __name__ == '__main__':`: This checks if the script is being run directly (not imported into another script). If it's being run directly, it calls the main() function to start everything.

**Summary**:

- This script creates a ROS 2 node called "`my_python_node`".
- The node prints "**Hello from my_python_node**" every second.
- It keeps running until **you** stop it (use `crtl` + `c` to stop running node).

### 7.2 Edit the `package.xml` file

**Basic Outline**:

```xml
<?xml version="1.0"?>
<?xml-model href="http://download.ros.org/schema/package_format3.xsd" schematypens="http://www.w3.org/2001/XMLSchema"?>
<package format="3">
  <name>my_python_pkg1</name>
  <version>0.0.0</version>
  <description>TODO: Package description</description>
  <maintainer email="<jackerick0212@gmail.com>">jack</maintainer>
  <license>TODO: License declaration</license>

  <test_depend>ament_copyright</test_depend>
  <test_depend>ament_flake8</test_depend>
  <test_depend>ament_pep257</test_depend>
  <test_depend>python3-pytest</test_depend>

  <export>
    <build_type>ament_python</build_type>
  </export>
</package>
```

**Code Lines the Need Updated**:

- The description needs to be updated from **1** → **2** (This description must me the same for the `setup.py` file)

    1. ```xml
        <description>TODO: Package description</description>
        ```

    2. ```xml
        <description>my python package</description>
        ```

- The license needs to be updated from **1** → **2** (This license must me the same for the `setup.py` file)

    1. ```xml
       <license>TODO: License declaration</license>
       ```

    2. ```xml
       <license>Apache-2.0</license>
       ```

- The this dependency has to be added

    ```xml
    <depend>rclpy</depend>
    ```

**Example of package.xml**:

```xml
<?xml version="1.0"?>
<?xml-model href="http://download.ros.org/schema/package_format3.xsd" schematypens="http://www.w3.org/2001/XMLSchema"?>
<package format="3">
  <name>my_python_pkg</name>
  <version>0.0.0</version>
  <description>my python package</description>
  <maintainer email="<jackerick0212@gmail.com>">jack</maintainer>
  <license>Apache-2.0</license>

  <depend>rclpy</depend>

  <test_depend>ament_copyright</test_depend>
  <test_depend>ament_flake8</test_depend>
  <test_depend>ament_pep257</test_depend>
  <test_depend>python3-pytest</test_depend>

  <export>
    <build_type>ament_python</build_type>
  </export>
</package>
```

### 7.3 Edit the `setup.py` file

**Basic Outline**:

```python
from setuptools import find_packages, setup

package_name = 'my_python_pkg1'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='jack',
    maintainer_email='<jackerick0212@gmail.com>',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
        ],
    },
)
```

**Code Lines that Need Updated**:

- The description needs to be updated from **1** → **2**

    1. ```python
        description='TODO: Package description',
        ```

    2. ```python
        description='my python package',
        ```

- The license needs to be updated from **1** → **2**

    1. ```python
       license='TODO: License declaration',
       ```

    2. ```python
       license='Apache-2.0',
       ```

**Create an Executable Name**:

- **What is an Executable Name?** - An executable name refers to the name of a program or script that can be run directly from the command line. In ROS 2, executables are used to call out specific nodes.

- **How to Write an Executable** - In ROS 2, the entry_points section in the setup.py file (which is part of the package setup) is where you define the name of your executable and tell ROS 2 how to run it. This section links a script (like your Python file) to an executable name, which is then used to run that script.

- **The `entry_points` Section** - You define executables under the `entry_points` section in your `setup.py`. For ROS 2, we typically use `console_scripts` in this section.

- **Here’s how it works:**

    ```python
    entry_points={
        'console_scripts': [
            'executable_name = my_python_pkg.my_python_node:main',  # Define executable name
        ],
    },
    ```

    **Explanation**:
    1. `console_scripts`: This tells ROS 2 that you're defining executable programs that can be run from the command line.

    2. `'executable_name'`: This is the name of the executable. This is the name you’ll type in the terminal to run your program. For example, if you put 'executable_name', you can run it using:

        ```bash
        ros2 run my_python_pkg my_executable_name
        ```

    3. 'my_python_pkg.my_python_node:main': This part tells ROS 2 where to find the Python code that should be run when you execute the command:

        - `my_python_pkg`: The name of your package (this should match the name of the folder/package you created).
        - `my_python_node`: The name of the Python file (without .py) that contains the code for the executable.
        - `main`: The name of the function that will run when the executable is called. It's typically the `main()` function where the program starts.

    **Example of setup.py**:

    ```python
    package_name = 'my_python_pkg'

    setup(
        name=package_name,
        version='0.0.0',
        packages=find_packages(exclude=['test']),
        data_files=[
            ('share/ament_index/resource_index/packages',
                ['resource/' + package_name]),
            ('share/' + package_name, ['package.xml']),
        ],
        install_requires=['setuptools'],
        zip_safe=True,
        maintainer='jack',
        maintainer_email='<jackerick0212@gmail.com>',
        description='my python package',
        license='Apache-2.0',
        tests_require=['pytest'],
        entry_points={
            'console_scripts': [
                'executable_name = my_python_pkg.my_python_node:main'
            ],
        },
    )
    ```

### 7.4 Use `ros2 run`

Now that you have updated all of your files go to your `ros2_ws` and build all of your packages to update them. (Use the following commands)

```bash
cd ~/ros2_ws/
colcon build
```

After using colcon build don't forget to source your workspace

```bash
source install/setup.bash
```

Now you are able to use the `ros2 run` command. To do this use the following command.

```bash
ros2 run my_python_pkg executable_name
```

When you run this command you should see the following

```bash
~$ ros2 run my_python_pkg executable_name
[INFO] [1740518269.539740388] [my_python_node]: Hello from my_python_node
[INFO] [1740518270.529628380] [my_python_node]: Hello from my_python_node
[INFO] [1740518271.529555942] [my_python_node]: Hello from my_python_node
[INFO] [1740518272.529648717] [my_python_node]: Hello from my_python_node
[INFO] [1740518273.529739028] [my_python_node]: Hello from my_python_node
```

To stop the node from running use `ctrl` + `c`

Ensure that the workspace is sourced before running nodes:

```bash
source ~/ros2_ws/install/setup.bash
```

### 8. Important ROS2 Commands

**8.1 Basic ROS2 Commands:**

- Check ROS2 version:

    ```bash
    ros2 --version
    ```

- Check installed ROS2 packages:

    ```bash
    ros2 pkg list
    ```

- Get package information:

    ```bash
    ros2 pkg info <package_name>
    ```

**8.2 Nodes Management:**

- List active nodes:

    ```bash
    ros2 node list
    ```

- Get node information:

    ```bash
    ros2 node info <node_name>
    ```

- Run a node:

    ```bash
    ros2 run <package_name> <executable_name>
    ```

## Class 6 - Create Your Own Node

- **Explain Git and Github**
- Overview of `my_python_pkg`
- Outline Homework Assignment
  - Time for Questions

### What is Git?

**Git** is a version control system that helps track changes in code, collaborate with others, and manage different versions of a project efficiently. It allows developers to:

- **Track changes**: Every modification is recorded, making it easy to revert to previous versions.

- **Branch and merge**: Developers can work on separate branches and merge changes without overwriting each other's work.

- **Collaborate**: Multiple people can work on the same project without conflicts.

### What is GitHub?

GitHub is a **cloud-based platform** that hosts Git repositories and provides additional tools for collaboration. It enables:

- **Remote storage**: Backup your Git repositories online.

- **Team collaboration**: Share code, review pull requests, and track issues.

- **Integration**: Works with  Continuous Integration and Continuous Deployment pipelines, project management tools, and more.

### Why is Git/GitHub a Great Asset?

- **Version Control**: Never lose progress and easily roll back changes.

- **Collaboration**: Teams can work on code together without conflicts.

- **Open Source Contributions**: Developers can contribute to public projects.

- **Automation & Deployment**: Supports continuous integration and deployment.

If you’re working on projects like your F1TENTH car or embedded systems, GitHub is a great way to manage your code, track updates, and collaborate efficiently with your team.

## Add nicks notes here on home to use Git and Github

### Overview of `my_python_pkg`

From the last class, we created a ROS 2 package named `my_python_pkg`. Below are its key components:

Package Structure

```bash
my_python_pkg/
│── package.xml  # Package metadata
│── setup.py     # Python package setup
│── my_python_pkg/
│   ├── __init__.py  # Required for Python module
│   ├── my_python_node.py  # ROS 2 node
│── resource/  # Used for package identification
│── setup.cfg  # Configuration file
```

**Key Files and Their Purpose**:

- `package.xml`: Defines package dependencies.

- `setup.py`: Configures how the package is installed and run.

- `my_python_node.py`: Contains the ROS 2 node implementation.

**Running the Node**:

```bash
ros2 run my_python_pkg my_node
```

## Outline Homework Assignment - Homework 3

### Objectives

- Understand the structure of a ROS 2 Python package.

- Create a custom ROS 2 package and configure it correctly.

- Write a ROS 2 node that publishes messages.

- Modify setup.py to ensure proper execution.

- Learn how to manage dependencies using package.xml.

- Build and run your ROS 2 package.

- Submit your work using GitHub.

### Tasks

**Task 1: Create Your Own ROS 2 Python Package:**

- Use the structure of my_python_pkg as a reference.

- Name your package student_pkg.

**Task 2: Write a ROS 2 Node:**

- Create a Python script named `student_node.py`.

- The node should publish a simple message every second. (be creative)

**Task 3: Modify setup.py:**

Ensure your node is added to the `entry_points` section.

**Task 4: Modify package.xml:**

- Define dependencies required for your package (e.g., `rclpy`).

- Ensure that the correct package metadata (name, description, maintainers, etc.) is included.

**Task 5: Run the Node:**

- Build your package.

- source your workspace.

- Use `ros2 run student_pkg student_node` to execute your node.

**Task 6: Making comments:**

- Comments need to be made throughout the code to demostrate your understanding of the code.

**Submission:**

- Push your package to a GitHub repository.

- Submit the repository link for review.

## Week 4 - ROS2 Comunication using Interfaces

## Class 7 - Brief Overview of ROS2 Interfaces

- 3 Communications Types
    1. Topics
      - `ros2 run demo_nodes_cpp talker`
      - `ros2 run demo_nodes_cpp listener`
      - `rqt_graph`
    2. Services
      - `ros2 run demo_nodes_cpp add_two_ints_server`
      - `ros2 run demo_nodes_cpp add_two_ints_client`
    3. Actions
      - Short description on when to use actions

### Learning Objectives

By the end of this class, students will:

- Have a basic understanding of the three main ROS 2 communication interfaces: **Topics, Services, and Actions**.
- Learn when and why each type is used.
- Demonstrate basic ROS 2 communication using pre-built demo nodes.
- Visualize ROS 2 message flow using `rqt_graph`.

---

### Introduction: The Postal Service Analogy

To help conceptualize ROS 2 communication types, imagine a ways information is share in real-world senarios.

1. **Topics → Public Announcements:** Like a radio station broadcasting to anyone who tunes in.

2. **Services → Request and Response:** Like mailing a letter and waiting for a reply.

3. **Actions → Ongoing Delivery:** Like ordering a package and tracking its shipment.

---

### 1. Topics: One-Way Communication

**Concept**:

- Topics are used for continuous, one-way message streams.
- Publishers send data, and subscribers receive it asynchronously.
- Ideal for **sensor data** (e.g., a camera streaming images).

**How Topics Work (Step-by-Step):**

1. A **Publisher node** is created and begins sending messages on a named **Topic**.
2. A **Subscriber node** is created and tells ROS2 it wants to listen to that same **Topic**.
3. ROS2 automatically **matches** publishers and subscribers based on the **Topic name** and **message type** (e.g., std_msgs/msg/String).
4. Once matched, **messages flow from the publisher to the subscriber** without any further action needed.
5. If multiple subscribers exist, the publisher **broadcasts** the message to all subscribers.
6. If a publisher or subscriber node disconnects or stops, ROS2 **dynamically updates** the connections.

**Why Topics Are Important:**

- **Asynchronous Communication:** Topics allow nodes to **send and receive data independently** without waiting for a response.
- **Real-Time Data Flow:** Perfect for **sensor data**, **status updates**, and **control commands** that need continuous transmission.
- **Scalability:** Multiple publishers and multiple subscribers can easily share the same topic, making it easy to build complex robotic systems.
- **Loose Coupling:** Nodes do not need to know about each other directly — they just agree on the Topic name and message type, making systems **modular and flexible**.

  **Summary:** Topics are the backbone of most robotic communication, enabling different parts of a system to share information in real time and independently.

**Demo: Talker & Listener:**

**1.1 Open a terminal window and run a publisher:**

   ```bash
   ros2 run demo_nodes_cpp talker
   ```

**1.2 Open a second terminal window and run a subscriber:**

   ```bash
   ros2 run demo_nodes_cpp listener
   ```

**1.3 Observe the messages being published and received.**

**1.4 Visualize the system using:**

   ```bash
   rqt_graph
   ```

`rqt_graph` is a visualization tool in ROS2 that displays the communication between nodes by showing how topics, publishers, and subscribers are connected. It should be used to quickly understand, debug, and verify the data flow within a running ROS2 system. `rqt_graph` primarily visualizes **Topics**, but it complements other ROS2 interfaces like **Services** and **Actions** by helping identify what nodes exist and how they interact, but Services and Actions themselves are not fully shown.

![Image of rqt_graph](<README_Pics/Screenshot from 2025-03-31 05-40-30.png>)

---

### 2. Services: Request-Response Communication

**Concept**:

- Services work like a function call: a request is sent, and a response is returned.
- Useful for tasks like turning a light on or querying a database.

**How Services Work (Step-by-Step):**

1. A **Service Server node** is created and offers a specific service under a **Service name**.
2. A **Service Client node** is created and requests a service call with **input data** (called a "request").
3. ROS2 matches the **Client** and **Server** automatically based on the **Service name** and **Service type** (e.g., example_interfaces/srv/AddTwoInts).
4. The **Client** sends the request to the **Server** and **waits** for a reply (unlike topics, services are synchronous).
5. The **Server** processes the request and sends back a **response** with the result.
6. After the interaction, the connection is **closed** — it is not a continuous link like a topic.

**Why Services Are Important:**

- **Synchronous Commands:** Services allow you to send a command and wait for a specific answer (like calling a function).
- **Reliability:** You can guarantee that a request is either successfully answered or reported as failed.
- **Controlled Actions:** Perfect for **one time operations** like requesting a robot to take a photo, start a motor, open a gripper, or query a sensor once.
- **Simplicity:** Services are easier to manage for operations where you don't need continuous communication — just a clear request and answer.

  **Summary:** Services are critical when you need a guaranteed response to a specific single action.

**Demo: Add Two Integers Service** -

**2.1 Open a terminal and run a service server:**

   ```bash
   ros2 run demo_nodes_cpp add_two_ints_server
   ```

**2.2 Open another terminal and call the service:**

   ```bash
   ros2 run demo_nodes_cpp add_two_ints_client 2 3
   ```

**2.3 Observe the response (sum of 2 and 3 returned).**

---

### 3. Actions: Long-Duration Tasks

**Concept**:

- Actions are like services but can be monitored and canceled mid-execution.
- Actions manage multiple internal topics with a structure of goal, feedback, and result.
- Used for tasks like **robot navigation** (move from A to B).
- We won’t run a demo, but we’ll briefly discuss its use cases.

**How Actions Work (Step-by-Step):**

1. A client node sends a goal request to an action server.
2. The server accepts the goal and starts working toward completing it.
3. As the task progresses, the server sends feedback messages back to the client (example: "robot is halfway to the destination").
4. The client can choose to:

    - Continue monitoring the task,
    - Cancel the task mid-way,
    - Or simply wait for the result.

5. When the task completes (successfully or with an error), the server sends a result back to the client.

**Why Actions Are Important:**

- **Monitor Progress:** Unlike Services (one-time reply), Actions let you see ongoing progress with Feedback.
- **Cancelability:** You can cancel long operations if conditions change (e.g., obstacle detected).
- **Complex Behavior:** Many real-world robotics tasks are not instant — navigation, picking up objects, docking, etc., need intermediate updates and control.

  **Summary:** Actions bring real-world "work in progress" management into ROS2 systems.

**Example of an Action (Simple Demo):**
Imagine a robot being asked to move forward 5 meters:

- **Client:** "Move forward 5 meters."
- **Server:** Starts moving the robot forward.
- **Feedback:** Every second, the server sends "Moved 1 meter", "Moved 2 meters"...
- **Result:** After reaching 5 meters, the server replies "Goal completed successfully."

  If at any point the user cancels, the server would respond "Goal canceled after 3 meters moved."

## Class 8 - Create Basic Publisher and Subscriber
