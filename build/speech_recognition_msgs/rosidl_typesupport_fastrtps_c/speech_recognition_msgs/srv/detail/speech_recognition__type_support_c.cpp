// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from speech_recognition_msgs:srv/SpeechRecognition.idl
// generated code does not contain a copyright notice
#include "speech_recognition_msgs/srv/detail/speech_recognition__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "speech_recognition_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "speech_recognition_msgs/srv/detail/speech_recognition__struct.h"
#include "speech_recognition_msgs/srv/detail/speech_recognition__functions.h"
#include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // grammar_name
#include "rosidl_runtime_c/string_functions.h"  // grammar_name
#include "speech_recognition_msgs/msg/detail/grammar__functions.h"  // grammar
#include "speech_recognition_msgs/msg/detail/vocabulary__functions.h"  // vocabulary

// forward declare type support functions
size_t get_serialized_size_speech_recognition_msgs__msg__Grammar(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_speech_recognition_msgs__msg__Grammar(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, speech_recognition_msgs, msg, Grammar)();
size_t get_serialized_size_speech_recognition_msgs__msg__Vocabulary(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_speech_recognition_msgs__msg__Vocabulary(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, speech_recognition_msgs, msg, Vocabulary)();


using _SpeechRecognition_Request__ros_msg_type = speech_recognition_msgs__srv__SpeechRecognition_Request;

static bool _SpeechRecognition_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SpeechRecognition_Request__ros_msg_type * ros_message = static_cast<const _SpeechRecognition_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: vocabulary
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, speech_recognition_msgs, msg, Vocabulary
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->vocabulary, cdr))
    {
      return false;
    }
  }

  // Field name: grammar
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, speech_recognition_msgs, msg, Grammar
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->grammar, cdr))
    {
      return false;
    }
  }

  // Field name: grammar_name
  {
    const rosidl_runtime_c__String * str = &ros_message->grammar_name;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: duration
  {
    cdr << ros_message->duration;
  }

  // Field name: quiet
  {
    cdr << (ros_message->quiet ? true : false);
  }

  // Field name: threshold
  {
    cdr << ros_message->threshold;
  }

  return true;
}

