// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from speech_recognition_msgs:srv/SpeechRecognition.idl
// generated code does not contain a copyright notice

#ifndef SPEECH_RECOGNITION_MSGS__SRV__DETAIL__SPEECH_RECOGNITION__STRUCT_H_
#define SPEECH_RECOGNITION_MSGS__SRV__DETAIL__SPEECH_RECOGNITION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'vocabulary'
#include "speech_recognition_msgs/msg/detail/vocabulary__struct.h"
// Member 'grammar'
#include "speech_recognition_msgs/msg/detail/grammar__struct.h"
// Member 'grammar_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SpeechRecognition in the package speech_recognition_msgs.
typedef struct speech_recognition_msgs__srv__SpeechRecognition_Request
{
  /// Specify isolated words candidates to be recognized (Enabled on isolated word mode)
  speech_recognition_msgs__msg__Vocabulary vocabulary;
  /// Or, specify grammar to be recognized
  speech_recognition_msgs__msg__Grammar grammar;
  /// Or, simply specify grammar name which is already registered on the server
  rosidl_runtime_c__String grammar_name;
  float duration;
  bool quiet;
  float threshold;
} speech_recognition_msgs__srv__SpeechRecognition_Request;

// Struct for a sequence of speech_recognition_msgs__srv__SpeechRecognition_Request.
typedef struct speech_recognition_msgs__srv__SpeechRecognition_Request__Sequence
{
  speech_recognition_msgs__srv__SpeechRecognition_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} speech_recognition_msgs__srv__SpeechRecognition_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
#include "speech_recognition_msgs/msg/detail/speech_recognition_candidates__struct.h"

/// Struct defined in srv/SpeechRecognition in the package speech_recognition_msgs.
typedef struct speech_recognition_msgs__srv__SpeechRecognition_Response
{
  speech_recognition_msgs__msg__SpeechRecognitionCandidates result;
} speech_recognition_msgs__srv__SpeechRecognition_Response;

// Struct for a sequence of speech_recognition_msgs__srv__SpeechRecognition_Response.
typedef struct speech_recognition_msgs__srv__SpeechRecognition_Response__Sequence
{
  speech_recognition_msgs__srv__SpeechRecognition_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} speech_recognition_msgs__srv__SpeechRecognition_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SPEECH_RECOGNITION_MSGS__SRV__DETAIL__SPEECH_RECOGNITION__STRUCT_H_
