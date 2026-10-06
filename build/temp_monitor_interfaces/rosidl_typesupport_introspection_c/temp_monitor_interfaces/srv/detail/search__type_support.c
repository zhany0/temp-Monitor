// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from temp_monitor_interfaces:srv/Search.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "temp_monitor_interfaces/srv/detail/search__rosidl_typesupport_introspection_c.h"
#include "temp_monitor_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "temp_monitor_interfaces/srv/detail/search__functions.h"
#include "temp_monitor_interfaces/srv/detail/search__struct.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void temp_monitor_interfaces__srv__Search_Request__rosidl_typesupport_introspection_c__Search_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  temp_monitor_interfaces__srv__Search_Request__init(message_memory);
}

void temp_monitor_interfaces__srv__Search_Request__rosidl_typesupport_introspection_c__Search_Request_fini_function(void * message_memory)
{
  temp_monitor_interfaces__srv__Search_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember temp_monitor_interfaces__srv__Search_Request__rosidl_typesupport_introspection_c__Search_Request_message_member_array[1] = {
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(temp_monitor_interfaces__srv__Search_Request, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL,  // resize(index) function pointer
    false  // is_rosidl_buffer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers temp_monitor_interfaces__srv__Search_Request__rosidl_typesupport_introspection_c__Search_Request_message_members = {
  "temp_monitor_interfaces__srv",  // message namespace
  "Search_Request",  // message name
  1,  // number of fields
  sizeof(temp_monitor_interfaces__srv__Search_Request),
  false,  // has_any_key_member_
  temp_monitor_interfaces__srv__Search_Request__rosidl_typesupport_introspection_c__Search_Request_message_member_array,  // message members
  temp_monitor_interfaces__srv__Search_Request__rosidl_typesupport_introspection_c__Search_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  temp_monitor_interfaces__srv__Search_Request__rosidl_typesupport_introspection_c__Search_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t temp_monitor_interfaces__srv__Search_Request__rosidl_typesupport_introspection_c__Search_Request_message_type_support_handle = {
  0,
  &temp_monitor_interfaces__srv__Search_Request__rosidl_typesupport_introspection_c__Search_Request_message_members,
  get_message_typesupport_handle_function,
  &temp_monitor_interfaces__srv__Search_Request__get_type_hash,
  &temp_monitor_interfaces__srv__Search_Request__get_type_description,
  &temp_monitor_interfaces__srv__Search_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_temp_monitor_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, temp_monitor_interfaces, srv, Search_Request)() {
  if (!temp_monitor_interfaces__srv__Search_Request__rosidl_typesupport_introspection_c__Search_Request_message_type_support_handle.typesupport_identifier) {
    temp_monitor_interfaces__srv__Search_Request__rosidl_typesupport_introspection_c__Search_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &temp_monitor_interfaces__srv__Search_Request__rosidl_typesupport_introspection_c__Search_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "temp_monitor_interfaces/srv/detail/search__rosidl_typesupport_introspection_c.h"
// already included above
// #include "temp_monitor_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "temp_monitor_interfaces/srv/detail/search__functions.h"
// already included above
// #include "temp_monitor_interfaces/srv/detail/search__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void temp_monitor_interfaces__srv__Search_Response__rosidl_typesupport_introspection_c__Search_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  temp_monitor_interfaces__srv__Search_Response__init(message_memory);
}

void temp_monitor_interfaces__srv__Search_Response__rosidl_typesupport_introspection_c__Search_Response_fini_function(void * message_memory)
{
  temp_monitor_interfaces__srv__Search_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember temp_monitor_interfaces__srv__Search_Response__rosidl_typesupport_introspection_c__Search_Response_message_member_array[5] = {
  {
    "cur_temp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(temp_monitor_interfaces__srv__Search_Response, cur_temp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL,  // resize(index) function pointer
    false  // is_rosidl_buffer
  },
  {
    "highest_temp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(temp_monitor_interfaces__srv__Search_Response, highest_temp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL,  // resize(index) function pointer
    false  // is_rosidl_buffer
  },
  {
    "lowest_temp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(temp_monitor_interfaces__srv__Search_Response, lowest_temp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL,  // resize(index) function pointer
    false  // is_rosidl_buffer
  },
  {
    "average_temp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(temp_monitor_interfaces__srv__Search_Response, average_temp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL,  // resize(index) function pointer
    false  // is_rosidl_buffer
  },
  {
    "warning_times",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(temp_monitor_interfaces__srv__Search_Response, warning_times),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL,  // resize(index) function pointer
    false  // is_rosidl_buffer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers temp_monitor_interfaces__srv__Search_Response__rosidl_typesupport_introspection_c__Search_Response_message_members = {
  "temp_monitor_interfaces__srv",  // message namespace
  "Search_Response",  // message name
  5,  // number of fields
  sizeof(temp_monitor_interfaces__srv__Search_Response),
  false,  // has_any_key_member_
  temp_monitor_interfaces__srv__Search_Response__rosidl_typesupport_introspection_c__Search_Response_message_member_array,  // message members
  temp_monitor_interfaces__srv__Search_Response__rosidl_typesupport_introspection_c__Search_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  temp_monitor_interfaces__srv__Search_Response__rosidl_typesupport_introspection_c__Search_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t temp_monitor_interfaces__srv__Search_Response__rosidl_typesupport_introspection_c__Search_Response_message_type_support_handle = {
  0,
  &temp_monitor_interfaces__srv__Search_Response__rosidl_typesupport_introspection_c__Search_Response_message_members,
  get_message_typesupport_handle_function,
  &temp_monitor_interfaces__srv__Search_Response__get_type_hash,
  &temp_monitor_interfaces__srv__Search_Response__get_type_description,
  &temp_monitor_interfaces__srv__Search_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_temp_monitor_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, temp_monitor_interfaces, srv, Search_Response)() {
  if (!temp_monitor_interfaces__srv__Search_Response__rosidl_typesupport_introspection_c__Search_Response_message_type_support_handle.typesupport_identifier) {
    temp_monitor_interfaces__srv__Search_Response__rosidl_typesupport_introspection_c__Search_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &temp_monitor_interfaces__srv__Search_Response__rosidl_typesupport_introspection_c__Search_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "temp_monitor_interfaces/srv/detail/search__rosidl_typesupport_introspection_c.h"
// already included above
// #include "temp_monitor_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "temp_monitor_interfaces/srv/detail/search__functions.h"
// already included above
// #include "temp_monitor_interfaces/srv/detail/search__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "temp_monitor_interfaces/srv/search.h"
// Member `request`
// Member `response`
// already included above
// #include "temp_monitor_interfaces/srv/detail/search__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void temp_monitor_interfaces__srv__Search_Event__rosidl_typesupport_introspection_c__Search_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  temp_monitor_interfaces__srv__Search_Event__init(message_memory);
}

void temp_monitor_interfaces__srv__Search_Event__rosidl_typesupport_introspection_c__Search_Event_fini_function(void * message_memory)
{
  temp_monitor_interfaces__srv__Search_Event__fini(message_memory);
}

size_t temp_monitor_interfaces__srv__Search_Event__rosidl_typesupport_introspection_c__size_function__Search_Event__request(
  const void * untyped_member)
{
  const temp_monitor_interfaces__srv__Search_Request__Sequence * member =
    (const temp_monitor_interfaces__srv__Search_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * temp_monitor_interfaces__srv__Search_Event__rosidl_typesupport_introspection_c__get_const_function__Search_Event__request(
  const void * untyped_member, size_t index)
{
  const temp_monitor_interfaces__srv__Search_Request__Sequence * member =
    (const temp_monitor_interfaces__srv__Search_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * temp_monitor_interfaces__srv__Search_Event__rosidl_typesupport_introspection_c__get_function__Search_Event__request(
  void * untyped_member, size_t index)
{
  temp_monitor_interfaces__srv__Search_Request__Sequence * member =
    (temp_monitor_interfaces__srv__Search_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void temp_monitor_interfaces__srv__Search_Event__rosidl_typesupport_introspection_c__fetch_function__Search_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const temp_monitor_interfaces__srv__Search_Request * item =
    ((const temp_monitor_interfaces__srv__Search_Request *)
    temp_monitor_interfaces__srv__Search_Event__rosidl_typesupport_introspection_c__get_const_function__Search_Event__request(untyped_member, index));
  temp_monitor_interfaces__srv__Search_Request * value =
    (temp_monitor_interfaces__srv__Search_Request *)(untyped_value);
  *value = *item;
}

void temp_monitor_interfaces__srv__Search_Event__rosidl_typesupport_introspection_c__assign_function__Search_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  temp_monitor_interfaces__srv__Search_Request * item =
    ((temp_monitor_interfaces__srv__Search_Request *)
    temp_monitor_interfaces__srv__Search_Event__rosidl_typesupport_introspection_c__get_function__Search_Event__request(untyped_member, index));
  const temp_monitor_interfaces__srv__Search_Request * value =
    (const temp_monitor_interfaces__srv__Search_Request *)(untyped_value);
  *item = *value;
}

bool temp_monitor_interfaces__srv__Search_Event__rosidl_typesupport_introspection_c__resize_function__Search_Event__request(
  void * untyped_member, size_t size)
{
  temp_monitor_interfaces__srv__Search_Request__Sequence * member =
    (temp_monitor_interfaces__srv__Search_Request__Sequence *)(untyped_member);
  temp_monitor_interfaces__srv__Search_Request__Sequence__fini(member);
  return temp_monitor_interfaces__srv__Search_Request__Sequence__init(member, size);
}

size_t temp_monitor_interfaces__srv__Search_Event__rosidl_typesupport_introspection_c__size_function__Search_Event__response(
  const void * untyped_member)
{
  const temp_monitor_interfaces__srv__Search_Response__Sequence * member =
    (const temp_monitor_interfaces__srv__Search_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * temp_monitor_interfaces__srv__Search_Event__rosidl_typesupport_introspection_c__get_const_function__Search_Event__response(
  const void * untyped_member, size_t index)
{
  const temp_monitor_interfaces__srv__Search_Response__Sequence * member =
    (const temp_monitor_interfaces__srv__Search_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * temp_monitor_interfaces__srv__Search_Event__rosidl_typesupport_introspection_c__get_function__Search_Event__response(
  void * untyped_member, size_t index)
{
  temp_monitor_interfaces__srv__Search_Response__Sequence * member =
    (temp_monitor_interfaces__srv__Search_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void temp_monitor_interfaces__srv__Search_Event__rosidl_typesupport_introspection_c__fetch_function__Search_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const temp_monitor_interfaces__srv__Search_Response * item =
    ((const temp_monitor_interfaces__srv__Search_Response *)
    temp_monitor_interfaces__srv__Search_Event__rosidl_typesupport_introspection_c__get_const_function__Search_Event__response(untyped_member, index));
  temp_monitor_interfaces__srv__Search_Response * value =
    (temp_monitor_interfaces__srv__Search_Response *)(untyped_value);
  *value = *item;
}

void temp_monitor_interfaces__srv__Search_Event__rosidl_typesupport_introspection_c__assign_function__Search_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  temp_monitor_interfaces__srv__Search_Response * item =
    ((temp_monitor_interfaces__srv__Search_Response *)
    temp_monitor_interfaces__srv__Search_Event__rosidl_typesupport_introspection_c__get_function__Search_Event__response(untyped_member, index));
  const temp_monitor_interfaces__srv__Search_Response * value =
    (const temp_monitor_interfaces__srv__Search_Response *)(untyped_value);
  *item = *value;
}

bool temp_monitor_interfaces__srv__Search_Event__rosidl_typesupport_introspection_c__resize_function__Search_Event__response(
  void * untyped_member, size_t size)
{
  temp_monitor_interfaces__srv__Search_Response__Sequence * member =
    (temp_monitor_interfaces__srv__Search_Response__Sequence *)(untyped_member);
  temp_monitor_interfaces__srv__Search_Response__Sequence__fini(member);
  return temp_monitor_interfaces__srv__Search_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember temp_monitor_interfaces__srv__Search_Event__rosidl_typesupport_introspection_c__Search_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(temp_monitor_interfaces__srv__Search_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL,  // resize(index) function pointer
    false  // is_rosidl_buffer
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
    offsetof(temp_monitor_interfaces__srv__Search_Event, request),  // bytes offset in struct
    NULL,  // default value
    temp_monitor_interfaces__srv__Search_Event__rosidl_typesupport_introspection_c__size_function__Search_Event__request,  // size() function pointer
    temp_monitor_interfaces__srv__Search_Event__rosidl_typesupport_introspection_c__get_const_function__Search_Event__request,  // get_const(index) function pointer
    temp_monitor_interfaces__srv__Search_Event__rosidl_typesupport_introspection_c__get_function__Search_Event__request,  // get(index) function pointer
    temp_monitor_interfaces__srv__Search_Event__rosidl_typesupport_introspection_c__fetch_function__Search_Event__request,  // fetch(index, &value) function pointer
    temp_monitor_interfaces__srv__Search_Event__rosidl_typesupport_introspection_c__assign_function__Search_Event__request,  // assign(index, value) function pointer
    temp_monitor_interfaces__srv__Search_Event__rosidl_typesupport_introspection_c__resize_function__Search_Event__request,  // resize(index) function pointer
    false  // is_rosidl_buffer
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
    offsetof(temp_monitor_interfaces__srv__Search_Event, response),  // bytes offset in struct
    NULL,  // default value
    temp_monitor_interfaces__srv__Search_Event__rosidl_typesupport_introspection_c__size_function__Search_Event__response,  // size() function pointer
    temp_monitor_interfaces__srv__Search_Event__rosidl_typesupport_introspection_c__get_const_function__Search_Event__response,  // get_const(index) function pointer
    temp_monitor_interfaces__srv__Search_Event__rosidl_typesupport_introspection_c__get_function__Search_Event__response,  // get(index) function pointer
    temp_monitor_interfaces__srv__Search_Event__rosidl_typesupport_introspection_c__fetch_function__Search_Event__response,  // fetch(index, &value) function pointer
    temp_monitor_interfaces__srv__Search_Event__rosidl_typesupport_introspection_c__assign_function__Search_Event__response,  // assign(index, value) function pointer
    temp_monitor_interfaces__srv__Search_Event__rosidl_typesupport_introspection_c__resize_function__Search_Event__response,  // resize(index) function pointer
    false  // is_rosidl_buffer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers temp_monitor_interfaces__srv__Search_Event__rosidl_typesupport_introspection_c__Search_Event_message_members = {
  "temp_monitor_interfaces__srv",  // message namespace
  "Search_Event",  // message name
  3,  // number of fields
  sizeof(temp_monitor_interfaces__srv__Search_Event),
  false,  // has_any_key_member_
  temp_monitor_interfaces__srv__Search_Event__rosidl_typesupport_introspection_c__Search_Event_message_member_array,  // message members
  temp_monitor_interfaces__srv__Search_Event__rosidl_typesupport_introspection_c__Search_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  temp_monitor_interfaces__srv__Search_Event__rosidl_typesupport_introspection_c__Search_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t temp_monitor_interfaces__srv__Search_Event__rosidl_typesupport_introspection_c__Search_Event_message_type_support_handle = {
  0,
  &temp_monitor_interfaces__srv__Search_Event__rosidl_typesupport_introspection_c__Search_Event_message_members,
  get_message_typesupport_handle_function,
  &temp_monitor_interfaces__srv__Search_Event__get_type_hash,
  &temp_monitor_interfaces__srv__Search_Event__get_type_description,
  &temp_monitor_interfaces__srv__Search_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_temp_monitor_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, temp_monitor_interfaces, srv, Search_Event)() {
  temp_monitor_interfaces__srv__Search_Event__rosidl_typesupport_introspection_c__Search_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  temp_monitor_interfaces__srv__Search_Event__rosidl_typesupport_introspection_c__Search_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, temp_monitor_interfaces, srv, Search_Request)();
  temp_monitor_interfaces__srv__Search_Event__rosidl_typesupport_introspection_c__Search_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, temp_monitor_interfaces, srv, Search_Response)();
  if (!temp_monitor_interfaces__srv__Search_Event__rosidl_typesupport_introspection_c__Search_Event_message_type_support_handle.typesupport_identifier) {
    temp_monitor_interfaces__srv__Search_Event__rosidl_typesupport_introspection_c__Search_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &temp_monitor_interfaces__srv__Search_Event__rosidl_typesupport_introspection_c__Search_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "temp_monitor_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "temp_monitor_interfaces/srv/detail/search__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers temp_monitor_interfaces__srv__detail__search__rosidl_typesupport_introspection_c__Search_service_members = {
  "temp_monitor_interfaces__srv",  // service namespace
  "Search",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // temp_monitor_interfaces__srv__detail__search__rosidl_typesupport_introspection_c__Search_Request_message_type_support_handle,
  NULL,  // response message
  // temp_monitor_interfaces__srv__detail__search__rosidl_typesupport_introspection_c__Search_Response_message_type_support_handle
  NULL  // event_message
  // temp_monitor_interfaces__srv__detail__search__rosidl_typesupport_introspection_c__Search_Response_message_type_support_handle
};


static rosidl_service_type_support_t temp_monitor_interfaces__srv__detail__search__rosidl_typesupport_introspection_c__Search_service_type_support_handle = {
  0,
  &temp_monitor_interfaces__srv__detail__search__rosidl_typesupport_introspection_c__Search_service_members,
  get_service_typesupport_handle_function,
  &temp_monitor_interfaces__srv__Search_Request__rosidl_typesupport_introspection_c__Search_Request_message_type_support_handle,
  &temp_monitor_interfaces__srv__Search_Response__rosidl_typesupport_introspection_c__Search_Response_message_type_support_handle,
  &temp_monitor_interfaces__srv__Search_Event__rosidl_typesupport_introspection_c__Search_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    temp_monitor_interfaces,
    srv,
    Search
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    temp_monitor_interfaces,
    srv,
    Search
  ),
  &temp_monitor_interfaces__srv__Search__get_type_hash,
  &temp_monitor_interfaces__srv__Search__get_type_description,
  &temp_monitor_interfaces__srv__Search__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, temp_monitor_interfaces, srv, Search_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, temp_monitor_interfaces, srv, Search_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, temp_monitor_interfaces, srv, Search_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_temp_monitor_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, temp_monitor_interfaces, srv, Search)(void) {
  if (!temp_monitor_interfaces__srv__detail__search__rosidl_typesupport_introspection_c__Search_service_type_support_handle.typesupport_identifier) {
    temp_monitor_interfaces__srv__detail__search__rosidl_typesupport_introspection_c__Search_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)temp_monitor_interfaces__srv__detail__search__rosidl_typesupport_introspection_c__Search_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, temp_monitor_interfaces, srv, Search_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, temp_monitor_interfaces, srv, Search_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, temp_monitor_interfaces, srv, Search_Event)()->data;
  }

  return &temp_monitor_interfaces__srv__detail__search__rosidl_typesupport_introspection_c__Search_service_type_support_handle;
}
