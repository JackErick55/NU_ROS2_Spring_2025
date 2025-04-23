// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from turtle_interfaces:srv/Waypoints.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "turtle_interfaces/srv/waypoints.h"


#ifndef TURTLE_INTERFACES__SRV__DETAIL__WAYPOINTS__STRUCT_H_
#define TURTLE_INTERFACES__SRV__DETAIL__WAYPOINTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'waypoints'
#include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in srv/Waypoints in the package turtle_interfaces.
typedef struct turtle_interfaces__srv__Waypoints_Request
{
  geometry_msgs__msg__Point__Sequence waypoints;
} turtle_interfaces__srv__Waypoints_Request;

// Struct for a sequence of turtle_interfaces__srv__Waypoints_Request.
typedef struct turtle_interfaces__srv__Waypoints_Request__Sequence
{
  turtle_interfaces__srv__Waypoints_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtle_interfaces__srv__Waypoints_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/Waypoints in the package turtle_interfaces.
typedef struct turtle_interfaces__srv__Waypoints_Response
{
  double distance;
} turtle_interfaces__srv__Waypoints_Response;

// Struct for a sequence of turtle_interfaces__srv__Waypoints_Response.
typedef struct turtle_interfaces__srv__Waypoints_Response__Sequence
{
  turtle_interfaces__srv__Waypoints_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtle_interfaces__srv__Waypoints_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  turtle_interfaces__srv__Waypoints_Event__request__MAX_SIZE = 1
};
// response
enum
{
  turtle_interfaces__srv__Waypoints_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/Waypoints in the package turtle_interfaces.
typedef struct turtle_interfaces__srv__Waypoints_Event
{
  service_msgs__msg__ServiceEventInfo info;
  turtle_interfaces__srv__Waypoints_Request__Sequence request;
  turtle_interfaces__srv__Waypoints_Response__Sequence response;
} turtle_interfaces__srv__Waypoints_Event;

// Struct for a sequence of turtle_interfaces__srv__Waypoints_Event.
typedef struct turtle_interfaces__srv__Waypoints_Event__Sequence
{
  turtle_interfaces__srv__Waypoints_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtle_interfaces__srv__Waypoints_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TURTLE_INTERFACES__SRV__DETAIL__WAYPOINTS__STRUCT_H_
