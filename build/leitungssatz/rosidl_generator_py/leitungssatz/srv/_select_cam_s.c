// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from leitungssatz:srv/SelectCam.idl
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
#include "leitungssatz/srv/detail/select_cam__struct.h"
#include "leitungssatz/srv/detail/select_cam__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool leitungssatz__srv__select_cam__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[47];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("leitungssatz.srv._select_cam.SelectCam_Request", full_classname_dest, 46) == 0);
  }
  leitungssatz__srv__SelectCam_Request * ros_message = _ros_message;
  {  // camera_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "camera_type");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->camera_type, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // camera_index
    PyObject * field = PyObject_GetAttrString(_pymsg, "camera_index");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->camera_index = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * leitungssatz__srv__select_cam__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SelectCam_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("leitungssatz.srv._select_cam");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SelectCam_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  leitungssatz__srv__SelectCam_Request * ros_message = (leitungssatz__srv__SelectCam_Request *)raw_ros_message;
  {  // camera_type
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->camera_type.data,
      strlen(ros_message->camera_type.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "camera_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // camera_index
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->camera_index);
    {
      int rc = PyObject_SetAttrString(_pymessage, "camera_index", field);
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
// #include "leitungssatz/srv/detail/select_cam__struct.h"
// already included above
// #include "leitungssatz/srv/detail/select_cam__functions.h"

// already included above
// #include "rosidl_runtime_c/string.h"
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool leitungssatz__msg__vector_resolution__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * leitungssatz__msg__vector_resolution__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool leitungssatz__srv__select_cam__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[48];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("leitungssatz.srv._select_cam.SelectCam_Response", full_classname_dest, 47) == 0);
  }
  leitungssatz__srv__SelectCam_Response * ros_message = _ros_message;
  {  // available_resolutions
    PyObject * field = PyObject_GetAttrString(_pymsg, "available_resolutions");
    if (!field) {
      return false;
    }
    if (!leitungssatz__msg__vector_resolution__convert_from_py(field, &ros_message->available_resolutions)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // resolution_idx
    PyObject * field = PyObject_GetAttrString(_pymsg, "resolution_idx");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->resolution_idx = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // success
    PyObject * field = PyObject_GetAttrString(_pymsg, "success");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->success = (Py_True == field);
    Py_DECREF(field);
  }
  {  // message
    PyObject * field = PyObject_GetAttrString(_pymsg, "message");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->message, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * leitungssatz__srv__select_cam__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SelectCam_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("leitungssatz.srv._select_cam");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SelectCam_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  leitungssatz__srv__SelectCam_Response * ros_message = (leitungssatz__srv__SelectCam_Response *)raw_ros_message;
  {  // available_resolutions
    PyObject * field = NULL;
    field = leitungssatz__msg__vector_resolution__convert_to_py(&ros_message->available_resolutions);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "available_resolutions", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // resolution_idx
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->resolution_idx);
    {
      int rc = PyObject_SetAttrString(_pymessage, "resolution_idx", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // success
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->success ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "success", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // message
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->message.data,
      strlen(ros_message->message.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "message", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
