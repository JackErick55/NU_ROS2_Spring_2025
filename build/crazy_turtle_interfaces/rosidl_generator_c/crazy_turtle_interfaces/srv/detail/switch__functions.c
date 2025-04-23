// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from crazy_turtle_interfaces:srv/Switch.idl
// generated code does not contain a copyright notice
#include "crazy_turtle_interfaces/srv/detail/switch__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `mixer`
#include "turtlesim/msg/detail/pose__functions.h"

bool
crazy_turtle_interfaces__srv__Switch_Request__init(crazy_turtle_interfaces__srv__Switch_Request * msg)
{
  if (!msg) {
    return false;
  }
  // mixer
  if (!turtlesim__msg__Pose__init(&msg->mixer)) {
    crazy_turtle_interfaces__srv__Switch_Request__fini(msg);
    return false;
  }
  return true;
}

void
crazy_turtle_interfaces__srv__Switch_Request__fini(crazy_turtle_interfaces__srv__Switch_Request * msg)
{
  if (!msg) {
    return;
  }
  // mixer
  turtlesim__msg__Pose__fini(&msg->mixer);
}

bool
crazy_turtle_interfaces__srv__Switch_Request__are_equal(const crazy_turtle_interfaces__srv__Switch_Request * lhs, const crazy_turtle_interfaces__srv__Switch_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // mixer
  if (!turtlesim__msg__Pose__are_equal(
      &(lhs->mixer), &(rhs->mixer)))
  {
    return false;
  }
  return true;
}

bool
crazy_turtle_interfaces__srv__Switch_Request__copy(
  const crazy_turtle_interfaces__srv__Switch_Request * input,
  crazy_turtle_interfaces__srv__Switch_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // mixer
  if (!turtlesim__msg__Pose__copy(
      &(input->mixer), &(output->mixer)))
  {
    return false;
  }
  return true;
}

