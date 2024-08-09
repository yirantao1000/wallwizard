// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from speech_recognition_msgs:msg/SpeechRecognitionCandidates.idl
// generated code does not contain a copyright notice

#ifndef SPEECH_RECOGNITION_MSGS__MSG__DETAIL__SPEECH_RECOGNITION_CANDIDATES__BUILDER_HPP_
#define SPEECH_RECOGNITION_MSGS__MSG__DETAIL__SPEECH_RECOGNITION_CANDIDATES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "speech_recognition_msgs/msg/detail/speech_recognition_candidates__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace speech_recognition_msgs
{

namespace msg
{

namespace builder
{

class Init_SpeechRecognitionCandidates_confidence
{
public:
  explicit Init_SpeechRecognitionCandidates_confidence(::speech_recognition_msgs::msg::SpeechRecognitionCandidates & msg)
  : msg_(msg)
  {}
  ::speech_recognition_msgs::msg::SpeechRecognitionCandidates confidence(::speech_recognition_msgs::msg::SpeechRecognitionCandidates::_confidence_type arg)
  {
    msg_.confidence = std::move(arg);
    return std::move(msg_);
  }

private:
  ::speech_recognition_msgs::msg::SpeechRecognitionCandidates msg_;
};

class Init_SpeechRecognitionCandidates_transcript
{
public:
  Init_SpeechRecognitionCandidates_transcript()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SpeechRecognitionCandidates_confidence transcript(::speech_recognition_msgs::msg::SpeechRecognitionCandidates::_transcript_type arg)
  {
    msg_.transcript = std::move(arg);
    return Init_SpeechRecognitionCandidates_confidence(msg_);
  }

private:
  ::speech_recognition_msgs::msg::SpeechRecognitionCandidates msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::speech_recognition_msgs::msg::SpeechRecognitionCandidates>()
{
  return speech_recognition_msgs::msg::builder::Init_SpeechRecognitionCandidates_transcript();
}

}  // namespace speech_recognition_msgs

#endif  // SPEECH_RECOGNITION_MSGS__MSG__DETAIL__SPEECH_RECOGNITION_CANDIDATES__BUILDER_HPP_
