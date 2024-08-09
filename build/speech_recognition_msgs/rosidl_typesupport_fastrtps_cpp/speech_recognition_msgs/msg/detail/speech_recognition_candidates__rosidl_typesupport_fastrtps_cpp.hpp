// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from speech_recognition_msgs:msg/SpeechRecognitionCandidates.idl
// generated code does not contain a copyright notice

#ifndef SPEECH_RECOGNITION_MSGS__MSG__DETAIL__SPEECH_RECOGNITION_CANDIDATES__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define SPEECH_RECOGNITION_MSGS__MSG__DETAIL__SPEECH_RECOGNITION_CANDIDATES__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "speech_recognition_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "speech_recognition_msgs/msg/detail/speech_recognition_candidates__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace speech_recognition_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_speech_recognition_msgs
cdr_serialize(
  const speech_recognition_msgs::msg::SpeechRecognitionCandidates & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_speech_recognition_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  speech_recognition_msgs::msg::SpeechRecognitionCandidates & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_speech_recognition_msgs
get_serialized_size(
  const speech_recognition_msgs::msg::SpeechRecognitionCandidates & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_speech_recognition_msgs
max_serialized_size_SpeechRecognitionCandidates(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace speech_recognition_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_speech_recognition_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, speech_recognition_msgs, msg, SpeechRecognitionCandidates)();

#ifdef __cplusplus
}
#endif

#endif  // SPEECH_RECOGNITION_MSGS__MSG__DETAIL__SPEECH_RECOGNITION_CANDIDATES__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
