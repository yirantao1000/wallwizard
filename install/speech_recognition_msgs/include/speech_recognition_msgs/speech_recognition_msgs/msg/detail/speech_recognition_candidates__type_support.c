// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from speech_recognition_msgs:msg/SpeechRecognitionCandidates.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "speech_recognition_msgs/msg/detail/speech_recognition_candidates__rosidl_typesupport_introspection_c.h"
#include "speech_recognition_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "speech_recognition_msgs/msg/detail/speech_recognition_candidates__functions.h"
#include "speech_recognition_msgs/msg/detail/speech_recognition_candidates__struct.h"


// Include directives for member types
// Member `transcript`
#include "rosidl_runtime_c/string_functions.h"
// Member `confidence`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void speech_recognition_msgs__msg__SpeechRecognitionCandidates__rosidl_typesupport_introspection_c__SpeechRecognitionCandidates_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  speech_recognition_msgs__msg__SpeechRecognitionCandidates__init(message_memory);
}

void speech_recognition_msgs__msg__SpeechRecognitionCandidates__rosidl_typesupport_introspection_c__SpeechRecognitionCandidates_fini_function(void * message_memory)
{
  speech_recognition_msgs__msg__SpeechRecognitionCandidates__fini(message_memory);
}

size_t speech_recognition_msgs__msg__SpeechRecognitionCandidates__rosidl_typesupport_introspection_c__size_function__SpeechRecognitionCandidates__transcript(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * speech_recognition_msgs__msg__SpeechRecognitionCandidates__rosidl_typesupport_introspection_c__get_const_function__SpeechRecognitionCandidates__transcript(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * speech_recognition_msgs__msg__SpeechRecognitionCandidates__rosidl_typesupport_introspection_c__get_function__SpeechRecognitionCandidates__transcript(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void speech_recognition_msgs__msg__SpeechRecognitionCandidates__rosidl_typesupport_introspection_c__fetch_function__SpeechRecognitionCandidates__transcript(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    speech_recognition_msgs__msg__SpeechRecognitionCandidates__rosidl_typesupport_introspection_c__get_const_function__SpeechRecognitionCandidates__transcript(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void speech_recognition_msgs__msg__SpeechRecognitionCandidates__rosidl_typesupport_introspection_c__assign_function__SpeechRecognitionCandidates__transcript(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    speech_recognition_msgs__msg__SpeechRecognitionCandidates__rosidl_typesupport_introspection_c__get_function__SpeechRecognitionCandidates__transcript(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool speech_recognition_msgs__msg__SpeechRecognitionCandidates__rosidl_typesupport_introspection_c__resize_function__SpeechRecognitionCandidates__transcript(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t speech_recognition_msgs__msg__SpeechRecognitionCandidates__rosidl_typesupport_introspection_c__size_function__SpeechRecognitionCandidates__confidence(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * speech_recognition_msgs__msg__SpeechRecognitionCandidates__rosidl_typesupport_introspection_c__get_const_function__SpeechRecognitionCandidates__confidence(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * speech_recognition_msgs__msg__SpeechRecognitionCandidates__rosidl_typesupport_introspection_c__get_function__SpeechRecognitionCandidates__confidence(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void speech_recognition_msgs__msg__SpeechRecognitionCandidates__rosidl_typesupport_introspection_c__fetch_function__SpeechRecognitionCandidates__confidence(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    speech_recognition_msgs__msg__SpeechRecognitionCandidates__rosidl_typesupport_introspection_c__get_const_function__SpeechRecognitionCandidates__confidence(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void speech_recognition_msgs__msg__SpeechRecognitionCandidates__rosidl_typesupport_introspection_c__assign_function__SpeechRecognitionCandidates__confidence(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    speech_recognition_msgs__msg__SpeechRecognitionCandidates__rosidl_typesupport_introspection_c__get_function__SpeechRecognitionCandidates__confidence(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool speech_recognition_msgs__msg__SpeechRecognitionCandidates__rosidl_typesupport_introspection_c__resize_function__SpeechRecognitionCandidates__confidence(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember speech_recognition_msgs__msg__SpeechRecognitionCandidates__rosidl_typesupport_introspection_c__SpeechRecognitionCandidates_message_member_array[2] = {
  {
    "transcript",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(speech_recognition_msgs__msg__SpeechRecognitionCandidates, transcript),  // bytes offset in struct
    NULL,  // default value
    speech_recognition_msgs__msg__SpeechRecognitionCandidates__rosidl_typesupport_introspection_c__size_function__SpeechRecognitionCandidates__transcript,  // size() function pointer
    speech_recognition_msgs__msg__SpeechRecognitionCandidates__rosidl_typesupport_introspection_c__get_const_function__SpeechRecognitionCandidates__transcript,  // get_const(index) function pointer
    speech_recognition_msgs__msg__SpeechRecognitionCandidates__rosidl_typesupport_introspection_c__get_function__SpeechRecognitionCandidates__transcript,  // get(index) function pointer
    speech_recognition_msgs__msg__SpeechRecognitionCandidates__rosidl_typesupport_introspection_c__fetch_function__SpeechRecognitionCandidates__transcript,  // fetch(index, &value) function pointer
    speech_recognition_msgs__msg__SpeechRecognitionCandidates__rosidl_typesupport_introspection_c__assign_function__SpeechRecognitionCandidates__transcript,  // assign(index, value) function pointer
    speech_recognition_msgs__msg__SpeechRecognitionCandidates__rosidl_typesupport_introspection_c__resize_function__SpeechRecognitionCandidates__transcript  // resize(index) function pointer
  },
  {
    "confidence",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(speech_recognition_msgs__msg__SpeechRecognitionCandidates, confidence),  // bytes offset in struct
    NULL,  // default value
    speech_recognition_msgs__msg__SpeechRecognitionCandidates__rosidl_typesupport_introspection_c__size_function__SpeechRecognitionCandidates__confidence,  // size() function pointer
    speech_recognition_msgs__msg__SpeechRecognitionCandidates__rosidl_typesupport_introspection_c__get_const_function__SpeechRecognitionCandidates__confidence,  // get_const(index) function pointer
    speech_recognition_msgs__msg__SpeechRecognitionCandidates__rosidl_typesupport_introspection_c__get_function__SpeechRecognitionCandidates__confidence,  // get(index) function pointer
    speech_recognition_msgs__msg__SpeechRecognitionCandidates__rosidl_typesupport_introspection_c__fetch_function__SpeechRecognitionCandidates__confidence,  // fetch(index, &value) function pointer
    speech_recognition_msgs__msg__SpeechRecognitionCandidates__rosidl_typesupport_introspection_c__assign_function__SpeechRecognitionCandidates__confidence,  // assign(index, value) function pointer
    speech_recognition_msgs__msg__SpeechRecognitionCandidates__rosidl_typesupport_introspection_c__resize_function__SpeechRecognitionCandidates__confidence  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers speech_recognition_msgs__msg__SpeechRecognitionCandidates__rosidl_typesupport_introspection_c__SpeechRecognitionCandidates_message_members = {
  "speech_recognition_msgs__msg",  // message namespace
  "SpeechRecognitionCandidates",  // message name
  2,  // number of fields
  sizeof(speech_recognition_msgs__msg__SpeechRecognitionCandidates),
  speech_recognition_msgs__msg__SpeechRecognitionCandidates__rosidl_typesupport_introspection_c__SpeechRecognitionCandidates_message_member_array,  // message members
  speech_recognition_msgs__msg__SpeechRecognitionCandidates__rosidl_typesupport_introspection_c__SpeechRecognitionCandidates_init_function,  // function to initialize message memory (memory has to be allocated)
  speech_recognition_msgs__msg__SpeechRecognitionCandidates__rosidl_typesupport_introspection_c__SpeechRecognitionCandidates_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t speech_recognition_msgs__msg__SpeechRecognitionCandidates__rosidl_typesupport_introspection_c__SpeechRecognitionCandidates_message_type_support_handle = {
  0,
  &speech_recognition_msgs__msg__SpeechRecognitionCandidates__rosidl_typesupport_introspection_c__SpeechRecognitionCandidates_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_speech_recognition_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, speech_recognition_msgs, msg, SpeechRecognitionCandidates)() {
  if (!speech_recognition_msgs__msg__SpeechRecognitionCandidates__rosidl_typesupport_introspection_c__SpeechRecognitionCandidates_message_type_support_handle.typesupport_identifier) {
    speech_recognition_msgs__msg__SpeechRecognitionCandidates__rosidl_typesupport_introspection_c__SpeechRecognitionCandidates_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &speech_recognition_msgs__msg__SpeechRecognitionCandidates__rosidl_typesupport_introspection_c__SpeechRecognitionCandidates_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
