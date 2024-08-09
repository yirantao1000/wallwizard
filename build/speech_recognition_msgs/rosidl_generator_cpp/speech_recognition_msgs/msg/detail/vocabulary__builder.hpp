// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from speech_recognition_msgs:msg/Vocabulary.idl
// generated code does not contain a copyright notice

#ifndef SPEECH_RECOGNITION_MSGS__MSG__DETAIL__VOCABULARY__BUILDER_HPP_
#define SPEECH_RECOGNITION_MSGS__MSG__DETAIL__VOCABULARY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "speech_recognition_msgs/msg/detail/vocabulary__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace speech_recognition_msgs
{

namespace msg
{

namespace builder
{

class Init_Vocabulary_phonemes
{
public:
  explicit Init_Vocabulary_phonemes(::speech_recognition_msgs::msg::Vocabulary & msg)
  : msg_(msg)
  {}
  ::speech_recognition_msgs::msg::Vocabulary phonemes(::speech_recognition_msgs::msg::Vocabulary::_phonemes_type arg)
  {
    msg_.phonemes = std::move(arg);
    return std::move(msg_);
  }

private:
  ::speech_recognition_msgs::msg::Vocabulary msg_;
};

class Init_Vocabulary_words
{
public:
  explicit Init_Vocabulary_words(::speech_recognition_msgs::msg::Vocabulary & msg)
  : msg_(msg)
  {}
  Init_Vocabulary_phonemes words(::speech_recognition_msgs::msg::Vocabulary::_words_type arg)
  {
    msg_.words = std::move(arg);
    return Init_Vocabulary_phonemes(msg_);
  }

private:
  ::speech_recognition_msgs::msg::Vocabulary msg_;
};

class Init_Vocabulary_name
{
public:
  Init_Vocabulary_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Vocabulary_words name(::speech_recognition_msgs::msg::Vocabulary::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_Vocabulary_words(msg_);
  }

private:
  ::speech_recognition_msgs::msg::Vocabulary msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::speech_recognition_msgs::msg::Vocabulary>()
{
  return speech_recognition_msgs::msg::builder::Init_Vocabulary_name();
}

}  // namespace speech_recognition_msgs

#endif  // SPEECH_RECOGNITION_MSGS__MSG__DETAIL__VOCABULARY__BUILDER_HPP_
