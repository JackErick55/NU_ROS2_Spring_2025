// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from crazy_turtle_interfaces:srv/Switch.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "crazy_turtle_interfaces/srv/switch.hpp"


#ifndef CRAZY_TURTLE_INTERFACES__SRV__DETAIL__SWITCH__STRUCT_HPP_
#define CRAZY_TURTLE_INTERFACES__SRV__DETAIL__SWITCH__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'mixer'
#include "turtlesim/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__crazy_turtle_interfaces__srv__Switch_Request __attribute__((deprecated))
#else
# define DEPRECATED__crazy_turtle_interfaces__srv__Switch_Request __declspec(deprecated)
#endif

namespace crazy_turtle_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Switch_Request_
{
  using Type = Switch_Request_<ContainerAllocator>;

  explicit Switch_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : mixer(_init)
  {
    (void)_init;
  }

  explicit Switch_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : mixer(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _mixer_type =
    turtlesim::msg::Pose_<ContainerAllocator>;
  _mixer_type mixer;

  // setters for named parameter idiom
  Type & set__mixer(
    const turtlesim::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->mixer = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    crazy_turtle_interfaces::srv::Switch_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const crazy_turtle_interfaces::srv::Switch_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<crazy_turtle_interfaces::srv::Switch_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<crazy_turtle_interfaces::srv::Switch_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      crazy_turtle_interfaces::srv::Switch_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<crazy_turtle_interfaces::srv::Switch_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      crazy_turtle_interfaces::srv::Switch_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<crazy_turtle_interfaces::srv::Switch_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<crazy_turtle_interfaces::srv::Switch_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<crazy_turtle_interfaces::srv::Switch_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__crazy_turtle_interfaces__srv__Switch_Request
    std::shared_ptr<crazy_turtle_interfaces::srv::Switch_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__crazy_turtle_interfaces__srv__Switch_Request
    std::shared_ptr<crazy_turtle_interfaces::srv::Switch_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Switch_Request_ & other) const
  {
    if (this->mixer != other.mixer) {
      return false;
    }
    return true;
  }
  bool operator!=(const Switch_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Switch_Request_

// alias to use template instance with default allocator
using Switch_Request =
  crazy_turtle_interfaces::srv::Switch_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace crazy_turtle_interfaces


#ifndef _WIN32
# define DEPRECATED__crazy_turtle_interfaces__srv__Switch_Response __attribute__((deprecated))
#else
# define DEPRECATED__crazy_turtle_interfaces__srv__Switch_Response __declspec(deprecated)
#endif

namespace crazy_turtle_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Switch_Response_
{
  using Type = Switch_Response_<ContainerAllocator>;

  explicit Switch_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
    }
  }

  explicit Switch_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
    }
  }

  // field types and members
  using _x_type =
    double;
  _x_type x;
  using _y_type =
    double;
  _y_type y;

  // setters for named parameter idiom
  Type & set__x(
    const double & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const double & _arg)
  {
    this->y = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    crazy_turtle_interfaces::srv::Switch_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const crazy_turtle_interfaces::srv::Switch_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<crazy_turtle_interfaces::srv::Switch_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<crazy_turtle_interfaces::srv::Switch_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      crazy_turtle_interfaces::srv::Switch_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<crazy_turtle_interfaces::srv::Switch_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      crazy_turtle_interfaces::srv::Switch_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<crazy_turtle_interfaces::srv::Switch_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<crazy_turtle_interfaces::srv::Switch_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<crazy_turtle_interfaces::srv::Switch_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__crazy_turtle_interfaces__srv__Switch_Response
    std::shared_ptr<crazy_turtle_interfaces::srv::Switch_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__crazy_turtle_interfaces__srv__Switch_Response
    std::shared_ptr<crazy_turtle_interfaces::srv::Switch_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Switch_Response_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    return true;
  }
  bool operator!=(const Switch_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Switch_Response_

// alias to use template instance with default allocator
using Switch_Response =
  crazy_turtle_interfaces::srv::Switch_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace crazy_turtle_interfaces


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__crazy_turtle_interfaces__srv__Switch_Event __attribute__((deprecated))
#else
# define DEPRECATED__crazy_turtle_interfaces__srv__Switch_Event __declspec(deprecated)
#endif

namespace crazy_turtle_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Switch_Event_
{
  using Type = Switch_Event_<ContainerAllocator>;

  explicit Switch_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit Switch_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<crazy_turtle_interfaces::srv::Switch_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<crazy_turtle_interfaces::srv::Switch_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<crazy_turtle_interfaces::srv::Switch_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<crazy_turtle_interfaces::srv::Switch_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<crazy_turtle_interfaces::srv::Switch_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<crazy_turtle_interfaces::srv::Switch_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<crazy_turtle_interfaces::srv::Switch_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<crazy_turtle_interfaces::srv::Switch_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    crazy_turtle_interfaces::srv::Switch_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const crazy_turtle_interfaces::srv::Switch_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<crazy_turtle_interfaces::srv::Switch_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<crazy_turtle_interfaces::srv::Switch_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      crazy_turtle_interfaces::srv::Switch_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<crazy_turtle_interfaces::srv::Switch_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      crazy_turtle_interfaces::srv::Switch_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<crazy_turtle_interfaces::srv::Switch_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<crazy_turtle_interfaces::srv::Switch_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<crazy_turtle_interfaces::srv::Switch_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__crazy_turtle_interfaces__srv__Switch_Event
    std::shared_ptr<crazy_turtle_interfaces::srv::Switch_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__crazy_turtle_interfaces__srv__Switch_Event
    std::shared_ptr<crazy_turtle_interfaces::srv::Switch_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Switch_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const Switch_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Switch_Event_

// alias to use template instance with default allocator
using Switch_Event =
  crazy_turtle_interfaces::srv::Switch_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace crazy_turtle_interfaces

namespace crazy_turtle_interfaces
{

namespace srv
{

struct Switch
{
  using Request = crazy_turtle_interfaces::srv::Switch_Request;
  using Response = crazy_turtle_interfaces::srv::Switch_Response;
  using Event = crazy_turtle_interfaces::srv::Switch_Event;
};

}  // namespace srv

}  // namespace crazy_turtle_interfaces

#endif  // CRAZY_TURTLE_INTERFACES__SRV__DETAIL__SWITCH__STRUCT_HPP_
