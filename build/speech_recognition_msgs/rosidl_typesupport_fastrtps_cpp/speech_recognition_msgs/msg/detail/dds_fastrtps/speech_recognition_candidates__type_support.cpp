// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from speech_recognition_msgs:msg/SpeechRecognitionCandidates.idl
// generated code does not contain a copyright notice
#include "speech_recognition_msgs/msg/detail/speech_recognition_candidates__rosidl_typesupport_fastrtps_cpp.hpp"
#include "speech_recognition_msgs/msg/detail/speech_recognition_candidates__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

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
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: transcript
  {
    cdr << ros_message.transcript;
  }
  // Member: confidence
  {
    cdr << ros_message.confidence;
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_speech_recognition_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  speech_recognition_msgs::msg::SpeechRecognitionCandidates & ros_message)
{
  // Member: transcript
  {
    cdr >> ros_message.transcript;
  }

  // Member: confidence
  {
    cdr >> ros_message.confidence;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_speech_recognition_msgs
get_serialized_size(
  const speech_recognition_msgs::msg::SpeechRecognitionCandidates & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: transcript
  {
    size_t array_size = ros_message.transcript.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.transcript[index].size() + 1);
    }
  }
  // Member: confidence
  {
    size_t array_size = ros_message.confidence.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.confidence[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_speech_recognition_msgs
max_serialized_size_SpeechRecognitionCandidates(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: transcript
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: confidence
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = speech_recognition_msgs::msg::SpeechRecognitionCandidates;
    is_plain =
      (
      offsetof(DataType, confidence) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _SpeechRecognitionCandidates__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const speech_recognition_msgs::msg::SpeechRecognitionCandidates *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SpeechRecognitionCandidates__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<speech_recognition_msgs::msg::SpeechRecognitionCandidates *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SpeechRecognitionCandidates__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const speech_recognition_msgs::msg::SpeechRecognitionCandidates *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SpeechRecognitionCandidates__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_SpeechRecognitionCandidates(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _SpeechRecognitionCandidates__callbacks = {
  "speech_recognition_msgs::msg",
  "SpeechRecognitionCandidates",
  _SpeechRecognitionCandidates__cdr_serialize,
  _SpeechRecognitionCandidates__cdr_deserialize,
  _SpeechRecognitionCandidates__get_serialized_size,
  _SpeechRecognitionCandidates__max_serialized_size
};

static rosidl_message_type_support_t _SpeechRecognitionCandidates__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SpeechRecognitionCandidates__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace speech_recognition_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_speech_recognition_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<speech_recognition_msgs::msg::SpeechRecognitionCandidates>()
{
  return &speech_recognition_msgs::msg::typesupport_fastrtps_cpp::_SpeechRecognitionCandidates__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, speech_recognition_msgs, msg, SpeechRecognitionCandidates)() {
  return &speech_recognition_msgs::msg::typesupport_fastrtps_cpp::_SpeechRecognitionCandidates__handle;
}

#ifdef __cplusplus
}
#endif
