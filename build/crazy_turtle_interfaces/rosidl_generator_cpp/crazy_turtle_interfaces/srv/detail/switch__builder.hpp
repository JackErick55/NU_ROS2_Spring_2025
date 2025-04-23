// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from crazy_turtle_interfaces:srv/Switch.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "crazy_turtle_interfaces/srv/switch.hpp"


#ifndef CRAZY_TURTLE_INTERFACES__SRV__DETAIL__SWITCH__BUILDER_HPP_
#define CRAZY_TURTLE_INTERFACES__SRV__DETAIL__SWITCH__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "crazy_turtle_interfaces/srv/detail/switch__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace crazy_turtle_interfaces
{

namespace srv
{

namespace builder
{

class Init_Switch_Request_mixer
{
public:
  Init_Switch_Request_mixer()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::crazy_turtle_interfaces::srv::Switch_Request mixer(::crazy_turtle_interfaces::srv::Switch_Request::_mixer_type arg)
  {
    msg_.mixer = std::move(arg);
    return std::move(msg_);
  }

private:
  ::crazy_turtle_interfaces::srv::Switch_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::crazy_turtle_interfaces::srv::Switch_Request>()
{
  return crazy_turtle_interfaces::srv::builder::Init_Switch_Request_mixer();
}

}  // namespace crazy_turtle_interfaces


namespace crazy_turtle_interfaces
{

namespace srv
{

namespace builder
{

class Init_Switch_Response_y
{
public:
  explicit Init_Switch_Response_y(::crazy_turtle_interfaces::srv::Switch_Response & msg)
  : msg_(msg)
  {}
  ::crazy_turtle_interfaces::srv::Switch_Response y(::crazy_turtle_interfaces::srv::Switch_Response::_y_type arg)
  {
    msg_.y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::crazy_turtle_interfaces::srv::Switch_Response msg_;
};

class Init_Switch_Response_x
{
public:
  Init_Switch_Response_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Switch_Response_y x(::crazy_turtle_interfaces::srv::Switch_Response::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Switch_Response_y(msg_);
  }

private:
  ::crazy_turtle_interfaces::srv::Switch_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::crazy_turtle_interfaces::srv::Switch_Response>()
{
  return crazy_turtle_interfaces::srv::builder::Init_Switch_Response_x();
}

}  // namespace crazy_turtle_interfaces


namespace crazy_turtle_interfaces
{

namespace srv
{

namespace builder
{

class Init_Switch_Event_response
{
public:
  explicit Init_Switch_Event_response(::crazy_turtle_interfaces::srv::Switch_Event & msg)
  : msg_(msg)
  {}
  ::crazy_turtle_interfaces::srv::Switch_Event response(::crazy_turtle_interfaces::srv::Switch_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::crazy_turtle_interfaces::srv::Switch_Event msg_;
};

class Init_Switch_Event_request
{
public:
  explicit Init_Switch_Event_request(::crazy_turtle_interfaces::srv::Switch_Event & msg)
  : msg_(msg)
  {}
  Init_Switch_Event_response request(::crazy_turtle_interfaces::srv::Switch_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_Switch_Event_response(msg_);
  }

private:
  ::crazy_turtle_interfaces::srv::Switch_Event msg_;
};

class Init_Switch_Event_info
{
public:
  Init_Switch_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Switch_Event_request info(::crazy_turtle_interfaces::srv::Switch_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_Switch_Event_request(msg_);
  }

private:
  ::crazy_turtle_interfaces::srv::Switch_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::crazy_turtle_interfaces::srv::Switch_Event>()
{
  return crazy_turtle_interfaces::srv::builder::Init_Switch_Event_info();
}

}  // namespace crazy_turtle_interfaces

#endif  // CRAZY_TURTLE_INTERFACES__SRV__DETAIL__SWITCH__BUILDER_HPP_
