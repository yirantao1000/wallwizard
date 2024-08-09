// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from sound_play_msgs:msg/SoundRequest.idl
// generated code does not contain a copyright notice
#include "sound_play_msgs/msg/detail/sound_request__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `arg`
// Member `arg2`
#include "rosidl_runtime_c/string_functions.h"

bool
sound_play_msgs__msg__SoundRequest__init(sound_play_msgs__msg__SoundRequest * msg)
{
  if (!msg) {
    return false;
  }
  // sound
  // command
  // volume
  // arg
  if (!rosidl_runtime_c__String__init(&msg->arg)) {
    sound_play_msgs__msg__SoundRequest__fini(msg);
    return false;
  }
  // arg2
  if (!rosidl_runtime_c__String__init(&msg->arg2)) {
    sound_play_msgs__msg__SoundRequest__fini(msg);
    return false;
  }
  return true;
}

void
sound_play_msgs__msg__SoundRequest__fini(sound_play_msgs__msg__SoundRequest * msg)
{
  if (!msg) {
    return;
  }
  // sound
  // command
  // volume
  // arg
  rosidl_runtime_c__String__fini(&msg->arg);
  // arg2
  rosidl_runtime_c__String__fini(&msg->arg2);
}

bool
sound_play_msgs__msg__SoundRequest__are_equal(const sound_play_msgs__msg__SoundRequest * lhs, const sound_play_msgs__msg__SoundRequest * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // sound
  if (lhs->sound != rhs->sound) {
    return false;
  }
  // command
  if (lhs->command != rhs->command) {
    return false;
  }
  // volume
  if (lhs->volume != rhs->volume) {
    return false;
  }
  // arg
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->arg), &(rhs->arg)))
  {
    return false;
  }
  // arg2
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->arg2), &(rhs->arg2)))
  {
    return false;
  }
  return true;
}

bool
sound_play_msgs__msg__SoundRequest__copy(
  const sound_play_msgs__msg__SoundRequest * input,
  sound_play_msgs__msg__SoundRequest * output)
{
  if (!input || !output) {
    return false;
  }
  // sound
  output->sound = input->sound;
  // command
  output->command = input->command;
  // volume
  output->volume = input->volume;
  // arg
  if (!rosidl_runtime_c__String__copy(
      &(input->arg), &(output->arg)))
  {
    return false;
  }
  // arg2
  if (!rosidl_runtime_c__String__copy(
      &(input->arg2), &(output->arg2)))
  {
    return false;
  }
  return true;
}

sound_play_msgs__msg__SoundRequest *
sound_play_msgs__msg__SoundRequest__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sound_play_msgs__msg__SoundRequest * msg = (sound_play_msgs__msg__SoundRequest *)allocator.allocate(sizeof(sound_play_msgs__msg__SoundRequest), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sound_play_msgs__msg__SoundRequest));
  bool success = sound_play_msgs__msg__SoundRequest__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sound_play_msgs__msg__SoundRequest__destroy(sound_play_msgs__msg__SoundRequest * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sound_play_msgs__msg__SoundRequest__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sound_play_msgs__msg__SoundRequest__Sequence__init(sound_play_msgs__msg__SoundRequest__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sound_play_msgs__msg__SoundRequest * data = NULL;

  if (size) {
    data = (sound_play_msgs__msg__SoundRequest *)allocator.zero_allocate(size, sizeof(sound_play_msgs__msg__SoundRequest), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sound_play_msgs__msg__SoundRequest__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sound_play_msgs__msg__SoundRequest__fini(&data[i - 1]);
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
sound_play_msgs__msg__SoundRequest__Sequence__fini(sound_play_msgs__msg__SoundRequest__Sequence * array)
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
      sound_play_msgs__msg__SoundRequest__fini(&array->data[i]);
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

sound_play_msgs__msg__SoundRequest__Sequence *
sound_play_msgs__msg__SoundRequest__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sound_play_msgs__msg__SoundRequest__Sequence * array = (sound_play_msgs__msg__SoundRequest__Sequence *)allocator.allocate(sizeof(sound_play_msgs__msg__SoundRequest__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sound_play_msgs__msg__SoundRequest__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sound_play_msgs__msg__SoundRequest__Sequence__destroy(sound_play_msgs__msg__SoundRequest__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sound_play_msgs__msg__SoundRequest__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sound_play_msgs__msg__SoundRequest__Sequence__are_equal(const sound_play_msgs__msg__SoundRequest__Sequence * lhs, const sound_play_msgs__msg__SoundRequest__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sound_play_msgs__msg__SoundRequest__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sound_play_msgs__msg__SoundRequest__Sequence__copy(
  const sound_play_msgs__msg__SoundRequest__Sequence * input,
  sound_play_msgs__msg__SoundRequest__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sound_play_msgs__msg__SoundRequest);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sound_play_msgs__msg__SoundRequest * data =
      (sound_play_msgs__msg__SoundRequest *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sound_play_msgs__msg__SoundRequest__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sound_play_msgs__msg__SoundRequest__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sound_play_msgs__msg__SoundRequest__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
