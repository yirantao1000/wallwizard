// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from speech_recognition_msgs:msg/Grammar.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "speech_recognition_msgs/msg/detail/grammar__rosidl_typesupport_introspection_c.h"
#include "speech_recognition_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "speech_recognition_msgs/msg/detail/grammar__functions.h"
#include "speech_recognition_msgs/msg/detail/grammar__struct.h"


// Include directives for member types
// Member `name`
// Member `categories`
#include "rosidl_runtime_c/string_functions.h"
// Member `rules`
#include "speech_recognition_msgs/msg/phrase_rule.h"
// Member `rules`
#include "speech_recognition_msgs/msg/detail/phrase_rule__rosidl_typesupport_introspection_c.h"
// Member `vocabularies`
#include "speech_recognition_msgs/msg/vocabulary.h"
// Member `vocabularies`
#include "speech_recognition_msgs/msg/detail/vocabulary__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void speech_recognition_msgs__msg__Grammar__rosidl_typesupport_introspection_c__Grammar_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  speech_recognition_msgs__msg__Grammar__init(message_memory);
}

void speech_recognition_msgs__msg__Grammar__rosidl_typesupport_introspection_c__Grammar_fini_function(void * message_memory)
{
  speech_recognition_msgs__msg__Grammar__fini(message_memory);
}

size_t speech_recognition_msgs__msg__Grammar__rosidl_typesupport_introspection_c__size_function__Grammar__rules(
  const void * untyped_member)
{
  const speech_recognition_msgs__msg__PhraseRule__Sequence * member =
    (const speech_recognition_msgs__msg__PhraseRule__Sequence *)(untyped_member);
  return member->size;
}

const void * speech_recognition_msgs__msg__Grammar__rosidl_typesupport_introspection_c__get_const_function__Grammar__rules(
  const void * untyped_member, size_t index)
{
  const speech_recognition_msgs__msg__PhraseRule__Sequence * member =
    (const speech_recognition_msgs__msg__PhraseRule__Sequence *)(untyped_member);
  return &member->data[index];
}

void * speech_recognition_msgs__msg__Grammar__rosidl_typesupport_introspection_c__get_function__Grammar__rules(
  void * untyped_member, size_t index)
{
  speech_recognition_msgs__msg__PhraseRule__Sequence * member =
    (speech_recognition_msgs__msg__PhraseRule__Sequence *)(untyped_member);
  return &member->data[index];
}

void speech_recognition_msgs__msg__Grammar__rosidl_typesupport_introspection_c__fetch_function__Grammar__rules(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const speech_recognition_msgs__msg__PhraseRule * item =
    ((const speech_recognition_msgs__msg__PhraseRule *)
    speech_recognition_msgs__msg__Grammar__rosidl_typesupport_introspection_c__get_const_function__Grammar__rules(untyped_member, index));
  speech_recognition_msgs__msg__PhraseRule * value =
    (speech_recognition_msgs__msg__PhraseRule *)(untyped_value);
  *value = *item;
}

void speech_recognition_msgs__msg__Grammar__rosidl_typesupport_introspection_c__assign_function__Grammar__rules(
  void * untyped_member, size_t index, const void * untyped_value)
{
  speech_recognition_msgs__msg__PhraseRule * item =
    ((speech_recognition_msgs__msg__PhraseRule *)
    speech_recognition_msgs__msg__Grammar__rosidl_typesupport_introspection_c__get_function__Grammar__rules(untyped_member, index));
  const speech_recognition_msgs__msg__PhraseRule * value =
    (const speech_recognition_msgs__msg__PhraseRule *)(untyped_value);
  *item = *value;
}

bool speech_recognition_msgs__msg__Grammar__rosidl_typesupport_introspection_c__resize_function__Grammar__rules(
  void * untyped_member, size_t size)
{
  speech_recognition_msgs__msg__PhraseRule__Sequence * member =
    (speech_recognition_msgs__msg__PhraseRule__Sequence *)(untyped_member);
  speech_recognition_msgs__msg__PhraseRule__Sequence__fini(member);
  return speech_recognition_msgs__msg__PhraseRule__Sequence__init(member, size);
}

