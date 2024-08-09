// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from speech_recognition_msgs:msg/Grammar.idl
// generated code does not contain a copyright notice

#ifndef SPEECH_RECOGNITION_MSGS__MSG__DETAIL__GRAMMAR__STRUCT_H_
#define SPEECH_RECOGNITION_MSGS__MSG__DETAIL__GRAMMAR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
// Member 'categories'
#include "rosidl_runtime_c/string.h"
// Member 'rules'
#include "speech_recognition_msgs/msg/detail/phrase_rule__struct.h"
// Member 'vocabularies'
#include "speech_recognition_msgs/msg/detail/vocabulary__struct.h"

/// Struct defined in msg/Grammar in the package speech_recognition_msgs.
typedef struct speech_recognition_msgs__msg__Grammar
{
  /// register this grammar with the name
  rosidl_runtime_c__String name;
  speech_recognition_msgs__msg__PhraseRule__Sequence rules;
  rosidl_runtime_c__String__Sequence categories;
  speech_recognition_msgs__msg__Vocabulary__Sequence vocabularies;
} speech_recognition_msgs__msg__Grammar;

// Struct for a sequence of speech_recognition_msgs__msg__Grammar.
typedef struct speech_recognition_msgs__msg__Grammar__Sequence
{
  speech_recognition_msgs__msg__Grammar * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} speech_recognition_msgs__msg__Grammar__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SPEECH_RECOGNITION_MSGS__MSG__DETAIL__GRAMMAR__STRUCT_H_
