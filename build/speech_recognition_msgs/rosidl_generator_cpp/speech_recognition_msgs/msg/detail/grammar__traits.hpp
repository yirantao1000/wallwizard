// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from speech_recognition_msgs:msg/Grammar.idl
// generated code does not contain a copyright notice

#ifndef SPEECH_RECOGNITION_MSGS__MSG__DETAIL__GRAMMAR__TRAITS_HPP_
#define SPEECH_RECOGNITION_MSGS__MSG__DETAIL__GRAMMAR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "speech_recognition_msgs/msg/detail/grammar__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'rules'
#include "speech_recognition_msgs/msg/detail/phrase_rule__traits.hpp"
// Member 'vocabularies'
#include "speech_recognition_msgs/msg/detail/vocabulary__traits.hpp"

namespace speech_recognition_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Grammar & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: rules
  {
    if (msg.rules.size() == 0) {
      out << "rules: []";
    } else {
      out << "rules: [";
      size_t pending_items = msg.rules.size();
      for (auto item : msg.rules) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: categories
  {
    if (msg.categories.size() == 0) {
      out << "categories: []";
    } else {
      out << "categories: [";
      size_t pending_items = msg.categories.size();
      for (auto item : msg.categories) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: vocabularies
  {
    if (msg.vocabularies.size() == 0) {
      out << "vocabularies: []";
    } else {
      out << "vocabularies: [";
      size_t pending_items = msg.vocabularies.size();
      for (auto item : msg.vocabularies) {
        to_flow_style_yaml(item, out);
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
  const Grammar & msg,
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

  // member: rules
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.rules.size() == 0) {
      out << "rules: []\n";
    } else {
      out << "rules:\n";
      for (auto item : msg.rules) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: categories
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.categories.size() == 0) {
      out << "categories: []\n";
    } else {
      out << "categories:\n";
      for (auto item : msg.categories) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: vocabularies
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.vocabularies.size() == 0) {
      out << "vocabularies: []\n";
    } else {
      out << "vocabularies:\n";
      for (auto item : msg.vocabularies) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Grammar & msg, bool use_flow_style = false)
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
  const speech_recognition_msgs::msg::Grammar & msg,
  std::ostream & out, size_t indentation = 0)
{
  speech_recognition_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use speech_recognition_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const speech_recognition_msgs::msg::Grammar & msg)
{
  return speech_recognition_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<speech_recognition_msgs::msg::Grammar>()
{
  return "speech_recognition_msgs::msg::Grammar";
}

template<>
inline const char * name<speech_recognition_msgs::msg::Grammar>()
{
  return "speech_recognition_msgs/msg/Grammar";
}

template<>
struct has_fixed_size<speech_recognition_msgs::msg::Grammar>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<speech_recognition_msgs::msg::Grammar>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<speech_recognition_msgs::msg::Grammar>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SPEECH_RECOGNITION_MSGS__MSG__DETAIL__GRAMMAR__TRAITS_HPP_
