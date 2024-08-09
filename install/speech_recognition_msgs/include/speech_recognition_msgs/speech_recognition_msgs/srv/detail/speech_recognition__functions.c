// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from speech_recognition_msgs:srv/SpeechRecognition.idl
// generated code does not contain a copyright notice
#include "speech_recognition_msgs/srv/detail/speech_recognition__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `vocabulary`
#include "speech_recognition_msgs/msg/detail/vocabulary__functions.h"
// Member `grammar`
#include "speech_recognition_msgs/msg/detail/grammar__functions.h"
// Member `grammar_name`
#include "rosidl_runtime_c/string_functions.h"

bool
speech_recognition_msgs__srv__SpeechRecognition_Request__init(speech_recognition_msgs__srv__SpeechRecognition_Request * msg)
{
  if (!msg) {
    return false;
  }
  // vocabulary
  if (!speech_recognition_msgs__msg__Vocabulary__init(&msg->vocabulary)) {
    speech_recognition_msgs__srv__SpeechRecognition_Request__fini(msg);
    return false;
  }
  // grammar
  if (!speech_recognition_msgs__msg__Grammar__init(&msg->grammar)) {
    speech_recognition_msgs__srv__SpeechRecognition_Request__fini(msg);
    return false;
  }
  // grammar_name
  if (!rosidl_runtime_c__String__init(&msg->grammar_name)) {
    speech_recognition_msgs__srv__SpeechRecognition_Request__fini(msg);
    return false;
  }
  // duration
  // quiet
  // threshold
  return true;
}

void
speech_recognition_msgs__srv__SpeechRecognition_Request__fini(speech_recognition_msgs__srv__SpeechRecognition_Request * msg)
{
  if (!msg) {
    return;
  }
  // vocabulary
  speech_recognition_msgs__msg__Vocabulary__fini(&msg->vocabulary);
  // grammar
  speech_recognition_msgs__msg__Grammar__fini(&msg->grammar);
  // grammar_name
  rosidl_runtime_c__String__fini(&msg->grammar_name);
  // duration
  // quiet
  // threshold
}

bool
speech_recognition_msgs__srv__SpeechRecognition_Request__are_equal(const speech_recognition_msgs__srv__SpeechRecognition_Request * lhs, const speech_recognition_msgs__srv__SpeechRecognition_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // vocabulary
  if (!speech_recognition_msgs__msg__Vocabulary__are_equal(
      &(lhs->vocabulary), &(rhs->vocabulary)))
  {
    return false;
  }
  // grammar
  if (!speech_recognition_msgs__msg__Grammar__are_equal(
      &(lhs->grammar), &(rhs->grammar)))
  {
    return false;
  }
  // grammar_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->grammar_name), &(rhs->grammar_name)))
  {
    return false;
  }
  // duration
  if (lhs->duration != rhs->duration) {
    return false;
  }
  // quiet
  if (lhs->quiet != rhs->quiet) {
    return false;
  }
  // threshold
  if (lhs->threshold != rhs->threshold) {
    return false;
  }
  return true;
}

bool
speech_recognition_msgs__srv__SpeechRecognition_Request__copy(
  const speech_recognition_msgs__srv__SpeechRecognition_Request * input,
  speech_recognition_msgs__srv__SpeechRecognition_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // vocabulary
  if (!speech_recognition_msgs__msg__Vocabulary__copy(
      &(input->vocabulary), &(output->vocabulary)))
  {
    return false;
  }
  // grammar
  if (!speech_recognition_msgs__msg__Grammar__copy(
      &(input->grammar), &(output->grammar)))
  {
    return false;
  }
  // grammar_name
  if (!rosidl_runtime_c__String__copy(
      &(input->grammar_name), &(output->grammar_name)))
  {
    return false;
  }
  // duration
  output->duration = input->duration;
  // quiet
  output->quiet = input->quiet;
  // threshold
  output->threshold = input->threshold;
  return true;
}

