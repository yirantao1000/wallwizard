// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sound_play_msgs:action/SoundRequest.idl
// generated code does not contain a copyright notice

#ifndef SOUND_PLAY_MSGS__ACTION__DETAIL__SOUND_REQUEST__TRAITS_HPP_
#define SOUND_PLAY_MSGS__ACTION__DETAIL__SOUND_REQUEST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "sound_play_msgs/action/detail/sound_request__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'sound_request'
#include "sound_play_msgs/msg/detail/sound_request__traits.hpp"

namespace sound_play_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const SoundRequest_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: sound_request
  {
    out << "sound_request: ";
    to_flow_style_yaml(msg.sound_request, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SoundRequest_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: sound_request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sound_request:\n";
    to_block_style_yaml(msg.sound_request, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SoundRequest_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace sound_play_msgs

namespace rosidl_generator_traits
{

[[deprecated("use sound_play_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const sound_play_msgs::action::SoundRequest_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  sound_play_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sound_play_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const sound_play_msgs::action::SoundRequest_Goal & msg)
{
  return sound_play_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<sound_play_msgs::action::SoundRequest_Goal>()
{
  return "sound_play_msgs::action::SoundRequest_Goal";
}

template<>
inline const char * name<sound_play_msgs::action::SoundRequest_Goal>()
{
  return "sound_play_msgs/action/SoundRequest_Goal";
}

template<>
struct has_fixed_size<sound_play_msgs::action::SoundRequest_Goal>
  : std::integral_constant<bool, has_fixed_size<sound_play_msgs::msg::SoundRequest>::value> {};

template<>
struct has_bounded_size<sound_play_msgs::action::SoundRequest_Goal>
  : std::integral_constant<bool, has_bounded_size<sound_play_msgs::msg::SoundRequest>::value> {};

template<>
struct is_message<sound_play_msgs::action::SoundRequest_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/duration__traits.hpp"

namespace sound_play_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const SoundRequest_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: playing
  {
    out << "playing: ";
    rosidl_generator_traits::value_to_yaml(msg.playing, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SoundRequest_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: playing
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "playing: ";
    rosidl_generator_traits::value_to_yaml(msg.playing, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SoundRequest_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace sound_play_msgs

namespace rosidl_generator_traits
{

[[deprecated("use sound_play_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const sound_play_msgs::action::SoundRequest_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  sound_play_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sound_play_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const sound_play_msgs::action::SoundRequest_Result & msg)
{
  return sound_play_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<sound_play_msgs::action::SoundRequest_Result>()
{
  return "sound_play_msgs::action::SoundRequest_Result";
}

template<>
inline const char * name<sound_play_msgs::action::SoundRequest_Result>()
{
  return "sound_play_msgs/action/SoundRequest_Result";
}

template<>
struct has_fixed_size<sound_play_msgs::action::SoundRequest_Result>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Duration>::value> {};

template<>
struct has_bounded_size<sound_play_msgs::action::SoundRequest_Result>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Duration>::value> {};

template<>
struct is_message<sound_play_msgs::action::SoundRequest_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
// already included above
// #include "builtin_interfaces/msg/detail/duration__traits.hpp"

namespace sound_play_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const SoundRequest_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: playing
  {
    out << "playing: ";
    rosidl_generator_traits::value_to_yaml(msg.playing, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SoundRequest_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: playing
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "playing: ";
    rosidl_generator_traits::value_to_yaml(msg.playing, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SoundRequest_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace sound_play_msgs

namespace rosidl_generator_traits
{

[[deprecated("use sound_play_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const sound_play_msgs::action::SoundRequest_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  sound_play_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sound_play_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const sound_play_msgs::action::SoundRequest_Feedback & msg)
{
  return sound_play_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<sound_play_msgs::action::SoundRequest_Feedback>()
{
  return "sound_play_msgs::action::SoundRequest_Feedback";
}

template<>
inline const char * name<sound_play_msgs::action::SoundRequest_Feedback>()
{
  return "sound_play_msgs/action/SoundRequest_Feedback";
}

template<>
struct has_fixed_size<sound_play_msgs::action::SoundRequest_Feedback>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Duration>::value> {};

template<>
struct has_bounded_size<sound_play_msgs::action::SoundRequest_Feedback>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Duration>::value> {};

template<>
struct is_message<sound_play_msgs::action::SoundRequest_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "sound_play_msgs/action/detail/sound_request__traits.hpp"

namespace sound_play_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const SoundRequest_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SoundRequest_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SoundRequest_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace sound_play_msgs

namespace rosidl_generator_traits
{

[[deprecated("use sound_play_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const sound_play_msgs::action::SoundRequest_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  sound_play_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sound_play_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const sound_play_msgs::action::SoundRequest_SendGoal_Request & msg)
{
  return sound_play_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<sound_play_msgs::action::SoundRequest_SendGoal_Request>()
{
  return "sound_play_msgs::action::SoundRequest_SendGoal_Request";
}

template<>
inline const char * name<sound_play_msgs::action::SoundRequest_SendGoal_Request>()
{
  return "sound_play_msgs/action/SoundRequest_SendGoal_Request";
}

template<>
struct has_fixed_size<sound_play_msgs::action::SoundRequest_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<sound_play_msgs::action::SoundRequest_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<sound_play_msgs::action::SoundRequest_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<sound_play_msgs::action::SoundRequest_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<sound_play_msgs::action::SoundRequest_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace sound_play_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const SoundRequest_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SoundRequest_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SoundRequest_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace sound_play_msgs

namespace rosidl_generator_traits
{

[[deprecated("use sound_play_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const sound_play_msgs::action::SoundRequest_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  sound_play_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sound_play_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const sound_play_msgs::action::SoundRequest_SendGoal_Response & msg)
{
  return sound_play_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<sound_play_msgs::action::SoundRequest_SendGoal_Response>()
{
  return "sound_play_msgs::action::SoundRequest_SendGoal_Response";
}

template<>
inline const char * name<sound_play_msgs::action::SoundRequest_SendGoal_Response>()
{
  return "sound_play_msgs/action/SoundRequest_SendGoal_Response";
}

template<>
struct has_fixed_size<sound_play_msgs::action::SoundRequest_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<sound_play_msgs::action::SoundRequest_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<sound_play_msgs::action::SoundRequest_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<sound_play_msgs::action::SoundRequest_SendGoal>()
{
  return "sound_play_msgs::action::SoundRequest_SendGoal";
}

template<>
inline const char * name<sound_play_msgs::action::SoundRequest_SendGoal>()
{
  return "sound_play_msgs/action/SoundRequest_SendGoal";
}

template<>
struct has_fixed_size<sound_play_msgs::action::SoundRequest_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<sound_play_msgs::action::SoundRequest_SendGoal_Request>::value &&
    has_fixed_size<sound_play_msgs::action::SoundRequest_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<sound_play_msgs::action::SoundRequest_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<sound_play_msgs::action::SoundRequest_SendGoal_Request>::value &&
    has_bounded_size<sound_play_msgs::action::SoundRequest_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<sound_play_msgs::action::SoundRequest_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<sound_play_msgs::action::SoundRequest_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<sound_play_msgs::action::SoundRequest_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace sound_play_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const SoundRequest_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SoundRequest_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SoundRequest_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace sound_play_msgs

namespace rosidl_generator_traits
{

[[deprecated("use sound_play_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const sound_play_msgs::action::SoundRequest_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  sound_play_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sound_play_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const sound_play_msgs::action::SoundRequest_GetResult_Request & msg)
{
  return sound_play_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<sound_play_msgs::action::SoundRequest_GetResult_Request>()
{
  return "sound_play_msgs::action::SoundRequest_GetResult_Request";
}

template<>
inline const char * name<sound_play_msgs::action::SoundRequest_GetResult_Request>()
{
  return "sound_play_msgs/action/SoundRequest_GetResult_Request";
}

template<>
struct has_fixed_size<sound_play_msgs::action::SoundRequest_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<sound_play_msgs::action::SoundRequest_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<sound_play_msgs::action::SoundRequest_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "sound_play_msgs/action/detail/sound_request__traits.hpp"

namespace sound_play_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const SoundRequest_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SoundRequest_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SoundRequest_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace sound_play_msgs

namespace rosidl_generator_traits
{

[[deprecated("use sound_play_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const sound_play_msgs::action::SoundRequest_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  sound_play_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sound_play_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const sound_play_msgs::action::SoundRequest_GetResult_Response & msg)
{
  return sound_play_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<sound_play_msgs::action::SoundRequest_GetResult_Response>()
{
  return "sound_play_msgs::action::SoundRequest_GetResult_Response";
}

template<>
inline const char * name<sound_play_msgs::action::SoundRequest_GetResult_Response>()
{
  return "sound_play_msgs/action/SoundRequest_GetResult_Response";
}

template<>
struct has_fixed_size<sound_play_msgs::action::SoundRequest_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<sound_play_msgs::action::SoundRequest_Result>::value> {};

template<>
struct has_bounded_size<sound_play_msgs::action::SoundRequest_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<sound_play_msgs::action::SoundRequest_Result>::value> {};

template<>
struct is_message<sound_play_msgs::action::SoundRequest_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<sound_play_msgs::action::SoundRequest_GetResult>()
{
  return "sound_play_msgs::action::SoundRequest_GetResult";
}

template<>
inline const char * name<sound_play_msgs::action::SoundRequest_GetResult>()
{
  return "sound_play_msgs/action/SoundRequest_GetResult";
}

template<>
struct has_fixed_size<sound_play_msgs::action::SoundRequest_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<sound_play_msgs::action::SoundRequest_GetResult_Request>::value &&
    has_fixed_size<sound_play_msgs::action::SoundRequest_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<sound_play_msgs::action::SoundRequest_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<sound_play_msgs::action::SoundRequest_GetResult_Request>::value &&
    has_bounded_size<sound_play_msgs::action::SoundRequest_GetResult_Response>::value
  >
{
};

template<>
struct is_service<sound_play_msgs::action::SoundRequest_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<sound_play_msgs::action::SoundRequest_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<sound_play_msgs::action::SoundRequest_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "sound_play_msgs/action/detail/sound_request__traits.hpp"

namespace sound_play_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const SoundRequest_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SoundRequest_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SoundRequest_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace sound_play_msgs

namespace rosidl_generator_traits
{

[[deprecated("use sound_play_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const sound_play_msgs::action::SoundRequest_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  sound_play_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sound_play_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const sound_play_msgs::action::SoundRequest_FeedbackMessage & msg)
{
  return sound_play_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<sound_play_msgs::action::SoundRequest_FeedbackMessage>()
{
  return "sound_play_msgs::action::SoundRequest_FeedbackMessage";
}

template<>
inline const char * name<sound_play_msgs::action::SoundRequest_FeedbackMessage>()
{
  return "sound_play_msgs/action/SoundRequest_FeedbackMessage";
}

template<>
struct has_fixed_size<sound_play_msgs::action::SoundRequest_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<sound_play_msgs::action::SoundRequest_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<sound_play_msgs::action::SoundRequest_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<sound_play_msgs::action::SoundRequest_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<sound_play_msgs::action::SoundRequest_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<sound_play_msgs::action::SoundRequest>
  : std::true_type
{
};

template<>
struct is_action_goal<sound_play_msgs::action::SoundRequest_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<sound_play_msgs::action::SoundRequest_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<sound_play_msgs::action::SoundRequest_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // SOUND_PLAY_MSGS__ACTION__DETAIL__SOUND_REQUEST__TRAITS_HPP_
