// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from speech_recognition_msgs:msg/Grammar.idl
// generated code does not contain a copyright notice

#ifndef SPEECH_RECOGNITION_MSGS__MSG__DETAIL__GRAMMAR__STRUCT_HPP_
#define SPEECH_RECOGNITION_MSGS__MSG__DETAIL__GRAMMAR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'rules'
#include "speech_recognition_msgs/msg/detail/phrase_rule__struct.hpp"
// Member 'vocabularies'
#include "speech_recognition_msgs/msg/detail/vocabulary__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__speech_recognition_msgs__msg__Grammar __attribute__((deprecated))
#else
# define DEPRECATED__speech_recognition_msgs__msg__Grammar __declspec(deprecated)
#endif

namespace speech_recognition_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Grammar_
{
  using Type = Grammar_<ContainerAllocator>;

  explicit Grammar_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
    }
  }

  explicit Grammar_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _rules_type =
    std::vector<speech_recognition_msgs::msg::PhraseRule_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<speech_recognition_msgs::msg::PhraseRule_<ContainerAllocator>>>;
  _rules_type rules;
  using _categories_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _categories_type categories;
  using _vocabularies_type =
    std::vector<speech_recognition_msgs::msg::Vocabulary_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<speech_recognition_msgs::msg::Vocabulary_<ContainerAllocator>>>;
  _vocabularies_type vocabularies;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__rules(
    const std::vector<speech_recognition_msgs::msg::PhraseRule_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<speech_recognition_msgs::msg::PhraseRule_<ContainerAllocator>>> & _arg)
  {
    this->rules = _arg;
    return *this;
  }
  Type & set__categories(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->categories = _arg;
    return *this;
  }
  Type & set__vocabularies(
    const std::vector<speech_recognition_msgs::msg::Vocabulary_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<speech_recognition_msgs::msg::Vocabulary_<ContainerAllocator>>> & _arg)
  {
    this->vocabularies = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    speech_recognition_msgs::msg::Grammar_<ContainerAllocator> *;
  using ConstRawPtr =
    const speech_recognition_msgs::msg::Grammar_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<speech_recognition_msgs::msg::Grammar_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<speech_recognition_msgs::msg::Grammar_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      speech_recognition_msgs::msg::Grammar_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<speech_recognition_msgs::msg::Grammar_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      speech_recognition_msgs::msg::Grammar_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<speech_recognition_msgs::msg::Grammar_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<speech_recognition_msgs::msg::Grammar_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<speech_recognition_msgs::msg::Grammar_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__speech_recognition_msgs__msg__Grammar
    std::shared_ptr<speech_recognition_msgs::msg::Grammar_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__speech_recognition_msgs__msg__Grammar
    std::shared_ptr<speech_recognition_msgs::msg::Grammar_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Grammar_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->rules != other.rules) {
      return false;
    }
    if (this->categories != other.categories) {
      return false;
    }
    if (this->vocabularies != other.vocabularies) {
      return false;
    }
    return true;
  }
  bool operator!=(const Grammar_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Grammar_

// alias to use template instance with default allocator
using Grammar =
  speech_recognition_msgs::msg::Grammar_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace speech_recognition_msgs

#endif  // SPEECH_RECOGNITION_MSGS__MSG__DETAIL__GRAMMAR__STRUCT_HPP_
