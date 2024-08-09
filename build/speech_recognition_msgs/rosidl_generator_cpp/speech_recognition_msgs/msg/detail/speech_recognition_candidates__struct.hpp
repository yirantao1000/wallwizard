// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from speech_recognition_msgs:msg/SpeechRecognitionCandidates.idl
// generated code does not contain a copyright notice

#ifndef SPEECH_RECOGNITION_MSGS__MSG__DETAIL__SPEECH_RECOGNITION_CANDIDATES__STRUCT_HPP_
#define SPEECH_RECOGNITION_MSGS__MSG__DETAIL__SPEECH_RECOGNITION_CANDIDATES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__speech_recognition_msgs__msg__SpeechRecognitionCandidates __attribute__((deprecated))
#else
# define DEPRECATED__speech_recognition_msgs__msg__SpeechRecognitionCandidates __declspec(deprecated)
#endif

namespace speech_recognition_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SpeechRecognitionCandidates_
{
  using Type = SpeechRecognitionCandidates_<ContainerAllocator>;

  explicit SpeechRecognitionCandidates_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit SpeechRecognitionCandidates_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _transcript_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _transcript_type transcript;
  using _confidence_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _confidence_type confidence;

  // setters for named parameter idiom
  Type & set__transcript(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->transcript = _arg;
    return *this;
  }
  Type & set__confidence(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->confidence = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    speech_recognition_msgs::msg::SpeechRecognitionCandidates_<ContainerAllocator> *;
  using ConstRawPtr =
    const speech_recognition_msgs::msg::SpeechRecognitionCandidates_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<speech_recognition_msgs::msg::SpeechRecognitionCandidates_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<speech_recognition_msgs::msg::SpeechRecognitionCandidates_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      speech_recognition_msgs::msg::SpeechRecognitionCandidates_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<speech_recognition_msgs::msg::SpeechRecognitionCandidates_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      speech_recognition_msgs::msg::SpeechRecognitionCandidates_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<speech_recognition_msgs::msg::SpeechRecognitionCandidates_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<speech_recognition_msgs::msg::SpeechRecognitionCandidates_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<speech_recognition_msgs::msg::SpeechRecognitionCandidates_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__speech_recognition_msgs__msg__SpeechRecognitionCandidates
    std::shared_ptr<speech_recognition_msgs::msg::SpeechRecognitionCandidates_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__speech_recognition_msgs__msg__SpeechRecognitionCandidates
    std::shared_ptr<speech_recognition_msgs::msg::SpeechRecognitionCandidates_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SpeechRecognitionCandidates_ & other) const
  {
    if (this->transcript != other.transcript) {
      return false;
    }
    if (this->confidence != other.confidence) {
      return false;
    }
    return true;
  }
  bool operator!=(const SpeechRecognitionCandidates_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SpeechRecognitionCandidates_

// alias to use template instance with default allocator
using SpeechRecognitionCandidates =
  speech_recognition_msgs::msg::SpeechRecognitionCandidates_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace speech_recognition_msgs

#endif  // SPEECH_RECOGNITION_MSGS__MSG__DETAIL__SPEECH_RECOGNITION_CANDIDATES__STRUCT_HPP_
