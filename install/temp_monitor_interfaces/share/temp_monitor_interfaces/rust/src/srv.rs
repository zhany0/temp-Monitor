#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};




// Corresponds to temp_monitor_interfaces__srv__Search_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Search_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub name: std::string::String,

}



impl Default for Search_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::Search_Request::default())
  }
}

impl rosidl_runtime_rs::Message for Search_Request {
  type RmwMsg = super::srv::rmw::Search_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        name: msg.name.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        name: msg.name.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      name: msg.name.to_string(),
    }
  }
}


// Corresponds to temp_monitor_interfaces__srv__Search_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Search_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub cur_temp: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub highest_temp: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub lowest_temp: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub average_temp: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub warning_times: u32,

}



impl Default for Search_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::Search_Response::default())
  }
}

impl rosidl_runtime_rs::Message for Search_Response {
  type RmwMsg = super::srv::rmw::Search_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        cur_temp: msg.cur_temp,
        highest_temp: msg.highest_temp,
        lowest_temp: msg.lowest_temp,
        average_temp: msg.average_temp,
        warning_times: msg.warning_times,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      cur_temp: msg.cur_temp,
      highest_temp: msg.highest_temp,
      lowest_temp: msg.lowest_temp,
      average_temp: msg.average_temp,
      warning_times: msg.warning_times,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      cur_temp: msg.cur_temp,
      highest_temp: msg.highest_temp,
      lowest_temp: msg.lowest_temp,
      average_temp: msg.average_temp,
      warning_times: msg.warning_times,
    }
  }
}






#[link(name = "temp_monitor_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__temp_monitor_interfaces__srv__Search() -> *const std::ffi::c_void;
}

// Corresponds to temp_monitor_interfaces__srv__Search
#[allow(missing_docs, non_camel_case_types)]
pub struct Search;

impl rosidl_runtime_rs::Service for Search {
    type Request = Search_Request;
    type Response = Search_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__temp_monitor_interfaces__srv__Search() }
    }
}


