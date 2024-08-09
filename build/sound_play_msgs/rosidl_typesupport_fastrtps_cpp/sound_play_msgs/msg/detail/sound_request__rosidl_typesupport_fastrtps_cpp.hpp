// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from sound_play_msgs:msg/SoundRequest.idl
// generated code does not contain a copyright notice

#ifndef SOUND_PLAY_MSGS__MSG__DETAIL__SOUND_REQUEST__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define SOUND_PLAY_MSGS__MSG__DETAIL__SOUND_REQUEST__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "sound_play_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "sound_play_msgs/msg/detail/sound_request__struct.hpp"

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

#include "fastcdr/Cdr.h"

namespace sound_play_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sound_play_msgs
cdr_serialize(
  const sound_play_msgs::msg::SoundRequest & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sound_play_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  sound_play_msgs::msg::SoundRequest & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sound_play_msgs
get_serialized_size(
  const sound_play_msgs::msg::SoundRequest & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sound_play_msgs
max_serialized_size_SoundRequest(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace sound_play_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sound_play_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, sound_play_msgs, msg, SoundRequest)();

#ifdef __cplusplus
}
#endif

#endif  // SOUND_PLAY_MSGS__MSG__DETAIL__SOUND_REQUEST__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
