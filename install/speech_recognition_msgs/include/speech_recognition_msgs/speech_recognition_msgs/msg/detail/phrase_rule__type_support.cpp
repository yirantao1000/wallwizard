// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from speech_recognition_msgs:msg/PhraseRule.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "speech_recognition_msgs/msg/detail/phrase_rule__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace speech_recognition_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void PhraseRule_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) speech_recognition_msgs::msg::PhraseRule(_init);
}

void PhraseRule_fini_function(void * message_memory)
{
  auto typed_message = static_cast<speech_recognition_msgs::msg::PhraseRule *>(message_memory);
  typed_message->~PhraseRule();
}

size_t size_function__PhraseRule__definition(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PhraseRule__definition(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__PhraseRule__definition(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__PhraseRule__definition(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__PhraseRule__definition(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__PhraseRule__definition(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__PhraseRule__definition(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__PhraseRule__definition(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember PhraseRule_message_member_array[2] = {
  {
    "symbol",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(speech_recognition_msgs::msg::PhraseRule, symbol),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "definition",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(speech_recognition_msgs::msg::PhraseRule, definition),  // bytes offset in struct
    nullptr,  // default value
    size_function__PhraseRule__definition,  // size() function pointer
    get_const_function__PhraseRule__definition,  // get_const(index) function pointer
    get_function__PhraseRule__definition,  // get(index) function pointer
    fetch_function__PhraseRule__definition,  // fetch(index, &value) function pointer
    assign_function__PhraseRule__definition,  // assign(index, value) function pointer
    resize_function__PhraseRule__definition  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers PhraseRule_message_members = {
  "speech_recognition_msgs::msg",  // message namespace
  "PhraseRule",  // message name
  2,  // number of fields
  sizeof(speech_recognition_msgs::msg::PhraseRule),
  PhraseRule_message_member_array,  // message members
  PhraseRule_init_function,  // function to initialize message memory (memory has to be allocated)
  PhraseRule_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t PhraseRule_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PhraseRule_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace speech_recognition_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<speech_recognition_msgs::msg::PhraseRule>()
{
  return &::speech_recognition_msgs::msg::rosidl_typesupport_introspection_cpp::PhraseRule_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, speech_recognition_msgs, msg, PhraseRule)() {
  return &::speech_recognition_msgs::msg::rosidl_typesupport_introspection_cpp::PhraseRule_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