static bool _SpeechRecognition_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SpeechRecognition_Request__ros_msg_type * ros_message = static_cast<_SpeechRecognition_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: vocabulary
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, speech_recognition_msgs, msg, Vocabulary
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->vocabulary))
    {
      return false;
    }
  }

  // Field name: grammar
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, speech_recognition_msgs, msg, Grammar
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->grammar))
    {
      return false;
    }
  }

  // Field name: grammar_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->grammar_name.data) {
      rosidl_runtime_c__String__init(&ros_message->grammar_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->grammar_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'grammar_name'\n");
      return false;
    }
  }

  // Field name: duration
  {
    cdr >> ros_message->duration;
  }

  // Field name: quiet
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->quiet = tmp ? true : false;
  }

  // Field name: threshold
  {
    cdr >> ros_message->threshold;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_speech_recognition_msgs
size_t get_serialized_size_speech_recognition_msgs__srv__SpeechRecognition_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SpeechRecognition_Request__ros_msg_type * ros_message = static_cast<const _SpeechRecognition_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name vocabulary

  current_alignment += get_serialized_size_speech_recognition_msgs__msg__Vocabulary(
    &(ros_message->vocabulary), current_alignment);
  // field.name grammar

  current_alignment += get_serialized_size_speech_recognition_msgs__msg__Grammar(
    &(ros_message->grammar), current_alignment);
  // field.name grammar_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->grammar_name.size + 1);
  // field.name duration
  {
    size_t item_size = sizeof(ros_message->duration);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name quiet
  {
    size_t item_size = sizeof(ros_message->quiet);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name threshold
  {
    size_t item_size = sizeof(ros_message->threshold);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SpeechRecognition_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_speech_recognition_msgs__srv__SpeechRecognition_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_speech_recognition_msgs
size_t max_serialized_size_speech_recognition_msgs__srv__SpeechRecognition_Request(
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

  // member: vocabulary
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_speech_recognition_msgs__msg__Vocabulary(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: grammar
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_speech_recognition_msgs__msg__Grammar(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: grammar_name
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
  // member: duration
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: quiet
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: threshold
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
    using DataType = speech_recognition_msgs__srv__SpeechRecognition_Request;
    is_plain =
      (
      offsetof(DataType, threshold) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _SpeechRecognition_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_speech_recognition_msgs__srv__SpeechRecognition_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SpeechRecognition_Request = {
  "speech_recognition_msgs::srv",
  "SpeechRecognition_Request",
  _SpeechRecognition_Request__cdr_serialize,
  _SpeechRecognition_Request__cdr_deserialize,
  _SpeechRecognition_Request__get_serialized_size,
  _SpeechRecognition_Request__max_serialized_size
};

static rosidl_message_type_support_t _SpeechRecognition_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SpeechRecognition_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, speech_recognition_msgs, srv, SpeechRecognition_Request)() {
  return &_SpeechRecognition_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "speech_recognition_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "speech_recognition_msgs/srv/detail/speech_recognition__struct.h"
// already included above
// #include "speech_recognition_msgs/srv/detail/speech_recognition__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "speech_recognition_msgs/msg/detail/speech_recognition_candidates__functions.h"  // result

// forward declare type support functions
size_t get_serialized_size_speech_recognition_msgs__msg__SpeechRecognitionCandidates(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_speech_recognition_msgs__msg__SpeechRecognitionCandidates(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, speech_recognition_msgs, msg, SpeechRecognitionCandidates)();


using _SpeechRecognition_Response__ros_msg_type = speech_recognition_msgs__srv__SpeechRecognition_Response;

static bool _SpeechRecognition_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SpeechRecognition_Response__ros_msg_type * ros_message = static_cast<const _SpeechRecognition_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: result
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, speech_recognition_msgs, msg, SpeechRecognitionCandidates
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->result, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _SpeechRecognition_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SpeechRecognition_Response__ros_msg_type * ros_message = static_cast<_SpeechRecognition_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: result
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, speech_recognition_msgs, msg, SpeechRecognitionCandidates
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->result))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_speech_recognition_msgs
size_t get_serialized_size_speech_recognition_msgs__srv__SpeechRecognition_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SpeechRecognition_Response__ros_msg_type * ros_message = static_cast<const _SpeechRecognition_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name result

  current_alignment += get_serialized_size_speech_recognition_msgs__msg__SpeechRecognitionCandidates(
    &(ros_message->result), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _SpeechRecognition_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_speech_recognition_msgs__srv__SpeechRecognition_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_speech_recognition_msgs
size_t max_serialized_size_speech_recognition_msgs__srv__SpeechRecognition_Response(
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

  // member: result
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_speech_recognition_msgs__msg__SpeechRecognitionCandidates(
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
    using DataType = speech_recognition_msgs__srv__SpeechRecognition_Response;
    is_plain =
      (
      offsetof(DataType, result) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _SpeechRecognition_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_speech_recognition_msgs__srv__SpeechRecognition_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SpeechRecognition_Response = {
  "speech_recognition_msgs::srv",
  "SpeechRecognition_Response",
  _SpeechRecognition_Response__cdr_serialize,
  _SpeechRecognition_Response__cdr_deserialize,
  _SpeechRecognition_Response__get_serialized_size,
  _SpeechRecognition_Response__max_serialized_size
};

static rosidl_message_type_support_t _SpeechRecognition_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SpeechRecognition_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, speech_recognition_msgs, srv, SpeechRecognition_Response)() {
  return &_SpeechRecognition_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "speech_recognition_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "speech_recognition_msgs/srv/speech_recognition.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t SpeechRecognition__callbacks = {
  "speech_recognition_msgs::srv",
  "SpeechRecognition",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, speech_recognition_msgs, srv, SpeechRecognition_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, speech_recognition_msgs, srv, SpeechRecognition_Response)(),
};

static rosidl_service_type_support_t SpeechRecognition__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &SpeechRecognition__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, speech_recognition_msgs, srv, SpeechRecognition)() {
  return &SpeechRecognition__handle;
}

#if defined(__cplusplus)
}
#endif
