// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from speech_recognition_msgs:msg/Grammar.idl
// generated code does not contain a copyright notice
#include "speech_recognition_msgs/msg/detail/grammar__rosidl_typesupport_fastrtps_cpp.hpp"
#include "speech_recognition_msgs/msg/detail/grammar__struct.hpp"

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
bool cdr_serialize(
  const speech_recognition_msgs::msg::PhraseRule &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  speech_recognition_msgs::msg::PhraseRule &);
size_t get_serialized_size(
  const speech_recognition_msgs::msg::PhraseRule &,
  size_t current_alignment);
size_t
max_serialized_size_PhraseRule(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace speech_recognition_msgs

namespace speech_recognition_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const speech_recognition_msgs::msg::Vocabulary &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  speech_recognition_msgs::msg::Vocabulary &);
size_t get_serialized_size(
  const speech_recognition_msgs::msg::Vocabulary &,
  size_t current_alignment);
size_t
max_serialized_size_Vocabulary(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace speech_recognition_msgs


namespace speech_recognition_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_speech_recognition_msgs
cdr_serialize(
  const speech_recognition_msgs::msg::Grammar & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: name
  cdr << ros_message.name;
  // Member: rules
  {
    size_t size = ros_message.rules.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      speech_recognition_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.rules[i],
        cdr);
    }
  }
  // Member: categories
  {
    cdr << ros_message.categories;
  }
  // Member: vocabularies
  {
    size_t size = ros_message.vocabularies.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      speech_recognition_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.vocabularies[i],
        cdr);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_speech_recognition_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  speech_recognition_msgs::msg::Grammar & ros_message)
{
  // Member: name
  cdr >> ros_message.name;

  // Member: rules
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.rules.resize(size);
    for (size_t i = 0; i < size; i++) {
      speech_recognition_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.rules[i]);
    }
  }

  // Member: categories
  {
    cdr >> ros_message.categories;
  }

  // Member: vocabularies
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.vocabularies.resize(size);
    for (size_t i = 0; i < size; i++) {
      speech_recognition_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.vocabularies[i]);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_speech_recognition_msgs
get_serialized_size(
  const speech_recognition_msgs::msg::Grammar & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.name.size() + 1);
  // Member: rules
  {
    size_t array_size = ros_message.rules.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        speech_recognition_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.rules[index], current_alignment);
    }
  }
  // Member: categories
  {
    size_t array_size = ros_message.categories.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.categories[index].size() + 1);
    }
  }
  // Member: vocabularies
  {
    size_t array_size = ros_message.vocabularies.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        speech_recognition_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.vocabularies[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_speech_recognition_msgs
max_serialized_size_Grammar(
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


  // Member: name
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: rules
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        speech_recognition_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_PhraseRule(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: categories
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

  // Member: vocabularies
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        speech_recognition_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Vocabulary(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = speech_recognition_msgs::msg::Grammar;
    is_plain =
      (
      offsetof(DataType, vocabularies) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _Grammar__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const speech_recognition_msgs::msg::Grammar *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Grammar__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<speech_recognition_msgs::msg::Grammar *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Grammar__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const speech_recognition_msgs::msg::Grammar *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Grammar__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_Grammar(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _Grammar__callbacks = {
  "speech_recognition_msgs::msg",
  "Grammar",
  _Grammar__cdr_serialize,
  _Grammar__cdr_deserialize,
  _Grammar__get_serialized_size,
  _Grammar__max_serialized_size
};

static rosidl_message_type_support_t _Grammar__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Grammar__callbacks,
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
get_message_type_support_handle<speech_recognition_msgs::msg::Grammar>()
{
  return &speech_recognition_msgs::msg::typesupport_fastrtps_cpp::_Grammar__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, speech_recognition_msgs, msg, Grammar)() {
  return &speech_recognition_msgs::msg::typesupport_fastrtps_cpp::_Grammar__handle;
}

#ifdef __cplusplus
}
#endif
