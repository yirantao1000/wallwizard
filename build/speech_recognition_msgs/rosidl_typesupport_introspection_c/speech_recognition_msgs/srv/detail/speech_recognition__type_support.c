// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from speech_recognition_msgs:srv/SpeechRecognition.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "speech_recognition_msgs/srv/detail/speech_recognition__rosidl_typesupport_introspection_c.h"
#include "speech_recognition_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "speech_recognition_msgs/srv/detail/speech_recognition__functions.h"
#include "speech_recognition_msgs/srv/detail/speech_recognition__struct.h"


// Include directives for member types
// Member `vocabulary`
#include "speech_recognition_msgs/msg/vocabulary.h"
// Member `vocabulary`
#include "speech_recognition_msgs/msg/detail/vocabulary__rosidl_typesupport_introspection_c.h"
// Member `grammar`
#include "speech_recognition_msgs/msg/grammar.h"
// Member `grammar`
#include "speech_recognition_msgs/msg/detail/grammar__rosidl_typesupport_introspection_c.h"
// Member `grammar_name`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void speech_recognition_msgs__srv__SpeechRecognition_Request__rosidl_typesupport_introspection_c__SpeechRecognition_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  speech_recognition_msgs__srv__SpeechRecognition_Request__init(message_memory);
}

void speech_recognition_msgs__srv__SpeechRecognition_Request__rosidl_typesupport_introspection_c__SpeechRecognition_Request_fini_function(void * message_memory)
{
  speech_recognition_msgs__srv__SpeechRecognition_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember speech_recognition_msgs__srv__SpeechRecognition_Request__rosidl_typesupport_introspection_c__SpeechRecognition_Request_message_member_array[6] = {
  {
    "vocabulary",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(speech_recognition_msgs__srv__SpeechRecognition_Request, vocabulary),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "grammar",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(speech_recognition_msgs__srv__SpeechRecognition_Request, grammar),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "grammar_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(speech_recognition_msgs__srv__SpeechRecognition_Request, grammar_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "duration",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(speech_recognition_msgs__srv__SpeechRecognition_Request, duration),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "quiet",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(speech_recognition_msgs__srv__SpeechRecognition_Request, quiet),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "threshold",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(speech_recognition_msgs__srv__SpeechRecognition_Request, threshold),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers speech_recognition_msgs__srv__SpeechRecognition_Request__rosidl_typesupport_introspection_c__SpeechRecognition_Request_message_members = {
  "speech_recognition_msgs__srv",  // message namespace
  "SpeechRecognition_Request",  // message name
  6,  // number of fields
  sizeof(speech_recognition_msgs__srv__SpeechRecognition_Request),
  speech_recognition_msgs__srv__SpeechRecognition_Request__rosidl_typesupport_introspection_c__SpeechRecognition_Request_message_member_array,  // message members
  speech_recognition_msgs__srv__SpeechRecognition_Request__rosidl_typesupport_introspection_c__SpeechRecognition_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  speech_recognition_msgs__srv__SpeechRecognition_Request__rosidl_typesupport_introspection_c__SpeechRecognition_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t speech_recognition_msgs__srv__SpeechRecognition_Request__rosidl_typesupport_introspection_c__SpeechRecognition_Request_message_type_support_handle = {
  0,
  &speech_recognition_msgs__srv__SpeechRecognition_Request__rosidl_typesupport_introspection_c__SpeechRecognition_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_speech_recognition_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, speech_recognition_msgs, srv, SpeechRecognition_Request)() {
  speech_recognition_msgs__srv__SpeechRecognition_Request__rosidl_typesupport_introspection_c__SpeechRecognition_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, speech_recognition_msgs, msg, Vocabulary)();
  speech_recognition_msgs__srv__SpeechRecognition_Request__rosidl_typesupport_introspection_c__SpeechRecognition_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, speech_recognition_msgs, msg, Grammar)();
  if (!speech_recognition_msgs__srv__SpeechRecognition_Request__rosidl_typesupport_introspection_c__SpeechRecognition_Request_message_type_support_handle.typesupport_identifier) {
    speech_recognition_msgs__srv__SpeechRecognition_Request__rosidl_typesupport_introspection_c__SpeechRecognition_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &speech_recognition_msgs__srv__SpeechRecognition_Request__rosidl_typesupport_introspection_c__SpeechRecognition_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "speech_recognition_msgs/srv/detail/speech_recognition__rosidl_typesupport_introspection_c.h"
// already included above
// #include "speech_recognition_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "speech_recognition_msgs/srv/detail/speech_recognition__functions.h"
// already included above
// #include "speech_recognition_msgs/srv/detail/speech_recognition__struct.h"


// Include directives for member types
// Member `result`
#include "speech_recognition_msgs/msg/speech_recognition_candidates.h"
// Member `result`
#include "speech_recognition_msgs/msg/detail/speech_recognition_candidates__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void speech_recognition_msgs__srv__SpeechRecognition_Response__rosidl_typesupport_introspection_c__SpeechRecognition_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  speech_recognition_msgs__srv__SpeechRecognition_Response__init(message_memory);
}

void speech_recognition_msgs__srv__SpeechRecognition_Response__rosidl_typesupport_introspection_c__SpeechRecognition_Response_fini_function(void * message_memory)
{
  speech_recognition_msgs__srv__SpeechRecognition_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember speech_recognition_msgs__srv__SpeechRecognition_Response__rosidl_typesupport_introspection_c__SpeechRecognition_Response_message_member_array[1] = {
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(speech_recognition_msgs__srv__SpeechRecognition_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers speech_recognition_msgs__srv__SpeechRecognition_Response__rosidl_typesupport_introspection_c__SpeechRecognition_Response_message_members = {
  "speech_recognition_msgs__srv",  // message namespace
  "SpeechRecognition_Response",  // message name
  1,  // number of fields
  sizeof(speech_recognition_msgs__srv__SpeechRecognition_Response),
  speech_recognition_msgs__srv__SpeechRecognition_Response__rosidl_typesupport_introspection_c__SpeechRecognition_Response_message_member_array,  // message members
  speech_recognition_msgs__srv__SpeechRecognition_Response__rosidl_typesupport_introspection_c__SpeechRecognition_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  speech_recognition_msgs__srv__SpeechRecognition_Response__rosidl_typesupport_introspection_c__SpeechRecognition_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t speech_recognition_msgs__srv__SpeechRecognition_Response__rosidl_typesupport_introspection_c__SpeechRecognition_Response_message_type_support_handle = {
  0,
  &speech_recognition_msgs__srv__SpeechRecognition_Response__rosidl_typesupport_introspection_c__SpeechRecognition_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_speech_recognition_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, speech_recognition_msgs, srv, SpeechRecognition_Response)() {
  speech_recognition_msgs__srv__SpeechRecognition_Response__rosidl_typesupport_introspection_c__SpeechRecognition_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, speech_recognition_msgs, msg, SpeechRecognitionCandidates)();
  if (!speech_recognition_msgs__srv__SpeechRecognition_Response__rosidl_typesupport_introspection_c__SpeechRecognition_Response_message_type_support_handle.typesupport_identifier) {
    speech_recognition_msgs__srv__SpeechRecognition_Response__rosidl_typesupport_introspection_c__SpeechRecognition_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &speech_recognition_msgs__srv__SpeechRecognition_Response__rosidl_typesupport_introspection_c__SpeechRecognition_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "speech_recognition_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "speech_recognition_msgs/srv/detail/speech_recognition__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers speech_recognition_msgs__srv__detail__speech_recognition__rosidl_typesupport_introspection_c__SpeechRecognition_service_members = {
  "speech_recognition_msgs__srv",  // service namespace
  "SpeechRecognition",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // speech_recognition_msgs__srv__detail__speech_recognition__rosidl_typesupport_introspection_c__SpeechRecognition_Request_message_type_support_handle,
  NULL  // response message
  // speech_recognition_msgs__srv__detail__speech_recognition__rosidl_typesupport_introspection_c__SpeechRecognition_Response_message_type_support_handle
};

static rosidl_service_type_support_t speech_recognition_msgs__srv__detail__speech_recognition__rosidl_typesupport_introspection_c__SpeechRecognition_service_type_support_handle = {
  0,
  &speech_recognition_msgs__srv__detail__speech_recognition__rosidl_typesupport_introspection_c__SpeechRecognition_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, speech_recognition_msgs, srv, SpeechRecognition_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, speech_recognition_msgs, srv, SpeechRecognition_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_speech_recognition_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, speech_recognition_msgs, srv, SpeechRecognition)() {
  if (!speech_recognition_msgs__srv__detail__speech_recognition__rosidl_typesupport_introspection_c__SpeechRecognition_service_type_support_handle.typesupport_identifier) {
    speech_recognition_msgs__srv__detail__speech_recognition__rosidl_typesupport_introspection_c__SpeechRecognition_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)speech_recognition_msgs__srv__detail__speech_recognition__rosidl_typesupport_introspection_c__SpeechRecognition_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, speech_recognition_msgs, srv, SpeechRecognition_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, speech_recognition_msgs, srv, SpeechRecognition_Response)()->data;
  }

  return &speech_recognition_msgs__srv__detail__speech_recognition__rosidl_typesupport_introspection_c__SpeechRecognition_service_type_support_handle;
}
