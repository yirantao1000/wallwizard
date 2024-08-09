// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from speech_recognition_msgs:msg/Grammar.idl
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
#include "speech_recognition_msgs/msg/detail/grammar__struct.h"
#include "speech_recognition_msgs/msg/detail/grammar__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "speech_recognition_msgs/msg/detail/phrase_rule__functions.h"
#include "speech_recognition_msgs/msg/detail/vocabulary__functions.h"
// end nested array functions include
bool speech_recognition_msgs__msg__phrase_rule__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * speech_recognition_msgs__msg__phrase_rule__convert_to_py(void * raw_ros_message);
bool speech_recognition_msgs__msg__vocabulary__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * speech_recognition_msgs__msg__vocabulary__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool speech_recognition_msgs__msg__grammar__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[45];
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
    assert(strncmp("speech_recognition_msgs.msg._grammar.Grammar", full_classname_dest, 44) == 0);
  }
  speech_recognition_msgs__msg__Grammar * ros_message = _ros_message;
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
  {  // rules
    PyObject * field = PyObject_GetAttrString(_pymsg, "rules");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'rules'");
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
    if (!speech_recognition_msgs__msg__PhraseRule__Sequence__init(&(ros_message->rules), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create speech_recognition_msgs__msg__PhraseRule__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    speech_recognition_msgs__msg__PhraseRule * dest = ros_message->rules.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!speech_recognition_msgs__msg__phrase_rule__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // categories
    PyObject * field = PyObject_GetAttrString(_pymsg, "categories");
    if (!field) {
      return false;
    }
    {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'categories'");
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
      if (!rosidl_runtime_c__String__Sequence__init(&(ros_message->categories), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create String__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      rosidl_runtime_c__String * dest = ros_message->categories.data;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyUnicode_Check(item));
        PyObject * encoded_item = PyUnicode_AsUTF8String(item);
        if (!encoded_item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        rosidl_runtime_c__String__assign(&dest[i], PyBytes_AS_STRING(encoded_item));
        Py_DECREF(encoded_item);
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // vocabularies
    PyObject * field = PyObject_GetAttrString(_pymsg, "vocabularies");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'vocabularies'");
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
    if (!speech_recognition_msgs__msg__Vocabulary__Sequence__init(&(ros_message->vocabularies), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create speech_recognition_msgs__msg__Vocabulary__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    speech_recognition_msgs__msg__Vocabulary * dest = ros_message->vocabularies.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!speech_recognition_msgs__msg__vocabulary__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
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
PyObject * speech_recognition_msgs__msg__grammar__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Grammar */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("speech_recognition_msgs.msg._grammar");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Grammar");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  speech_recognition_msgs__msg__Grammar * ros_message = (speech_recognition_msgs__msg__Grammar *)raw_ros_message;
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
  {  // rules
    PyObject * field = NULL;
    size_t size = ros_message->rules.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    speech_recognition_msgs__msg__PhraseRule * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->rules.data[i]);
      PyObject * pyitem = speech_recognition_msgs__msg__phrase_rule__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "rules", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // categories
    PyObject * field = NULL;
    size_t size = ros_message->categories.size;
    rosidl_runtime_c__String * src = ros_message->categories.data;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    for (size_t i = 0; i < size; ++i) {
      PyObject * decoded_item = PyUnicode_DecodeUTF8(src[i].data, strlen(src[i].data), "replace");
      if (!decoded_item) {
        return NULL;
      }
      int rc = PyList_SetItem(field, i, decoded_item);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "categories", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vocabularies
    PyObject * field = NULL;
    size_t size = ros_message->vocabularies.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    speech_recognition_msgs__msg__Vocabulary * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->vocabularies.data[i]);
      PyObject * pyitem = speech_recognition_msgs__msg__vocabulary__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "vocabularies", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
