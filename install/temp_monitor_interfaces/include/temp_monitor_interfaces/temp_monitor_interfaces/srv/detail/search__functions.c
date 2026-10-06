// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from temp_monitor_interfaces:srv/Search.idl
// generated code does not contain a copyright notice
#include "temp_monitor_interfaces/srv/detail/search__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

bool
temp_monitor_interfaces__srv__Search_Request__init(temp_monitor_interfaces__srv__Search_Request * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    temp_monitor_interfaces__srv__Search_Request__fini(msg);
    return false;
  }
  return true;
}

void
temp_monitor_interfaces__srv__Search_Request__fini(temp_monitor_interfaces__srv__Search_Request * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
}

bool
temp_monitor_interfaces__srv__Search_Request__are_equal(const temp_monitor_interfaces__srv__Search_Request * lhs, const temp_monitor_interfaces__srv__Search_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  return true;
}

bool
temp_monitor_interfaces__srv__Search_Request__copy(
  const temp_monitor_interfaces__srv__Search_Request * input,
  temp_monitor_interfaces__srv__Search_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  return true;
}

temp_monitor_interfaces__srv__Search_Request *
temp_monitor_interfaces__srv__Search_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  temp_monitor_interfaces__srv__Search_Request * msg = (temp_monitor_interfaces__srv__Search_Request *)allocator.allocate(sizeof(temp_monitor_interfaces__srv__Search_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(temp_monitor_interfaces__srv__Search_Request));
  bool success = temp_monitor_interfaces__srv__Search_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
temp_monitor_interfaces__srv__Search_Request__destroy(temp_monitor_interfaces__srv__Search_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    temp_monitor_interfaces__srv__Search_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
temp_monitor_interfaces__srv__Search_Request__Sequence__init(temp_monitor_interfaces__srv__Search_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  temp_monitor_interfaces__srv__Search_Request * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(temp_monitor_interfaces__srv__Search_Request)) {
      return false;
    }
    data = (temp_monitor_interfaces__srv__Search_Request *)allocator.zero_allocate(size, sizeof(temp_monitor_interfaces__srv__Search_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = temp_monitor_interfaces__srv__Search_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        temp_monitor_interfaces__srv__Search_Request__fini(&data[i - 1]);
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
temp_monitor_interfaces__srv__Search_Request__Sequence__fini(temp_monitor_interfaces__srv__Search_Request__Sequence * array)
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
      temp_monitor_interfaces__srv__Search_Request__fini(&array->data[i]);
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

temp_monitor_interfaces__srv__Search_Request__Sequence *
temp_monitor_interfaces__srv__Search_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  temp_monitor_interfaces__srv__Search_Request__Sequence * array = (temp_monitor_interfaces__srv__Search_Request__Sequence *)allocator.allocate(sizeof(temp_monitor_interfaces__srv__Search_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = temp_monitor_interfaces__srv__Search_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
temp_monitor_interfaces__srv__Search_Request__Sequence__destroy(temp_monitor_interfaces__srv__Search_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    temp_monitor_interfaces__srv__Search_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
temp_monitor_interfaces__srv__Search_Request__Sequence__are_equal(const temp_monitor_interfaces__srv__Search_Request__Sequence * lhs, const temp_monitor_interfaces__srv__Search_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!temp_monitor_interfaces__srv__Search_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
temp_monitor_interfaces__srv__Search_Request__Sequence__copy(
  const temp_monitor_interfaces__srv__Search_Request__Sequence * input,
  temp_monitor_interfaces__srv__Search_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(temp_monitor_interfaces__srv__Search_Request)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(temp_monitor_interfaces__srv__Search_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    temp_monitor_interfaces__srv__Search_Request * data =
      (temp_monitor_interfaces__srv__Search_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!temp_monitor_interfaces__srv__Search_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          temp_monitor_interfaces__srv__Search_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!temp_monitor_interfaces__srv__Search_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
temp_monitor_interfaces__srv__Search_Response__init(temp_monitor_interfaces__srv__Search_Response * msg)
{
  if (!msg) {
    return false;
  }
  // cur_temp
  // highest_temp
  // lowest_temp
  // average_temp
  // warning_times
  return true;
}

void
temp_monitor_interfaces__srv__Search_Response__fini(temp_monitor_interfaces__srv__Search_Response * msg)
{
  if (!msg) {
    return;
  }
  // cur_temp
  // highest_temp
  // lowest_temp
  // average_temp
  // warning_times
}

bool
temp_monitor_interfaces__srv__Search_Response__are_equal(const temp_monitor_interfaces__srv__Search_Response * lhs, const temp_monitor_interfaces__srv__Search_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // cur_temp
  if (lhs->cur_temp != rhs->cur_temp) {
    return false;
  }
  // highest_temp
  if (lhs->highest_temp != rhs->highest_temp) {
    return false;
  }
  // lowest_temp
  if (lhs->lowest_temp != rhs->lowest_temp) {
    return false;
  }
  // average_temp
  if (lhs->average_temp != rhs->average_temp) {
    return false;
  }
  // warning_times
  if (lhs->warning_times != rhs->warning_times) {
    return false;
  }
  return true;
}

bool
temp_monitor_interfaces__srv__Search_Response__copy(
  const temp_monitor_interfaces__srv__Search_Response * input,
  temp_monitor_interfaces__srv__Search_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // cur_temp
  output->cur_temp = input->cur_temp;
  // highest_temp
  output->highest_temp = input->highest_temp;
  // lowest_temp
  output->lowest_temp = input->lowest_temp;
  // average_temp
  output->average_temp = input->average_temp;
  // warning_times
  output->warning_times = input->warning_times;
  return true;
}

temp_monitor_interfaces__srv__Search_Response *
temp_monitor_interfaces__srv__Search_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  temp_monitor_interfaces__srv__Search_Response * msg = (temp_monitor_interfaces__srv__Search_Response *)allocator.allocate(sizeof(temp_monitor_interfaces__srv__Search_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(temp_monitor_interfaces__srv__Search_Response));
  bool success = temp_monitor_interfaces__srv__Search_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
temp_monitor_interfaces__srv__Search_Response__destroy(temp_monitor_interfaces__srv__Search_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    temp_monitor_interfaces__srv__Search_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
temp_monitor_interfaces__srv__Search_Response__Sequence__init(temp_monitor_interfaces__srv__Search_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  temp_monitor_interfaces__srv__Search_Response * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(temp_monitor_interfaces__srv__Search_Response)) {
      return false;
    }
    data = (temp_monitor_interfaces__srv__Search_Response *)allocator.zero_allocate(size, sizeof(temp_monitor_interfaces__srv__Search_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = temp_monitor_interfaces__srv__Search_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        temp_monitor_interfaces__srv__Search_Response__fini(&data[i - 1]);
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
temp_monitor_interfaces__srv__Search_Response__Sequence__fini(temp_monitor_interfaces__srv__Search_Response__Sequence * array)
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
      temp_monitor_interfaces__srv__Search_Response__fini(&array->data[i]);
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

temp_monitor_interfaces__srv__Search_Response__Sequence *
temp_monitor_interfaces__srv__Search_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  temp_monitor_interfaces__srv__Search_Response__Sequence * array = (temp_monitor_interfaces__srv__Search_Response__Sequence *)allocator.allocate(sizeof(temp_monitor_interfaces__srv__Search_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = temp_monitor_interfaces__srv__Search_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
temp_monitor_interfaces__srv__Search_Response__Sequence__destroy(temp_monitor_interfaces__srv__Search_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    temp_monitor_interfaces__srv__Search_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
temp_monitor_interfaces__srv__Search_Response__Sequence__are_equal(const temp_monitor_interfaces__srv__Search_Response__Sequence * lhs, const temp_monitor_interfaces__srv__Search_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!temp_monitor_interfaces__srv__Search_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
temp_monitor_interfaces__srv__Search_Response__Sequence__copy(
  const temp_monitor_interfaces__srv__Search_Response__Sequence * input,
  temp_monitor_interfaces__srv__Search_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(temp_monitor_interfaces__srv__Search_Response)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(temp_monitor_interfaces__srv__Search_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    temp_monitor_interfaces__srv__Search_Response * data =
      (temp_monitor_interfaces__srv__Search_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!temp_monitor_interfaces__srv__Search_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          temp_monitor_interfaces__srv__Search_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!temp_monitor_interfaces__srv__Search_Response__copy(
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
// #include "temp_monitor_interfaces/srv/detail/search__functions.h"

bool
temp_monitor_interfaces__srv__Search_Event__init(temp_monitor_interfaces__srv__Search_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    temp_monitor_interfaces__srv__Search_Event__fini(msg);
    return false;
  }
  // request
  if (!temp_monitor_interfaces__srv__Search_Request__Sequence__init(&msg->request, 0)) {
    temp_monitor_interfaces__srv__Search_Event__fini(msg);
    return false;
  }
  // response
  if (!temp_monitor_interfaces__srv__Search_Response__Sequence__init(&msg->response, 0)) {
    temp_monitor_interfaces__srv__Search_Event__fini(msg);
    return false;
  }
  return true;
}

void
temp_monitor_interfaces__srv__Search_Event__fini(temp_monitor_interfaces__srv__Search_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  temp_monitor_interfaces__srv__Search_Request__Sequence__fini(&msg->request);
  // response
  temp_monitor_interfaces__srv__Search_Response__Sequence__fini(&msg->response);
}

bool
temp_monitor_interfaces__srv__Search_Event__are_equal(const temp_monitor_interfaces__srv__Search_Event * lhs, const temp_monitor_interfaces__srv__Search_Event * rhs)
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
  if (!temp_monitor_interfaces__srv__Search_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!temp_monitor_interfaces__srv__Search_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
temp_monitor_interfaces__srv__Search_Event__copy(
  const temp_monitor_interfaces__srv__Search_Event * input,
  temp_monitor_interfaces__srv__Search_Event * output)
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
  if (!temp_monitor_interfaces__srv__Search_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!temp_monitor_interfaces__srv__Search_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

temp_monitor_interfaces__srv__Search_Event *
temp_monitor_interfaces__srv__Search_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  temp_monitor_interfaces__srv__Search_Event * msg = (temp_monitor_interfaces__srv__Search_Event *)allocator.allocate(sizeof(temp_monitor_interfaces__srv__Search_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(temp_monitor_interfaces__srv__Search_Event));
  bool success = temp_monitor_interfaces__srv__Search_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
temp_monitor_interfaces__srv__Search_Event__destroy(temp_monitor_interfaces__srv__Search_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    temp_monitor_interfaces__srv__Search_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
temp_monitor_interfaces__srv__Search_Event__Sequence__init(temp_monitor_interfaces__srv__Search_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  temp_monitor_interfaces__srv__Search_Event * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(temp_monitor_interfaces__srv__Search_Event)) {
      return false;
    }
    data = (temp_monitor_interfaces__srv__Search_Event *)allocator.zero_allocate(size, sizeof(temp_monitor_interfaces__srv__Search_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = temp_monitor_interfaces__srv__Search_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        temp_monitor_interfaces__srv__Search_Event__fini(&data[i - 1]);
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
temp_monitor_interfaces__srv__Search_Event__Sequence__fini(temp_monitor_interfaces__srv__Search_Event__Sequence * array)
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
      temp_monitor_interfaces__srv__Search_Event__fini(&array->data[i]);
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

temp_monitor_interfaces__srv__Search_Event__Sequence *
temp_monitor_interfaces__srv__Search_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  temp_monitor_interfaces__srv__Search_Event__Sequence * array = (temp_monitor_interfaces__srv__Search_Event__Sequence *)allocator.allocate(sizeof(temp_monitor_interfaces__srv__Search_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = temp_monitor_interfaces__srv__Search_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
temp_monitor_interfaces__srv__Search_Event__Sequence__destroy(temp_monitor_interfaces__srv__Search_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    temp_monitor_interfaces__srv__Search_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
temp_monitor_interfaces__srv__Search_Event__Sequence__are_equal(const temp_monitor_interfaces__srv__Search_Event__Sequence * lhs, const temp_monitor_interfaces__srv__Search_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!temp_monitor_interfaces__srv__Search_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
temp_monitor_interfaces__srv__Search_Event__Sequence__copy(
  const temp_monitor_interfaces__srv__Search_Event__Sequence * input,
  temp_monitor_interfaces__srv__Search_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(temp_monitor_interfaces__srv__Search_Event)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(temp_monitor_interfaces__srv__Search_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    temp_monitor_interfaces__srv__Search_Event * data =
      (temp_monitor_interfaces__srv__Search_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!temp_monitor_interfaces__srv__Search_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          temp_monitor_interfaces__srv__Search_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!temp_monitor_interfaces__srv__Search_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
