// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from crazy_turtle_interfaces:srv/Switch.idl
// generated code does not contain a copyright notice

#include "crazy_turtle_interfaces/srv/detail/switch__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_crazy_turtle_interfaces
const rosidl_type_hash_t *
crazy_turtle_interfaces__srv__Switch__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x87, 0x9d, 0x9d, 0xe1, 0x92, 0x43, 0xf9, 0xa7,
      0x62, 0xcb, 0xa1, 0x64, 0x0b, 0x2c, 0xa7, 0xde,
      0xab, 0xf7, 0x29, 0xe1, 0x9f, 0xce, 0x3f, 0x8f,
      0x85, 0x61, 0x1e, 0xe6, 0xcf, 0xac, 0x5b, 0x29,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_crazy_turtle_interfaces
const rosidl_type_hash_t *
crazy_turtle_interfaces__srv__Switch_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x8d, 0xd6, 0xef, 0xe6, 0x27, 0xe6, 0xaf, 0xd3,
      0xa1, 0x0a, 0xb2, 0x99, 0x41, 0xc3, 0x04, 0x52,
      0xc1, 0x50, 0x4d, 0x75, 0xe7, 0x1f, 0xc7, 0x5d,
      0x8e, 0x7e, 0x2f, 0x1a, 0x73, 0x33, 0xe1, 0x07,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_crazy_turtle_interfaces
const rosidl_type_hash_t *
crazy_turtle_interfaces__srv__Switch_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe9, 0x80, 0x24, 0x0b, 0x60, 0x30, 0x77, 0x9b,
      0xe3, 0x5a, 0xa4, 0x45, 0xa5, 0x74, 0x00, 0x64,
      0x8f, 0xe5, 0x2d, 0xb0, 0xa2, 0xd2, 0xa3, 0x7a,
      0x90, 0x3b, 0x56, 0xb4, 0xc3, 0x62, 0x8f, 0x0e,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_crazy_turtle_interfaces
const rosidl_type_hash_t *
crazy_turtle_interfaces__srv__Switch_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x4f, 0x4a, 0x1b, 0x51, 0x01, 0x09, 0x4c, 0xf1,
      0xd7, 0xd6, 0x0a, 0xfb, 0xd4, 0x73, 0x60, 0xed,
      0xb7, 0x2e, 0x89, 0x86, 0xde, 0x57, 0xb6, 0xd2,
      0xc4, 0x8c, 0x3e, 0x52, 0xc8, 0xc5, 0xfd, 0xa2,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "turtlesim/msg/detail/pose__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
static const rosidl_type_hash_t turtlesim__msg__Pose__EXPECTED_HASH = {1, {
    0x73, 0x9b, 0xeb, 0xa2, 0x6b, 0xcb, 0xa6, 0x92,
    0x04, 0x04, 0xba, 0x72, 0x2b, 0x7b, 0x83, 0x21,
    0x34, 0x85, 0x12, 0xf9, 0x2e, 0xa5, 0xbe, 0x23,
    0x5c, 0x47, 0x25, 0x19, 0x40, 0xdd, 0x8a, 0xa9,
  }};
#endif

static char crazy_turtle_interfaces__srv__Switch__TYPE_NAME[] = "crazy_turtle_interfaces/srv/Switch";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char crazy_turtle_interfaces__srv__Switch_Event__TYPE_NAME[] = "crazy_turtle_interfaces/srv/Switch_Event";
static char crazy_turtle_interfaces__srv__Switch_Request__TYPE_NAME[] = "crazy_turtle_interfaces/srv/Switch_Request";
static char crazy_turtle_interfaces__srv__Switch_Response__TYPE_NAME[] = "crazy_turtle_interfaces/srv/Switch_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";
static char turtlesim__msg__Pose__TYPE_NAME[] = "turtlesim/msg/Pose";

