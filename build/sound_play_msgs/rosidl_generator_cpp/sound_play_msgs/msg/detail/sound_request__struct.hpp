// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sound_play_msgs:msg/SoundRequest.idl
// generated code does not contain a copyright notice

#ifndef SOUND_PLAY_MSGS__MSG__DETAIL__SOUND_REQUEST__STRUCT_HPP_
#define SOUND_PLAY_MSGS__MSG__DETAIL__SOUND_REQUEST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__sound_play_msgs__msg__SoundRequest __attribute__((deprecated))
#else
# define DEPRECATED__sound_play_msgs__msg__SoundRequest __declspec(deprecated)
#endif

namespace sound_play_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SoundRequest_
{
  using Type = SoundRequest_<ContainerAllocator>;

  explicit SoundRequest_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sound = 0;
      this->command = 0;
      this->volume = 0.0f;
      this->arg = "";
      this->arg2 = "";
    }
  }

  explicit SoundRequest_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : arg(_alloc),
    arg2(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sound = 0;
      this->command = 0;
      this->volume = 0.0f;
      this->arg = "";
      this->arg2 = "";
    }
  }

  // field types and members
  using _sound_type =
    int8_t;
  _sound_type sound;
  using _command_type =
    int8_t;
  _command_type command;
  using _volume_type =
    float;
  _volume_type volume;
  using _arg_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _arg_type arg;
  using _arg2_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _arg2_type arg2;

  // setters for named parameter idiom
  Type & set__sound(
    const int8_t & _arg)
  {
    this->sound = _arg;
    return *this;
  }
  Type & set__command(
    const int8_t & _arg)
  {
    this->command = _arg;
    return *this;
  }
  Type & set__volume(
    const float & _arg)
  {
    this->volume = _arg;
    return *this;
  }
  Type & set__arg(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->arg = _arg;
    return *this;
  }
  Type & set__arg2(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->arg2 = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int8_t BACKINGUP =
    1;
  static constexpr int8_t NEEDS_UNPLUGGING =
    2;
  static constexpr int8_t NEEDS_PLUGGING =
    3;
  static constexpr int8_t NEEDS_UNPLUGGING_BADLY =
    4;
  static constexpr int8_t NEEDS_PLUGGING_BADLY =
    5;
  static constexpr int8_t ALL =
    -1;
  static constexpr int8_t PLAY_FILE =
    -2;
  static constexpr int8_t SAY =
    -3;
  static constexpr int8_t PLAY_STOP =
    0;
  static constexpr int8_t PLAY_ONCE =
    1;
  static constexpr int8_t PLAY_START =
    2;

  // pointer types
  using RawPtr =
    sound_play_msgs::msg::SoundRequest_<ContainerAllocator> *;
  using ConstRawPtr =
    const sound_play_msgs::msg::SoundRequest_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sound_play_msgs::msg::SoundRequest_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sound_play_msgs::msg::SoundRequest_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sound_play_msgs::msg::SoundRequest_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sound_play_msgs::msg::SoundRequest_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sound_play_msgs::msg::SoundRequest_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sound_play_msgs::msg::SoundRequest_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sound_play_msgs::msg::SoundRequest_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sound_play_msgs::msg::SoundRequest_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sound_play_msgs__msg__SoundRequest
    std::shared_ptr<sound_play_msgs::msg::SoundRequest_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sound_play_msgs__msg__SoundRequest
    std::shared_ptr<sound_play_msgs::msg::SoundRequest_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SoundRequest_ & other) const
  {
    if (this->sound != other.sound) {
      return false;
    }
    if (this->command != other.command) {
      return false;
    }
    if (this->volume != other.volume) {
      return false;
    }
    if (this->arg != other.arg) {
      return false;
    }
    if (this->arg2 != other.arg2) {
      return false;
    }
    return true;
  }
  bool operator!=(const SoundRequest_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SoundRequest_

// alias to use template instance with default allocator
using SoundRequest =
  sound_play_msgs::msg::SoundRequest_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t SoundRequest_<ContainerAllocator>::BACKINGUP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t SoundRequest_<ContainerAllocator>::NEEDS_UNPLUGGING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t SoundRequest_<ContainerAllocator>::NEEDS_PLUGGING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t SoundRequest_<ContainerAllocator>::NEEDS_UNPLUGGING_BADLY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t SoundRequest_<ContainerAllocator>::NEEDS_PLUGGING_BADLY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t SoundRequest_<ContainerAllocator>::ALL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t SoundRequest_<ContainerAllocator>::PLAY_FILE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t SoundRequest_<ContainerAllocator>::SAY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t SoundRequest_<ContainerAllocator>::PLAY_STOP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t SoundRequest_<ContainerAllocator>::PLAY_ONCE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t SoundRequest_<ContainerAllocator>::PLAY_START;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace sound_play_msgs

#endif  // SOUND_PLAY_MSGS__MSG__DETAIL__SOUND_REQUEST__STRUCT_HPP_
