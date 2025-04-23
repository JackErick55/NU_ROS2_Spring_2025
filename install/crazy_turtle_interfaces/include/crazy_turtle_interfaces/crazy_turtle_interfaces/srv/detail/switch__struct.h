// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from crazy_turtle_interfaces:srv/Switch.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "crazy_turtle_interfaces/srv/switch.h"


#ifndef CRAZY_TURTLE_INTERFACES__SRV__DETAIL__SWITCH__STRUCT_H_
#define CRAZY_TURTLE_INTERFACES__SRV__DETAIL__SWITCH__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'mixer'
#include "turtlesim/msg/detail/pose__struct.h"

/// Struct defined in srv/Switch in the package crazy_turtle_interfaces.
typedef struct crazy_turtle_interfaces__srv__Switch_Request
{
  /// use a strange formula to set the new location of the turtle
  turtlesim__msg__Pose mixer;
} crazy_turtle_interfaces__srv__Switch_Request;

// Struct for a sequence of crazy_turtle_interfaces__srv__Switch_Request.
typedef struct crazy_turtle_interfaces__srv__Switch_Request__Sequence
{
  crazy_turtle_interfaces__srv__Switch_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} crazy_turtle_interfaces__srv__Switch_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/Switch in the package crazy_turtle_interfaces.
typedef struct crazy_turtle_interfaces__srv__Switch_Response
{
  /// the new x position of the new turtle
  double x;
  /// the new y position of the new
  double y;
} crazy_turtle_interfaces__srv__Switch_Response;

// Struct for a sequence of crazy_turtle_interfaces__srv__Switch_Response.
typedef struct crazy_turtle_interfaces__srv__Switch_Response__Sequence
{
  crazy_turtle_interfaces__srv__Switch_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} crazy_turtle_interfaces__srv__Switch_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  crazy_turtle_interfaces__srv__Switch_Event__request__MAX_SIZE = 1
};
// response
enum
{
  crazy_turtle_interfaces__srv__Switch_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/Switch in the package crazy_turtle_interfaces.
typedef struct crazy_turtle_interfaces__srv__Switch_Event
{
  service_msgs__msg__ServiceEventInfo info;
  crazy_turtle_interfaces__srv__Switch_Request__Sequence request;
  crazy_turtle_interfaces__srv__Switch_Response__Sequence response;
} crazy_turtle_interfaces__srv__Switch_Event;

// Struct for a sequence of crazy_turtle_interfaces__srv__Switch_Event.
typedef struct crazy_turtle_interfaces__srv__Switch_Event__Sequence
{
  crazy_turtle_interfaces__srv__Switch_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} crazy_turtle_interfaces__srv__Switch_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CRAZY_TURTLE_INTERFACES__SRV__DETAIL__SWITCH__STRUCT_H_
