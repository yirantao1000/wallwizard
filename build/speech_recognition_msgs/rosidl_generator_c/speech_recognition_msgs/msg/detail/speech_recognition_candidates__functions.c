// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from speech_recognition_msgs:msg/SpeechRecognitionCandidates.idl
// generated code does not contain a copyright notice
#include "speech_recognition_msgs/msg/detail/speech_recognition_candidates__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `transcript`
#include "rosidl_runtime_c/string_functions.h"
// Member `confidence`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
speech_recognition_msgs__msg__SpeechRecognitionCandidates__init(speech_recognition_msgs__msg__SpeechRecognitionCandidates * msg)
{
  if (!msg) {
    return false;
  }
  // transcript
  if (!rosidl_runtime_c__String__Sequence__init(&msg->transcript, 0)) {
    speech_recognition_msgs__msg__SpeechRecognitionCandidates__fini(msg);
    return false;
  }
  // confidence
  if (!rosidl_runtime_c__float__Sequence__init(&msg->confidence, 0)) {
    speech_recognition_msgs__msg__SpeechRecognitionCandidates__fini(msg);
    return false;
  }
  return true;
}

void
speech_recognition_msgs__msg__SpeechRecognitionCandidates__fini(speech_recognition_msgs__msg__SpeechRecognitionCandidates * msg)
{
  if (!msg) {
    return;
  }
  // transcript
  rosidl_runtime_c__String__Sequence__fini(&msg->transcript);
  // confidence
  rosidl_runtime_c__float__Sequence__fini(&msg->confidence);
}

bool
speech_recognition_msgs__msg__SpeechRecognitionCandidates__are_equal(const speech_recognition_msgs__msg__SpeechRecognitionCandidates * lhs, const speech_recognition_msgs__msg__SpeechRecognitionCandidates * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // transcript
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->transcript), &(rhs->transcript)))
  {
    return false;
  }
  // confidence
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->confidence), &(rhs->confidence)))
  {
    return false;
  }
  return true;
}

bool
speech_recognition_msgs__msg__SpeechRecognitionCandidates__copy(
  const speech_recognition_msgs__msg__SpeechRecognitionCandidates * input,
  speech_recognition_msgs__msg__SpeechRecognitionCandidates * output)
{
  if (!input || !output) {
    return false;
  }
  // transcript
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->transcript), &(output->transcript)))
  {
    return false;
  }
  // confidence
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->confidence), &(output->confidence)))
  {
    return false;
  }
  return true;
}

speech_recognition_msgs__msg__SpeechRecognitionCandidates *
speech_recognition_msgs__msg__SpeechRecognitionCandidates__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  speech_recognition_msgs__msg__SpeechRecognitionCandidates * msg = (speech_recognition_msgs__msg__SpeechRecognitionCandidates *)allocator.allocate(sizeof(speech_recognition_msgs__msg__SpeechRecognitionCandidates), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(speech_recognition_msgs__msg__SpeechRecognitionCandidates));
  bool success = speech_recognition_msgs__msg__SpeechRecognitionCandidates__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
speech_recognition_msgs__msg__SpeechRecognitionCandidates__destroy(speech_recognition_msgs__msg__SpeechRecognitionCandidates * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    speech_recognition_msgs__msg__SpeechRecognitionCandidates__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
speech_recognition_msgs__msg__SpeechRecognitionCandidates__Sequence__init(speech_recognition_msgs__msg__SpeechRecognitionCandidates__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  speech_recognition_msgs__msg__SpeechRecognitionCandidates * data = NULL;

  if (size) {
    data = (speech_recognition_msgs__msg__SpeechRecognitionCandidates *)allocator.zero_allocate(size, sizeof(speech_recognition_msgs__msg__SpeechRecognitionCandidates), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = speech_recognition_msgs__msg__SpeechRecognitionCandidates__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        speech_recognition_msgs__msg__SpeechRecognitionCandidates__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
speech_recognition_msgs__msg__SpeechRecognitionCandidates__Sequence__fini(speech_recognition_msgs__msg__SpeechRecognitionCandidates__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      speech_recognition_msgs__msg__SpeechRecognitionCandidates__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

speech_recognition_msgs__msg__SpeechRecognitionCandidates__Sequence *
speech_recognition_msgs__msg__SpeechRecognitionCandidates__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  speech_recognition_msgs__msg__SpeechRecognitionCandidates__Sequence * array = (speech_recognition_msgs__msg__SpeechRecognitionCandidates__Sequence *)allocator.allocate(sizeof(speech_recognition_msgs__msg__SpeechRecognitionCandidates__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = speech_recognition_msgs__msg__SpeechRecognitionCandidates__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
speech_recognition_msgs__msg__SpeechRecognitionCandidates__Sequence__destroy(speech_recognition_msgs__msg__SpeechRecognitionCandidates__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    speech_recognition_msgs__msg__SpeechRecognitionCandidates__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
speech_recognition_msgs__msg__SpeechRecognitionCandidates__Sequence__are_equal(const speech_recognition_msgs__msg__SpeechRecognitionCandidates__Sequence * lhs, const speech_recognition_msgs__msg__SpeechRecognitionCandidates__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!speech_recognition_msgs__msg__SpeechRecognitionCandidates__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
speech_recognition_msgs__msg__SpeechRecognitionCandidates__Sequence__copy(
  const speech_recognition_msgs__msg__SpeechRecognitionCandidates__Sequence * input,
  speech_recognition_msgs__msg__SpeechRecognitionCandidates__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(speech_recognition_msgs__msg__SpeechRecognitionCandidates);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    speech_recognition_msgs__msg__SpeechRecognitionCandidates * data =
      (speech_recognition_msgs__msg__SpeechRecognitionCandidates *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!speech_recognition_msgs__msg__SpeechRecognitionCandidates__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          speech_recognition_msgs__msg__SpeechRecognitionCandidates__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!speech_recognition_msgs__msg__SpeechRecognitionCandidates__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
