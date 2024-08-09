// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from speech_recognition_msgs:srv/SpeechRecognition.idl
// generated code does not contain a copyright notice

#ifndef SPEECH_RECOGNITION_MSGS__SRV__DETAIL__SPEECH_RECOGNITION__BUILDER_HPP_
#define SPEECH_RECOGNITION_MSGS__SRV__DETAIL__SPEECH_RECOGNITION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "speech_recognition_msgs/srv/detail/speech_recognition__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace speech_recognition_msgs
{

namespace srv
{

namespace builder
{

class Init_SpeechRecognition_Request_threshold
{
public:
  explicit Init_SpeechRecognition_Request_threshold(::speech_recognition_msgs::srv::SpeechRecognition_Request & msg)
  : msg_(msg)
  {}
  ::speech_recognition_msgs::srv::SpeechRecognition_Request threshold(::speech_recognition_msgs::srv::SpeechRecognition_Request::_threshold_type arg)
  {
    msg_.threshold = std::move(arg);
    return std::move(msg_);
  }

private:
  ::speech_recognition_msgs::srv::SpeechRecognition_Request msg_;
};

class Init_SpeechRecognition_Request_quiet
{
public:
  explicit Init_SpeechRecognition_Request_quiet(::speech_recognition_msgs::srv::SpeechRecognition_Request & msg)
  : msg_(msg)
  {}
  Init_SpeechRecognition_Request_threshold quiet(::speech_recognition_msgs::srv::SpeechRecognition_Request::_quiet_type arg)
  {
    msg_.quiet = std::move(arg);
    return Init_SpeechRecognition_Request_threshold(msg_);
  }

private:
  ::speech_recognition_msgs::srv::SpeechRecognition_Request msg_;
};

class Init_SpeechRecognition_Request_duration
{
public:
  explicit Init_SpeechRecognition_Request_duration(::speech_recognition_msgs::srv::SpeechRecognition_Request & msg)
  : msg_(msg)
  {}
  Init_SpeechRecognition_Request_quiet duration(::speech_recognition_msgs::srv::SpeechRecognition_Request::_duration_type arg)
  {
    msg_.duration = std::move(arg);
    return Init_SpeechRecognition_Request_quiet(msg_);
  }

private:
  ::speech_recognition_msgs::srv::SpeechRecognition_Request msg_;
};

class Init_SpeechRecognition_Request_grammar_name
{
public:
  explicit Init_SpeechRecognition_Request_grammar_name(::speech_recognition_msgs::srv::SpeechRecognition_Request & msg)
  : msg_(msg)
  {}
  Init_SpeechRecognition_Request_duration grammar_name(::speech_recognition_msgs::srv::SpeechRecognition_Request::_grammar_name_type arg)
  {
    msg_.grammar_name = std::move(arg);
    return Init_SpeechRecognition_Request_duration(msg_);
  }

private:
  ::speech_recognition_msgs::srv::SpeechRecognition_Request msg_;
};

class Init_SpeechRecognition_Request_grammar
{
public:
  explicit Init_SpeechRecognition_Request_grammar(::speech_recognition_msgs::srv::SpeechRecognition_Request & msg)
  : msg_(msg)
  {}
  Init_SpeechRecognition_Request_grammar_name grammar(::speech_recognition_msgs::srv::SpeechRecognition_Request::_grammar_type arg)
  {
    msg_.grammar = std::move(arg);
    return Init_SpeechRecognition_Request_grammar_name(msg_);
  }

private:
  ::speech_recognition_msgs::srv::SpeechRecognition_Request msg_;
};

class Init_SpeechRecognition_Request_vocabulary
{
public:
  Init_SpeechRecognition_Request_vocabulary()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SpeechRecognition_Request_grammar vocabulary(::speech_recognition_msgs::srv::SpeechRecognition_Request::_vocabulary_type arg)
  {
    msg_.vocabulary = std::move(arg);
    return Init_SpeechRecognition_Request_grammar(msg_);
  }

private:
  ::speech_recognition_msgs::srv::SpeechRecognition_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::speech_recognition_msgs::srv::SpeechRecognition_Request>()
{
  return speech_recognition_msgs::srv::builder::Init_SpeechRecognition_Request_vocabulary();
}

}  // namespace speech_recognition_msgs


namespace speech_recognition_msgs
{

namespace srv
{

namespace builder
{

class Init_SpeechRecognition_Response_result
{
public:
  Init_SpeechRecognition_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::speech_recognition_msgs::srv::SpeechRecognition_Response result(::speech_recognition_msgs::srv::SpeechRecognition_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::speech_recognition_msgs::srv::SpeechRecognition_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::speech_recognition_msgs::srv::SpeechRecognition_Response>()
{
  return speech_recognition_msgs::srv::builder::Init_SpeechRecognition_Response_result();
}

}  // namespace speech_recognition_msgs

#endif  // SPEECH_RECOGNITION_MSGS__SRV__DETAIL__SPEECH_RECOGNITION__BUILDER_HPP_
