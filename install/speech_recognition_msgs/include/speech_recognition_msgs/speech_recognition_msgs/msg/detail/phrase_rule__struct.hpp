// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from speech_recognition_msgs:msg/PhraseRule.idl
// generated code does not contain a copyright notice

#ifndef SPEECH_RECOGNITION_MSGS__MSG__DETAIL__PHRASE_RULE__STRUCT_HPP_
#define SPEECH_RECOGNITION_MSGS__MSG__DETAIL__PHRASE_RULE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__speech_recognition_msgs__msg__PhraseRule __attribute__((deprecated))
#else
# define DEPRECATED__speech_recognition_msgs__msg__PhraseRule __declspec(deprecated)
#endif

namespace speech_recognition_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PhraseRule_
{
  using Type = PhraseRule_<ContainerAllocator>;

  explicit PhraseRule_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->symbol = "";
    }
  }

  explicit PhraseRule_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : symbol(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->symbol = "";
    }
  }

  // field types and members
  using _symbol_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _symbol_type symbol;
  using _definition_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _definition_type definition;

  // setters for named parameter idiom
  Type & set__symbol(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->symbol = _arg;
    return *this;
  }
  Type & set__definition(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->definition = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    speech_recognition_msgs::msg::PhraseRule_<ContainerAllocator> *;
  using ConstRawPtr =
    const speech_recognition_msgs::msg::PhraseRule_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<speech_recognition_msgs::msg::PhraseRule_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<speech_recognition_msgs::msg::PhraseRule_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      speech_recognition_msgs::msg::PhraseRule_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<speech_recognition_msgs::msg::PhraseRule_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      speech_recognition_msgs::msg::PhraseRule_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<speech_recognition_msgs::msg::PhraseRule_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<speech_recognition_msgs::msg::PhraseRule_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<speech_recognition_msgs::msg::PhraseRule_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__speech_recognition_msgs__msg__PhraseRule
    std::shared_ptr<speech_recognition_msgs::msg::PhraseRule_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__speech_recognition_msgs__msg__PhraseRule
    std::shared_ptr<speech_recognition_msgs::msg::PhraseRule_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PhraseRule_ & other) const
  {
    if (this->symbol != other.symbol) {
      return false;
    }
    if (this->definition != other.definition) {
      return false;
    }
    return true;
  }
  bool operator!=(const PhraseRule_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PhraseRule_

// alias to use template instance with default allocator
using PhraseRule =
  speech_recognition_msgs::msg::PhraseRule_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace speech_recognition_msgs

#endif  // SPEECH_RECOGNITION_MSGS__MSG__DETAIL__PHRASE_RULE__STRUCT_HPP_
