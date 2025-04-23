// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from crazy_turtle_interfaces:srv/Switch.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "crazy_turtle_interfaces/srv/detail/switch__rosidl_typesupport_introspection_c.h"
#include "crazy_turtle_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "crazy_turtle_interfaces/srv/detail/switch__functions.h"
#include "crazy_turtle_interfaces/srv/detail/switch__struct.h"


// Include directives for member types
// Member `mixer`
#include "turtlesim/msg/pose.h"
// Member `mixer`
#include "turtlesim/msg/detail/pose__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void crazy_turtle_interfaces__srv__Switch_Request__rosidl_typesupport_introspection_c__Switch_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  crazy_turtle_interfaces__srv__Switch_Request__init(message_memory);
}

void crazy_turtle_interfaces__srv__Switch_Request__rosidl_typesupport_introspection_c__Switch_Request_fini_function(void * message_memory)
{
  crazy_turtle_interfaces__srv__Switch_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember crazy_turtle_interfaces__srv__Switch_Request__rosidl_typesupport_introspection_c__Switch_Request_message_member_array[1] = {
  {
    "mixer",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crazy_turtle_interfaces__srv__Switch_Request, mixer),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers crazy_turtle_interfaces__srv__Switch_Request__rosidl_typesupport_introspection_c__Switch_Request_message_members = {
  "crazy_turtle_interfaces__srv",  // message namespace
  "Switch_Request",  // message name
  1,  // number of fields
  sizeof(crazy_turtle_interfaces__srv__Switch_Request),
  false,  // has_any_key_member_
  crazy_turtle_interfaces__srv__Switch_Request__rosidl_typesupport_introspection_c__Switch_Request_message_member_array,  // message members
  crazy_turtle_interfaces__srv__Switch_Request__rosidl_typesupport_introspection_c__Switch_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  crazy_turtle_interfaces__srv__Switch_Request__rosidl_typesupport_introspection_c__Switch_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t crazy_turtle_interfaces__srv__Switch_Request__rosidl_typesupport_introspection_c__Switch_Request_message_type_support_handle = {
  0,
  &crazy_turtle_interfaces__srv__Switch_Request__rosidl_typesupport_introspection_c__Switch_Request_message_members,
  get_message_typesupport_handle_function,
  &crazy_turtle_interfaces__srv__Switch_Request__get_type_hash,
  &crazy_turtle_interfaces__srv__Switch_Request__get_type_description,
  &crazy_turtle_interfaces__srv__Switch_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_crazy_turtle_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, crazy_turtle_interfaces, srv, Switch_Request)() {
  crazy_turtle_interfaces__srv__Switch_Request__rosidl_typesupport_introspection_c__Switch_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtlesim, msg, Pose)();
  if (!crazy_turtle_interfaces__srv__Switch_Request__rosidl_typesupport_introspection_c__Switch_Request_message_type_support_handle.typesupport_identifier) {
    crazy_turtle_interfaces__srv__Switch_Request__rosidl_typesupport_introspection_c__Switch_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &crazy_turtle_interfaces__srv__Switch_Request__rosidl_typesupport_introspection_c__Switch_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "crazy_turtle_interfaces/srv/detail/switch__rosidl_typesupport_introspection_c.h"
// already included above
// #include "crazy_turtle_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "crazy_turtle_interfaces/srv/detail/switch__functions.h"
// already included above
// #include "crazy_turtle_interfaces/srv/detail/switch__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void crazy_turtle_interfaces__srv__Switch_Response__rosidl_typesupport_introspection_c__Switch_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  crazy_turtle_interfaces__srv__Switch_Response__init(message_memory);
}

void crazy_turtle_interfaces__srv__Switch_Response__rosidl_typesupport_introspection_c__Switch_Response_fini_function(void * message_memory)
{
  crazy_turtle_interfaces__srv__Switch_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember crazy_turtle_interfaces__srv__Switch_Response__rosidl_typesupport_introspection_c__Switch_Response_message_member_array[2] = {
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crazy_turtle_interfaces__srv__Switch_Response, x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crazy_turtle_interfaces__srv__Switch_Response, y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers crazy_turtle_interfaces__srv__Switch_Response__rosidl_typesupport_introspection_c__Switch_Response_message_members = {
  "crazy_turtle_interfaces__srv",  // message namespace
  "Switch_Response",  // message name
  2,  // number of fields
  sizeof(crazy_turtle_interfaces__srv__Switch_Response),
  false,  // has_any_key_member_
  crazy_turtle_interfaces__srv__Switch_Response__rosidl_typesupport_introspection_c__Switch_Response_message_member_array,  // message members
  crazy_turtle_interfaces__srv__Switch_Response__rosidl_typesupport_introspection_c__Switch_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  crazy_turtle_interfaces__srv__Switch_Response__rosidl_typesupport_introspection_c__Switch_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t crazy_turtle_interfaces__srv__Switch_Response__rosidl_typesupport_introspection_c__Switch_Response_message_type_support_handle = {
  0,
  &crazy_turtle_interfaces__srv__Switch_Response__rosidl_typesupport_introspection_c__Switch_Response_message_members,
  get_message_typesupport_handle_function,
  &crazy_turtle_interfaces__srv__Switch_Response__get_type_hash,
  &crazy_turtle_interfaces__srv__Switch_Response__get_type_description,
  &crazy_turtle_interfaces__srv__Switch_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_crazy_turtle_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, crazy_turtle_interfaces, srv, Switch_Response)() {
  if (!crazy_turtle_interfaces__srv__Switch_Response__rosidl_typesupport_introspection_c__Switch_Response_message_type_support_handle.typesupport_identifier) {
    crazy_turtle_interfaces__srv__Switch_Response__rosidl_typesupport_introspection_c__Switch_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &crazy_turtle_interfaces__srv__Switch_Response__rosidl_typesupport_introspection_c__Switch_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "crazy_turtle_interfaces/srv/detail/switch__rosidl_typesupport_introspection_c.h"
// already included above
// #include "crazy_turtle_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "crazy_turtle_interfaces/srv/detail/switch__functions.h"
// already included above
// #include "crazy_turtle_interfaces/srv/detail/switch__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "crazy_turtle_interfaces/srv/switch.h"
// Member `request`
// Member `response`
// already included above
// #include "crazy_turtle_interfaces/srv/detail/switch__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void crazy_turtle_interfaces__srv__Switch_Event__rosidl_typesupport_introspection_c__Switch_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  crazy_turtle_interfaces__srv__Switch_Event__init(message_memory);
}

void crazy_turtle_interfaces__srv__Switch_Event__rosidl_typesupport_introspection_c__Switch_Event_fini_function(void * message_memory)
{
  crazy_turtle_interfaces__srv__Switch_Event__fini(message_memory);
}

size_t crazy_turtle_interfaces__srv__Switch_Event__rosidl_typesupport_introspection_c__size_function__Switch_Event__request(
  const void * untyped_member)
{
  const crazy_turtle_interfaces__srv__Switch_Request__Sequence * member =
    (const crazy_turtle_interfaces__srv__Switch_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * crazy_turtle_interfaces__srv__Switch_Event__rosidl_typesupport_introspection_c__get_const_function__Switch_Event__request(
  const void * untyped_member, size_t index)
{
  const crazy_turtle_interfaces__srv__Switch_Request__Sequence * member =
    (const crazy_turtle_interfaces__srv__Switch_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * crazy_turtle_interfaces__srv__Switch_Event__rosidl_typesupport_introspection_c__get_function__Switch_Event__request(
  void * untyped_member, size_t index)
{
  crazy_turtle_interfaces__srv__Switch_Request__Sequence * member =
    (crazy_turtle_interfaces__srv__Switch_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void crazy_turtle_interfaces__srv__Switch_Event__rosidl_typesupport_introspection_c__fetch_function__Switch_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const crazy_turtle_interfaces__srv__Switch_Request * item =
    ((const crazy_turtle_interfaces__srv__Switch_Request *)
    crazy_turtle_interfaces__srv__Switch_Event__rosidl_typesupport_introspection_c__get_const_function__Switch_Event__request(untyped_member, index));
  crazy_turtle_interfaces__srv__Switch_Request * value =
    (crazy_turtle_interfaces__srv__Switch_Request *)(untyped_value);
  *value = *item;
}

void crazy_turtle_interfaces__srv__Switch_Event__rosidl_typesupport_introspection_c__assign_function__Switch_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  crazy_turtle_interfaces__srv__Switch_Request * item =
    ((crazy_turtle_interfaces__srv__Switch_Request *)
    crazy_turtle_interfaces__srv__Switch_Event__rosidl_typesupport_introspection_c__get_function__Switch_Event__request(untyped_member, index));
  const crazy_turtle_interfaces__srv__Switch_Request * value =
    (const crazy_turtle_interfaces__srv__Switch_Request *)(untyped_value);
  *item = *value;
}

bool crazy_turtle_interfaces__srv__Switch_Event__rosidl_typesupport_introspection_c__resize_function__Switch_Event__request(
  void * untyped_member, size_t size)
{
  crazy_turtle_interfaces__srv__Switch_Request__Sequence * member =
    (crazy_turtle_interfaces__srv__Switch_Request__Sequence *)(untyped_member);
  crazy_turtle_interfaces__srv__Switch_Request__Sequence__fini(member);
  return crazy_turtle_interfaces__srv__Switch_Request__Sequence__init(member, size);
}

size_t crazy_turtle_interfaces__srv__Switch_Event__rosidl_typesupport_introspection_c__size_function__Switch_Event__response(
  const void * untyped_member)
{
  const crazy_turtle_interfaces__srv__Switch_Response__Sequence * member =
    (const crazy_turtle_interfaces__srv__Switch_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * crazy_turtle_interfaces__srv__Switch_Event__rosidl_typesupport_introspection_c__get_const_function__Switch_Event__response(
  const void * untyped_member, size_t index)
{
  const crazy_turtle_interfaces__srv__Switch_Response__Sequence * member =
    (const crazy_turtle_interfaces__srv__Switch_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * crazy_turtle_interfaces__srv__Switch_Event__rosidl_typesupport_introspection_c__get_function__Switch_Event__response(
  void * untyped_member, size_t index)
{
  crazy_turtle_interfaces__srv__Switch_Response__Sequence * member =
    (crazy_turtle_interfaces__srv__Switch_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void crazy_turtle_interfaces__srv__Switch_Event__rosidl_typesupport_introspection_c__fetch_function__Switch_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const crazy_turtle_interfaces__srv__Switch_Response * item =
    ((const crazy_turtle_interfaces__srv__Switch_Response *)
    crazy_turtle_interfaces__srv__Switch_Event__rosidl_typesupport_introspection_c__get_const_function__Switch_Event__response(untyped_member, index));
  crazy_turtle_interfaces__srv__Switch_Response * value =
    (crazy_turtle_interfaces__srv__Switch_Response *)(untyped_value);
  *value = *item;
}

void crazy_turtle_interfaces__srv__Switch_Event__rosidl_typesupport_introspection_c__assign_function__Switch_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  crazy_turtle_interfaces__srv__Switch_Response * item =
    ((crazy_turtle_interfaces__srv__Switch_Response *)
    crazy_turtle_interfaces__srv__Switch_Event__rosidl_typesupport_introspection_c__get_function__Switch_Event__response(untyped_member, index));
  const crazy_turtle_interfaces__srv__Switch_Response * value =
    (const crazy_turtle_interfaces__srv__Switch_Response *)(untyped_value);
  *item = *value;
}

bool crazy_turtle_interfaces__srv__Switch_Event__rosidl_typesupport_introspection_c__resize_function__Switch_Event__response(
  void * untyped_member, size_t size)
{
  crazy_turtle_interfaces__srv__Switch_Response__Sequence * member =
    (crazy_turtle_interfaces__srv__Switch_Response__Sequence *)(untyped_member);
  crazy_turtle_interfaces__srv__Switch_Response__Sequence__fini(member);
  return crazy_turtle_interfaces__srv__Switch_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember crazy_turtle_interfaces__srv__Switch_Event__rosidl_typesupport_introspection_c__Switch_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crazy_turtle_interfaces__srv__Switch_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(crazy_turtle_interfaces__srv__Switch_Event, request),  // bytes offset in struct
    NULL,  // default value
    crazy_turtle_interfaces__srv__Switch_Event__rosidl_typesupport_introspection_c__size_function__Switch_Event__request,  // size() function pointer
    crazy_turtle_interfaces__srv__Switch_Event__rosidl_typesupport_introspection_c__get_const_function__Switch_Event__request,  // get_const(index) function pointer
    crazy_turtle_interfaces__srv__Switch_Event__rosidl_typesupport_introspection_c__get_function__Switch_Event__request,  // get(index) function pointer
    crazy_turtle_interfaces__srv__Switch_Event__rosidl_typesupport_introspection_c__fetch_function__Switch_Event__request,  // fetch(index, &value) function pointer
    crazy_turtle_interfaces__srv__Switch_Event__rosidl_typesupport_introspection_c__assign_function__Switch_Event__request,  // assign(index, value) function pointer
    crazy_turtle_interfaces__srv__Switch_Event__rosidl_typesupport_introspection_c__resize_function__Switch_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(crazy_turtle_interfaces__srv__Switch_Event, response),  // bytes offset in struct
    NULL,  // default value
    crazy_turtle_interfaces__srv__Switch_Event__rosidl_typesupport_introspection_c__size_function__Switch_Event__response,  // size() function pointer
    crazy_turtle_interfaces__srv__Switch_Event__rosidl_typesupport_introspection_c__get_const_function__Switch_Event__response,  // get_const(index) function pointer
    crazy_turtle_interfaces__srv__Switch_Event__rosidl_typesupport_introspection_c__get_function__Switch_Event__response,  // get(index) function pointer
    crazy_turtle_interfaces__srv__Switch_Event__rosidl_typesupport_introspection_c__fetch_function__Switch_Event__response,  // fetch(index, &value) function pointer
    crazy_turtle_interfaces__srv__Switch_Event__rosidl_typesupport_introspection_c__assign_function__Switch_Event__response,  // assign(index, value) function pointer
    crazy_turtle_interfaces__srv__Switch_Event__rosidl_typesupport_introspection_c__resize_function__Switch_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers crazy_turtle_interfaces__srv__Switch_Event__rosidl_typesupport_introspection_c__Switch_Event_message_members = {
  "crazy_turtle_interfaces__srv",  // message namespace
  "Switch_Event",  // message name
  3,  // number of fields
  sizeof(crazy_turtle_interfaces__srv__Switch_Event),
  false,  // has_any_key_member_
  crazy_turtle_interfaces__srv__Switch_Event__rosidl_typesupport_introspection_c__Switch_Event_message_member_array,  // message members
  crazy_turtle_interfaces__srv__Switch_Event__rosidl_typesupport_introspection_c__Switch_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  crazy_turtle_interfaces__srv__Switch_Event__rosidl_typesupport_introspection_c__Switch_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t crazy_turtle_interfaces__srv__Switch_Event__rosidl_typesupport_introspection_c__Switch_Event_message_type_support_handle = {
  0,
  &crazy_turtle_interfaces__srv__Switch_Event__rosidl_typesupport_introspection_c__Switch_Event_message_members,
  get_message_typesupport_handle_function,
  &crazy_turtle_interfaces__srv__Switch_Event__get_type_hash,
  &crazy_turtle_interfaces__srv__Switch_Event__get_type_description,
  &crazy_turtle_interfaces__srv__Switch_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_crazy_turtle_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, crazy_turtle_interfaces, srv, Switch_Event)() {
  crazy_turtle_interfaces__srv__Switch_Event__rosidl_typesupport_introspection_c__Switch_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  crazy_turtle_interfaces__srv__Switch_Event__rosidl_typesupport_introspection_c__Switch_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, crazy_turtle_interfaces, srv, Switch_Request)();
  crazy_turtle_interfaces__srv__Switch_Event__rosidl_typesupport_introspection_c__Switch_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, crazy_turtle_interfaces, srv, Switch_Response)();
  if (!crazy_turtle_interfaces__srv__Switch_Event__rosidl_typesupport_introspection_c__Switch_Event_message_type_support_handle.typesupport_identifier) {
    crazy_turtle_interfaces__srv__Switch_Event__rosidl_typesupport_introspection_c__Switch_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &crazy_turtle_interfaces__srv__Switch_Event__rosidl_typesupport_introspection_c__Switch_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "crazy_turtle_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "crazy_turtle_interfaces/srv/detail/switch__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers crazy_turtle_interfaces__srv__detail__switch__rosidl_typesupport_introspection_c__Switch_service_members = {
  "crazy_turtle_interfaces__srv",  // service namespace
  "Switch",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // crazy_turtle_interfaces__srv__detail__switch__rosidl_typesupport_introspection_c__Switch_Request_message_type_support_handle,
  NULL,  // response message
  // crazy_turtle_interfaces__srv__detail__switch__rosidl_typesupport_introspection_c__Switch_Response_message_type_support_handle
  NULL  // event_message
  // crazy_turtle_interfaces__srv__detail__switch__rosidl_typesupport_introspection_c__Switch_Response_message_type_support_handle
};


static rosidl_service_type_support_t crazy_turtle_interfaces__srv__detail__switch__rosidl_typesupport_introspection_c__Switch_service_type_support_handle = {
  0,
  &crazy_turtle_interfaces__srv__detail__switch__rosidl_typesupport_introspection_c__Switch_service_members,
  get_service_typesupport_handle_function,
  &crazy_turtle_interfaces__srv__Switch_Request__rosidl_typesupport_introspection_c__Switch_Request_message_type_support_handle,
  &crazy_turtle_interfaces__srv__Switch_Response__rosidl_typesupport_introspection_c__Switch_Response_message_type_support_handle,
  &crazy_turtle_interfaces__srv__Switch_Event__rosidl_typesupport_introspection_c__Switch_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    crazy_turtle_interfaces,
    srv,
    Switch
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    crazy_turtle_interfaces,
    srv,
    Switch
  ),
  &crazy_turtle_interfaces__srv__Switch__get_type_hash,
  &crazy_turtle_interfaces__srv__Switch__get_type_description,
  &crazy_turtle_interfaces__srv__Switch__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, crazy_turtle_interfaces, srv, Switch_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, crazy_turtle_interfaces, srv, Switch_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, crazy_turtle_interfaces, srv, Switch_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_crazy_turtle_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, crazy_turtle_interfaces, srv, Switch)(void) {
  if (!crazy_turtle_interfaces__srv__detail__switch__rosidl_typesupport_introspection_c__Switch_service_type_support_handle.typesupport_identifier) {
    crazy_turtle_interfaces__srv__detail__switch__rosidl_typesupport_introspection_c__Switch_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)crazy_turtle_interfaces__srv__detail__switch__rosidl_typesupport_introspection_c__Switch_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, crazy_turtle_interfaces, srv, Switch_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, crazy_turtle_interfaces, srv, Switch_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, crazy_turtle_interfaces, srv, Switch_Event)()->data;
  }

  return &crazy_turtle_interfaces__srv__detail__switch__rosidl_typesupport_introspection_c__Switch_service_type_support_handle;
}
