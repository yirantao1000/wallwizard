// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from speech_recognition_msgs:msg/Vocabulary.idl
// generated code does not contain a copyright notice
#include "speech_recognition_msgs/msg/detail/vocabulary__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
// Member `words`
// Member `phonemes`
#include "rosidl_runtime_c/string_functions.h"

bool
speech_recognition_msgs__msg__Vocabulary__init(speech_recognition_msgs__msg__Vocabulary * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    speech_recognition_msgs__msg__Vocabulary__fini(msg);
    return false;
  }
  // words
  if (!rosidl_runtime_c__String__Sequence__init(&msg->words, 0)) {
    speech_recognition_msgs__msg__Vocabulary__fini(msg);
    return false;
  }
  // phonemes
  if (!rosidl_runtime_c__String__Sequence__init(&msg->phonemes, 0)) {
    speech_recognition_msgs__msg__Vocabulary__fini(msg);
    return false;
  }
  return true;
}

void
speech_recognition_msgs__msg__Vocabulary__fini(speech_recognition_msgs__msg__Vocabulary * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // words
  rosidl_runtime_c__String__Sequence__fini(&msg->words);
  // phonemes
  rosidl_runtime_c__String__Sequence__fini(&msg->phonemes);
}

bool
speech_recognition_msgs__msg__Vocabulary__are_equal(const speech_recognition_msgs__msg__Vocabulary * lhs, const speech_recognition_msgs__msg__Vocabulary * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // words
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->words), &(rhs->words)))
  {
    return false;
  }
  // phonemes
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->phonemes), &(rhs->phonemes)))
  {
    return false;
  }
  return true;
}

bool
speech_recognition_msgs__msg__Vocabulary__copy(
  const speech_recognition_msgs__msg__Vocabulary * input,
  speech_recognition_msgs__msg__Vocabulary * output)
{
  if (!input || !output) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // words
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->words), &(output->words)))
  {
    return false;
  }
  // phonemes
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->phonemes), &(output->phonemes)))
  {
    return false;
  }
  return true;
}

speech_recognition_msgs__msg__Vocabulary *
speech_recognition_msgs__msg__Vocabulary__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  speech_recognition_msgs__msg__Vocabulary * msg = (speech_recognition_msgs__msg__Vocabulary *)allocator.allocate(sizeof(speech_recognition_msgs__msg__Vocabulary), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(speech_recognition_msgs__msg__Vocabulary));
  bool success = speech_recognition_msgs__msg__Vocabulary__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
speech_recognition_msgs__msg__Vocabulary__destroy(speech_recognition_msgs__msg__Vocabulary * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    speech_recognition_msgs__msg__Vocabulary__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
speech_recognition_msgs__msg__Vocabulary__Sequence__init(speech_recognition_msgs__msg__Vocabulary__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  speech_recognition_msgs__msg__Vocabulary * data = NULL;

  if (size) {
    data = (speech_recognition_msgs__msg__Vocabulary *)allocator.zero_allocate(size, sizeof(speech_recognition_msgs__msg__Vocabulary), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = speech_recognition_msgs__msg__Vocabulary__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        speech_recognition_msgs__msg__Vocabulary__fini(&data[i - 1]);
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
speech_recognition_msgs__msg__Vocabulary__Sequence__fini(speech_recognition_msgs__msg__Vocabulary__Sequence * array)
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
      speech_recognition_msgs__msg__Vocabulary__fini(&array->data[i]);
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

speech_recognition_msgs__msg__Vocabulary__Sequence *
speech_recognition_msgs__msg__Vocabulary__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  speech_recognition_msgs__msg__Vocabulary__Sequence * array = (speech_recognition_msgs__msg__Vocabulary__Sequence *)allocator.allocate(sizeof(speech_recognition_msgs__msg__Vocabulary__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = speech_recognition_msgs__msg__Vocabulary__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
speech_recognition_msgs__msg__Vocabulary__Sequence__destroy(speech_recognition_msgs__msg__Vocabulary__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    speech_recognition_msgs__msg__Vocabulary__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
speech_recognition_msgs__msg__Vocabulary__Sequence__are_equal(const speech_recognition_msgs__msg__Vocabulary__Sequence * lhs, const speech_recognition_msgs__msg__Vocabulary__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!speech_recognition_msgs__msg__Vocabulary__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
speech_recognition_msgs__msg__Vocabulary__Sequence__copy(
  const speech_recognition_msgs__msg__Vocabulary__Sequence * input,
  speech_recognition_msgs__msg__Vocabulary__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(speech_recognition_msgs__msg__Vocabulary);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    speech_recognition_msgs__msg__Vocabulary * data =
      (speech_recognition_msgs__msg__Vocabulary *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!speech_recognition_msgs__msg__Vocabulary__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          speech_recognition_msgs__msg__Vocabulary__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!speech_recognition_msgs__msg__Vocabulary__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