speech_recognition_msgs__srv__SpeechRecognition_Request *
speech_recognition_msgs__srv__SpeechRecognition_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  speech_recognition_msgs__srv__SpeechRecognition_Request * msg = (speech_recognition_msgs__srv__SpeechRecognition_Request *)allocator.allocate(sizeof(speech_recognition_msgs__srv__SpeechRecognition_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(speech_recognition_msgs__srv__SpeechRecognition_Request));
  bool success = speech_recognition_msgs__srv__SpeechRecognition_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
speech_recognition_msgs__srv__SpeechRecognition_Request__destroy(speech_recognition_msgs__srv__SpeechRecognition_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    speech_recognition_msgs__srv__SpeechRecognition_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
speech_recognition_msgs__srv__SpeechRecognition_Request__Sequence__init(speech_recognition_msgs__srv__SpeechRecognition_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  speech_recognition_msgs__srv__SpeechRecognition_Request * data = NULL;

  if (size) {
    data = (speech_recognition_msgs__srv__SpeechRecognition_Request *)allocator.zero_allocate(size, sizeof(speech_recognition_msgs__srv__SpeechRecognition_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = speech_recognition_msgs__srv__SpeechRecognition_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        speech_recognition_msgs__srv__SpeechRecognition_Request__fini(&data[i - 1]);
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
speech_recognition_msgs__srv__SpeechRecognition_Request__Sequence__fini(speech_recognition_msgs__srv__SpeechRecognition_Request__Sequence * array)
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
      speech_recognition_msgs__srv__SpeechRecognition_Request__fini(&array->data[i]);
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

speech_recognition_msgs__srv__SpeechRecognition_Request__Sequence *
speech_recognition_msgs__srv__SpeechRecognition_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  speech_recognition_msgs__srv__SpeechRecognition_Request__Sequence * array = (speech_recognition_msgs__srv__SpeechRecognition_Request__Sequence *)allocator.allocate(sizeof(speech_recognition_msgs__srv__SpeechRecognition_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = speech_recognition_msgs__srv__SpeechRecognition_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
speech_recognition_msgs__srv__SpeechRecognition_Request__Sequence__destroy(speech_recognition_msgs__srv__SpeechRecognition_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    speech_recognition_msgs__srv__SpeechRecognition_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
speech_recognition_msgs__srv__SpeechRecognition_Request__Sequence__are_equal(const speech_recognition_msgs__srv__SpeechRecognition_Request__Sequence * lhs, const speech_recognition_msgs__srv__SpeechRecognition_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!speech_recognition_msgs__srv__SpeechRecognition_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
speech_recognition_msgs__srv__SpeechRecognition_Request__Sequence__copy(
  const speech_recognition_msgs__srv__SpeechRecognition_Request__Sequence * input,
  speech_recognition_msgs__srv__SpeechRecognition_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(speech_recognition_msgs__srv__SpeechRecognition_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    speech_recognition_msgs__srv__SpeechRecognition_Request * data =
      (speech_recognition_msgs__srv__SpeechRecognition_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!speech_recognition_msgs__srv__SpeechRecognition_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          speech_recognition_msgs__srv__SpeechRecognition_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!speech_recognition_msgs__srv__SpeechRecognition_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
#include "speech_recognition_msgs/msg/detail/speech_recognition_candidates__functions.h"

bool
speech_recognition_msgs__srv__SpeechRecognition_Response__init(speech_recognition_msgs__srv__SpeechRecognition_Response * msg)
{
  if (!msg) {
    return false;
  }
  // result
  if (!speech_recognition_msgs__msg__SpeechRecognitionCandidates__init(&msg->result)) {
    speech_recognition_msgs__srv__SpeechRecognition_Response__fini(msg);
    return false;
  }
  return true;
}

void
speech_recognition_msgs__srv__SpeechRecognition_Response__fini(speech_recognition_msgs__srv__SpeechRecognition_Response * msg)
{
  if (!msg) {
    return;
  }
  // result
  speech_recognition_msgs__msg__SpeechRecognitionCandidates__fini(&msg->result);
}

bool
speech_recognition_msgs__srv__SpeechRecognition_Response__are_equal(const speech_recognition_msgs__srv__SpeechRecognition_Response * lhs, const speech_recognition_msgs__srv__SpeechRecognition_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // result
  if (!speech_recognition_msgs__msg__SpeechRecognitionCandidates__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
speech_recognition_msgs__srv__SpeechRecognition_Response__copy(
  const speech_recognition_msgs__srv__SpeechRecognition_Response * input,
  speech_recognition_msgs__srv__SpeechRecognition_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // result
  if (!speech_recognition_msgs__msg__SpeechRecognitionCandidates__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

speech_recognition_msgs__srv__SpeechRecognition_Response *
speech_recognition_msgs__srv__SpeechRecognition_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  speech_recognition_msgs__srv__SpeechRecognition_Response * msg = (speech_recognition_msgs__srv__SpeechRecognition_Response *)allocator.allocate(sizeof(speech_recognition_msgs__srv__SpeechRecognition_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(speech_recognition_msgs__srv__SpeechRecognition_Response));
  bool success = speech_recognition_msgs__srv__SpeechRecognition_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
speech_recognition_msgs__srv__SpeechRecognition_Response__destroy(speech_recognition_msgs__srv__SpeechRecognition_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    speech_recognition_msgs__srv__SpeechRecognition_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
speech_recognition_msgs__srv__SpeechRecognition_Response__Sequence__init(speech_recognition_msgs__srv__SpeechRecognition_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  speech_recognition_msgs__srv__SpeechRecognition_Response * data = NULL;

  if (size) {
    data = (speech_recognition_msgs__srv__SpeechRecognition_Response *)allocator.zero_allocate(size, sizeof(speech_recognition_msgs__srv__SpeechRecognition_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = speech_recognition_msgs__srv__SpeechRecognition_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        speech_recognition_msgs__srv__SpeechRecognition_Response__fini(&data[i - 1]);
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
speech_recognition_msgs__srv__SpeechRecognition_Response__Sequence__fini(speech_recognition_msgs__srv__SpeechRecognition_Response__Sequence * array)
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
      speech_recognition_msgs__srv__SpeechRecognition_Response__fini(&array->data[i]);
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

speech_recognition_msgs__srv__SpeechRecognition_Response__Sequence *
speech_recognition_msgs__srv__SpeechRecognition_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  speech_recognition_msgs__srv__SpeechRecognition_Response__Sequence * array = (speech_recognition_msgs__srv__SpeechRecognition_Response__Sequence *)allocator.allocate(sizeof(speech_recognition_msgs__srv__SpeechRecognition_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = speech_recognition_msgs__srv__SpeechRecognition_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
speech_recognition_msgs__srv__SpeechRecognition_Response__Sequence__destroy(speech_recognition_msgs__srv__SpeechRecognition_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    speech_recognition_msgs__srv__SpeechRecognition_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
speech_recognition_msgs__srv__SpeechRecognition_Response__Sequence__are_equal(const speech_recognition_msgs__srv__SpeechRecognition_Response__Sequence * lhs, const speech_recognition_msgs__srv__SpeechRecognition_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!speech_recognition_msgs__srv__SpeechRecognition_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
speech_recognition_msgs__srv__SpeechRecognition_Response__Sequence__copy(
  const speech_recognition_msgs__srv__SpeechRecognition_Response__Sequence * input,
  speech_recognition_msgs__srv__SpeechRecognition_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(speech_recognition_msgs__srv__SpeechRecognition_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    speech_recognition_msgs__srv__SpeechRecognition_Response * data =
      (speech_recognition_msgs__srv__SpeechRecognition_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!speech_recognition_msgs__srv__SpeechRecognition_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          speech_recognition_msgs__srv__SpeechRecognition_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!speech_recognition_msgs__srv__SpeechRecognition_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
