// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sound_play_msgs:action/SoundRequest.idl
// generated code does not contain a copyright notice

#ifndef SOUND_PLAY_MSGS__ACTION__DETAIL__SOUND_REQUEST__STRUCT_H_
#define SOUND_PLAY_MSGS__ACTION__DETAIL__SOUND_REQUEST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'sound_request'
#include "sound_play_msgs/msg/detail/sound_request__struct.h"

/// Struct defined in action/SoundRequest in the package sound_play_msgs.
typedef struct sound_play_msgs__action__SoundRequest_Goal
{
  sound_play_msgs__msg__SoundRequest sound_request;
} sound_play_msgs__action__SoundRequest_Goal;

// Struct for a sequence of sound_play_msgs__action__SoundRequest_Goal.
typedef struct sound_play_msgs__action__SoundRequest_Goal__Sequence
{
  sound_play_msgs__action__SoundRequest_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sound_play_msgs__action__SoundRequest_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/duration__struct.h"

/// Struct defined in action/SoundRequest in the package sound_play_msgs.
typedef struct sound_play_msgs__action__SoundRequest_Result
{
  bool playing;
  builtin_interfaces__msg__Duration stamp;
} sound_play_msgs__action__SoundRequest_Result;

// Struct for a sequence of sound_play_msgs__action__SoundRequest_Result.
typedef struct sound_play_msgs__action__SoundRequest_Result__Sequence
{
  sound_play_msgs__action__SoundRequest_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sound_play_msgs__action__SoundRequest_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
// already included above
// #include "builtin_interfaces/msg/detail/duration__struct.h"

/// Struct defined in action/SoundRequest in the package sound_play_msgs.
typedef struct sound_play_msgs__action__SoundRequest_Feedback
{
  bool playing;
  builtin_interfaces__msg__Duration stamp;
} sound_play_msgs__action__SoundRequest_Feedback;

// Struct for a sequence of sound_play_msgs__action__SoundRequest_Feedback.
typedef struct sound_play_msgs__action__SoundRequest_Feedback__Sequence
{
  sound_play_msgs__action__SoundRequest_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sound_play_msgs__action__SoundRequest_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "sound_play_msgs/action/detail/sound_request__struct.h"

/// Struct defined in action/SoundRequest in the package sound_play_msgs.
typedef struct sound_play_msgs__action__SoundRequest_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  sound_play_msgs__action__SoundRequest_Goal goal;
} sound_play_msgs__action__SoundRequest_SendGoal_Request;

// Struct for a sequence of sound_play_msgs__action__SoundRequest_SendGoal_Request.
typedef struct sound_play_msgs__action__SoundRequest_SendGoal_Request__Sequence
{
  sound_play_msgs__action__SoundRequest_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sound_play_msgs__action__SoundRequest_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/SoundRequest in the package sound_play_msgs.
typedef struct sound_play_msgs__action__SoundRequest_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} sound_play_msgs__action__SoundRequest_SendGoal_Response;

// Struct for a sequence of sound_play_msgs__action__SoundRequest_SendGoal_Response.
typedef struct sound_play_msgs__action__SoundRequest_SendGoal_Response__Sequence
{
  sound_play_msgs__action__SoundRequest_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sound_play_msgs__action__SoundRequest_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/SoundRequest in the package sound_play_msgs.
typedef struct sound_play_msgs__action__SoundRequest_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} sound_play_msgs__action__SoundRequest_GetResult_Request;

// Struct for a sequence of sound_play_msgs__action__SoundRequest_GetResult_Request.
typedef struct sound_play_msgs__action__SoundRequest_GetResult_Request__Sequence
{
  sound_play_msgs__action__SoundRequest_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sound_play_msgs__action__SoundRequest_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "sound_play_msgs/action/detail/sound_request__struct.h"

/// Struct defined in action/SoundRequest in the package sound_play_msgs.
typedef struct sound_play_msgs__action__SoundRequest_GetResult_Response
{
  int8_t status;
  sound_play_msgs__action__SoundRequest_Result result;
} sound_play_msgs__action__SoundRequest_GetResult_Response;

// Struct for a sequence of sound_play_msgs__action__SoundRequest_GetResult_Response.
typedef struct sound_play_msgs__action__SoundRequest_GetResult_Response__Sequence
{
  sound_play_msgs__action__SoundRequest_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sound_play_msgs__action__SoundRequest_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "sound_play_msgs/action/detail/sound_request__struct.h"

/// Struct defined in action/SoundRequest in the package sound_play_msgs.
typedef struct sound_play_msgs__action__SoundRequest_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  sound_play_msgs__action__SoundRequest_Feedback feedback;
} sound_play_msgs__action__SoundRequest_FeedbackMessage;

// Struct for a sequence of sound_play_msgs__action__SoundRequest_FeedbackMessage.
typedef struct sound_play_msgs__action__SoundRequest_FeedbackMessage__Sequence
{
  sound_play_msgs__action__SoundRequest_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sound_play_msgs__action__SoundRequest_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SOUND_PLAY_MSGS__ACTION__DETAIL__SOUND_REQUEST__STRUCT_H_
