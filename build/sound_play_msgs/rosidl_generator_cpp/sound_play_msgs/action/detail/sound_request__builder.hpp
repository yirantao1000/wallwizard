// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sound_play_msgs:action/SoundRequest.idl
// generated code does not contain a copyright notice

#ifndef SOUND_PLAY_MSGS__ACTION__DETAIL__SOUND_REQUEST__BUILDER_HPP_
#define SOUND_PLAY_MSGS__ACTION__DETAIL__SOUND_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sound_play_msgs/action/detail/sound_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sound_play_msgs
{

namespace action
{

namespace builder
{

class Init_SoundRequest_Goal_sound_request
{
public:
  Init_SoundRequest_Goal_sound_request()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::sound_play_msgs::action::SoundRequest_Goal sound_request(::sound_play_msgs::action::SoundRequest_Goal::_sound_request_type arg)
  {
    msg_.sound_request = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sound_play_msgs::action::SoundRequest_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::sound_play_msgs::action::SoundRequest_Goal>()
{
  return sound_play_msgs::action::builder::Init_SoundRequest_Goal_sound_request();
}

}  // namespace sound_play_msgs


namespace sound_play_msgs
{

namespace action
{

namespace builder
{

class Init_SoundRequest_Result_stamp
{
public:
  explicit Init_SoundRequest_Result_stamp(::sound_play_msgs::action::SoundRequest_Result & msg)
  : msg_(msg)
  {}
  ::sound_play_msgs::action::SoundRequest_Result stamp(::sound_play_msgs::action::SoundRequest_Result::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sound_play_msgs::action::SoundRequest_Result msg_;
};

class Init_SoundRequest_Result_playing
{
public:
  Init_SoundRequest_Result_playing()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SoundRequest_Result_stamp playing(::sound_play_msgs::action::SoundRequest_Result::_playing_type arg)
  {
    msg_.playing = std::move(arg);
    return Init_SoundRequest_Result_stamp(msg_);
  }

private:
  ::sound_play_msgs::action::SoundRequest_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::sound_play_msgs::action::SoundRequest_Result>()
{
  return sound_play_msgs::action::builder::Init_SoundRequest_Result_playing();
}

}  // namespace sound_play_msgs


namespace sound_play_msgs
{

namespace action
{

namespace builder
{

class Init_SoundRequest_Feedback_stamp
{
public:
  explicit Init_SoundRequest_Feedback_stamp(::sound_play_msgs::action::SoundRequest_Feedback & msg)
  : msg_(msg)
  {}
  ::sound_play_msgs::action::SoundRequest_Feedback stamp(::sound_play_msgs::action::SoundRequest_Feedback::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sound_play_msgs::action::SoundRequest_Feedback msg_;
};

class Init_SoundRequest_Feedback_playing
{
public:
  Init_SoundRequest_Feedback_playing()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SoundRequest_Feedback_stamp playing(::sound_play_msgs::action::SoundRequest_Feedback::_playing_type arg)
  {
    msg_.playing = std::move(arg);
    return Init_SoundRequest_Feedback_stamp(msg_);
  }

private:
  ::sound_play_msgs::action::SoundRequest_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::sound_play_msgs::action::SoundRequest_Feedback>()
{
  return sound_play_msgs::action::builder::Init_SoundRequest_Feedback_playing();
}

}  // namespace sound_play_msgs


namespace sound_play_msgs
{

namespace action
{

namespace builder
{

class Init_SoundRequest_SendGoal_Request_goal
{
public:
  explicit Init_SoundRequest_SendGoal_Request_goal(::sound_play_msgs::action::SoundRequest_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::sound_play_msgs::action::SoundRequest_SendGoal_Request goal(::sound_play_msgs::action::SoundRequest_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sound_play_msgs::action::SoundRequest_SendGoal_Request msg_;
};

class Init_SoundRequest_SendGoal_Request_goal_id
{
public:
  Init_SoundRequest_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SoundRequest_SendGoal_Request_goal goal_id(::sound_play_msgs::action::SoundRequest_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_SoundRequest_SendGoal_Request_goal(msg_);
  }

private:
  ::sound_play_msgs::action::SoundRequest_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::sound_play_msgs::action::SoundRequest_SendGoal_Request>()
{
  return sound_play_msgs::action::builder::Init_SoundRequest_SendGoal_Request_goal_id();
}

}  // namespace sound_play_msgs


namespace sound_play_msgs
{

namespace action
{

namespace builder
{

class Init_SoundRequest_SendGoal_Response_stamp
{
public:
  explicit Init_SoundRequest_SendGoal_Response_stamp(::sound_play_msgs::action::SoundRequest_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::sound_play_msgs::action::SoundRequest_SendGoal_Response stamp(::sound_play_msgs::action::SoundRequest_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sound_play_msgs::action::SoundRequest_SendGoal_Response msg_;
};

class Init_SoundRequest_SendGoal_Response_accepted
{
public:
  Init_SoundRequest_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SoundRequest_SendGoal_Response_stamp accepted(::sound_play_msgs::action::SoundRequest_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_SoundRequest_SendGoal_Response_stamp(msg_);
  }

private:
  ::sound_play_msgs::action::SoundRequest_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::sound_play_msgs::action::SoundRequest_SendGoal_Response>()
{
  return sound_play_msgs::action::builder::Init_SoundRequest_SendGoal_Response_accepted();
}

}  // namespace sound_play_msgs


namespace sound_play_msgs
{

namespace action
{

namespace builder
{

class Init_SoundRequest_GetResult_Request_goal_id
{
public:
  Init_SoundRequest_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::sound_play_msgs::action::SoundRequest_GetResult_Request goal_id(::sound_play_msgs::action::SoundRequest_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sound_play_msgs::action::SoundRequest_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::sound_play_msgs::action::SoundRequest_GetResult_Request>()
{
  return sound_play_msgs::action::builder::Init_SoundRequest_GetResult_Request_goal_id();
}

}  // namespace sound_play_msgs


namespace sound_play_msgs
{

namespace action
{

namespace builder
{

class Init_SoundRequest_GetResult_Response_result
{
public:
  explicit Init_SoundRequest_GetResult_Response_result(::sound_play_msgs::action::SoundRequest_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::sound_play_msgs::action::SoundRequest_GetResult_Response result(::sound_play_msgs::action::SoundRequest_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sound_play_msgs::action::SoundRequest_GetResult_Response msg_;
};

class Init_SoundRequest_GetResult_Response_status
{
public:
  Init_SoundRequest_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SoundRequest_GetResult_Response_result status(::sound_play_msgs::action::SoundRequest_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_SoundRequest_GetResult_Response_result(msg_);
  }

private:
  ::sound_play_msgs::action::SoundRequest_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::sound_play_msgs::action::SoundRequest_GetResult_Response>()
{
  return sound_play_msgs::action::builder::Init_SoundRequest_GetResult_Response_status();
}

}  // namespace sound_play_msgs


namespace sound_play_msgs
{

namespace action
{

namespace builder
{

class Init_SoundRequest_FeedbackMessage_feedback
{
public:
  explicit Init_SoundRequest_FeedbackMessage_feedback(::sound_play_msgs::action::SoundRequest_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::sound_play_msgs::action::SoundRequest_FeedbackMessage feedback(::sound_play_msgs::action::SoundRequest_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sound_play_msgs::action::SoundRequest_FeedbackMessage msg_;
};

class Init_SoundRequest_FeedbackMessage_goal_id
{
public:
  Init_SoundRequest_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SoundRequest_FeedbackMessage_feedback goal_id(::sound_play_msgs::action::SoundRequest_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_SoundRequest_FeedbackMessage_feedback(msg_);
  }

private:
  ::sound_play_msgs::action::SoundRequest_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::sound_play_msgs::action::SoundRequest_FeedbackMessage>()
{
  return sound_play_msgs::action::builder::Init_SoundRequest_FeedbackMessage_goal_id();
}

}  // namespace sound_play_msgs

#endif  // SOUND_PLAY_MSGS__ACTION__DETAIL__SOUND_REQUEST__BUILDER_HPP_
