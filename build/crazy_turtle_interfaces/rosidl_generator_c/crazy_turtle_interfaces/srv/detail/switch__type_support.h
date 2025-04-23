// generated from rosidl_generator_c/resource/idl__type_support.h.em
// with input from crazy_turtle_interfaces:srv/Switch.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "crazy_turtle_interfaces/srv/switch.h"


#ifndef CRAZY_TURTLE_INTERFACES__SRV__DETAIL__SWITCH__TYPE_SUPPORT_H_
#define CRAZY_TURTLE_INTERFACES__SRV__DETAIL__SWITCH__TYPE_SUPPORT_H_

#include "rosidl_typesupport_interface/macros.h"

#include "crazy_turtle_interfaces/msg/rosidl_generator_c__visibility_control.h"

#ifdef __cplusplus
extern "C"
{
#endif

#include "rosidl_runtime_c/message_type_support_struct.h"

// Forward declare the get type support functions for this type.
ROSIDL_GENERATOR_C_PUBLIC_crazy_turtle_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  crazy_turtle_interfaces,
  srv,
  Switch_Request
)(void);

// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"

// Forward declare the get type support functions for this type.
ROSIDL_GENERATOR_C_PUBLIC_crazy_turtle_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  crazy_turtle_interfaces,
  srv,
  Switch_Response
)(void);

// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"

// Forward declare the get type support functions for this type.
ROSIDL_GENERATOR_C_PUBLIC_crazy_turtle_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  crazy_turtle_interfaces,
  srv,
  Switch_Event
)(void);

#include "rosidl_runtime_c/service_type_support_struct.h"

// Forward declare the get type support functions for this type.
ROSIDL_GENERATOR_C_PUBLIC_crazy_turtle_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
  rosidl_typesupport_c,
  crazy_turtle_interfaces,
  srv,
  Switch
)(void);

// Forward declare the function to create a service event message for this type.
ROSIDL_GENERATOR_C_PUBLIC_crazy_turtle_interfaces
void *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  crazy_turtle_interfaces,
  srv,
  Switch
)(
  const rosidl_service_introspection_info_t * info,
  rcutils_allocator_t * allocator,
  const void * request_message,
  const void * response_message);

// Forward declare the function to destroy a service event message for this type.
ROSIDL_GENERATOR_C_PUBLIC_crazy_turtle_interfaces
bool
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  crazy_turtle_interfaces,
  srv,
  Switch
)(
  void * event_msg,
  rcutils_allocator_t * allocator);

#ifdef __cplusplus
}
#endif

#endif  // CRAZY_TURTLE_INTERFACES__SRV__DETAIL__SWITCH__TYPE_SUPPORT_H_
