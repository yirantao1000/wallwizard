// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from speech_recognition_msgs:msg/Vocabulary.idl
// generated code does not contain a copyright notice

#ifndef SPEECH_RECOGNITION_MSGS__MSG__DETAIL__VOCABULARY__FUNCTIONS_H_
#define SPEECH_RECOGNITION_MSGS__MSG__DETAIL__VOCABULARY__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "speech_recognition_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "speech_recognition_msgs/msg/detail/vocabulary__struct.h"

/// Initialize msg/Vocabulary message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * speech_recognition_msgs__msg__Vocabulary
 * )) before or use
 * speech_recognition_msgs__msg__Vocabulary__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_speech_recognition_msgs
bool
speech_recognition_msgs__msg__Vocabulary__init(speech_recognition_msgs__msg__Vocabulary * msg);

/// Finalize msg/Vocabulary message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_speech_recognition_msgs
void
speech_recognition_msgs__msg__Vocabulary__fini(speech_recognition_msgs__msg__Vocabulary * msg);

/// Create msg/Vocabulary message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * speech_recognition_msgs__msg__Vocabulary__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_speech_recognition_msgs
speech_recognition_msgs__msg__Vocabulary *
speech_recognition_msgs__msg__Vocabulary__create();

/// Destroy msg/Vocabulary message.
/**
 * It calls
 * speech_recognition_msgs__msg__Vocabulary__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_speech_recognition_msgs
void
speech_recognition_msgs__msg__Vocabulary__destroy(speech_recognition_msgs__msg__Vocabulary * msg);

/// Check for msg/Vocabulary message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_speech_recognition_msgs
bool
speech_recognition_msgs__msg__Vocabulary__are_equal(const speech_recognition_msgs__msg__Vocabulary * lhs, const speech_recognition_msgs__msg__Vocabulary * rhs);

/// Copy a msg/Vocabulary message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_speech_recognition_msgs
bool
speech_recognition_msgs__msg__Vocabulary__copy(
  const speech_recognition_msgs__msg__Vocabulary * input,
  speech_recognition_msgs__msg__Vocabulary * output);

/// Initialize array of msg/Vocabulary messages.
/**
 * It allocates the memory for the number of elements and calls
 * speech_recognition_msgs__msg__Vocabulary__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_speech_recognition_msgs
bool
speech_recognition_msgs__msg__Vocabulary__Sequence__init(speech_recognition_msgs__msg__Vocabulary__Sequence * array, size_t size);

/// Finalize array of msg/Vocabulary messages.
/**
 * It calls
 * speech_recognition_msgs__msg__Vocabulary__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_speech_recognition_msgs
void
speech_recognition_msgs__msg__Vocabulary__Sequence__fini(speech_recognition_msgs__msg__Vocabulary__Sequence * array);

/// Create array of msg/Vocabulary messages.
/**
 * It allocates the memory for the array and calls
 * speech_recognition_msgs__msg__Vocabulary__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_speech_recognition_msgs
speech_recognition_msgs__msg__Vocabulary__Sequence *
speech_recognition_msgs__msg__Vocabulary__Sequence__create(size_t size);

/// Destroy array of msg/Vocabulary messages.
/**
 * It calls
 * speech_recognition_msgs__msg__Vocabulary__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_speech_recognition_msgs
void
speech_recognition_msgs__msg__Vocabulary__Sequence__destroy(speech_recognition_msgs__msg__Vocabulary__Sequence * array);

/// Check for msg/Vocabulary message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_speech_recognition_msgs
bool
speech_recognition_msgs__msg__Vocabulary__Sequence__are_equal(const speech_recognition_msgs__msg__Vocabulary__Sequence * lhs, const speech_recognition_msgs__msg__Vocabulary__Sequence * rhs);

/// Copy an array of msg/Vocabulary messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_speech_recognition_msgs
bool
speech_recognition_msgs__msg__Vocabulary__Sequence__copy(
  const speech_recognition_msgs__msg__Vocabulary__Sequence * input,
  speech_recognition_msgs__msg__Vocabulary__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // SPEECH_RECOGNITION_MSGS__MSG__DETAIL__VOCABULARY__FUNCTIONS_H_
