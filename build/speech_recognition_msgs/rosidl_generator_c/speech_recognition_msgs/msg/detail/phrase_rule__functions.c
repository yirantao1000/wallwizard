// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from speech_recognition_msgs:msg/PhraseRule.idl
// generated code does not contain a copyright notice
#include "speech_recognition_msgs/msg/detail/phrase_rule__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `symbol`
// Member `definition`
#include "rosidl_runtime_c/string_functions.h"

bool
speech_recognition_msgs__msg__PhraseRule__init(speech_recognition_msgs__msg__PhraseRule * msg)
{
  if (!msg) {
    return false;
  }
  // symbol
  if (!rosidl_runtime_c__String__init(&msg->symbol)) {
    speech_recognition_msgs__msg__PhraseRule__fini(msg);
    return false;
  }
  // definition
  if (!rosidl_runtime_c__String__Sequence__init(&msg->definition, 0)) {
    speech_recognition_msgs__msg__PhraseRule__fini(msg);
    return false;
  }
  return true;
}

void
speech_recognition_msgs__msg__PhraseRule__fini(speech_recognition_msgs__msg__PhraseRule * msg)
{
  if (!msg) {
    return;
  }
  // symbol
  rosidl_runtime_c__String__fini(&msg->symbol);
  // definition
  rosidl_runtime_c__String__Sequence__fini(&msg->definition);
}

bool
speech_recognition_msgs__msg__PhraseRule__are_equal(const speech_recognition_msgs__msg__PhraseRule * lhs, const speech_recognition_msgs__msg__PhraseRule * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // symbol
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->symbol), &(rhs->symbol)))
  {
    return false;
  }
  // definition
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->definition), &(rhs->definition)))
  {
    return false;
  }
  return true;
}

bool
speech_recognition_msgs__msg__PhraseRule__copy(
  const speech_recognition_msgs__msg__PhraseRule * input,
  speech_recognition_msgs__msg__PhraseRule * output)
{
  if (!input || !output) {
    return false;
  }
  // symbol
  if (!rosidl_runtime_c__String__copy(
      &(input->symbol), &(output->symbol)))
  {
    return false;
  }
  // definition
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->definition), &(output->definition)))
  {
    return false;
  }
  return true;
}

speech_recognition_msgs__msg__PhraseRule *
speech_recognition_msgs__msg__PhraseRule__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  speech_recognition_msgs__msg__PhraseRule * msg = (speech_recognition_msgs__msg__PhraseRule *)allocator.allocate(sizeof(speech_recognition_msgs__msg__PhraseRule), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(speech_recognition_msgs__msg__PhraseRule));
  bool success = speech_recognition_msgs__msg__PhraseRule__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
speech_recognition_msgs__msg__PhraseRule__destroy(speech_recognition_msgs__msg__PhraseRule * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    speech_recognition_msgs__msg__PhraseRule__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
speech_recognition_msgs__msg__PhraseRule__Sequence__init(speech_recognition_msgs__msg__PhraseRule__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  speech_recognition_msgs__msg__PhraseRule * data = NULL;

  if (size) {
    data = (speech_recognition_msgs__msg__PhraseRule *)allocator.zero_allocate(size, sizeof(speech_recognition_msgs__msg__PhraseRule), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = speech_recognition_msgs__msg__PhraseRule__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        speech_recognition_msgs__msg__PhraseRule__fini(&data[i - 1]);
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
speech_recognition_msgs__msg__PhraseRule__Sequence__fini(speech_recognition_msgs__msg__PhraseRule__Sequence * array)
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
      speech_recognition_msgs__msg__PhraseRule__fini(&array->data[i]);
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

speech_recognition_msgs__msg__PhraseRule__Sequence *
speech_recognition_msgs__msg__PhraseRule__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  speech_recognition_msgs__msg__PhraseRule__Sequence * array = (speech_recognition_msgs__msg__PhraseRule__Sequence *)allocator.allocate(sizeof(speech_recognition_msgs__msg__PhraseRule__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = speech_recognition_msgs__msg__PhraseRule__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
speech_recognition_msgs__msg__PhraseRule__Sequence__destroy(speech_recognition_msgs__msg__PhraseRule__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    speech_recognition_msgs__msg__PhraseRule__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
speech_recognition_msgs__msg__PhraseRule__Sequence__are_equal(const speech_recognition_msgs__msg__PhraseRule__Sequence * lhs, const speech_recognition_msgs__msg__PhraseRule__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!speech_recognition_msgs__msg__PhraseRule__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
speech_recognition_msgs__msg__PhraseRule__Sequence__copy(
  const speech_recognition_msgs__msg__PhraseRule__Sequence * input,
  speech_recognition_msgs__msg__PhraseRule__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(speech_recognition_msgs__msg__PhraseRule);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    speech_recognition_msgs__msg__PhraseRule * data =
      (speech_recognition_msgs__msg__PhraseRule *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!speech_recognition_msgs__msg__PhraseRule__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          speech_recognition_msgs__msg__PhraseRule__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!speech_recognition_msgs__msg__PhraseRule__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
