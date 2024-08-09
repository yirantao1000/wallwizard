// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sound_play_msgs:msg/SoundRequest.idl
// generated code does not contain a copyright notice

#ifndef SOUND_PLAY_MSGS__MSG__DETAIL__SOUND_REQUEST__BUILDER_HPP_
#define SOUND_PLAY_MSGS__MSG__DETAIL__SOUND_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sound_play_msgs/msg/detail/sound_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sound_play_msgs
{

namespace msg
{

namespace builder
{

class Init_SoundRequest_arg2
{
public:
  explicit Init_SoundRequest_arg2(::sound_play_msgs::msg::SoundRequest & msg)
  : msg_(msg)
  {}
  ::sound_play_msgs::msg::SoundRequest arg2(::sound_play_msgs::msg::SoundRequest::_arg2_type arg)
  {
    msg_.arg2 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sound_play_msgs::msg::SoundRequest msg_;
};

class Init_SoundRequest_arg
{
public:
  explicit Init_SoundRequest_arg(::sound_play_msgs::msg::SoundRequest & msg)
  : msg_(msg)
  {}
  Init_SoundRequest_arg2 arg(::sound_play_msgs::msg::SoundRequest::_arg_type arg)
  {
    msg_.arg = std::move(arg);
    return Init_SoundRequest_arg2(msg_);
  }

private:
  ::sound_play_msgs::msg::SoundRequest msg_;
};

class Init_SoundRequest_volume
{
public:
  explicit Init_SoundRequest_volume(::sound_play_msgs::msg::SoundRequest & msg)
  : msg_(msg)
  {}
  Init_SoundRequest_arg volume(::sound_play_msgs::msg::SoundRequest::_volume_type arg)
  {
    msg_.volume = std::move(arg);
    return Init_SoundRequest_arg(msg_);
  }

private:
  ::sound_play_msgs::msg::SoundRequest msg_;
};

class Init_SoundRequest_command
{
public:
  explicit Init_SoundRequest_command(::sound_play_msgs::msg::SoundRequest & msg)
  : msg_(msg)
  {}
  Init_SoundRequest_volume command(::sound_play_msgs::msg::SoundRequest::_command_type arg)
  {
    msg_.command = std::move(arg);
    return Init_SoundRequest_volume(msg_);
  }

private:
  ::sound_play_msgs::msg::SoundRequest msg_;
};

class Init_SoundRequest_sound
{
public:
  Init_SoundRequest_sound()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SoundRequest_command sound(::sound_play_msgs::msg::SoundRequest::_sound_type arg)
  {
    msg_.sound = std::move(arg);
    return Init_SoundRequest_command(msg_);
  }

private:
  ::sound_play_msgs::msg::SoundRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sound_play_msgs::msg::SoundRequest>()
{
  return sound_play_msgs::msg::builder::Init_SoundRequest_sound();
}

}  // namespace sound_play_msgs

#endif  // SOUND_PLAY_MSGS__MSG__DETAIL__SOUND_REQUEST__BUILDER_HPP_