// Define type names, field names, and default values
static char crazy_turtle_interfaces__srv__Switch__FIELD_NAME__request_message[] = "request_message";
static char crazy_turtle_interfaces__srv__Switch__FIELD_NAME__response_message[] = "response_message";
static char crazy_turtle_interfaces__srv__Switch__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field crazy_turtle_interfaces__srv__Switch__FIELDS[] = {
  {
    {crazy_turtle_interfaces__srv__Switch__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {crazy_turtle_interfaces__srv__Switch_Request__TYPE_NAME, 42, 42},
    },
    {NULL, 0, 0},
  },
  {
    {crazy_turtle_interfaces__srv__Switch__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {crazy_turtle_interfaces__srv__Switch_Response__TYPE_NAME, 43, 43},
    },
    {NULL, 0, 0},
  },
  {
    {crazy_turtle_interfaces__srv__Switch__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {crazy_turtle_interfaces__srv__Switch_Event__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription crazy_turtle_interfaces__srv__Switch__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {crazy_turtle_interfaces__srv__Switch_Event__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {crazy_turtle_interfaces__srv__Switch_Request__TYPE_NAME, 42, 42},
    {NULL, 0, 0},
  },
  {
    {crazy_turtle_interfaces__srv__Switch_Response__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {turtlesim__msg__Pose__TYPE_NAME, 18, 18},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
crazy_turtle_interfaces__srv__Switch__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {crazy_turtle_interfaces__srv__Switch__TYPE_NAME, 34, 34},
      {crazy_turtle_interfaces__srv__Switch__FIELDS, 3, 3},
    },
    {crazy_turtle_interfaces__srv__Switch__REFERENCED_TYPE_DESCRIPTIONS, 6, 6},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = crazy_turtle_interfaces__srv__Switch_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = crazy_turtle_interfaces__srv__Switch_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = crazy_turtle_interfaces__srv__Switch_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&turtlesim__msg__Pose__EXPECTED_HASH, turtlesim__msg__Pose__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = turtlesim__msg__Pose__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char crazy_turtle_interfaces__srv__Switch_Request__FIELD_NAME__mixer[] = "mixer";

static rosidl_runtime_c__type_description__Field crazy_turtle_interfaces__srv__Switch_Request__FIELDS[] = {
  {
    {crazy_turtle_interfaces__srv__Switch_Request__FIELD_NAME__mixer, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {turtlesim__msg__Pose__TYPE_NAME, 18, 18},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription crazy_turtle_interfaces__srv__Switch_Request__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {turtlesim__msg__Pose__TYPE_NAME, 18, 18},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
crazy_turtle_interfaces__srv__Switch_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {crazy_turtle_interfaces__srv__Switch_Request__TYPE_NAME, 42, 42},
      {crazy_turtle_interfaces__srv__Switch_Request__FIELDS, 1, 1},
    },
    {crazy_turtle_interfaces__srv__Switch_Request__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&turtlesim__msg__Pose__EXPECTED_HASH, turtlesim__msg__Pose__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = turtlesim__msg__Pose__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char crazy_turtle_interfaces__srv__Switch_Response__FIELD_NAME__x[] = "x";
static char crazy_turtle_interfaces__srv__Switch_Response__FIELD_NAME__y[] = "y";

static rosidl_runtime_c__type_description__Field crazy_turtle_interfaces__srv__Switch_Response__FIELDS[] = {
  {
    {crazy_turtle_interfaces__srv__Switch_Response__FIELD_NAME__x, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {crazy_turtle_interfaces__srv__Switch_Response__FIELD_NAME__y, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
crazy_turtle_interfaces__srv__Switch_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {crazy_turtle_interfaces__srv__Switch_Response__TYPE_NAME, 43, 43},
      {crazy_turtle_interfaces__srv__Switch_Response__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char crazy_turtle_interfaces__srv__Switch_Event__FIELD_NAME__info[] = "info";
static char crazy_turtle_interfaces__srv__Switch_Event__FIELD_NAME__request[] = "request";
static char crazy_turtle_interfaces__srv__Switch_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field crazy_turtle_interfaces__srv__Switch_Event__FIELDS[] = {
  {
    {crazy_turtle_interfaces__srv__Switch_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {crazy_turtle_interfaces__srv__Switch_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {crazy_turtle_interfaces__srv__Switch_Request__TYPE_NAME, 42, 42},
    },
    {NULL, 0, 0},
  },
  {
    {crazy_turtle_interfaces__srv__Switch_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {crazy_turtle_interfaces__srv__Switch_Response__TYPE_NAME, 43, 43},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription crazy_turtle_interfaces__srv__Switch_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {crazy_turtle_interfaces__srv__Switch_Request__TYPE_NAME, 42, 42},
    {NULL, 0, 0},
  },
  {
    {crazy_turtle_interfaces__srv__Switch_Response__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {turtlesim__msg__Pose__TYPE_NAME, 18, 18},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
crazy_turtle_interfaces__srv__Switch_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {crazy_turtle_interfaces__srv__Switch_Event__TYPE_NAME, 40, 40},
      {crazy_turtle_interfaces__srv__Switch_Event__FIELDS, 3, 3},
    },
    {crazy_turtle_interfaces__srv__Switch_Event__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = crazy_turtle_interfaces__srv__Switch_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = crazy_turtle_interfaces__srv__Switch_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&turtlesim__msg__Pose__EXPECTED_HASH, turtlesim__msg__Pose__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = turtlesim__msg__Pose__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "turtlesim/Pose mixer # use a strange formula to set the new location of the turtle\n"
  "---\n"
  "float64 x # the new x position of the new turtle\n"
  "float64 y # the new y position of the new ";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
crazy_turtle_interfaces__srv__Switch__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {crazy_turtle_interfaces__srv__Switch__TYPE_NAME, 34, 34},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 178, 178},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
crazy_turtle_interfaces__srv__Switch_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {crazy_turtle_interfaces__srv__Switch_Request__TYPE_NAME, 42, 42},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
crazy_turtle_interfaces__srv__Switch_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {crazy_turtle_interfaces__srv__Switch_Response__TYPE_NAME, 43, 43},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
crazy_turtle_interfaces__srv__Switch_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {crazy_turtle_interfaces__srv__Switch_Event__TYPE_NAME, 40, 40},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
crazy_turtle_interfaces__srv__Switch__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[7];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 7, 7};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *crazy_turtle_interfaces__srv__Switch__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *crazy_turtle_interfaces__srv__Switch_Event__get_individual_type_description_source(NULL);
    sources[3] = *crazy_turtle_interfaces__srv__Switch_Request__get_individual_type_description_source(NULL);
    sources[4] = *crazy_turtle_interfaces__srv__Switch_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[6] = *turtlesim__msg__Pose__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
crazy_turtle_interfaces__srv__Switch_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *crazy_turtle_interfaces__srv__Switch_Request__get_individual_type_description_source(NULL),
    sources[1] = *turtlesim__msg__Pose__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
crazy_turtle_interfaces__srv__Switch_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *crazy_turtle_interfaces__srv__Switch_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
crazy_turtle_interfaces__srv__Switch_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *crazy_turtle_interfaces__srv__Switch_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *crazy_turtle_interfaces__srv__Switch_Request__get_individual_type_description_source(NULL);
    sources[3] = *crazy_turtle_interfaces__srv__Switch_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[5] = *turtlesim__msg__Pose__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
