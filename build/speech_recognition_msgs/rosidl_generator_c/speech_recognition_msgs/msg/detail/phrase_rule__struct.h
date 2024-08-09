// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from speech_recognition_msgs:msg/PhraseRule.idl
// generated code does not contain a copyright notice

#ifndef SPEECH_RECOGNITION_MSGS__MSG__DETAIL__PHRASE_RULE__STRUCT_H_
#define SPEECH_RECOGNITION_MSGS__MSG__DETAIL__PHRASE_RULE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'symbol'
// Member 'definition'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/PhraseRule in the package speech_recognition_msgs.
typedef struct speech_recognition_msgs__msg__PhraseRule
{
  rosidl_runtime_c__String symbol;
  rosidl_runtime_c__String__Sequence definition;
} speech_recognition_msgs__msg__PhraseRule;

// Struct for a sequence of speech_recognition_msgs__msg__PhraseRule.
typedef struct speech_recognition_msgs__msg__PhraseRule__Sequence
{
  speech_recognition_msgs__msg__PhraseRule * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} speech_recognition_msgs__msg__PhraseRule__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SPEECH_RECOGNITION_MSGS__MSG__DETAIL__PHRASE_RULE__STRUCT_H_
