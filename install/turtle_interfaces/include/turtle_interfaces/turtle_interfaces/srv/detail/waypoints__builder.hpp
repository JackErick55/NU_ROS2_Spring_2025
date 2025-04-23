// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from turtle_interfaces:srv/Waypoints.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "turtle_interfaces/srv/waypoints.hpp"


#ifndef TURTLE_INTERFACES__SRV__DETAIL__WAYPOINTS__BUILDER_HPP_
#define TURTLE_INTERFACES__SRV__DETAIL__WAYPOINTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "turtle_interfaces/srv/detail/waypoints__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace turtle_interfaces
{

namespace srv
{

namespace builder
{

class Init_Waypoints_Request_waypoints
{
public:
  Init_Waypoints_Request_waypoints()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::turtle_interfaces::srv::Waypoints_Request waypoints(::turtle_interfaces::srv::Waypoints_Request::_waypoints_type arg)
  {
    msg_.waypoints = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtle_interfaces::srv::Waypoints_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_interfaces::srv::Waypoints_Request>()
{
  return turtle_interfaces::srv::builder::Init_Waypoints_Request_waypoints();
}

}  // namespace turtle_interfaces


namespace turtle_interfaces
{

namespace srv
{

namespace builder
{

class Init_Waypoints_Response_distance
{
public:
  Init_Waypoints_Response_distance()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::turtle_interfaces::srv::Waypoints_Response distance(::turtle_interfaces::srv::Waypoints_Response::_distance_type arg)
  {
    msg_.distance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtle_interfaces::srv::Waypoints_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_interfaces::srv::Waypoints_Response>()
{
  return turtle_interfaces::srv::builder::Init_Waypoints_Response_distance();
}

}  // namespace turtle_interfaces


namespace turtle_interfaces
{

namespace srv
{

namespace builder
{

class Init_Waypoints_Event_response
{
public:
  explicit Init_Waypoints_Event_response(::turtle_interfaces::srv::Waypoints_Event & msg)
  : msg_(msg)
  {}
  ::turtle_interfaces::srv::Waypoints_Event response(::turtle_interfaces::srv::Waypoints_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtle_interfaces::srv::Waypoints_Event msg_;
};

class Init_Waypoints_Event_request
{
public:
  explicit Init_Waypoints_Event_request(::turtle_interfaces::srv::Waypoints_Event & msg)
  : msg_(msg)
  {}
  Init_Waypoints_Event_response request(::turtle_interfaces::srv::Waypoints_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_Waypoints_Event_response(msg_);
  }

private:
  ::turtle_interfaces::srv::Waypoints_Event msg_;
};

class Init_Waypoints_Event_info
{
public:
  Init_Waypoints_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Waypoints_Event_request info(::turtle_interfaces::srv::Waypoints_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_Waypoints_Event_request(msg_);
  }

private:
  ::turtle_interfaces::srv::Waypoints_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_interfaces::srv::Waypoints_Event>()
{
  return turtle_interfaces::srv::builder::Init_Waypoints_Event_info();
}

}  // namespace turtle_interfaces

#endif  // TURTLE_INTERFACES__SRV__DETAIL__WAYPOINTS__BUILDER_HPP_
