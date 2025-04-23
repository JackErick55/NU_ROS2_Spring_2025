// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from crazy_turtle_interfaces:srv/Switch.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "crazy_turtle_interfaces/srv/switch.hpp"


#ifndef CRAZY_TURTLE_INTERFACES__SRV__DETAIL__SWITCH__TRAITS_HPP_
#define CRAZY_TURTLE_INTERFACES__SRV__DETAIL__SWITCH__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "crazy_turtle_interfaces/srv/detail/switch__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'mixer'
#include "turtlesim/msg/detail/pose__traits.hpp"

namespace crazy_turtle_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const Switch_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: mixer
  {
    out << "mixer: ";
    to_flow_style_yaml(msg.mixer, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Switch_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: mixer
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mixer:\n";
    to_block_style_yaml(msg.mixer, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Switch_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace crazy_turtle_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use crazy_turtle_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const crazy_turtle_interfaces::srv::Switch_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  crazy_turtle_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use crazy_turtle_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const crazy_turtle_interfaces::srv::Switch_Request & msg)
{
  return crazy_turtle_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<crazy_turtle_interfaces::srv::Switch_Request>()
{
  return "crazy_turtle_interfaces::srv::Switch_Request";
}

template<>
inline const char * name<crazy_turtle_interfaces::srv::Switch_Request>()
{
  return "crazy_turtle_interfaces/srv/Switch_Request";
}

template<>
struct has_fixed_size<crazy_turtle_interfaces::srv::Switch_Request>
  : std::integral_constant<bool, has_fixed_size<turtlesim::msg::Pose>::value> {};

template<>
struct has_bounded_size<crazy_turtle_interfaces::srv::Switch_Request>
  : std::integral_constant<bool, has_bounded_size<turtlesim::msg::Pose>::value> {};

template<>
struct is_message<crazy_turtle_interfaces::srv::Switch_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace crazy_turtle_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const Switch_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Switch_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Switch_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace crazy_turtle_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use crazy_turtle_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const crazy_turtle_interfaces::srv::Switch_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  crazy_turtle_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use crazy_turtle_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const crazy_turtle_interfaces::srv::Switch_Response & msg)
{
  return crazy_turtle_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<crazy_turtle_interfaces::srv::Switch_Response>()
{
  return "crazy_turtle_interfaces::srv::Switch_Response";
}

template<>
inline const char * name<crazy_turtle_interfaces::srv::Switch_Response>()
{
  return "crazy_turtle_interfaces/srv/Switch_Response";
}

template<>
struct has_fixed_size<crazy_turtle_interfaces::srv::Switch_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<crazy_turtle_interfaces::srv::Switch_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<crazy_turtle_interfaces::srv::Switch_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace crazy_turtle_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const Switch_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Switch_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Switch_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace crazy_turtle_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use crazy_turtle_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const crazy_turtle_interfaces::srv::Switch_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  crazy_turtle_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use crazy_turtle_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const crazy_turtle_interfaces::srv::Switch_Event & msg)
{
  return crazy_turtle_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<crazy_turtle_interfaces::srv::Switch_Event>()
{
  return "crazy_turtle_interfaces::srv::Switch_Event";
}

template<>
inline const char * name<crazy_turtle_interfaces::srv::Switch_Event>()
{
  return "crazy_turtle_interfaces/srv/Switch_Event";
}

template<>
struct has_fixed_size<crazy_turtle_interfaces::srv::Switch_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<crazy_turtle_interfaces::srv::Switch_Event>
  : std::integral_constant<bool, has_bounded_size<crazy_turtle_interfaces::srv::Switch_Request>::value && has_bounded_size<crazy_turtle_interfaces::srv::Switch_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<crazy_turtle_interfaces::srv::Switch_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<crazy_turtle_interfaces::srv::Switch>()
{
  return "crazy_turtle_interfaces::srv::Switch";
}

template<>
inline const char * name<crazy_turtle_interfaces::srv::Switch>()
{
  return "crazy_turtle_interfaces/srv/Switch";
}

template<>
struct has_fixed_size<crazy_turtle_interfaces::srv::Switch>
  : std::integral_constant<
    bool,
    has_fixed_size<crazy_turtle_interfaces::srv::Switch_Request>::value &&
    has_fixed_size<crazy_turtle_interfaces::srv::Switch_Response>::value
  >
{
};

template<>
struct has_bounded_size<crazy_turtle_interfaces::srv::Switch>
  : std::integral_constant<
    bool,
    has_bounded_size<crazy_turtle_interfaces::srv::Switch_Request>::value &&
    has_bounded_size<crazy_turtle_interfaces::srv::Switch_Response>::value
  >
{
};

template<>
struct is_service<crazy_turtle_interfaces::srv::Switch>
  : std::true_type
{
};

template<>
struct is_service_request<crazy_turtle_interfaces::srv::Switch_Request>
  : std::true_type
{
};

template<>
struct is_service_response<crazy_turtle_interfaces::srv::Switch_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CRAZY_TURTLE_INTERFACES__SRV__DETAIL__SWITCH__TRAITS_HPP_