crazy_turtle_interfaces__srv__Switch_Request *
crazy_turtle_interfaces__srv__Switch_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  crazy_turtle_interfaces__srv__Switch_Request * msg = (crazy_turtle_interfaces__srv__Switch_Request *)allocator.allocate(sizeof(crazy_turtle_interfaces__srv__Switch_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(crazy_turtle_interfaces__srv__Switch_Request));
  bool success = crazy_turtle_interfaces__srv__Switch_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
crazy_turtle_interfaces__srv__Switch_Request__destroy(crazy_turtle_interfaces__srv__Switch_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    crazy_turtle_interfaces__srv__Switch_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
crazy_turtle_interfaces__srv__Switch_Request__Sequence__init(crazy_turtle_interfaces__srv__Switch_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  crazy_turtle_interfaces__srv__Switch_Request * data = NULL;

  if (size) {
    data = (crazy_turtle_interfaces__srv__Switch_Request *)allocator.zero_allocate(size, sizeof(crazy_turtle_interfaces__srv__Switch_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = crazy_turtle_interfaces__srv__Switch_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        crazy_turtle_interfaces__srv__Switch_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
crazy_turtle_interfaces__srv__Switch_Request__Sequence__fini(crazy_turtle_interfaces__srv__Switch_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      crazy_turtle_interfaces__srv__Switch_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

crazy_turtle_interfaces__srv__Switch_Request__Sequence *
crazy_turtle_interfaces__srv__Switch_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  crazy_turtle_interfaces__srv__Switch_Request__Sequence * array = (crazy_turtle_interfaces__srv__Switch_Request__Sequence *)allocator.allocate(sizeof(crazy_turtle_interfaces__srv__Switch_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = crazy_turtle_interfaces__srv__Switch_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
crazy_turtle_interfaces__srv__Switch_Request__Sequence__destroy(crazy_turtle_interfaces__srv__Switch_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    crazy_turtle_interfaces__srv__Switch_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
crazy_turtle_interfaces__srv__Switch_Request__Sequence__are_equal(const crazy_turtle_interfaces__srv__Switch_Request__Sequence * lhs, const crazy_turtle_interfaces__srv__Switch_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!crazy_turtle_interfaces__srv__Switch_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
crazy_turtle_interfaces__srv__Switch_Request__Sequence__copy(
  const crazy_turtle_interfaces__srv__Switch_Request__Sequence * input,
  crazy_turtle_interfaces__srv__Switch_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(crazy_turtle_interfaces__srv__Switch_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    crazy_turtle_interfaces__srv__Switch_Request * data =
      (crazy_turtle_interfaces__srv__Switch_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!crazy_turtle_interfaces__srv__Switch_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          crazy_turtle_interfaces__srv__Switch_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!crazy_turtle_interfaces__srv__Switch_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
crazy_turtle_interfaces__srv__Switch_Response__init(crazy_turtle_interfaces__srv__Switch_Response * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  return true;
}

void
crazy_turtle_interfaces__srv__Switch_Response__fini(crazy_turtle_interfaces__srv__Switch_Response * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
}

bool
crazy_turtle_interfaces__srv__Switch_Response__are_equal(const crazy_turtle_interfaces__srv__Switch_Response * lhs, const crazy_turtle_interfaces__srv__Switch_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  return true;
}

bool
crazy_turtle_interfaces__srv__Switch_Response__copy(
  const crazy_turtle_interfaces__srv__Switch_Response * input,
  crazy_turtle_interfaces__srv__Switch_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  return true;
}

crazy_turtle_interfaces__srv__Switch_Response *
crazy_turtle_interfaces__srv__Switch_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  crazy_turtle_interfaces__srv__Switch_Response * msg = (crazy_turtle_interfaces__srv__Switch_Response *)allocator.allocate(sizeof(crazy_turtle_interfaces__srv__Switch_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(crazy_turtle_interfaces__srv__Switch_Response));
  bool success = crazy_turtle_interfaces__srv__Switch_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
crazy_turtle_interfaces__srv__Switch_Response__destroy(crazy_turtle_interfaces__srv__Switch_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    crazy_turtle_interfaces__srv__Switch_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
crazy_turtle_interfaces__srv__Switch_Response__Sequence__init(crazy_turtle_interfaces__srv__Switch_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  crazy_turtle_interfaces__srv__Switch_Response * data = NULL;

  if (size) {
    data = (crazy_turtle_interfaces__srv__Switch_Response *)allocator.zero_allocate(size, sizeof(crazy_turtle_interfaces__srv__Switch_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = crazy_turtle_interfaces__srv__Switch_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        crazy_turtle_interfaces__srv__Switch_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
crazy_turtle_interfaces__srv__Switch_Response__Sequence__fini(crazy_turtle_interfaces__srv__Switch_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      crazy_turtle_interfaces__srv__Switch_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

crazy_turtle_interfaces__srv__Switch_Response__Sequence *
crazy_turtle_interfaces__srv__Switch_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  crazy_turtle_interfaces__srv__Switch_Response__Sequence * array = (crazy_turtle_interfaces__srv__Switch_Response__Sequence *)allocator.allocate(sizeof(crazy_turtle_interfaces__srv__Switch_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = crazy_turtle_interfaces__srv__Switch_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
crazy_turtle_interfaces__srv__Switch_Response__Sequence__destroy(crazy_turtle_interfaces__srv__Switch_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    crazy_turtle_interfaces__srv__Switch_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
crazy_turtle_interfaces__srv__Switch_Response__Sequence__are_equal(const crazy_turtle_interfaces__srv__Switch_Response__Sequence * lhs, const crazy_turtle_interfaces__srv__Switch_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!crazy_turtle_interfaces__srv__Switch_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
crazy_turtle_interfaces__srv__Switch_Response__Sequence__copy(
  const crazy_turtle_interfaces__srv__Switch_Response__Sequence * input,
  crazy_turtle_interfaces__srv__Switch_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(crazy_turtle_interfaces__srv__Switch_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    crazy_turtle_interfaces__srv__Switch_Response * data =
      (crazy_turtle_interfaces__srv__Switch_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!crazy_turtle_interfaces__srv__Switch_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          crazy_turtle_interfaces__srv__Switch_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!crazy_turtle_interfaces__srv__Switch_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "crazy_turtle_interfaces/srv/detail/switch__functions.h"

bool
crazy_turtle_interfaces__srv__Switch_Event__init(crazy_turtle_interfaces__srv__Switch_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    crazy_turtle_interfaces__srv__Switch_Event__fini(msg);
    return false;
  }
  // request
  if (!crazy_turtle_interfaces__srv__Switch_Request__Sequence__init(&msg->request, 0)) {
    crazy_turtle_interfaces__srv__Switch_Event__fini(msg);
    return false;
  }
  // response
  if (!crazy_turtle_interfaces__srv__Switch_Response__Sequence__init(&msg->response, 0)) {
    crazy_turtle_interfaces__srv__Switch_Event__fini(msg);
    return false;
  }
  return true;
}

void
crazy_turtle_interfaces__srv__Switch_Event__fini(crazy_turtle_interfaces__srv__Switch_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  crazy_turtle_interfaces__srv__Switch_Request__Sequence__fini(&msg->request);
  // response
  crazy_turtle_interfaces__srv__Switch_Response__Sequence__fini(&msg->response);
}

bool
crazy_turtle_interfaces__srv__Switch_Event__are_equal(const crazy_turtle_interfaces__srv__Switch_Event * lhs, const crazy_turtle_interfaces__srv__Switch_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!crazy_turtle_interfaces__srv__Switch_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!crazy_turtle_interfaces__srv__Switch_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
crazy_turtle_interfaces__srv__Switch_Event__copy(
  const crazy_turtle_interfaces__srv__Switch_Event * input,
  crazy_turtle_interfaces__srv__Switch_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!crazy_turtle_interfaces__srv__Switch_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!crazy_turtle_interfaces__srv__Switch_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

crazy_turtle_interfaces__srv__Switch_Event *
crazy_turtle_interfaces__srv__Switch_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  crazy_turtle_interfaces__srv__Switch_Event * msg = (crazy_turtle_interfaces__srv__Switch_Event *)allocator.allocate(sizeof(crazy_turtle_interfaces__srv__Switch_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(crazy_turtle_interfaces__srv__Switch_Event));
  bool success = crazy_turtle_interfaces__srv__Switch_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
crazy_turtle_interfaces__srv__Switch_Event__destroy(crazy_turtle_interfaces__srv__Switch_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    crazy_turtle_interfaces__srv__Switch_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
crazy_turtle_interfaces__srv__Switch_Event__Sequence__init(crazy_turtle_interfaces__srv__Switch_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  crazy_turtle_interfaces__srv__Switch_Event * data = NULL;

  if (size) {
    data = (crazy_turtle_interfaces__srv__Switch_Event *)allocator.zero_allocate(size, sizeof(crazy_turtle_interfaces__srv__Switch_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = crazy_turtle_interfaces__srv__Switch_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        crazy_turtle_interfaces__srv__Switch_Event__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
crazy_turtle_interfaces__srv__Switch_Event__Sequence__fini(crazy_turtle_interfaces__srv__Switch_Event__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      crazy_turtle_interfaces__srv__Switch_Event__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

crazy_turtle_interfaces__srv__Switch_Event__Sequence *
crazy_turtle_interfaces__srv__Switch_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  crazy_turtle_interfaces__srv__Switch_Event__Sequence * array = (crazy_turtle_interfaces__srv__Switch_Event__Sequence *)allocator.allocate(sizeof(crazy_turtle_interfaces__srv__Switch_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = crazy_turtle_interfaces__srv__Switch_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
crazy_turtle_interfaces__srv__Switch_Event__Sequence__destroy(crazy_turtle_interfaces__srv__Switch_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    crazy_turtle_interfaces__srv__Switch_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
crazy_turtle_interfaces__srv__Switch_Event__Sequence__are_equal(const crazy_turtle_interfaces__srv__Switch_Event__Sequence * lhs, const crazy_turtle_interfaces__srv__Switch_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!crazy_turtle_interfaces__srv__Switch_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
crazy_turtle_interfaces__srv__Switch_Event__Sequence__copy(
  const crazy_turtle_interfaces__srv__Switch_Event__Sequence * input,
  crazy_turtle_interfaces__srv__Switch_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(crazy_turtle_interfaces__srv__Switch_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    crazy_turtle_interfaces__srv__Switch_Event * data =
      (crazy_turtle_interfaces__srv__Switch_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!crazy_turtle_interfaces__srv__Switch_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          crazy_turtle_interfaces__srv__Switch_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!crazy_turtle_interfaces__srv__Switch_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
