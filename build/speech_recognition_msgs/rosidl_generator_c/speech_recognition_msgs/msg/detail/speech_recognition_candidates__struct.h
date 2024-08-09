// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from speech_recognition_msgs:msg/SpeechRecognitionCandidates.idl
// generated code does not contain a copyright notice

#ifndef SPEECH_RECOGNITION_MSGS__MSG__DETAIL__SPEECH_RECOGNITION_CANDIDATES__STRUCT_H_
#define SPEECH_RECOGNITION_MSGS__MSG__DETAIL__SPEECH_RECOGNITION_CANDIDATES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'transcript'
#include "rosidl_runtime_c/string.h"
// Member 'confidence'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/SpeechRecognitionCandidates in the package speech_recognition_msgs.
typedef struct speech_recognition_msgs__msg__SpeechRecognitionCandidates
{
  /// candidate words of speech-to-text API
  rosidl_runtime_c__String__Sequence transcript;
  /// confidence of transcript
  rosidl_runtime_c__float__Sequence confidence;
} speech_recognition_msgs__msg__SpeechRecognitionCandidates;

// Struct for a sequence of speech_recognition_msgs__msg__SpeechRecognitionCandidates.
typedef struct speech_recognition_msgs__msg__SpeechRecognitionCandidates__Sequence
{
  speech_recognition_msgs__msg__SpeechRecognitionCandidates * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} speech_recognition_msgs__msg__SpeechRecognitionCandidates__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SPEECH_RECOGNITION_MSGS__MSG__DETAIL__SPEECH_RECOGNITION_CANDIDATES__STRUCT_H_