size_t speech_recognition_msgs__msg__Grammar__rosidl_typesupport_introspection_c__size_function__Grammar__categories(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * speech_recognition_msgs__msg__Grammar__rosidl_typesupport_introspection_c__get_const_function__Grammar__categories(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * speech_recognition_msgs__msg__Grammar__rosidl_typesupport_introspection_c__get_function__Grammar__categories(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void speech_recognition_msgs__msg__Grammar__rosidl_typesupport_introspection_c__fetch_function__Grammar__categories(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    speech_recognition_msgs__msg__Grammar__rosidl_typesupport_introspection_c__get_const_function__Grammar__categories(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void speech_recognition_msgs__msg__Grammar__rosidl_typesupport_introspection_c__assign_function__Grammar__categories(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    speech_recognition_msgs__msg__Grammar__rosidl_typesupport_introspection_c__get_function__Grammar__categories(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool speech_recognition_msgs__msg__Grammar__rosidl_typesupport_introspection_c__resize_function__Grammar__categories(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t speech_recognition_msgs__msg__Grammar__rosidl_typesupport_introspection_c__size_function__Grammar__vocabularies(
  const void * untyped_member)
{
  const speech_recognition_msgs__msg__Vocabulary__Sequence * member =
    (const speech_recognition_msgs__msg__Vocabulary__Sequence *)(untyped_member);
  return member->size;
}

const void * speech_recognition_msgs__msg__Grammar__rosidl_typesupport_introspection_c__get_const_function__Grammar__vocabularies(
  const void * untyped_member, size_t index)
{
  const speech_recognition_msgs__msg__Vocabulary__Sequence * member =
    (const speech_recognition_msgs__msg__Vocabulary__Sequence *)(untyped_member);
  return &member->data[index];
}

void * speech_recognition_msgs__msg__Grammar__rosidl_typesupport_introspection_c__get_function__Grammar__vocabularies(
  void * untyped_member, size_t index)
{
  speech_recognition_msgs__msg__Vocabulary__Sequence * member =
    (speech_recognition_msgs__msg__Vocabulary__Sequence *)(untyped_member);
  return &member->data[index];
}

void speech_recognition_msgs__msg__Grammar__rosidl_typesupport_introspection_c__fetch_function__Grammar__vocabularies(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const speech_recognition_msgs__msg__Vocabulary * item =
    ((const speech_recognition_msgs__msg__Vocabulary *)
    speech_recognition_msgs__msg__Grammar__rosidl_typesupport_introspection_c__get_const_function__Grammar__vocabularies(untyped_member, index));
  speech_recognition_msgs__msg__Vocabulary * value =
    (speech_recognition_msgs__msg__Vocabulary *)(untyped_value);
  *value = *item;
}

void speech_recognition_msgs__msg__Grammar__rosidl_typesupport_introspection_c__assign_function__Grammar__vocabularies(
  void * untyped_member, size_t index, const void * untyped_value)
{
  speech_recognition_msgs__msg__Vocabulary * item =
    ((speech_recognition_msgs__msg__Vocabulary *)
    speech_recognition_msgs__msg__Grammar__rosidl_typesupport_introspection_c__get_function__Grammar__vocabularies(untyped_member, index));
  const speech_recognition_msgs__msg__Vocabulary * value =
    (const speech_recognition_msgs__msg__Vocabulary *)(untyped_value);
  *item = *value;
}

bool speech_recognition_msgs__msg__Grammar__rosidl_typesupport_introspection_c__resize_function__Grammar__vocabularies(
  void * untyped_member, size_t size)
{
  speech_recognition_msgs__msg__Vocabulary__Sequence * member =
    (speech_recognition_msgs__msg__Vocabulary__Sequence *)(untyped_member);
  speech_recognition_msgs__msg__Vocabulary__Sequence__fini(member);
  return speech_recognition_msgs__msg__Vocabulary__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember speech_recognition_msgs__msg__Grammar__rosidl_typesupport_introspection_c__Grammar_message_member_array[4] = {
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(speech_recognition_msgs__msg__Grammar, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rules",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(speech_recognition_msgs__msg__Grammar, rules),  // bytes offset in struct
    NULL,  // default value
    speech_recognition_msgs__msg__Grammar__rosidl_typesupport_introspection_c__size_function__Grammar__rules,  // size() function pointer
    speech_recognition_msgs__msg__Grammar__rosidl_typesupport_introspection_c__get_const_function__Grammar__rules,  // get_const(index) function pointer
    speech_recognition_msgs__msg__Grammar__rosidl_typesupport_introspection_c__get_function__Grammar__rules,  // get(index) function pointer
    speech_recognition_msgs__msg__Grammar__rosidl_typesupport_introspection_c__fetch_function__Grammar__rules,  // fetch(index, &value) function pointer
    speech_recognition_msgs__msg__Grammar__rosidl_typesupport_introspection_c__assign_function__Grammar__rules,  // assign(index, value) function pointer
    speech_recognition_msgs__msg__Grammar__rosidl_typesupport_introspection_c__resize_function__Grammar__rules  // resize(index) function pointer
  },
  {
    "categories",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(speech_recognition_msgs__msg__Grammar, categories),  // bytes offset in struct
    NULL,  // default value
    speech_recognition_msgs__msg__Grammar__rosidl_typesupport_introspection_c__size_function__Grammar__categories,  // size() function pointer
    speech_recognition_msgs__msg__Grammar__rosidl_typesupport_introspection_c__get_const_function__Grammar__categories,  // get_const(index) function pointer
    speech_recognition_msgs__msg__Grammar__rosidl_typesupport_introspection_c__get_function__Grammar__categories,  // get(index) function pointer
    speech_recognition_msgs__msg__Grammar__rosidl_typesupport_introspection_c__fetch_function__Grammar__categories,  // fetch(index, &value) function pointer
    speech_recognition_msgs__msg__Grammar__rosidl_typesupport_introspection_c__assign_function__Grammar__categories,  // assign(index, value) function pointer
    speech_recognition_msgs__msg__Grammar__rosidl_typesupport_introspection_c__resize_function__Grammar__categories  // resize(index) function pointer
  },
  {
    "vocabularies",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(speech_recognition_msgs__msg__Grammar, vocabularies),  // bytes offset in struct
    NULL,  // default value
    speech_recognition_msgs__msg__Grammar__rosidl_typesupport_introspection_c__size_function__Grammar__vocabularies,  // size() function pointer
    speech_recognition_msgs__msg__Grammar__rosidl_typesupport_introspection_c__get_const_function__Grammar__vocabularies,  // get_const(index) function pointer
    speech_recognition_msgs__msg__Grammar__rosidl_typesupport_introspection_c__get_function__Grammar__vocabularies,  // get(index) function pointer
    speech_recognition_msgs__msg__Grammar__rosidl_typesupport_introspection_c__fetch_function__Grammar__vocabularies,  // fetch(index, &value) function pointer
    speech_recognition_msgs__msg__Grammar__rosidl_typesupport_introspection_c__assign_function__Grammar__vocabularies,  // assign(index, value) function pointer
    speech_recognition_msgs__msg__Grammar__rosidl_typesupport_introspection_c__resize_function__Grammar__vocabularies  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers speech_recognition_msgs__msg__Grammar__rosidl_typesupport_introspection_c__Grammar_message_members = {
  "speech_recognition_msgs__msg",  // message namespace
  "Grammar",  // message name
  4,  // number of fields
  sizeof(speech_recognition_msgs__msg__Grammar),
  speech_recognition_msgs__msg__Grammar__rosidl_typesupport_introspection_c__Grammar_message_member_array,  // message members
  speech_recognition_msgs__msg__Grammar__rosidl_typesupport_introspection_c__Grammar_init_function,  // function to initialize message memory (memory has to be allocated)
  speech_recognition_msgs__msg__Grammar__rosidl_typesupport_introspection_c__Grammar_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t speech_recognition_msgs__msg__Grammar__rosidl_typesupport_introspection_c__Grammar_message_type_support_handle = {
  0,
  &speech_recognition_msgs__msg__Grammar__rosidl_typesupport_introspection_c__Grammar_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_speech_recognition_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, speech_recognition_msgs, msg, Grammar)() {
  speech_recognition_msgs__msg__Grammar__rosidl_typesupport_introspection_c__Grammar_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, speech_recognition_msgs, msg, PhraseRule)();
  speech_recognition_msgs__msg__Grammar__rosidl_typesupport_introspection_c__Grammar_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, speech_recognition_msgs, msg, Vocabulary)();
  if (!speech_recognition_msgs__msg__Grammar__rosidl_typesupport_introspection_c__Grammar_message_type_support_handle.typesupport_identifier) {
    speech_recognition_msgs__msg__Grammar__rosidl_typesupport_introspection_c__Grammar_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &speech_recognition_msgs__msg__Grammar__rosidl_typesupport_introspection_c__Grammar_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
