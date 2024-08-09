// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from speech_recognition_msgs:srv/SpeechRecognition.idl
// generated code does not contain a copyright notice

#ifndef SPEECH_RECOGNITION_MSGS__SRV__DETAIL__SPEECH_RECOGNITION__TRAITS_HPP_
#define SPEECH_RECOGNITION_MSGS__SRV__DETAIL__SPEECH_RECOGNITION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "speech_recognition_msgs/srv/detail/speech_recognition__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'vocabulary'
#include "speech_recognition_msgs/msg/detail/vocabulary__traits.hpp"
// Member 'grammar'
#include "speech_recognition_msgs/msg/detail/grammar__traits.hpp"

namespace speech_recognition_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SpeechRecognition_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: vocabulary
  {
    out << "vocabulary: ";
    to_flow_style_yaml(msg.vocabulary, out);
    out << ", ";
  }

  // member: grammar
  {
    out << "grammar: ";
    to_flow_style_yaml(msg.grammar, out);
    out << ", ";
  }

  // member: grammar_name
  {
    out << "grammar_name: ";
    rosidl_generator_traits::value_to_yaml(msg.grammar_name, out);
    out << ", ";
  }

  // member: duration
  {
    out << "duration: ";
    rosidl_generator_traits::value_to_yaml(msg.duration, out);
    out << ", ";
  }

  // member: quiet
  {
    out << "quiet: ";
    rosidl_generator_traits::value_to_yaml(msg.quiet, out);
    out << ", ";
  }

  // member: threshold
  {
    out << "threshold: ";
    rosidl_generator_traits::value_to_yaml(msg.threshold, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SpeechRecognition_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: vocabulary
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vocabulary:\n";
    to_block_style_yaml(msg.vocabulary, out, indentation + 2);
  }

  // member: grammar
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "grammar:\n";
    to_block_style_yaml(msg.grammar, out, indentation + 2);
  }

  // member: grammar_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "grammar_name: ";
    rosidl_generator_traits::value_to_yaml(msg.grammar_name, out);
    out << "\n";
  }

  // member: duration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "duration: ";
    rosidl_generator_traits::value_to_yaml(msg.duration, out);
    out << "\n";
  }

  // member: quiet
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "quiet: ";
    rosidl_generator_traits::value_to_yaml(msg.quiet, out);
    out << "\n";
  }

  // member: threshold
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "threshold: ";
    rosidl_generator_traits::value_to_yaml(msg.threshold, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SpeechRecognition_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace speech_recognition_msgs

namespace rosidl_generator_traits
{

[[deprecated("use speech_recognition_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const speech_recognition_msgs::srv::SpeechRecognition_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  speech_recognition_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use speech_recognition_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const speech_recognition_msgs::srv::SpeechRecognition_Request & msg)
{
  return speech_recognition_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<speech_recognition_msgs::srv::SpeechRecognition_Request>()
{
  return "speech_recognition_msgs::srv::SpeechRecognition_Request";
}

template<>
inline const char * name<speech_recognition_msgs::srv::SpeechRecognition_Request>()
{
  return "speech_recognition_msgs/srv/SpeechRecognition_Request";
}

template<>
struct has_fixed_size<speech_recognition_msgs::srv::SpeechRecognition_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<speech_recognition_msgs::srv::SpeechRecognition_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<speech_recognition_msgs::srv::SpeechRecognition_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
#include "speech_recognition_msgs/msg/detail/speech_recognition_candidates__traits.hpp"

namespace speech_recognition_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SpeechRecognition_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SpeechRecognition_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SpeechRecognition_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace speech_recognition_msgs

namespace rosidl_generator_traits
{

[[deprecated("use speech_recognition_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const speech_recognition_msgs::srv::SpeechRecognition_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  speech_recognition_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use speech_recognition_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const speech_recognition_msgs::srv::SpeechRecognition_Response & msg)
{
  return speech_recognition_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<speech_recognition_msgs::srv::SpeechRecognition_Response>()
{
  return "speech_recognition_msgs::srv::SpeechRecognition_Response";
}

template<>
inline const char * name<speech_recognition_msgs::srv::SpeechRecognition_Response>()
{
  return "speech_recognition_msgs/srv/SpeechRecognition_Response";
}

template<>
struct has_fixed_size<speech_recognition_msgs::srv::SpeechRecognition_Response>
  : std::integral_constant<bool, has_fixed_size<speech_recognition_msgs::msg::SpeechRecognitionCandidates>::value> {};

template<>
struct has_bounded_size<speech_recognition_msgs::srv::SpeechRecognition_Response>
  : std::integral_constant<bool, has_bounded_size<speech_recognition_msgs::msg::SpeechRecognitionCandidates>::value> {};

template<>
struct is_message<speech_recognition_msgs::srv::SpeechRecognition_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<speech_recognition_msgs::srv::SpeechRecognition>()
{
  return "speech_recognition_msgs::srv::SpeechRecognition";
}

template<>
inline const char * name<speech_recognition_msgs::srv::SpeechRecognition>()
{
  return "speech_recognition_msgs/srv/SpeechRecognition";
}

template<>
struct has_fixed_size<speech_recognition_msgs::srv::SpeechRecognition>
  : std::integral_constant<
    bool,
    has_fixed_size<speech_recognition_msgs::srv::SpeechRecognition_Request>::value &&
    has_fixed_size<speech_recognition_msgs::srv::SpeechRecognition_Response>::value
  >
{
};

template<>
struct has_bounded_size<speech_recognition_msgs::srv::SpeechRecognition>
  : std::integral_constant<
    bool,
    has_bounded_size<speech_recognition_msgs::srv::SpeechRecognition_Request>::value &&
    has_bounded_size<speech_recognition_msgs::srv::SpeechRecognition_Response>::value
  >
{
};

template<>
struct is_service<speech_recognition_msgs::srv::SpeechRecognition>
  : std::true_type
{
};

template<>
struct is_service_request<speech_recognition_msgs::srv::SpeechRecognition_Request>
  : std::true_type
{
};

template<>
struct is_service_response<speech_recognition_msgs::srv::SpeechRecognition_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // SPEECH_RECOGNITION_MSGS__SRV__DETAIL__SPEECH_RECOGNITION__TRAITS_HPP_
