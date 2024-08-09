// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from speech_recognition_msgs:srv/SpeechRecognition.idl
// generated code does not contain a copyright notice
#include "speech_recognition_msgs/srv/detail/speech_recognition__rosidl_typesupport_fastrtps_cpp.hpp"
#include "speech_recognition_msgs/srv/detail/speech_recognition__struct.hpp"

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
bool cdr_serialize(
  const speech_recognition_msgs::msg::Grammar &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  speech_recognition_msgs::msg::Grammar &);
size_t get_serialized_size(
  const speech_recognition_msgs::msg::Grammar &,
  size_t current_alignment);
size_t
max_serialized_size_Grammar(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace speech_recognition_msgs


namespace speech_recognition_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_speech_recognition_msgs
cdr_serialize(
  const speech_recognition_msgs::srv::SpeechRecognition_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: vocabulary
  speech_recognition_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.vocabulary,
    cdr);
  // Member: grammar
  speech_recognition_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.grammar,
    cdr);
  // Member: grammar_name
  cdr << ros_message.grammar_name;
  // Member: duration
  cdr << ros_message.duration;
  // Member: quiet
  cdr << (ros_message.quiet ? true : false);
  // Member: threshold
  cdr << ros_message.threshold;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_speech_recognition_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  speech_recognition_msgs::srv::SpeechRecognition_Request & ros_message)
{
  // Member: vocabulary
  speech_recognition_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.vocabulary);

  // Member: grammar
  speech_recognition_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.grammar);

  // Member: grammar_name
  cdr >> ros_message.grammar_name;

  // Member: duration
  cdr >> ros_message.duration;

  // Member: quiet
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.quiet = tmp ? true : false;
  }

  // Member: threshold
  cdr >> ros_message.threshold;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_speech_recognition_msgs
get_serialized_size(
  const speech_recognition_msgs::srv::SpeechRecognition_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: vocabulary

  current_alignment +=
    speech_recognition_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.vocabulary, current_alignment);
  // Member: grammar

  current_alignment +=
    speech_recognition_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.grammar, current_alignment);
  // Member: grammar_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.grammar_name.size() + 1);
  // Member: duration
  {
    size_t item_size = sizeof(ros_message.duration);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: quiet
  {
    size_t item_size = sizeof(ros_message.quiet);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: threshold
  {
    size_t item_size = sizeof(ros_message.threshold);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_speech_recognition_msgs
max_serialized_size_SpeechRecognition_Request(
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


  // Member: vocabulary
  {
    size_t array_size = 1;


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

  // Member: grammar
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        speech_recognition_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Grammar(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: grammar_name
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

  // Member: duration
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: quiet
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: threshold
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = speech_recognition_msgs::srv::SpeechRecognition_Request;
    is_plain =
      (
      offsetof(DataType, threshold) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _SpeechRecognition_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const speech_recognition_msgs::srv::SpeechRecognition_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SpeechRecognition_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<speech_recognition_msgs::srv::SpeechRecognition_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SpeechRecognition_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const speech_recognition_msgs::srv::SpeechRecognition_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SpeechRecognition_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_SpeechRecognition_Request(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _SpeechRecognition_Request__callbacks = {
  "speech_recognition_msgs::srv",
  "SpeechRecognition_Request",
  _SpeechRecognition_Request__cdr_serialize,
  _SpeechRecognition_Request__cdr_deserialize,
  _SpeechRecognition_Request__get_serialized_size,
  _SpeechRecognition_Request__max_serialized_size
};

static rosidl_message_type_support_t _SpeechRecognition_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SpeechRecognition_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace speech_recognition_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_speech_recognition_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<speech_recognition_msgs::srv::SpeechRecognition_Request>()
{
  return &speech_recognition_msgs::srv::typesupport_fastrtps_cpp::_SpeechRecognition_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, speech_recognition_msgs, srv, SpeechRecognition_Request)() {
  return &speech_recognition_msgs::srv::typesupport_fastrtps_cpp::_SpeechRecognition_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace speech_recognition_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const speech_recognition_msgs::msg::SpeechRecognitionCandidates &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  speech_recognition_msgs::msg::SpeechRecognitionCandidates &);
size_t get_serialized_size(
  const speech_recognition_msgs::msg::SpeechRecognitionCandidates &,
  size_t current_alignment);
size_t
max_serialized_size_SpeechRecognitionCandidates(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace speech_recognition_msgs


namespace speech_recognition_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_speech_recognition_msgs
cdr_serialize(
  const speech_recognition_msgs::srv::SpeechRecognition_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: result
  speech_recognition_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.result,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_speech_recognition_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  speech_recognition_msgs::srv::SpeechRecognition_Response & ros_message)
{
  // Member: result
  speech_recognition_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.result);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_speech_recognition_msgs
get_serialized_size(
  const speech_recognition_msgs::srv::SpeechRecognition_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: result

  current_alignment +=
    speech_recognition_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.result, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_speech_recognition_msgs
max_serialized_size_SpeechRecognition_Response(
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


  // Member: result
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        speech_recognition_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_SpeechRecognitionCandidates(
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
    using DataType = speech_recognition_msgs::srv::SpeechRecognition_Response;
    is_plain =
      (
      offsetof(DataType, result) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _SpeechRecognition_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const speech_recognition_msgs::srv::SpeechRecognition_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SpeechRecognition_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<speech_recognition_msgs::srv::SpeechRecognition_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SpeechRecognition_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const speech_recognition_msgs::srv::SpeechRecognition_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SpeechRecognition_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_SpeechRecognition_Response(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _SpeechRecognition_Response__callbacks = {
  "speech_recognition_msgs::srv",
  "SpeechRecognition_Response",
  _SpeechRecognition_Response__cdr_serialize,
  _SpeechRecognition_Response__cdr_deserialize,
  _SpeechRecognition_Response__get_serialized_size,
  _SpeechRecognition_Response__max_serialized_size
};

static rosidl_message_type_support_t _SpeechRecognition_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SpeechRecognition_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace speech_recognition_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_speech_recognition_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<speech_recognition_msgs::srv::SpeechRecognition_Response>()
{
  return &speech_recognition_msgs::srv::typesupport_fastrtps_cpp::_SpeechRecognition_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, speech_recognition_msgs, srv, SpeechRecognition_Response)() {
  return &speech_recognition_msgs::srv::typesupport_fastrtps_cpp::_SpeechRecognition_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace speech_recognition_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _SpeechRecognition__callbacks = {
  "speech_recognition_msgs::srv",
  "SpeechRecognition",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, speech_recognition_msgs, srv, SpeechRecognition_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, speech_recognition_msgs, srv, SpeechRecognition_Response)(),
};

static rosidl_service_type_support_t _SpeechRecognition__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SpeechRecognition__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace speech_recognition_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_speech_recognition_msgs
const rosidl_service_type_support_t *
get_service_type_support_handle<speech_recognition_msgs::srv::SpeechRecognition>()
{
  return &speech_recognition_msgs::srv::typesupport_fastrtps_cpp::_SpeechRecognition__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, speech_recognition_msgs, srv, SpeechRecognition)() {
  return &speech_recognition_msgs::srv::typesupport_fastrtps_cpp::_SpeechRecognition__handle;
}

#ifdef __cplusplus
}
#endif
