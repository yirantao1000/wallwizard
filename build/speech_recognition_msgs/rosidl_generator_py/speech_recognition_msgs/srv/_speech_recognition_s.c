// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from speech_recognition_msgs:srv/SpeechRecognition.idl
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
#include "speech_recognition_msgs/srv/detail/speech_recognition__struct.h"
#include "speech_recognition_msgs/srv/detail/speech_recognition__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

bool speech_recognition_msgs__msg__vocabulary__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * speech_recognition_msgs__msg__vocabulary__convert_to_py(void * raw_ros_message);
bool speech_recognition_msgs__msg__grammar__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * speech_recognition_msgs__msg__grammar__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool speech_recognition_msgs__srv__speech_recognition__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[74];
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
    assert(strncmp("speech_recognition_msgs.srv._speech_recognition.SpeechRecognition_Request", full_classname_dest, 73) == 0);
  }
  speech_recognition_msgs__srv__SpeechRecognition_Request * ros_message = _ros_message;
  {  // vocabulary
    PyObject * field = PyObject_GetAttrString(_pymsg, "vocabulary");
    if (!field) {
      return false;
    }
    if (!speech_recognition_msgs__msg__vocabulary__convert_from_py(field, &ros_message->vocabulary)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // grammar
    PyObject * field = PyObject_GetAttrString(_pymsg, "grammar");
    if (!field) {
      return false;
    }
    if (!speech_recognition_msgs__msg__grammar__convert_from_py(field, &ros_message->grammar)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // grammar_name
    PyObject * field = PyObject_GetAttrString(_pymsg, "grammar_name");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->grammar_name, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // duration
    PyObject * field = PyObject_GetAttrString(_pymsg, "duration");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->duration = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // quiet
    PyObject * field = PyObject_GetAttrString(_pymsg, "quiet");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->quiet = (Py_True == field);
    Py_DECREF(field);
  }
  {  // threshold
    PyObject * field = PyObject_GetAttrString(_pymsg, "threshold");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->threshold = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * speech_recognition_msgs__srv__speech_recognition__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SpeechRecognition_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("speech_recognition_msgs.srv._speech_recognition");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SpeechRecognition_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  speech_recognition_msgs__srv__SpeechRecognition_Request * ros_message = (speech_recognition_msgs__srv__SpeechRecognition_Request *)raw_ros_message;
  {  // vocabulary
    PyObject * field = NULL;
    field = speech_recognition_msgs__msg__vocabulary__convert_to_py(&ros_message->vocabulary);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "vocabulary", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // grammar
    PyObject * field = NULL;
    field = speech_recognition_msgs__msg__grammar__convert_to_py(&ros_message->grammar);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "grammar", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // grammar_name
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->grammar_name.data,
      strlen(ros_message->grammar_name.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "grammar_name", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // duration
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->duration);
    {
      int rc = PyObject_SetAttrString(_pymessage, "duration", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // quiet
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->quiet ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "quiet", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // threshold
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->threshold);
    {
      int rc = PyObject_SetAttrString(_pymessage, "threshold", field);
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
// #include "speech_recognition_msgs/srv/detail/speech_recognition__struct.h"
// already included above
// #include "speech_recognition_msgs/srv/detail/speech_recognition__functions.h"

bool speech_recognition_msgs__msg__speech_recognition_candidates__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * speech_recognition_msgs__msg__speech_recognition_candidates__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool speech_recognition_msgs__srv__speech_recognition__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[75];
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
    assert(strncmp("speech_recognition_msgs.srv._speech_recognition.SpeechRecognition_Response", full_classname_dest, 74) == 0);
  }
  speech_recognition_msgs__srv__SpeechRecognition_Response * ros_message = _ros_message;
  {  // result
    PyObject * field = PyObject_GetAttrString(_pymsg, "result");
    if (!field) {
      return false;
    }
    if (!speech_recognition_msgs__msg__speech_recognition_candidates__convert_from_py(field, &ros_message->result)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * speech_recognition_msgs__srv__speech_recognition__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SpeechRecognition_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("speech_recognition_msgs.srv._speech_recognition");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SpeechRecognition_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  speech_recognition_msgs__srv__SpeechRecognition_Response * ros_message = (speech_recognition_msgs__srv__SpeechRecognition_Response *)raw_ros_message;
  {  // result
    PyObject * field = NULL;
    field = speech_recognition_msgs__msg__speech_recognition_candidates__convert_to_py(&ros_message->result);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "result", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
