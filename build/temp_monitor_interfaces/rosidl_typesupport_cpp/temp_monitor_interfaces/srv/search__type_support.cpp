// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from temp_monitor_interfaces:srv/Search.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "temp_monitor_interfaces/srv/detail/search__functions.h"
#include "temp_monitor_interfaces/srv/detail/search__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace temp_monitor_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _Search_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Search_Request_type_support_ids_t;

static const _Search_Request_type_support_ids_t _Search_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Search_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Search_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Search_Request_type_support_symbol_names_t _Search_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, temp_monitor_interfaces, srv, Search_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, temp_monitor_interfaces, srv, Search_Request)),
  }
};

typedef struct _Search_Request_type_support_data_t
{
  void * data[2];
} _Search_Request_type_support_data_t;

static _Search_Request_type_support_data_t _Search_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Search_Request_message_typesupport_map = {
  2,
  "temp_monitor_interfaces",
  &_Search_Request_message_typesupport_ids.typesupport_identifier[0],
  &_Search_Request_message_typesupport_symbol_names.symbol_name[0],
  &_Search_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Search_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Search_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &temp_monitor_interfaces__srv__Search_Request__get_type_hash,
  &temp_monitor_interfaces__srv__Search_Request__get_type_description,
  &temp_monitor_interfaces__srv__Search_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace temp_monitor_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<temp_monitor_interfaces::srv::Search_Request>()
{
  return &::temp_monitor_interfaces::srv::rosidl_typesupport_cpp::Search_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, temp_monitor_interfaces, srv, Search_Request)() {
  return get_message_type_support_handle<temp_monitor_interfaces::srv::Search_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "temp_monitor_interfaces/srv/detail/search__functions.h"
// already included above
// #include "temp_monitor_interfaces/srv/detail/search__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace temp_monitor_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _Search_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Search_Response_type_support_ids_t;

static const _Search_Response_type_support_ids_t _Search_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Search_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Search_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Search_Response_type_support_symbol_names_t _Search_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, temp_monitor_interfaces, srv, Search_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, temp_monitor_interfaces, srv, Search_Response)),
  }
};

typedef struct _Search_Response_type_support_data_t
{
  void * data[2];
} _Search_Response_type_support_data_t;

static _Search_Response_type_support_data_t _Search_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Search_Response_message_typesupport_map = {
  2,
  "temp_monitor_interfaces",
  &_Search_Response_message_typesupport_ids.typesupport_identifier[0],
  &_Search_Response_message_typesupport_symbol_names.symbol_name[0],
  &_Search_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Search_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Search_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &temp_monitor_interfaces__srv__Search_Response__get_type_hash,
  &temp_monitor_interfaces__srv__Search_Response__get_type_description,
  &temp_monitor_interfaces__srv__Search_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace temp_monitor_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<temp_monitor_interfaces::srv::Search_Response>()
{
  return &::temp_monitor_interfaces::srv::rosidl_typesupport_cpp::Search_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, temp_monitor_interfaces, srv, Search_Response)() {
  return get_message_type_support_handle<temp_monitor_interfaces::srv::Search_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "temp_monitor_interfaces/srv/detail/search__functions.h"
// already included above
// #include "temp_monitor_interfaces/srv/detail/search__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace temp_monitor_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _Search_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Search_Event_type_support_ids_t;

static const _Search_Event_type_support_ids_t _Search_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Search_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Search_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Search_Event_type_support_symbol_names_t _Search_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, temp_monitor_interfaces, srv, Search_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, temp_monitor_interfaces, srv, Search_Event)),
  }
};

typedef struct _Search_Event_type_support_data_t
{
  void * data[2];
} _Search_Event_type_support_data_t;

static _Search_Event_type_support_data_t _Search_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Search_Event_message_typesupport_map = {
  2,
  "temp_monitor_interfaces",
  &_Search_Event_message_typesupport_ids.typesupport_identifier[0],
  &_Search_Event_message_typesupport_symbol_names.symbol_name[0],
  &_Search_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Search_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Search_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &temp_monitor_interfaces__srv__Search_Event__get_type_hash,
  &temp_monitor_interfaces__srv__Search_Event__get_type_description,
  &temp_monitor_interfaces__srv__Search_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace temp_monitor_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<temp_monitor_interfaces::srv::Search_Event>()
{
  return &::temp_monitor_interfaces::srv::rosidl_typesupport_cpp::Search_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, temp_monitor_interfaces, srv, Search_Event)() {
  return get_message_type_support_handle<temp_monitor_interfaces::srv::Search_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "temp_monitor_interfaces/srv/detail/search__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace temp_monitor_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _Search_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Search_type_support_ids_t;

static const _Search_type_support_ids_t _Search_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Search_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Search_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Search_type_support_symbol_names_t _Search_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, temp_monitor_interfaces, srv, Search)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, temp_monitor_interfaces, srv, Search)),
  }
};

typedef struct _Search_type_support_data_t
{
  void * data[2];
} _Search_type_support_data_t;

static _Search_type_support_data_t _Search_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Search_service_typesupport_map = {
  2,
  "temp_monitor_interfaces",
  &_Search_service_typesupport_ids.typesupport_identifier[0],
  &_Search_service_typesupport_symbol_names.symbol_name[0],
  &_Search_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t Search_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Search_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<temp_monitor_interfaces::srv::Search_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<temp_monitor_interfaces::srv::Search_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<temp_monitor_interfaces::srv::Search_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<temp_monitor_interfaces::srv::Search>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<temp_monitor_interfaces::srv::Search>,
  &temp_monitor_interfaces__srv__Search__get_type_hash,
  &temp_monitor_interfaces__srv__Search__get_type_description,
  &temp_monitor_interfaces__srv__Search__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace temp_monitor_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<temp_monitor_interfaces::srv::Search>()
{
  return &::temp_monitor_interfaces::srv::rosidl_typesupport_cpp::Search_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, temp_monitor_interfaces, srv, Search)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<temp_monitor_interfaces::srv::Search>();
}

#ifdef __cplusplus
}
#endif
