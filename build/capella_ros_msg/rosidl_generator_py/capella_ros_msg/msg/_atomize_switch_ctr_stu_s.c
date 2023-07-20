// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from capella_ros_msg:msg/AtomizeSwitchCtrStu.idl
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
#include "capella_ros_msg/msg/detail/atomize_switch_ctr_stu__struct.h"
#include "capella_ros_msg/msg/detail/atomize_switch_ctr_stu__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool capella_ros_msg__msg__atomize_switch_ctr_stu__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[64];
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
    assert(strncmp("capella_ros_msg.msg._atomize_switch_ctr_stu.AtomizeSwitchCtrStu", full_classname_dest, 63) == 0);
  }
  capella_ros_msg__msg__AtomizeSwitchCtrStu * ros_message = _ros_message;
  {  // emer_button
    PyObject * field = PyObject_GetAttrString(_pymsg, "emer_button");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->emer_button = (Py_True == field);
    Py_DECREF(field);
  }
  {  // atomize_sw
    PyObject * field = PyObject_GetAttrString(_pymsg, "atomize_sw");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->atomize_sw = (Py_True == field);
    Py_DECREF(field);
  }
  {  // strength
    PyObject * field = PyObject_GetAttrString(_pymsg, "strength");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->strength = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * capella_ros_msg__msg__atomize_switch_ctr_stu__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of AtomizeSwitchCtrStu */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("capella_ros_msg.msg._atomize_switch_ctr_stu");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "AtomizeSwitchCtrStu");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  capella_ros_msg__msg__AtomizeSwitchCtrStu * ros_message = (capella_ros_msg__msg__AtomizeSwitchCtrStu *)raw_ros_message;
  {  // emer_button
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->emer_button ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "emer_button", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // atomize_sw
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->atomize_sw ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "atomize_sw", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // strength
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->strength);
    {
      int rc = PyObject_SetAttrString(_pymessage, "strength", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
