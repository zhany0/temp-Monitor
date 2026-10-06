// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from temp_monitor_interfaces:srv/Search.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "temp_monitor_interfaces/srv/search.h"


#ifndef TEMP_MONITOR_INTERFACES__SRV__DETAIL__SEARCH__STRUCT_H_
#define TEMP_MONITOR_INTERFACES__SRV__DETAIL__SEARCH__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/Search in the package temp_monitor_interfaces.
typedef struct temp_monitor_interfaces__srv__Search_Request
{
  rosidl_runtime_c__String name;
} temp_monitor_interfaces__srv__Search_Request;

// Struct for a sequence of temp_monitor_interfaces__srv__Search_Request.
typedef struct temp_monitor_interfaces__srv__Search_Request__Sequence
{
  temp_monitor_interfaces__srv__Search_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} temp_monitor_interfaces__srv__Search_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/Search in the package temp_monitor_interfaces.
typedef struct temp_monitor_interfaces__srv__Search_Response
{
  uint32_t cur_temp;
  uint32_t highest_temp;
  uint32_t lowest_temp;
  float average_temp;
  uint32_t warning_times;
} temp_monitor_interfaces__srv__Search_Response;

// Struct for a sequence of temp_monitor_interfaces__srv__Search_Response.
typedef struct temp_monitor_interfaces__srv__Search_Response__Sequence
{
  temp_monitor_interfaces__srv__Search_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} temp_monitor_interfaces__srv__Search_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  temp_monitor_interfaces__srv__Search_Event__request__MAX_SIZE = 1
};
// response
enum
{
  temp_monitor_interfaces__srv__Search_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/Search in the package temp_monitor_interfaces.
typedef struct temp_monitor_interfaces__srv__Search_Event
{
  service_msgs__msg__ServiceEventInfo info;
  temp_monitor_interfaces__srv__Search_Request__Sequence request;
  temp_monitor_interfaces__srv__Search_Response__Sequence response;
} temp_monitor_interfaces__srv__Search_Event;

// Struct for a sequence of temp_monitor_interfaces__srv__Search_Event.
typedef struct temp_monitor_interfaces__srv__Search_Event__Sequence
{
  temp_monitor_interfaces__srv__Search_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} temp_monitor_interfaces__srv__Search_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TEMP_MONITOR_INTERFACES__SRV__DETAIL__SEARCH__STRUCT_H_
