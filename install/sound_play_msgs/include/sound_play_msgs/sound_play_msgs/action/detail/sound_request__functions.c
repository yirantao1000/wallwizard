// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from sound_play_msgs:action/SoundRequest.idl
// generated code does not contain a copyright notice
#include "sound_play_msgs/action/detail/sound_request__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `sound_request`
#include "sound_play_msgs/msg/detail/sound_request__functions.h"

bool
sound_play_msgs__action__SoundRequest_Goal__init(sound_play_msgs__action__SoundRequest_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // sound_request
  if (!sound_play_msgs__msg__SoundRequest__init(&msg->sound_request)) {
    sound_play_msgs__action__SoundRequest_Goal__fini(msg);
    return false;
  }
  return true;
}

void
sound_play_msgs__action__SoundRequest_Goal__fini(sound_play_msgs__action__SoundRequest_Goal * msg)
{
  if (!msg) {
    return;
  }
  // sound_request
  sound_play_msgs__msg__SoundRequest__fini(&msg->sound_request);
}

bool
sound_play_msgs__action__SoundRequest_Goal__are_equal(const sound_play_msgs__action__SoundRequest_Goal * lhs, const sound_play_msgs__action__SoundRequest_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // sound_request
  if (!sound_play_msgs__msg__SoundRequest__are_equal(
      &(lhs->sound_request), &(rhs->sound_request)))
  {
    return false;
  }
  return true;
}

bool
sound_play_msgs__action__SoundRequest_Goal__copy(
  const sound_play_msgs__action__SoundRequest_Goal * input,
  sound_play_msgs__action__SoundRequest_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // sound_request
  if (!sound_play_msgs__msg__SoundRequest__copy(
      &(input->sound_request), &(output->sound_request)))
  {
    return false;
  }
  return true;
}

