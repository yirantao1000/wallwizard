// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from speech_recognition_msgs:srv/SpeechRecognition.idl
// generated code does not contain a copyright notice

#ifndef SPEECH_RECOGNITION_MSGS__SRV__DETAIL__SPEECH_RECOGNITION__STRUCT_HPP_
#define SPEECH_RECOGNITION_MSGS__SRV__DETAIL__SPEECH_RECOGNITION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'vocabulary'
#include "speech_recognition_msgs/msg/detail/vocabulary__struct.hpp"
// Member 'grammar'
#include "speech_recognition_msgs/msg/detail/grammar__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__speech_recognition_msgs__srv__SpeechRecognition_Request __attribute__((deprecated))
#else
# define DEPRECATED__speech_recognition_msgs__srv__SpeechRecognition_Request __declspec(deprecated)
#endif

namespace speech_recognition_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SpeechRecognition_Request_
{
  using Type = SpeechRecognition_Request_<ContainerAllocator>;

  explicit SpeechRecognition_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : vocabulary(_init),
    grammar(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->grammar_name = "";
      this->duration = 0.0f;
      this->quiet = false;
      this->threshold = 0.0f;
    }
  }

  explicit SpeechRecognition_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : vocabulary(_alloc, _init),
    grammar(_alloc, _init),
    grammar_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->grammar_name = "";
      this->duration = 0.0f;
      this->quiet = false;
      this->threshold = 0.0f;
    }
  }

  // field types and members
  using _vocabulary_type =
    speech_recognition_msgs::msg::Vocabulary_<ContainerAllocator>;
  _vocabulary_type vocabulary;
  using _grammar_type =
    speech_recognition_msgs::msg::Grammar_<ContainerAllocator>;
  _grammar_type grammar;
  using _grammar_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _grammar_name_type grammar_name;
  using _duration_type =
    float;
  _duration_type duration;
  using _quiet_type =
    bool;
  _quiet_type quiet;
  using _threshold_type =
    float;
  _threshold_type threshold;

  // setters for named parameter idiom
  Type & set__vocabulary(
    const speech_recognition_msgs::msg::Vocabulary_<ContainerAllocator> & _arg)
  {
    this->vocabulary = _arg;
    return *this;
  }
  Type & set__grammar(
    const speech_recognition_msgs::msg::Grammar_<ContainerAllocator> & _arg)
  {
    this->grammar = _arg;
    return *this;
  }
  Type & set__grammar_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->grammar_name = _arg;
    return *this;
  }
  Type & set__duration(
    const float & _arg)
  {
    this->duration = _arg;
    return *this;
  }
  Type & set__quiet(
    const bool & _arg)
  {
    this->quiet = _arg;
    return *this;
  }
  Type & set__threshold(
    const float & _arg)
  {
    this->threshold = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    speech_recognition_msgs::srv::SpeechRecognition_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const speech_recognition_msgs::srv::SpeechRecognition_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<speech_recognition_msgs::srv::SpeechRecognition_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<speech_recognition_msgs::srv::SpeechRecognition_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      speech_recognition_msgs::srv::SpeechRecognition_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<speech_recognition_msgs::srv::SpeechRecognition_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      speech_recognition_msgs::srv::SpeechRecognition_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<speech_recognition_msgs::srv::SpeechRecognition_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<speech_recognition_msgs::srv::SpeechRecognition_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<speech_recognition_msgs::srv::SpeechRecognition_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__speech_recognition_msgs__srv__SpeechRecognition_Request
    std::shared_ptr<speech_recognition_msgs::srv::SpeechRecognition_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__speech_recognition_msgs__srv__SpeechRecognition_Request
    std::shared_ptr<speech_recognition_msgs::srv::SpeechRecognition_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SpeechRecognition_Request_ & other) const
  {
    if (this->vocabulary != other.vocabulary) {
      return false;
    }
    if (this->grammar != other.grammar) {
      return false;
    }
    if (this->grammar_name != other.grammar_name) {
      return false;
    }
    if (this->duration != other.duration) {
      return false;
    }
    if (this->quiet != other.quiet) {
      return false;
    }
    if (this->threshold != other.threshold) {
      return false;
    }
    return true;
  }
  bool operator!=(const SpeechRecognition_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SpeechRecognition_Request_

// alias to use template instance with default allocator
using SpeechRecognition_Request =
  speech_recognition_msgs::srv::SpeechRecognition_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace speech_recognition_msgs


// Include directives for member types
// Member 'result'
#include "speech_recognition_msgs/msg/detail/speech_recognition_candidates__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__speech_recognition_msgs__srv__SpeechRecognition_Response __attribute__((deprecated))
#else
# define DEPRECATED__speech_recognition_msgs__srv__SpeechRecognition_Response __declspec(deprecated)
#endif

namespace speech_recognition_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SpeechRecognition_Response_
{
  using Type = SpeechRecognition_Response_<ContainerAllocator>;

  explicit SpeechRecognition_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    (void)_init;
  }

  explicit SpeechRecognition_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _result_type =
    speech_recognition_msgs::msg::SpeechRecognitionCandidates_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__result(
    const speech_recognition_msgs::msg::SpeechRecognitionCandidates_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    speech_recognition_msgs::srv::SpeechRecognition_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const speech_recognition_msgs::srv::SpeechRecognition_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<speech_recognition_msgs::srv::SpeechRecognition_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<speech_recognition_msgs::srv::SpeechRecognition_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      speech_recognition_msgs::srv::SpeechRecognition_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<speech_recognition_msgs::srv::SpeechRecognition_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      speech_recognition_msgs::srv::SpeechRecognition_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<speech_recognition_msgs::srv::SpeechRecognition_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<speech_recognition_msgs::srv::SpeechRecognition_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<speech_recognition_msgs::srv::SpeechRecognition_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__speech_recognition_msgs__srv__SpeechRecognition_Response
    std::shared_ptr<speech_recognition_msgs::srv::SpeechRecognition_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__speech_recognition_msgs__srv__SpeechRecognition_Response
    std::shared_ptr<speech_recognition_msgs::srv::SpeechRecognition_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SpeechRecognition_Response_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const SpeechRecognition_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SpeechRecognition_Response_

// alias to use template instance with default allocator
using SpeechRecognition_Response =
  speech_recognition_msgs::srv::SpeechRecognition_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace speech_recognition_msgs

namespace speech_recognition_msgs
{

namespace srv
{

struct SpeechRecognition
{
  using Request = speech_recognition_msgs::srv::SpeechRecognition_Request;
  using Response = speech_recognition_msgs::srv::SpeechRecognition_Response;
};

}  // namespace srv

}  // namespace speech_recognition_msgs

#endif  // SPEECH_RECOGNITION_MSGS__SRV__DETAIL__SPEECH_RECOGNITION__STRUCT_HPP_
