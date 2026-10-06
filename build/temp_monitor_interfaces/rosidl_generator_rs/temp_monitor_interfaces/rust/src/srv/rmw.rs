#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



#[link(name = "temp_monitor_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__temp_monitor_interfaces__srv__Search_Request() -> *const std::ffi::c_void;
}

#[link(name = "temp_monitor_interfaces__rosidl_generator_c")]
extern "C" {
    fn temp_monitor_interfaces__srv__Search_Request__init(msg: *mut Search_Request) -> bool;
    fn temp_monitor_interfaces__srv__Search_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Search_Request>, size: usize) -> bool;
    fn temp_monitor_interfaces__srv__Search_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Search_Request>);
    fn temp_monitor_interfaces__srv__Search_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Search_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<Search_Request>) -> bool;
}

// Corresponds to temp_monitor_interfaces__srv__Search_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Search_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub name: rosidl_runtime_rs::String,

}



impl Default for Search_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !temp_monitor_interfaces__srv__Search_Request__init(&mut msg as *mut _) {
        panic!("Call to temp_monitor_interfaces__srv__Search_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Search_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { temp_monitor_interfaces__srv__Search_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { temp_monitor_interfaces__srv__Search_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { temp_monitor_interfaces__srv__Search_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Search_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Search_Request where Self: Sized {
  const TYPE_NAME: &'static str = "temp_monitor_interfaces/srv/Search_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__temp_monitor_interfaces__srv__Search_Request() }
  }
}


#[link(name = "temp_monitor_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__temp_monitor_interfaces__srv__Search_Response() -> *const std::ffi::c_void;
}

#[link(name = "temp_monitor_interfaces__rosidl_generator_c")]
extern "C" {
    fn temp_monitor_interfaces__srv__Search_Response__init(msg: *mut Search_Response) -> bool;
    fn temp_monitor_interfaces__srv__Search_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Search_Response>, size: usize) -> bool;
    fn temp_monitor_interfaces__srv__Search_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Search_Response>);
    fn temp_monitor_interfaces__srv__Search_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Search_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<Search_Response>) -> bool;
}

// Corresponds to temp_monitor_interfaces__srv__Search_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !temp_monitor_interfaces__srv__Search_Response__init(&mut msg as *mut _) {
        panic!("Call to temp_monitor_interfaces__srv__Search_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Search_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { temp_monitor_interfaces__srv__Search_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { temp_monitor_interfaces__srv__Search_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { temp_monitor_interfaces__srv__Search_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Search_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Search_Response where Self: Sized {
  const TYPE_NAME: &'static str = "temp_monitor_interfaces/srv/Search_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__temp_monitor_interfaces__srv__Search_Response() }
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


