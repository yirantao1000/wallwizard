// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from speech_recognition_msgs:msg/PhraseRule.idl
// generated code does not contain a copyright notice

#ifndef SPEECH_RECOGNITION_MSGS__MSG__DETAIL__PHRASE_RULE__BUILDER_HPP_
#define SPEECH_RECOGNITION_MSGS__MSG__DETAIL__PHRASE_RULE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "speech_recognition_msgs/msg/detail/phrase_rule__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace speech_recognition_msgs
{

namespace msg
{

namespace builder
{

class Init_PhraseRule_definition
{
public:
  explicit Init_PhraseRule_definition(::speech_recognition_msgs::msg::PhraseRule & msg)
  : msg_(msg)
  {}
  ::speech_recognition_msgs::msg::PhraseRule definition(::speech_recognition_msgs::msg::PhraseRule::_definition_type arg)
  {
    msg_.definition = std::move(arg);
    return std::move(msg_);
  }

private:
  ::speech_recognition_msgs::msg::PhraseRule msg_;
};

class Init_PhraseRule_symbol
{
public:
  Init_PhraseRule_symbol()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PhraseRule_definition symbol(::speech_recognition_msgs::msg::PhraseRule::_symbol_type arg)
  {
    msg_.symbol = std::move(arg);
    return Init_PhraseRule_definition(msg_);
  }

private:
  ::speech_recognition_msgs::msg::PhraseRule msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::speech_recognition_msgs::msg::PhraseRule>()
{
  return speech_recognition_msgs::msg::builder::Init_PhraseRule_symbol();
}

}  // namespace speech_recognition_msgs

#endif  // SPEECH_RECOGNITION_MSGS__MSG__DETAIL__PHRASE_RULE__BUILDER_HPP_