sound_play_msgs__action__SoundRequest_Goal *
sound_play_msgs__action__SoundRequest_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sound_play_msgs__action__SoundRequest_Goal * msg = (sound_play_msgs__action__SoundRequest_Goal *)allocator.allocate(sizeof(sound_play_msgs__action__SoundRequest_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sound_play_msgs__action__SoundRequest_Goal));
  bool success = sound_play_msgs__action__SoundRequest_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sound_play_msgs__action__SoundRequest_Goal__destroy(sound_play_msgs__action__SoundRequest_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sound_play_msgs__action__SoundRequest_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sound_play_msgs__action__SoundRequest_Goal__Sequence__init(sound_play_msgs__action__SoundRequest_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sound_play_msgs__action__SoundRequest_Goal * data = NULL;

  if (size) {
    data = (sound_play_msgs__action__SoundRequest_Goal *)allocator.zero_allocate(size, sizeof(sound_play_msgs__action__SoundRequest_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sound_play_msgs__action__SoundRequest_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sound_play_msgs__action__SoundRequest_Goal__fini(&data[i - 1]);
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
sound_play_msgs__action__SoundRequest_Goal__Sequence__fini(sound_play_msgs__action__SoundRequest_Goal__Sequence * array)
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
      sound_play_msgs__action__SoundRequest_Goal__fini(&array->data[i]);
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

sound_play_msgs__action__SoundRequest_Goal__Sequence *
sound_play_msgs__action__SoundRequest_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sound_play_msgs__action__SoundRequest_Goal__Sequence * array = (sound_play_msgs__action__SoundRequest_Goal__Sequence *)allocator.allocate(sizeof(sound_play_msgs__action__SoundRequest_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sound_play_msgs__action__SoundRequest_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sound_play_msgs__action__SoundRequest_Goal__Sequence__destroy(sound_play_msgs__action__SoundRequest_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sound_play_msgs__action__SoundRequest_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sound_play_msgs__action__SoundRequest_Goal__Sequence__are_equal(const sound_play_msgs__action__SoundRequest_Goal__Sequence * lhs, const sound_play_msgs__action__SoundRequest_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sound_play_msgs__action__SoundRequest_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sound_play_msgs__action__SoundRequest_Goal__Sequence__copy(
  const sound_play_msgs__action__SoundRequest_Goal__Sequence * input,
  sound_play_msgs__action__SoundRequest_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sound_play_msgs__action__SoundRequest_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sound_play_msgs__action__SoundRequest_Goal * data =
      (sound_play_msgs__action__SoundRequest_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sound_play_msgs__action__SoundRequest_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sound_play_msgs__action__SoundRequest_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sound_play_msgs__action__SoundRequest_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/duration__functions.h"

bool
sound_play_msgs__action__SoundRequest_Result__init(sound_play_msgs__action__SoundRequest_Result * msg)
{
  if (!msg) {
    return false;
  }
  // playing
  // stamp
  if (!builtin_interfaces__msg__Duration__init(&msg->stamp)) {
    sound_play_msgs__action__SoundRequest_Result__fini(msg);
    return false;
  }
  return true;
}

void
sound_play_msgs__action__SoundRequest_Result__fini(sound_play_msgs__action__SoundRequest_Result * msg)
{
  if (!msg) {
    return;
  }
  // playing
  // stamp
  builtin_interfaces__msg__Duration__fini(&msg->stamp);
}

bool
sound_play_msgs__action__SoundRequest_Result__are_equal(const sound_play_msgs__action__SoundRequest_Result * lhs, const sound_play_msgs__action__SoundRequest_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // playing
  if (lhs->playing != rhs->playing) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Duration__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
sound_play_msgs__action__SoundRequest_Result__copy(
  const sound_play_msgs__action__SoundRequest_Result * input,
  sound_play_msgs__action__SoundRequest_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // playing
  output->playing = input->playing;
  // stamp
  if (!builtin_interfaces__msg__Duration__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

sound_play_msgs__action__SoundRequest_Result *
sound_play_msgs__action__SoundRequest_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sound_play_msgs__action__SoundRequest_Result * msg = (sound_play_msgs__action__SoundRequest_Result *)allocator.allocate(sizeof(sound_play_msgs__action__SoundRequest_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sound_play_msgs__action__SoundRequest_Result));
  bool success = sound_play_msgs__action__SoundRequest_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sound_play_msgs__action__SoundRequest_Result__destroy(sound_play_msgs__action__SoundRequest_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sound_play_msgs__action__SoundRequest_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sound_play_msgs__action__SoundRequest_Result__Sequence__init(sound_play_msgs__action__SoundRequest_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sound_play_msgs__action__SoundRequest_Result * data = NULL;

  if (size) {
    data = (sound_play_msgs__action__SoundRequest_Result *)allocator.zero_allocate(size, sizeof(sound_play_msgs__action__SoundRequest_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sound_play_msgs__action__SoundRequest_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sound_play_msgs__action__SoundRequest_Result__fini(&data[i - 1]);
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
sound_play_msgs__action__SoundRequest_Result__Sequence__fini(sound_play_msgs__action__SoundRequest_Result__Sequence * array)
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
      sound_play_msgs__action__SoundRequest_Result__fini(&array->data[i]);
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

sound_play_msgs__action__SoundRequest_Result__Sequence *
sound_play_msgs__action__SoundRequest_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sound_play_msgs__action__SoundRequest_Result__Sequence * array = (sound_play_msgs__action__SoundRequest_Result__Sequence *)allocator.allocate(sizeof(sound_play_msgs__action__SoundRequest_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sound_play_msgs__action__SoundRequest_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sound_play_msgs__action__SoundRequest_Result__Sequence__destroy(sound_play_msgs__action__SoundRequest_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sound_play_msgs__action__SoundRequest_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sound_play_msgs__action__SoundRequest_Result__Sequence__are_equal(const sound_play_msgs__action__SoundRequest_Result__Sequence * lhs, const sound_play_msgs__action__SoundRequest_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sound_play_msgs__action__SoundRequest_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sound_play_msgs__action__SoundRequest_Result__Sequence__copy(
  const sound_play_msgs__action__SoundRequest_Result__Sequence * input,
  sound_play_msgs__action__SoundRequest_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sound_play_msgs__action__SoundRequest_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sound_play_msgs__action__SoundRequest_Result * data =
      (sound_play_msgs__action__SoundRequest_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sound_play_msgs__action__SoundRequest_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sound_play_msgs__action__SoundRequest_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sound_play_msgs__action__SoundRequest_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
// already included above
// #include "builtin_interfaces/msg/detail/duration__functions.h"

bool
sound_play_msgs__action__SoundRequest_Feedback__init(sound_play_msgs__action__SoundRequest_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // playing
  // stamp
  if (!builtin_interfaces__msg__Duration__init(&msg->stamp)) {
    sound_play_msgs__action__SoundRequest_Feedback__fini(msg);
    return false;
  }
  return true;
}

void
sound_play_msgs__action__SoundRequest_Feedback__fini(sound_play_msgs__action__SoundRequest_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // playing
  // stamp
  builtin_interfaces__msg__Duration__fini(&msg->stamp);
}

bool
sound_play_msgs__action__SoundRequest_Feedback__are_equal(const sound_play_msgs__action__SoundRequest_Feedback * lhs, const sound_play_msgs__action__SoundRequest_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // playing
  if (lhs->playing != rhs->playing) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Duration__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
sound_play_msgs__action__SoundRequest_Feedback__copy(
  const sound_play_msgs__action__SoundRequest_Feedback * input,
  sound_play_msgs__action__SoundRequest_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // playing
  output->playing = input->playing;
  // stamp
  if (!builtin_interfaces__msg__Duration__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

sound_play_msgs__action__SoundRequest_Feedback *
sound_play_msgs__action__SoundRequest_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sound_play_msgs__action__SoundRequest_Feedback * msg = (sound_play_msgs__action__SoundRequest_Feedback *)allocator.allocate(sizeof(sound_play_msgs__action__SoundRequest_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sound_play_msgs__action__SoundRequest_Feedback));
  bool success = sound_play_msgs__action__SoundRequest_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sound_play_msgs__action__SoundRequest_Feedback__destroy(sound_play_msgs__action__SoundRequest_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sound_play_msgs__action__SoundRequest_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sound_play_msgs__action__SoundRequest_Feedback__Sequence__init(sound_play_msgs__action__SoundRequest_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sound_play_msgs__action__SoundRequest_Feedback * data = NULL;

  if (size) {
    data = (sound_play_msgs__action__SoundRequest_Feedback *)allocator.zero_allocate(size, sizeof(sound_play_msgs__action__SoundRequest_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sound_play_msgs__action__SoundRequest_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sound_play_msgs__action__SoundRequest_Feedback__fini(&data[i - 1]);
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
sound_play_msgs__action__SoundRequest_Feedback__Sequence__fini(sound_play_msgs__action__SoundRequest_Feedback__Sequence * array)
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
      sound_play_msgs__action__SoundRequest_Feedback__fini(&array->data[i]);
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

sound_play_msgs__action__SoundRequest_Feedback__Sequence *
sound_play_msgs__action__SoundRequest_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sound_play_msgs__action__SoundRequest_Feedback__Sequence * array = (sound_play_msgs__action__SoundRequest_Feedback__Sequence *)allocator.allocate(sizeof(sound_play_msgs__action__SoundRequest_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sound_play_msgs__action__SoundRequest_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sound_play_msgs__action__SoundRequest_Feedback__Sequence__destroy(sound_play_msgs__action__SoundRequest_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sound_play_msgs__action__SoundRequest_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sound_play_msgs__action__SoundRequest_Feedback__Sequence__are_equal(const sound_play_msgs__action__SoundRequest_Feedback__Sequence * lhs, const sound_play_msgs__action__SoundRequest_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sound_play_msgs__action__SoundRequest_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sound_play_msgs__action__SoundRequest_Feedback__Sequence__copy(
  const sound_play_msgs__action__SoundRequest_Feedback__Sequence * input,
  sound_play_msgs__action__SoundRequest_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sound_play_msgs__action__SoundRequest_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sound_play_msgs__action__SoundRequest_Feedback * data =
      (sound_play_msgs__action__SoundRequest_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sound_play_msgs__action__SoundRequest_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sound_play_msgs__action__SoundRequest_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sound_play_msgs__action__SoundRequest_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "sound_play_msgs/action/detail/sound_request__functions.h"

bool
sound_play_msgs__action__SoundRequest_SendGoal_Request__init(sound_play_msgs__action__SoundRequest_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    sound_play_msgs__action__SoundRequest_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!sound_play_msgs__action__SoundRequest_Goal__init(&msg->goal)) {
    sound_play_msgs__action__SoundRequest_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
sound_play_msgs__action__SoundRequest_SendGoal_Request__fini(sound_play_msgs__action__SoundRequest_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  sound_play_msgs__action__SoundRequest_Goal__fini(&msg->goal);
}

bool
sound_play_msgs__action__SoundRequest_SendGoal_Request__are_equal(const sound_play_msgs__action__SoundRequest_SendGoal_Request * lhs, const sound_play_msgs__action__SoundRequest_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!sound_play_msgs__action__SoundRequest_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
sound_play_msgs__action__SoundRequest_SendGoal_Request__copy(
  const sound_play_msgs__action__SoundRequest_SendGoal_Request * input,
  sound_play_msgs__action__SoundRequest_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!sound_play_msgs__action__SoundRequest_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

sound_play_msgs__action__SoundRequest_SendGoal_Request *
sound_play_msgs__action__SoundRequest_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sound_play_msgs__action__SoundRequest_SendGoal_Request * msg = (sound_play_msgs__action__SoundRequest_SendGoal_Request *)allocator.allocate(sizeof(sound_play_msgs__action__SoundRequest_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sound_play_msgs__action__SoundRequest_SendGoal_Request));
  bool success = sound_play_msgs__action__SoundRequest_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sound_play_msgs__action__SoundRequest_SendGoal_Request__destroy(sound_play_msgs__action__SoundRequest_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sound_play_msgs__action__SoundRequest_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sound_play_msgs__action__SoundRequest_SendGoal_Request__Sequence__init(sound_play_msgs__action__SoundRequest_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sound_play_msgs__action__SoundRequest_SendGoal_Request * data = NULL;

  if (size) {
    data = (sound_play_msgs__action__SoundRequest_SendGoal_Request *)allocator.zero_allocate(size, sizeof(sound_play_msgs__action__SoundRequest_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sound_play_msgs__action__SoundRequest_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sound_play_msgs__action__SoundRequest_SendGoal_Request__fini(&data[i - 1]);
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
sound_play_msgs__action__SoundRequest_SendGoal_Request__Sequence__fini(sound_play_msgs__action__SoundRequest_SendGoal_Request__Sequence * array)
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
      sound_play_msgs__action__SoundRequest_SendGoal_Request__fini(&array->data[i]);
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

sound_play_msgs__action__SoundRequest_SendGoal_Request__Sequence *
sound_play_msgs__action__SoundRequest_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sound_play_msgs__action__SoundRequest_SendGoal_Request__Sequence * array = (sound_play_msgs__action__SoundRequest_SendGoal_Request__Sequence *)allocator.allocate(sizeof(sound_play_msgs__action__SoundRequest_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sound_play_msgs__action__SoundRequest_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sound_play_msgs__action__SoundRequest_SendGoal_Request__Sequence__destroy(sound_play_msgs__action__SoundRequest_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sound_play_msgs__action__SoundRequest_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sound_play_msgs__action__SoundRequest_SendGoal_Request__Sequence__are_equal(const sound_play_msgs__action__SoundRequest_SendGoal_Request__Sequence * lhs, const sound_play_msgs__action__SoundRequest_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sound_play_msgs__action__SoundRequest_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sound_play_msgs__action__SoundRequest_SendGoal_Request__Sequence__copy(
  const sound_play_msgs__action__SoundRequest_SendGoal_Request__Sequence * input,
  sound_play_msgs__action__SoundRequest_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sound_play_msgs__action__SoundRequest_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sound_play_msgs__action__SoundRequest_SendGoal_Request * data =
      (sound_play_msgs__action__SoundRequest_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sound_play_msgs__action__SoundRequest_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sound_play_msgs__action__SoundRequest_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sound_play_msgs__action__SoundRequest_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
sound_play_msgs__action__SoundRequest_SendGoal_Response__init(sound_play_msgs__action__SoundRequest_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    sound_play_msgs__action__SoundRequest_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
sound_play_msgs__action__SoundRequest_SendGoal_Response__fini(sound_play_msgs__action__SoundRequest_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
sound_play_msgs__action__SoundRequest_SendGoal_Response__are_equal(const sound_play_msgs__action__SoundRequest_SendGoal_Response * lhs, const sound_play_msgs__action__SoundRequest_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
sound_play_msgs__action__SoundRequest_SendGoal_Response__copy(
  const sound_play_msgs__action__SoundRequest_SendGoal_Response * input,
  sound_play_msgs__action__SoundRequest_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

sound_play_msgs__action__SoundRequest_SendGoal_Response *
sound_play_msgs__action__SoundRequest_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sound_play_msgs__action__SoundRequest_SendGoal_Response * msg = (sound_play_msgs__action__SoundRequest_SendGoal_Response *)allocator.allocate(sizeof(sound_play_msgs__action__SoundRequest_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sound_play_msgs__action__SoundRequest_SendGoal_Response));
  bool success = sound_play_msgs__action__SoundRequest_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sound_play_msgs__action__SoundRequest_SendGoal_Response__destroy(sound_play_msgs__action__SoundRequest_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sound_play_msgs__action__SoundRequest_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sound_play_msgs__action__SoundRequest_SendGoal_Response__Sequence__init(sound_play_msgs__action__SoundRequest_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sound_play_msgs__action__SoundRequest_SendGoal_Response * data = NULL;

  if (size) {
    data = (sound_play_msgs__action__SoundRequest_SendGoal_Response *)allocator.zero_allocate(size, sizeof(sound_play_msgs__action__SoundRequest_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sound_play_msgs__action__SoundRequest_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sound_play_msgs__action__SoundRequest_SendGoal_Response__fini(&data[i - 1]);
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
sound_play_msgs__action__SoundRequest_SendGoal_Response__Sequence__fini(sound_play_msgs__action__SoundRequest_SendGoal_Response__Sequence * array)
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
      sound_play_msgs__action__SoundRequest_SendGoal_Response__fini(&array->data[i]);
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

sound_play_msgs__action__SoundRequest_SendGoal_Response__Sequence *
sound_play_msgs__action__SoundRequest_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sound_play_msgs__action__SoundRequest_SendGoal_Response__Sequence * array = (sound_play_msgs__action__SoundRequest_SendGoal_Response__Sequence *)allocator.allocate(sizeof(sound_play_msgs__action__SoundRequest_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sound_play_msgs__action__SoundRequest_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sound_play_msgs__action__SoundRequest_SendGoal_Response__Sequence__destroy(sound_play_msgs__action__SoundRequest_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sound_play_msgs__action__SoundRequest_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sound_play_msgs__action__SoundRequest_SendGoal_Response__Sequence__are_equal(const sound_play_msgs__action__SoundRequest_SendGoal_Response__Sequence * lhs, const sound_play_msgs__action__SoundRequest_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sound_play_msgs__action__SoundRequest_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sound_play_msgs__action__SoundRequest_SendGoal_Response__Sequence__copy(
  const sound_play_msgs__action__SoundRequest_SendGoal_Response__Sequence * input,
  sound_play_msgs__action__SoundRequest_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sound_play_msgs__action__SoundRequest_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sound_play_msgs__action__SoundRequest_SendGoal_Response * data =
      (sound_play_msgs__action__SoundRequest_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sound_play_msgs__action__SoundRequest_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sound_play_msgs__action__SoundRequest_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sound_play_msgs__action__SoundRequest_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
sound_play_msgs__action__SoundRequest_GetResult_Request__init(sound_play_msgs__action__SoundRequest_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    sound_play_msgs__action__SoundRequest_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
sound_play_msgs__action__SoundRequest_GetResult_Request__fini(sound_play_msgs__action__SoundRequest_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
sound_play_msgs__action__SoundRequest_GetResult_Request__are_equal(const sound_play_msgs__action__SoundRequest_GetResult_Request * lhs, const sound_play_msgs__action__SoundRequest_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
sound_play_msgs__action__SoundRequest_GetResult_Request__copy(
  const sound_play_msgs__action__SoundRequest_GetResult_Request * input,
  sound_play_msgs__action__SoundRequest_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

sound_play_msgs__action__SoundRequest_GetResult_Request *
sound_play_msgs__action__SoundRequest_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sound_play_msgs__action__SoundRequest_GetResult_Request * msg = (sound_play_msgs__action__SoundRequest_GetResult_Request *)allocator.allocate(sizeof(sound_play_msgs__action__SoundRequest_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sound_play_msgs__action__SoundRequest_GetResult_Request));
  bool success = sound_play_msgs__action__SoundRequest_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sound_play_msgs__action__SoundRequest_GetResult_Request__destroy(sound_play_msgs__action__SoundRequest_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sound_play_msgs__action__SoundRequest_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sound_play_msgs__action__SoundRequest_GetResult_Request__Sequence__init(sound_play_msgs__action__SoundRequest_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sound_play_msgs__action__SoundRequest_GetResult_Request * data = NULL;

  if (size) {
    data = (sound_play_msgs__action__SoundRequest_GetResult_Request *)allocator.zero_allocate(size, sizeof(sound_play_msgs__action__SoundRequest_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sound_play_msgs__action__SoundRequest_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sound_play_msgs__action__SoundRequest_GetResult_Request__fini(&data[i - 1]);
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
sound_play_msgs__action__SoundRequest_GetResult_Request__Sequence__fini(sound_play_msgs__action__SoundRequest_GetResult_Request__Sequence * array)
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
      sound_play_msgs__action__SoundRequest_GetResult_Request__fini(&array->data[i]);
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

sound_play_msgs__action__SoundRequest_GetResult_Request__Sequence *
sound_play_msgs__action__SoundRequest_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sound_play_msgs__action__SoundRequest_GetResult_Request__Sequence * array = (sound_play_msgs__action__SoundRequest_GetResult_Request__Sequence *)allocator.allocate(sizeof(sound_play_msgs__action__SoundRequest_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sound_play_msgs__action__SoundRequest_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sound_play_msgs__action__SoundRequest_GetResult_Request__Sequence__destroy(sound_play_msgs__action__SoundRequest_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sound_play_msgs__action__SoundRequest_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sound_play_msgs__action__SoundRequest_GetResult_Request__Sequence__are_equal(const sound_play_msgs__action__SoundRequest_GetResult_Request__Sequence * lhs, const sound_play_msgs__action__SoundRequest_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sound_play_msgs__action__SoundRequest_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sound_play_msgs__action__SoundRequest_GetResult_Request__Sequence__copy(
  const sound_play_msgs__action__SoundRequest_GetResult_Request__Sequence * input,
  sound_play_msgs__action__SoundRequest_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sound_play_msgs__action__SoundRequest_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sound_play_msgs__action__SoundRequest_GetResult_Request * data =
      (sound_play_msgs__action__SoundRequest_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sound_play_msgs__action__SoundRequest_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sound_play_msgs__action__SoundRequest_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sound_play_msgs__action__SoundRequest_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "sound_play_msgs/action/detail/sound_request__functions.h"

bool
sound_play_msgs__action__SoundRequest_GetResult_Response__init(sound_play_msgs__action__SoundRequest_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!sound_play_msgs__action__SoundRequest_Result__init(&msg->result)) {
    sound_play_msgs__action__SoundRequest_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
sound_play_msgs__action__SoundRequest_GetResult_Response__fini(sound_play_msgs__action__SoundRequest_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  sound_play_msgs__action__SoundRequest_Result__fini(&msg->result);
}

bool
sound_play_msgs__action__SoundRequest_GetResult_Response__are_equal(const sound_play_msgs__action__SoundRequest_GetResult_Response * lhs, const sound_play_msgs__action__SoundRequest_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!sound_play_msgs__action__SoundRequest_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
sound_play_msgs__action__SoundRequest_GetResult_Response__copy(
  const sound_play_msgs__action__SoundRequest_GetResult_Response * input,
  sound_play_msgs__action__SoundRequest_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!sound_play_msgs__action__SoundRequest_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

sound_play_msgs__action__SoundRequest_GetResult_Response *
sound_play_msgs__action__SoundRequest_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sound_play_msgs__action__SoundRequest_GetResult_Response * msg = (sound_play_msgs__action__SoundRequest_GetResult_Response *)allocator.allocate(sizeof(sound_play_msgs__action__SoundRequest_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sound_play_msgs__action__SoundRequest_GetResult_Response));
  bool success = sound_play_msgs__action__SoundRequest_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sound_play_msgs__action__SoundRequest_GetResult_Response__destroy(sound_play_msgs__action__SoundRequest_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sound_play_msgs__action__SoundRequest_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sound_play_msgs__action__SoundRequest_GetResult_Response__Sequence__init(sound_play_msgs__action__SoundRequest_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sound_play_msgs__action__SoundRequest_GetResult_Response * data = NULL;

  if (size) {
    data = (sound_play_msgs__action__SoundRequest_GetResult_Response *)allocator.zero_allocate(size, sizeof(sound_play_msgs__action__SoundRequest_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sound_play_msgs__action__SoundRequest_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sound_play_msgs__action__SoundRequest_GetResult_Response__fini(&data[i - 1]);
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
sound_play_msgs__action__SoundRequest_GetResult_Response__Sequence__fini(sound_play_msgs__action__SoundRequest_GetResult_Response__Sequence * array)
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
      sound_play_msgs__action__SoundRequest_GetResult_Response__fini(&array->data[i]);
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

sound_play_msgs__action__SoundRequest_GetResult_Response__Sequence *
sound_play_msgs__action__SoundRequest_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sound_play_msgs__action__SoundRequest_GetResult_Response__Sequence * array = (sound_play_msgs__action__SoundRequest_GetResult_Response__Sequence *)allocator.allocate(sizeof(sound_play_msgs__action__SoundRequest_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sound_play_msgs__action__SoundRequest_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sound_play_msgs__action__SoundRequest_GetResult_Response__Sequence__destroy(sound_play_msgs__action__SoundRequest_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sound_play_msgs__action__SoundRequest_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sound_play_msgs__action__SoundRequest_GetResult_Response__Sequence__are_equal(const sound_play_msgs__action__SoundRequest_GetResult_Response__Sequence * lhs, const sound_play_msgs__action__SoundRequest_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sound_play_msgs__action__SoundRequest_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sound_play_msgs__action__SoundRequest_GetResult_Response__Sequence__copy(
  const sound_play_msgs__action__SoundRequest_GetResult_Response__Sequence * input,
  sound_play_msgs__action__SoundRequest_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sound_play_msgs__action__SoundRequest_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sound_play_msgs__action__SoundRequest_GetResult_Response * data =
      (sound_play_msgs__action__SoundRequest_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sound_play_msgs__action__SoundRequest_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sound_play_msgs__action__SoundRequest_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sound_play_msgs__action__SoundRequest_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "sound_play_msgs/action/detail/sound_request__functions.h"

bool
sound_play_msgs__action__SoundRequest_FeedbackMessage__init(sound_play_msgs__action__SoundRequest_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    sound_play_msgs__action__SoundRequest_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!sound_play_msgs__action__SoundRequest_Feedback__init(&msg->feedback)) {
    sound_play_msgs__action__SoundRequest_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
sound_play_msgs__action__SoundRequest_FeedbackMessage__fini(sound_play_msgs__action__SoundRequest_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  sound_play_msgs__action__SoundRequest_Feedback__fini(&msg->feedback);
}

bool
sound_play_msgs__action__SoundRequest_FeedbackMessage__are_equal(const sound_play_msgs__action__SoundRequest_FeedbackMessage * lhs, const sound_play_msgs__action__SoundRequest_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!sound_play_msgs__action__SoundRequest_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
sound_play_msgs__action__SoundRequest_FeedbackMessage__copy(
  const sound_play_msgs__action__SoundRequest_FeedbackMessage * input,
  sound_play_msgs__action__SoundRequest_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!sound_play_msgs__action__SoundRequest_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

sound_play_msgs__action__SoundRequest_FeedbackMessage *
sound_play_msgs__action__SoundRequest_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sound_play_msgs__action__SoundRequest_FeedbackMessage * msg = (sound_play_msgs__action__SoundRequest_FeedbackMessage *)allocator.allocate(sizeof(sound_play_msgs__action__SoundRequest_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sound_play_msgs__action__SoundRequest_FeedbackMessage));
  bool success = sound_play_msgs__action__SoundRequest_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sound_play_msgs__action__SoundRequest_FeedbackMessage__destroy(sound_play_msgs__action__SoundRequest_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sound_play_msgs__action__SoundRequest_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sound_play_msgs__action__SoundRequest_FeedbackMessage__Sequence__init(sound_play_msgs__action__SoundRequest_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sound_play_msgs__action__SoundRequest_FeedbackMessage * data = NULL;

  if (size) {
    data = (sound_play_msgs__action__SoundRequest_FeedbackMessage *)allocator.zero_allocate(size, sizeof(sound_play_msgs__action__SoundRequest_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sound_play_msgs__action__SoundRequest_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sound_play_msgs__action__SoundRequest_FeedbackMessage__fini(&data[i - 1]);
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
sound_play_msgs__action__SoundRequest_FeedbackMessage__Sequence__fini(sound_play_msgs__action__SoundRequest_FeedbackMessage__Sequence * array)
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
      sound_play_msgs__action__SoundRequest_FeedbackMessage__fini(&array->data[i]);
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

sound_play_msgs__action__SoundRequest_FeedbackMessage__Sequence *
sound_play_msgs__action__SoundRequest_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sound_play_msgs__action__SoundRequest_FeedbackMessage__Sequence * array = (sound_play_msgs__action__SoundRequest_FeedbackMessage__Sequence *)allocator.allocate(sizeof(sound_play_msgs__action__SoundRequest_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sound_play_msgs__action__SoundRequest_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sound_play_msgs__action__SoundRequest_FeedbackMessage__Sequence__destroy(sound_play_msgs__action__SoundRequest_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sound_play_msgs__action__SoundRequest_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sound_play_msgs__action__SoundRequest_FeedbackMessage__Sequence__are_equal(const sound_play_msgs__action__SoundRequest_FeedbackMessage__Sequence * lhs, const sound_play_msgs__action__SoundRequest_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sound_play_msgs__action__SoundRequest_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sound_play_msgs__action__SoundRequest_FeedbackMessage__Sequence__copy(
  const sound_play_msgs__action__SoundRequest_FeedbackMessage__Sequence * input,
  sound_play_msgs__action__SoundRequest_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sound_play_msgs__action__SoundRequest_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sound_play_msgs__action__SoundRequest_FeedbackMessage * data =
      (sound_play_msgs__action__SoundRequest_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sound_play_msgs__action__SoundRequest_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sound_play_msgs__action__SoundRequest_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sound_play_msgs__action__SoundRequest_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
