// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from speech_recognition_msgs:msg/Grammar.idl
// generated code does not contain a copyright notice

#ifndef SPEECH_RECOGNITION_MSGS__MSG__DETAIL__GRAMMAR__BUILDER_HPP_
#define SPEECH_RECOGNITION_MSGS__MSG__DETAIL__GRAMMAR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "speech_recognition_msgs/msg/detail/grammar__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace speech_recognition_msgs
{

namespace msg
{

namespace builder
{

class Init_Grammar_vocabularies
{
public:
  explicit Init_Grammar_vocabularies(::speech_recognition_msgs::msg::Grammar & msg)
  : msg_(msg)
  {}
  ::speech_recognition_msgs::msg::Grammar vocabularies(::speech_recognition_msgs::msg::Grammar::_vocabularies_type arg)
  {
    msg_.vocabularies = std::move(arg);
    return std::move(msg_);
  }

private:
  ::speech_recognition_msgs::msg::Grammar msg_;
};

class Init_Grammar_categories
{
public:
  explicit Init_Grammar_categories(::speech_recognition_msgs::msg::Grammar & msg)
  : msg_(msg)
  {}
  Init_Grammar_vocabularies categories(::speech_recognition_msgs::msg::Grammar::_categories_type arg)
  {
    msg_.categories = std::move(arg);
    return Init_Grammar_vocabularies(msg_);
  }

private:
  ::speech_recognition_msgs::msg::Grammar msg_;
};

class Init_Grammar_rules
{
public:
  explicit Init_Grammar_rules(::speech_recognition_msgs::msg::Grammar & msg)
  : msg_(msg)
  {}
  Init_Grammar_categories rules(::speech_recognition_msgs::msg::Grammar::_rules_type arg)
  {
    msg_.rules = std::move(arg);
    return Init_Grammar_categories(msg_);
  }

private:
  ::speech_recognition_msgs::msg::Grammar msg_;
};

class Init_Grammar_name
{
public:
  Init_Grammar_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Grammar_rules name(::speech_recognition_msgs::msg::Grammar::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_Grammar_rules(msg_);
  }

private:
  ::speech_recognition_msgs::msg::Grammar msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::speech_recognition_msgs::msg::Grammar>()
{
  return speech_recognition_msgs::msg::builder::Init_Grammar_name();
}

}  // namespace speech_recognition_msgs

#endif  // SPEECH_RECOGNITION_MSGS__MSG__DETAIL__GRAMMAR__BUILDER_HPP_
