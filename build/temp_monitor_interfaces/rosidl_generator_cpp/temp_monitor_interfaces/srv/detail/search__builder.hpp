// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from temp_monitor_interfaces:srv/Search.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "temp_monitor_interfaces/srv/search.hpp"


#ifndef TEMP_MONITOR_INTERFACES__SRV__DETAIL__SEARCH__BUILDER_HPP_
#define TEMP_MONITOR_INTERFACES__SRV__DETAIL__SEARCH__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "temp_monitor_interfaces/srv/detail/search__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace temp_monitor_interfaces
{

namespace srv
{

namespace builder
{

class Init_Search_Request_name
{
public:
  Init_Search_Request_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::temp_monitor_interfaces::srv::Search_Request name(::temp_monitor_interfaces::srv::Search_Request::_name_type arg)
  {
    msg_.name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::temp_monitor_interfaces::srv::Search_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::temp_monitor_interfaces::srv::Search_Request>()
{
  return temp_monitor_interfaces::srv::builder::Init_Search_Request_name();
}

}  // namespace temp_monitor_interfaces


namespace temp_monitor_interfaces
{

namespace srv
{

namespace builder
{

class Init_Search_Response_warning_times
{
public:
  explicit Init_Search_Response_warning_times(::temp_monitor_interfaces::srv::Search_Response & msg)
  : msg_(msg)
  {}
  ::temp_monitor_interfaces::srv::Search_Response warning_times(::temp_monitor_interfaces::srv::Search_Response::_warning_times_type arg)
  {
    msg_.warning_times = std::move(arg);
    return std::move(msg_);
  }

private:
  ::temp_monitor_interfaces::srv::Search_Response msg_;
};

class Init_Search_Response_average_temp
{
public:
  explicit Init_Search_Response_average_temp(::temp_monitor_interfaces::srv::Search_Response & msg)
  : msg_(msg)
  {}
  Init_Search_Response_warning_times average_temp(::temp_monitor_interfaces::srv::Search_Response::_average_temp_type arg)
  {
    msg_.average_temp = std::move(arg);
    return Init_Search_Response_warning_times(msg_);
  }

private:
  ::temp_monitor_interfaces::srv::Search_Response msg_;
};

class Init_Search_Response_lowest_temp
{
public:
  explicit Init_Search_Response_lowest_temp(::temp_monitor_interfaces::srv::Search_Response & msg)
  : msg_(msg)
  {}
  Init_Search_Response_average_temp lowest_temp(::temp_monitor_interfaces::srv::Search_Response::_lowest_temp_type arg)
  {
    msg_.lowest_temp = std::move(arg);
    return Init_Search_Response_average_temp(msg_);
  }

private:
  ::temp_monitor_interfaces::srv::Search_Response msg_;
};

class Init_Search_Response_highest_temp
{
public:
  explicit Init_Search_Response_highest_temp(::temp_monitor_interfaces::srv::Search_Response & msg)
  : msg_(msg)
  {}
  Init_Search_Response_lowest_temp highest_temp(::temp_monitor_interfaces::srv::Search_Response::_highest_temp_type arg)
  {
    msg_.highest_temp = std::move(arg);
    return Init_Search_Response_lowest_temp(msg_);
  }

private:
  ::temp_monitor_interfaces::srv::Search_Response msg_;
};

class Init_Search_Response_cur_temp
{
public:
  Init_Search_Response_cur_temp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Search_Response_highest_temp cur_temp(::temp_monitor_interfaces::srv::Search_Response::_cur_temp_type arg)
  {
    msg_.cur_temp = std::move(arg);
    return Init_Search_Response_highest_temp(msg_);
  }

private:
  ::temp_monitor_interfaces::srv::Search_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::temp_monitor_interfaces::srv::Search_Response>()
{
  return temp_monitor_interfaces::srv::builder::Init_Search_Response_cur_temp();
}

}  // namespace temp_monitor_interfaces


namespace temp_monitor_interfaces
{

namespace srv
{

namespace builder
{

class Init_Search_Event_response
{
public:
  explicit Init_Search_Event_response(::temp_monitor_interfaces::srv::Search_Event & msg)
  : msg_(msg)
  {}
  ::temp_monitor_interfaces::srv::Search_Event response(::temp_monitor_interfaces::srv::Search_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::temp_monitor_interfaces::srv::Search_Event msg_;
};

class Init_Search_Event_request
{
public:
  explicit Init_Search_Event_request(::temp_monitor_interfaces::srv::Search_Event & msg)
  : msg_(msg)
  {}
  Init_Search_Event_response request(::temp_monitor_interfaces::srv::Search_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_Search_Event_response(msg_);
  }

private:
  ::temp_monitor_interfaces::srv::Search_Event msg_;
};

class Init_Search_Event_info
{
public:
  Init_Search_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Search_Event_request info(::temp_monitor_interfaces::srv::Search_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_Search_Event_request(msg_);
  }

private:
  ::temp_monitor_interfaces::srv::Search_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::temp_monitor_interfaces::srv::Search_Event>()
{
  return temp_monitor_interfaces::srv::builder::Init_Search_Event_info();
}

}  // namespace temp_monitor_interfaces

#endif  // TEMP_MONITOR_INTERFACES__SRV__DETAIL__SEARCH__BUILDER_HPP_
