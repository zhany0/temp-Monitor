// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from temp_monitor_interfaces:srv/Search.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "temp_monitor_interfaces/srv/detail/search__struct.h"
#include "temp_monitor_interfaces/srv/detail/search__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool temp_monitor_interfaces__srv__search__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
    if (class_attr == NULL) {
      return false;
    }
    PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
    if (name_attr == NULL) {
      Py_DECREF(class_attr);
      return false;
    }
    PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
    if (module_attr == NULL) {
      Py_DECREF(name_attr);
      Py_DECREF(class_attr);
      return false;
    }

    // PyUnicode_1BYTE_DATA is just a cast
    assert(strncmp("temp_monitor_interfaces.srv._search", (char *)PyUnicode_1BYTE_DATA(module_attr), 35) == 0);
    assert(strncmp("Search_Request", (char *)PyUnicode_1BYTE_DATA(name_attr), 14) == 0);

    Py_DECREF(module_attr);
    Py_DECREF(name_attr);
    Py_DECREF(class_attr);
  }
  temp_monitor_interfaces__srv__Search_Request * ros_message = _ros_message;
  {  // name
    PyObject * field = PyObject_GetAttrString(_pymsg, "name");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->name, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * temp_monitor_interfaces__srv__search__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Search_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("temp_monitor_interfaces.srv._search");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Search_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  temp_monitor_interfaces__srv__Search_Request * ros_message = (temp_monitor_interfaces__srv__Search_Request *)raw_ros_message;
  {  // name
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->name.data,
      strlen(ros_message->name.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "name", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "temp_monitor_interfaces/srv/detail/search__struct.h"
// already included above
// #include "temp_monitor_interfaces/srv/detail/search__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool temp_monitor_interfaces__srv__search__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
    if (class_attr == NULL) {
      return false;
    }
    PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
    if (name_attr == NULL) {
      Py_DECREF(class_attr);
      return false;
    }
    PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
    if (module_attr == NULL) {
      Py_DECREF(name_attr);
      Py_DECREF(class_attr);
      return false;
    }

    // PyUnicode_1BYTE_DATA is just a cast
    assert(strncmp("temp_monitor_interfaces.srv._search", (char *)PyUnicode_1BYTE_DATA(module_attr), 35) == 0);
    assert(strncmp("Search_Response", (char *)PyUnicode_1BYTE_DATA(name_attr), 15) == 0);

    Py_DECREF(module_attr);
    Py_DECREF(name_attr);
    Py_DECREF(class_attr);
  }
  temp_monitor_interfaces__srv__Search_Response * ros_message = _ros_message;
  {  // cur_temp
    PyObject * field = PyObject_GetAttrString(_pymsg, "cur_temp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->cur_temp = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // highest_temp
    PyObject * field = PyObject_GetAttrString(_pymsg, "highest_temp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->highest_temp = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // lowest_temp
    PyObject * field = PyObject_GetAttrString(_pymsg, "lowest_temp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lowest_temp = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // average_temp
    PyObject * field = PyObject_GetAttrString(_pymsg, "average_temp");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->average_temp = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // warning_times
    PyObject * field = PyObject_GetAttrString(_pymsg, "warning_times");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->warning_times = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * temp_monitor_interfaces__srv__search__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Search_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("temp_monitor_interfaces.srv._search");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Search_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  temp_monitor_interfaces__srv__Search_Response * ros_message = (temp_monitor_interfaces__srv__Search_Response *)raw_ros_message;
  {  // cur_temp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->cur_temp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cur_temp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // highest_temp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->highest_temp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "highest_temp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lowest_temp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->lowest_temp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lowest_temp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // average_temp
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->average_temp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "average_temp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // warning_times
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->warning_times);
    {
      int rc = PyObject_SetAttrString(_pymessage, "warning_times", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "temp_monitor_interfaces/srv/detail/search__struct.h"
// already included above
// #include "temp_monitor_interfaces/srv/detail/search__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes


// end nested array functions include
ROSIDL_GENERATOR_C_IMPORT
bool service_msgs__msg__service_event_info__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * service_msgs__msg__service_event_info__convert_to_py(void * raw_ros_message);
bool temp_monitor_interfaces__srv__search__request__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * temp_monitor_interfaces__srv__search__request__convert_to_py(void * raw_ros_message);
bool temp_monitor_interfaces__srv__search__response__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * temp_monitor_interfaces__srv__search__response__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool temp_monitor_interfaces__srv__search__event__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
    if (class_attr == NULL) {
      return false;
    }
    PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
    if (name_attr == NULL) {
      Py_DECREF(class_attr);
      return false;
    }
    PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
    if (module_attr == NULL) {
      Py_DECREF(name_attr);
      Py_DECREF(class_attr);
      return false;
    }

    // PyUnicode_1BYTE_DATA is just a cast
    assert(strncmp("temp_monitor_interfaces.srv._search", (char *)PyUnicode_1BYTE_DATA(module_attr), 35) == 0);
    assert(strncmp("Search_Event", (char *)PyUnicode_1BYTE_DATA(name_attr), 12) == 0);

    Py_DECREF(module_attr);
    Py_DECREF(name_attr);
    Py_DECREF(class_attr);
  }
  temp_monitor_interfaces__srv__Search_Event * ros_message = _ros_message;
  {  // info
    PyObject * field = PyObject_GetAttrString(_pymsg, "info");
    if (!field) {
      return false;
    }
    if (!service_msgs__msg__service_event_info__convert_from_py(field, &ros_message->info)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // request
    PyObject * field = PyObject_GetAttrString(_pymsg, "request");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'request'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!temp_monitor_interfaces__srv__Search_Request__Sequence__init(&(ros_message->request), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create temp_monitor_interfaces__srv__Search_Request__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    temp_monitor_interfaces__srv__Search_Request * dest = ros_message->request.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!temp_monitor_interfaces__srv__search__request__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // response
    PyObject * field = PyObject_GetAttrString(_pymsg, "response");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'response'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!temp_monitor_interfaces__srv__Search_Response__Sequence__init(&(ros_message->response), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create temp_monitor_interfaces__srv__Search_Response__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    temp_monitor_interfaces__srv__Search_Response * dest = ros_message->response.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!temp_monitor_interfaces__srv__search__response__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * temp_monitor_interfaces__srv__search__event__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Search_Event */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("temp_monitor_interfaces.srv._search");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Search_Event");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  temp_monitor_interfaces__srv__Search_Event * ros_message = (temp_monitor_interfaces__srv__Search_Event *)raw_ros_message;
  {  // info
    PyObject * field = NULL;
    field = service_msgs__msg__service_event_info__convert_to_py(&ros_message->info);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "info", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // request
    PyObject * field = NULL;
    size_t size = ros_message->request.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    temp_monitor_interfaces__srv__Search_Request * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->request.data[i]);
      PyObject * pyitem = temp_monitor_interfaces__srv__search__request__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "request", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // response
    PyObject * field = NULL;
    size_t size = ros_message->response.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    temp_monitor_interfaces__srv__Search_Response * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->response.data[i]);
      PyObject * pyitem = temp_monitor_interfaces__srv__search__response__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "response", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
