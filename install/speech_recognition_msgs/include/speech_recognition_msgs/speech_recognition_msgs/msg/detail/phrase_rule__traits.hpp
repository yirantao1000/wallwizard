// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from speech_recognition_msgs:msg/PhraseRule.idl
// generated code does not contain a copyright notice

#ifndef SPEECH_RECOGNITION_MSGS__MSG__DETAIL__PHRASE_RULE__TRAITS_HPP_
#define SPEECH_RECOGNITION_MSGS__MSG__DETAIL__PHRASE_RULE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "speech_recognition_msgs/msg/detail/phrase_rule__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace speech_recognition_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PhraseRule & msg,
  std::ostream & out)
{
  out << "{";
  // member: symbol
  {
    out << "symbol: ";
    rosidl_generator_traits::value_to_yaml(msg.symbol, out);
    out << ", ";
  }

  // member: definition
  {
    if (msg.definition.size() == 0) {
      out << "definition: []";
    } else {
      out << "definition: [";
      size_t pending_items = msg.definition.size();
      for (auto item : msg.definition) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PhraseRule & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: symbol
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "symbol: ";
    rosidl_generator_traits::value_to_yaml(msg.symbol, out);
    out << "\n";
  }

  // member: definition
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.definition.size() == 0) {
      out << "definition: []\n";
    } else {
      out << "definition:\n";
      for (auto item : msg.definition) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PhraseRule & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace speech_recognition_msgs

namespace rosidl_generator_traits
{

[[deprecated("use speech_recognition_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const speech_recognition_msgs::msg::PhraseRule & msg,
  std::ostream & out, size_t indentation = 0)
{
  speech_recognition_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use speech_recognition_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const speech_recognition_msgs::msg::PhraseRule & msg)
{
  return speech_recognition_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<speech_recognition_msgs::msg::PhraseRule>()
{
  return "speech_recognition_msgs::msg::PhraseRule";
}

template<>
inline const char * name<speech_recognition_msgs::msg::PhraseRule>()
{
  return "speech_recognition_msgs/msg/PhraseRule";
}

template<>
struct has_fixed_size<speech_recognition_msgs::msg::PhraseRule>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<speech_recognition_msgs::msg::PhraseRule>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<speech_recognition_msgs::msg::PhraseRule>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SPEECH_RECOGNITION_MSGS__MSG__DETAIL__PHRASE_RULE__TRAITS_HPP_
