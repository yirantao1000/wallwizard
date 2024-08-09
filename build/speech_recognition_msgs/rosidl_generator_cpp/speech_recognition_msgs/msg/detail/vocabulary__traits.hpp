// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from speech_recognition_msgs:msg/Vocabulary.idl
// generated code does not contain a copyright notice

#ifndef SPEECH_RECOGNITION_MSGS__MSG__DETAIL__VOCABULARY__TRAITS_HPP_
#define SPEECH_RECOGNITION_MSGS__MSG__DETAIL__VOCABULARY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "speech_recognition_msgs/msg/detail/vocabulary__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace speech_recognition_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Vocabulary & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: words
  {
    if (msg.words.size() == 0) {
      out << "words: []";
    } else {
      out << "words: [";
      size_t pending_items = msg.words.size();
      for (auto item : msg.words) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: phonemes
  {
    if (msg.phonemes.size() == 0) {
      out << "phonemes: []";
    } else {
      out << "phonemes: [";
      size_t pending_items = msg.phonemes.size();
      for (auto item : msg.phonemes) {
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
  const Vocabulary & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: words
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.words.size() == 0) {
      out << "words: []\n";
    } else {
      out << "words:\n";
      for (auto item : msg.words) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: phonemes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.phonemes.size() == 0) {
      out << "phonemes: []\n";
    } else {
      out << "phonemes:\n";
      for (auto item : msg.phonemes) {
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

inline std::string to_yaml(const Vocabulary & msg, bool use_flow_style = false)
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
  const speech_recognition_msgs::msg::Vocabulary & msg,
  std::ostream & out, size_t indentation = 0)
{
  speech_recognition_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use speech_recognition_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const speech_recognition_msgs::msg::Vocabulary & msg)
{
  return speech_recognition_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<speech_recognition_msgs::msg::Vocabulary>()
{
  return "speech_recognition_msgs::msg::Vocabulary";
}

template<>
inline const char * name<speech_recognition_msgs::msg::Vocabulary>()
{
  return "speech_recognition_msgs/msg/Vocabulary";
}

template<>
struct has_fixed_size<speech_recognition_msgs::msg::Vocabulary>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<speech_recognition_msgs::msg::Vocabulary>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<speech_recognition_msgs::msg::Vocabulary>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SPEECH_RECOGNITION_MSGS__MSG__DETAIL__VOCABULARY__TRAITS_HPP_
