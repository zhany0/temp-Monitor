// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from temp_monitor_interfaces:srv/Search.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "temp_monitor_interfaces/srv/search.hpp"


#ifndef TEMP_MONITOR_INTERFACES__SRV__DETAIL__SEARCH__TRAITS_HPP_
#define TEMP_MONITOR_INTERFACES__SRV__DETAIL__SEARCH__TRAITS_HPP_

#include <stdint.h>

#include <array>
#include <cstddef>
#include <sstream>
#include <string>
#include <string_view>
#include <tuple>
#include <type_traits>
#include <utility>

#include "temp_monitor_interfaces/srv/detail/search__struct.hpp"
#include "rosidl_runtime_cpp/buffer__traits.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace temp_monitor_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const Search_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Search_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Search_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, temp_monitor_interfaces::srv::Search_Request>, int> = 0>
constexpr auto as_tuple_ref(T && msg)
{
  return std::forward_as_tuple(std::forward<T>(msg).name);
}

}  // namespace srv

}  // namespace temp_monitor_interfaces

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<temp_monitor_interfaces::srv::Search_Request>()
{
  return "temp_monitor_interfaces::srv::Search_Request";
}

template<>
constexpr const char * name<temp_monitor_interfaces::srv::Search_Request>()
{
  return "temp_monitor_interfaces/srv/Search_Request";
}

template<>
struct has_fixed_size<temp_monitor_interfaces::srv::Search_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<temp_monitor_interfaces::srv::Search_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<temp_monitor_interfaces::srv::Search_Request>
  : std::true_type {};

template<>
struct MessageTraits<temp_monitor_interfaces::srv::Search_Request>
{
  static constexpr std::size_t member_count = 1;
  static constexpr std::array<std::string_view, member_count> member_names = {
    "name",
  };
};

}  // namespace rosidl_generator_traits

namespace temp_monitor_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const Search_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: cur_temp
  {
    out << "cur_temp: ";
    rosidl_generator_traits::value_to_yaml(msg.cur_temp, out);
    out << ", ";
  }

  // member: highest_temp
  {
    out << "highest_temp: ";
    rosidl_generator_traits::value_to_yaml(msg.highest_temp, out);
    out << ", ";
  }

  // member: lowest_temp
  {
    out << "lowest_temp: ";
    rosidl_generator_traits::value_to_yaml(msg.lowest_temp, out);
    out << ", ";
  }

  // member: average_temp
  {
    out << "average_temp: ";
    rosidl_generator_traits::value_to_yaml(msg.average_temp, out);
    out << ", ";
  }

  // member: warning_times
  {
    out << "warning_times: ";
    rosidl_generator_traits::value_to_yaml(msg.warning_times, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Search_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: cur_temp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cur_temp: ";
    rosidl_generator_traits::value_to_yaml(msg.cur_temp, out);
    out << "\n";
  }

  // member: highest_temp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "highest_temp: ";
    rosidl_generator_traits::value_to_yaml(msg.highest_temp, out);
    out << "\n";
  }

  // member: lowest_temp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lowest_temp: ";
    rosidl_generator_traits::value_to_yaml(msg.lowest_temp, out);
    out << "\n";
  }

  // member: average_temp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "average_temp: ";
    rosidl_generator_traits::value_to_yaml(msg.average_temp, out);
    out << "\n";
  }

  // member: warning_times
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "warning_times: ";
    rosidl_generator_traits::value_to_yaml(msg.warning_times, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Search_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, temp_monitor_interfaces::srv::Search_Response>, int> = 0>
constexpr auto as_tuple_ref(T && msg)
{
  return std::forward_as_tuple(
    std::forward<T>(msg).cur_temp,
    std::forward<T>(msg).highest_temp,
    std::forward<T>(msg).lowest_temp,
    std::forward<T>(msg).average_temp,
    std::forward<T>(msg).warning_times);
}

}  // namespace srv

}  // namespace temp_monitor_interfaces

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<temp_monitor_interfaces::srv::Search_Response>()
{
  return "temp_monitor_interfaces::srv::Search_Response";
}

template<>
constexpr const char * name<temp_monitor_interfaces::srv::Search_Response>()
{
  return "temp_monitor_interfaces/srv/Search_Response";
}

template<>
struct has_fixed_size<temp_monitor_interfaces::srv::Search_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<temp_monitor_interfaces::srv::Search_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<temp_monitor_interfaces::srv::Search_Response>
  : std::true_type {};

template<>
struct MessageTraits<temp_monitor_interfaces::srv::Search_Response>
{
  static constexpr std::size_t member_count = 5;
  static constexpr std::array<std::string_view, member_count> member_names = {
    "cur_temp",
    "highest_temp",
    "lowest_temp",
    "average_temp",
    "warning_times",
  };
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace temp_monitor_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const Search_Event & msg,
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
  const Search_Event & msg,
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

inline std::string to_yaml(const Search_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, temp_monitor_interfaces::srv::Search_Event>, int> = 0>
constexpr auto as_tuple_ref(T && msg)
{
  return std::forward_as_tuple(
    std::forward<T>(msg).info,
    std::forward<T>(msg).request,
    std::forward<T>(msg).response);
}

}  // namespace srv

}  // namespace temp_monitor_interfaces

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<temp_monitor_interfaces::srv::Search_Event>()
{
  return "temp_monitor_interfaces::srv::Search_Event";
}

template<>
constexpr const char * name<temp_monitor_interfaces::srv::Search_Event>()
{
  return "temp_monitor_interfaces/srv/Search_Event";
}

template<>
struct has_fixed_size<temp_monitor_interfaces::srv::Search_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<temp_monitor_interfaces::srv::Search_Event>
  : std::integral_constant<bool, has_bounded_size<service_msgs::msg::ServiceEventInfo>::value && has_bounded_size<temp_monitor_interfaces::srv::Search_Request>::value && has_bounded_size<temp_monitor_interfaces::srv::Search_Response>::value> {};

template<>
struct is_message<temp_monitor_interfaces::srv::Search_Event>
  : std::true_type {};

template<>
struct MessageTraits<temp_monitor_interfaces::srv::Search_Event>
{
  static constexpr std::size_t member_count = 3;
  static constexpr std::array<std::string_view, member_count> member_names = {
    "info",
    "request",
    "response",
  };
};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<temp_monitor_interfaces::srv::Search>()
{
  return "temp_monitor_interfaces::srv::Search";
}

template<>
constexpr const char * name<temp_monitor_interfaces::srv::Search>()
{
  return "temp_monitor_interfaces/srv/Search";
}

template<>
struct has_fixed_size<temp_monitor_interfaces::srv::Search>
  : std::integral_constant<
    bool,
    has_fixed_size<temp_monitor_interfaces::srv::Search_Request>::value &&
    has_fixed_size<temp_monitor_interfaces::srv::Search_Response>::value
  >
{
};

template<>
struct has_bounded_size<temp_monitor_interfaces::srv::Search>
  : std::integral_constant<
    bool,
    has_bounded_size<temp_monitor_interfaces::srv::Search_Request>::value &&
    has_bounded_size<temp_monitor_interfaces::srv::Search_Response>::value
  >
{
};

template<>
struct is_service<temp_monitor_interfaces::srv::Search>
  : std::true_type
{
};

template<>
struct is_service_request<temp_monitor_interfaces::srv::Search_Request>
  : std::true_type
{
};

template<>
struct is_service_response<temp_monitor_interfaces::srv::Search_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // TEMP_MONITOR_INTERFACES__SRV__DETAIL__SEARCH__TRAITS_HPP_
