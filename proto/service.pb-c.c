/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: service.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C_NO_DEPRECATED
#define PROTOBUF_C_NO_DEPRECATED
#endif

#include "service.pb-c.h"
void   room__init
                     (Room         *message)
{
  static Room init_value = ROOM__INIT;
  *message = init_value;
}
size_t room__get_packed_size
                     (const Room *message)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &room__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t room__pack
                     (const Room *message,
                      uint8_t       *out)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &room__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t room__pack_to_buffer
                     (const Room *message,
                      ProtobufCBuffer *buffer)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &room__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Room *
       room__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Room *)
     protobuf_c_message_unpack (&room__descriptor,
                                allocator, len, data);
}
void   room__free_unpacked
                     (Room *message,
                      ProtobufCAllocator *allocator)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &room__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   sensor__init
                     (Sensor         *message)
{
  static Sensor init_value = SENSOR__INIT;
  *message = init_value;
}
size_t sensor__get_packed_size
                     (const Sensor *message)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &sensor__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t sensor__pack
                     (const Sensor *message,
                      uint8_t       *out)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &sensor__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t sensor__pack_to_buffer
                     (const Sensor *message,
                      ProtobufCBuffer *buffer)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &sensor__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Sensor *
       sensor__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Sensor *)
     protobuf_c_message_unpack (&sensor__descriptor,
                                allocator, len, data);
}
void   sensor__free_unpacked
                     (Sensor *message,
                      ProtobufCAllocator *allocator)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &sensor__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   syn_time__init
                     (SynTime         *message)
{
  static SynTime init_value = SYN_TIME__INIT;
  *message = init_value;
}
size_t syn_time__get_packed_size
                     (const SynTime *message)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &syn_time__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t syn_time__pack
                     (const SynTime *message,
                      uint8_t       *out)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &syn_time__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t syn_time__pack_to_buffer
                     (const SynTime *message,
                      ProtobufCBuffer *buffer)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &syn_time__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
SynTime *
       syn_time__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (SynTime *)
     protobuf_c_message_unpack (&syn_time__descriptor,
                                allocator, len, data);
}
void   syn_time__free_unpacked
                     (SynTime *message,
                      ProtobufCAllocator *allocator)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &syn_time__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   response_code__init
                     (ResponseCode         *message)
{
  static ResponseCode init_value = RESPONSE_CODE__INIT;
  *message = init_value;
}
size_t response_code__get_packed_size
                     (const ResponseCode *message)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &response_code__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t response_code__pack
                     (const ResponseCode *message,
                      uint8_t       *out)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &response_code__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t response_code__pack_to_buffer
                     (const ResponseCode *message,
                      ProtobufCBuffer *buffer)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &response_code__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
ResponseCode *
       response_code__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (ResponseCode *)
     protobuf_c_message_unpack (&response_code__descriptor,
                                allocator, len, data);
}
void   response_code__free_unpacked
                     (ResponseCode *message,
                      ProtobufCAllocator *allocator)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &response_code__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   config__init
                     (Config         *message)
{
  static Config init_value = CONFIG__INIT;
  *message = init_value;
}
size_t config__get_packed_size
                     (const Config *message)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &config__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t config__pack
                     (const Config *message,
                      uint8_t       *out)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &config__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t config__pack_to_buffer
                     (const Config *message,
                      ProtobufCBuffer *buffer)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &config__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Config *
       config__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Config *)
     protobuf_c_message_unpack (&config__descriptor,
                                allocator, len, data);
}
void   config__free_unpacked
                     (Config *message,
                      ProtobufCAllocator *allocator)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &config__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   config_list__init
                     (ConfigList         *message)
{
  static ConfigList init_value = CONFIG_LIST__INIT;
  *message = init_value;
}
size_t config_list__get_packed_size
                     (const ConfigList *message)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &config_list__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t config_list__pack
                     (const ConfigList *message,
                      uint8_t       *out)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &config_list__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t config_list__pack_to_buffer
                     (const ConfigList *message,
                      ProtobufCBuffer *buffer)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &config_list__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
ConfigList *
       config_list__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (ConfigList *)
     protobuf_c_message_unpack (&config_list__descriptor,
                                allocator, len, data);
}
void   config_list__free_unpacked
                     (ConfigList *message,
                      ProtobufCAllocator *allocator)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &config_list__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   controller__init
                     (Controller         *message)
{
  static Controller init_value = CONTROLLER__INIT;
  *message = init_value;
}
size_t controller__get_packed_size
                     (const Controller *message)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &controller__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t controller__pack
                     (const Controller *message,
                      uint8_t       *out)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &controller__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t controller__pack_to_buffer
                     (const Controller *message,
                      ProtobufCBuffer *buffer)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &controller__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Controller *
       controller__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Controller *)
     protobuf_c_message_unpack (&controller__descriptor,
                                allocator, len, data);
}
void   controller__free_unpacked
                     (Controller *message,
                      ProtobufCAllocator *allocator)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &controller__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   sensor_data__init
                     (SensorData         *message)
{
  static SensorData init_value = SENSOR_DATA__INIT;
  *message = init_value;
}
size_t sensor_data__get_packed_size
                     (const SensorData *message)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &sensor_data__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t sensor_data__pack
                     (const SensorData *message,
                      uint8_t       *out)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &sensor_data__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t sensor_data__pack_to_buffer
                     (const SensorData *message,
                      ProtobufCBuffer *buffer)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &sensor_data__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
SensorData *
       sensor_data__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (SensorData *)
     protobuf_c_message_unpack (&sensor_data__descriptor,
                                allocator, len, data);
}
void   sensor_data__free_unpacked
                     (SensorData *message,
                      ProtobufCAllocator *allocator)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &sensor_data__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   ping__init
                     (Ping         *message)
{
  static Ping init_value = PING__INIT;
  *message = init_value;
}
size_t ping__get_packed_size
                     (const Ping *message)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &ping__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t ping__pack
                     (const Ping *message,
                      uint8_t       *out)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &ping__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t ping__pack_to_buffer
                     (const Ping *message,
                      ProtobufCBuffer *buffer)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &ping__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Ping *
       ping__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Ping *)
     protobuf_c_message_unpack (&ping__descriptor,
                                allocator, len, data);
}
void   ping__free_unpacked
                     (Ping *message,
                      ProtobufCAllocator *allocator)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &ping__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   room_conf__init
                     (RoomConf         *message)
{
  static RoomConf init_value = ROOM_CONF__INIT;
  *message = init_value;
}
size_t room_conf__get_packed_size
                     (const RoomConf *message)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &room_conf__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t room_conf__pack
                     (const RoomConf *message,
                      uint8_t       *out)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &room_conf__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t room_conf__pack_to_buffer
                     (const RoomConf *message,
                      ProtobufCBuffer *buffer)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &room_conf__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
RoomConf *
       room_conf__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (RoomConf *)
     protobuf_c_message_unpack (&room_conf__descriptor,
                                allocator, len, data);
}
void   room_conf__free_unpacked
                     (RoomConf *message,
                      ProtobufCAllocator *allocator)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &room_conf__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   init__init
                     (Init         *message)
{
  static Init init_value = INIT__INIT;
  *message = init_value;
}
size_t init__get_packed_size
                     (const Init *message)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &init__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t init__pack
                     (const Init *message,
                      uint8_t       *out)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &init__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t init__pack_to_buffer
                     (const Init *message,
                      ProtobufCBuffer *buffer)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &init__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Init *
       init__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Init *)
     protobuf_c_message_unpack (&init__descriptor,
                                allocator, len, data);
}
void   init__free_unpacked
                     (Init *message,
                      ProtobufCAllocator *allocator)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &init__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor room__field_descriptors[1] =
{
  {
    "room_id",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_INT32,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(Room, room_id),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned room__field_indices_by_name[] = {
  0,   /* field[0] = room_id */
};
static const ProtobufCIntRange room__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 1 }
};
const ProtobufCMessageDescriptor room__descriptor =
{
  PROTOBUF_C_MESSAGE_DESCRIPTOR_MAGIC,
  "Room",
  "Room",
  "Room",
  "",
  sizeof(Room),
  1,
  room__field_descriptors,
  room__field_indices_by_name,
  1,  room__number_ranges,
  (ProtobufCMessageInit) room__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor sensor__field_descriptors[3] =
{
  {
    "id",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_INT32,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(Sensor, id),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "type",
    2,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_ENUM,
    PROTOBUF_C_OFFSETOF(Sensor, has_type),
    PROTOBUF_C_OFFSETOF(Sensor, type),
    &sensor__type__descriptor,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "value",
    3,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    PROTOBUF_C_OFFSETOF(Sensor, has_value),
    PROTOBUF_C_OFFSETOF(Sensor, value),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned sensor__field_indices_by_name[] = {
  0,   /* field[0] = id */
  1,   /* field[1] = type */
  2,   /* field[2] = value */
};
static const ProtobufCIntRange sensor__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 3 }
};
const ProtobufCMessageDescriptor sensor__descriptor =
{
  PROTOBUF_C_MESSAGE_DESCRIPTOR_MAGIC,
  "Sensor",
  "Sensor",
  "Sensor",
  "",
  sizeof(Sensor),
  3,
  sensor__field_descriptors,
  sensor__field_indices_by_name,
  1,  sensor__number_ranges,
  (ProtobufCMessageInit) sensor__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor syn_time__field_descriptors[1] =
{
  {
    "timestamp",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(SynTime, timestamp),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned syn_time__field_indices_by_name[] = {
  0,   /* field[0] = timestamp */
};
static const ProtobufCIntRange syn_time__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 1 }
};
const ProtobufCMessageDescriptor syn_time__descriptor =
{
  PROTOBUF_C_MESSAGE_DESCRIPTOR_MAGIC,
  "SynTime",
  "SynTime",
  "SynTime",
  "",
  sizeof(SynTime),
  1,
  syn_time__field_descriptors,
  syn_time__field_indices_by_name,
  1,  syn_time__number_ranges,
  (ProtobufCMessageInit) syn_time__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor response_code__field_descriptors[2] =
{
  {
    "code",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_ENUM,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(ResponseCode, code),
    &response__descriptor,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "log",
    2,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(ResponseCode, log),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned response_code__field_indices_by_name[] = {
  0,   /* field[0] = code */
  1,   /* field[1] = log */
};
static const ProtobufCIntRange response_code__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor response_code__descriptor =
{
  PROTOBUF_C_MESSAGE_DESCRIPTOR_MAGIC,
  "ResponseCode",
  "ResponseCode",
  "ResponseCode",
  "",
  sizeof(ResponseCode),
  2,
  response_code__field_descriptors,
  response_code__field_indices_by_name,
  1,  response_code__number_ranges,
  (ProtobufCMessageInit) response_code__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor config__field_descriptors[2] =
{
  {
    "key",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(Config, key),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "val",
    2,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    PROTOBUF_C_OFFSETOF(Config, has_val),
    PROTOBUF_C_OFFSETOF(Config, val),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned config__field_indices_by_name[] = {
  0,   /* field[0] = key */
  1,   /* field[1] = val */
};
static const ProtobufCIntRange config__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor config__descriptor =
{
  PROTOBUF_C_MESSAGE_DESCRIPTOR_MAGIC,
  "Config",
  "Config",
  "Config",
  "",
  sizeof(Config),
  2,
  config__field_descriptors,
  config__field_indices_by_name,
  1,  config__number_ranges,
  (ProtobufCMessageInit) config__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor config_list__field_descriptors[1] =
{
  {
    "config",
    1,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_MESSAGE,
    PROTOBUF_C_OFFSETOF(ConfigList, n_config),
    PROTOBUF_C_OFFSETOF(ConfigList, config),
    &config__descriptor,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned config_list__field_indices_by_name[] = {
  0,   /* field[0] = config */
};
static const ProtobufCIntRange config_list__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 1 }
};
const ProtobufCMessageDescriptor config_list__descriptor =
{
  PROTOBUF_C_MESSAGE_DESCRIPTOR_MAGIC,
  "ConfigList",
  "ConfigList",
  "ConfigList",
  "",
  sizeof(ConfigList),
  1,
  config_list__field_descriptors,
  config_list__field_indices_by_name,
  1,  config_list__number_ranges,
  (ProtobufCMessageInit) config_list__init,
  NULL,NULL,NULL    /* reserved[123] */
};
const ProtobufCEnumValue controller__state__enum_values_by_number[3] =
{
  { "ERROR", "CONTROLLER__STATE__ERROR", -1 },
  { "CLOSE", "CONTROLLER__STATE__CLOSE", 0 },
  { "OPEN", "CONTROLLER__STATE__OPEN", 1 },
};
static const ProtobufCIntRange controller__state__value_ranges[] = {
{-1, 0},{0, 3}
};
const ProtobufCEnumValueIndex controller__state__enum_values_by_name[3] =
{
  { "CLOSE", 1 },
  { "ERROR", 0 },
  { "OPEN", 2 },
};
const ProtobufCEnumDescriptor controller__state__descriptor =
{
  PROTOBUF_C_ENUM_DESCRIPTOR_MAGIC,
  "Controller.STATE",
  "STATE",
  "Controller__STATE",
  "",
  3,
  controller__state__enum_values_by_number,
  3,
  controller__state__enum_values_by_name,
  1,
  controller__state__value_ranges,
  NULL,NULL,NULL,NULL   /* reserved[1234] */
};
static const ProtobufCFieldDescriptor controller__field_descriptors[3] =
{
  {
    "controller_id",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_INT32,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(Controller, controller_id),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "state",
    2,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_ENUM,
    PROTOBUF_C_OFFSETOF(Controller, has_state),
    PROTOBUF_C_OFFSETOF(Controller, state),
    &controller__state__descriptor,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "type",
    3,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_ENUM,
    PROTOBUF_C_OFFSETOF(Controller, has_type),
    PROTOBUF_C_OFFSETOF(Controller, type),
    &controller__type__descriptor,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned controller__field_indices_by_name[] = {
  0,   /* field[0] = controller_id */
  1,   /* field[1] = state */
  2,   /* field[2] = type */
};
static const ProtobufCIntRange controller__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 3 }
};
const ProtobufCMessageDescriptor controller__descriptor =
{
  PROTOBUF_C_MESSAGE_DESCRIPTOR_MAGIC,
  "Controller",
  "Controller",
  "Controller",
  "",
  sizeof(Controller),
  3,
  controller__field_descriptors,
  controller__field_indices_by_name,
  1,  controller__number_ranges,
  (ProtobufCMessageInit) controller__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor sensor_data__field_descriptors[3] =
{
  {
    "room_id",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_INT32,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(SensorData, room_id),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "sensor",
    2,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_MESSAGE,
    PROTOBUF_C_OFFSETOF(SensorData, n_sensor),
    PROTOBUF_C_OFFSETOF(SensorData, sensor),
    &sensor__descriptor,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "time",
    3,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(SensorData, time),
    &syn_time__descriptor,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned sensor_data__field_indices_by_name[] = {
  0,   /* field[0] = room_id */
  1,   /* field[1] = sensor */
  2,   /* field[2] = time */
};
static const ProtobufCIntRange sensor_data__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 3 }
};
const ProtobufCMessageDescriptor sensor_data__descriptor =
{
  PROTOBUF_C_MESSAGE_DESCRIPTOR_MAGIC,
  "SensorData",
  "SensorData",
  "SensorData",
  "",
  sizeof(SensorData),
  3,
  sensor_data__field_descriptors,
  sensor_data__field_indices_by_name,
  1,  sensor_data__number_ranges,
  (ProtobufCMessageInit) sensor_data__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor ping__field_descriptors[2] =
{
  {
    "src",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(Ping, src),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "echo",
    2,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(Ping, echo),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned ping__field_indices_by_name[] = {
  1,   /* field[1] = echo */
  0,   /* field[0] = src */
};
static const ProtobufCIntRange ping__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor ping__descriptor =
{
  PROTOBUF_C_MESSAGE_DESCRIPTOR_MAGIC,
  "Ping",
  "Ping",
  "Ping",
  "",
  sizeof(Ping),
  2,
  ping__field_descriptors,
  ping__field_indices_by_name,
  1,  ping__number_ranges,
  (ProtobufCMessageInit) ping__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor room_conf__field_descriptors[3] =
{
  {
    "id",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_INT32,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(RoomConf, id),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "sensor",
    2,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_MESSAGE,
    PROTOBUF_C_OFFSETOF(RoomConf, n_sensor),
    PROTOBUF_C_OFFSETOF(RoomConf, sensor),
    &sensor__descriptor,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "controller",
    3,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_MESSAGE,
    PROTOBUF_C_OFFSETOF(RoomConf, n_controller),
    PROTOBUF_C_OFFSETOF(RoomConf, controller),
    &controller__descriptor,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned room_conf__field_indices_by_name[] = {
  2,   /* field[2] = controller */
  0,   /* field[0] = id */
  1,   /* field[1] = sensor */
};
static const ProtobufCIntRange room_conf__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 3 }
};
const ProtobufCMessageDescriptor room_conf__descriptor =
{
  PROTOBUF_C_MESSAGE_DESCRIPTOR_MAGIC,
  "RoomConf",
  "RoomConf",
  "RoomConf",
  "",
  sizeof(RoomConf),
  3,
  room_conf__field_descriptors,
  room_conf__field_indices_by_name,
  1,  room_conf__number_ranges,
  (ProtobufCMessageInit) room_conf__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor init__field_descriptors[2] =
{
  {
    "roomconf",
    1,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_MESSAGE,
    PROTOBUF_C_OFFSETOF(Init, n_roomconf),
    PROTOBUF_C_OFFSETOF(Init, roomconf),
    &room_conf__descriptor,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "config",
    2,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_MESSAGE,
    PROTOBUF_C_OFFSETOF(Init, n_config),
    PROTOBUF_C_OFFSETOF(Init, config),
    &config__descriptor,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned init__field_indices_by_name[] = {
  1,   /* field[1] = config */
  0,   /* field[0] = roomconf */
};
static const ProtobufCIntRange init__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor init__descriptor =
{
  PROTOBUF_C_MESSAGE_DESCRIPTOR_MAGIC,
  "Init",
  "Init",
  "Init",
  "",
  sizeof(Init),
  2,
  init__field_descriptors,
  init__field_indices_by_name,
  1,  init__number_ranges,
  (ProtobufCMessageInit) init__init,
  NULL,NULL,NULL    /* reserved[123] */
};
const ProtobufCEnumValue sensor__type__enum_values_by_number[4] =
{
  { "TEMP", "SENSOR__TYPE__TEMP", 1 },
  { "LIGHT", "SENSOR__TYPE__LIGHT", 2 },
  { "HUMI", "SENSOR__TYPE__HUMI", 3 },
  { "CO2", "SENSOR__TYPE__CO2", 4 },
};
static const ProtobufCIntRange sensor__type__value_ranges[] = {
{1, 0},{0, 4}
};
const ProtobufCEnumValueIndex sensor__type__enum_values_by_name[4] =
{
  { "CO2", 3 },
  { "HUMI", 2 },
  { "LIGHT", 1 },
  { "TEMP", 0 },
};
const ProtobufCEnumDescriptor sensor__type__descriptor =
{
  PROTOBUF_C_ENUM_DESCRIPTOR_MAGIC,
  "SENSOR_TYPE",
  "SENSOR_TYPE",
  "SENSORTYPE",
  "",
  4,
  sensor__type__enum_values_by_number,
  4,
  sensor__type__enum_values_by_name,
  1,
  sensor__type__value_ranges,
  NULL,NULL,NULL,NULL   /* reserved[1234] */
};
const ProtobufCEnumValue controller__type__enum_values_by_number[9] =
{
  { "XUNHUAN_FAN", "CONTROLLER__TYPE__XUNHUAN_FAN", 1 },
  { "JINFENG_FAN", "CONTROLLER__TYPE__JINFENG_FAN", 2 },
  { "PAIFENG_FAN", "CONTROLLER__TYPE__PAIFENG_FAN", 3 },
  { "JIASHIQI", "CONTROLLER__TYPE__JIASHIQI", 4 },
  { "YASUOJI", "CONTROLLER__TYPE__YASUOJI", 5 },
  { "NEIJI", "CONTROLLER__TYPE__NEIJI", 6 },
  { "YELLO_LIGHT", "CONTROLLER__TYPE__YELLO_LIGHT", 7 },
  { "RED_LIGHT", "CONTROLLER__TYPE__RED_LIGHT", 8 },
  { "BLUE_LIGHT", "CONTROLLER__TYPE__BLUE_LIGHT", 9 },
};
static const ProtobufCIntRange controller__type__value_ranges[] = {
{1, 0},{0, 9}
};
const ProtobufCEnumValueIndex controller__type__enum_values_by_name[9] =
{
  { "BLUE_LIGHT", 8 },
  { "JIASHIQI", 3 },
  { "JINFENG_FAN", 1 },
  { "NEIJI", 5 },
  { "PAIFENG_FAN", 2 },
  { "RED_LIGHT", 7 },
  { "XUNHUAN_FAN", 0 },
  { "YASUOJI", 4 },
  { "YELLO_LIGHT", 6 },
};
const ProtobufCEnumDescriptor controller__type__descriptor =
{
  PROTOBUF_C_ENUM_DESCRIPTOR_MAGIC,
  "CONTROLLER_TYPE",
  "CONTROLLER_TYPE",
  "CONTROLLERTYPE",
  "",
  9,
  controller__type__enum_values_by_number,
  9,
  controller__type__enum_values_by_name,
  1,
  controller__type__value_ranges,
  NULL,NULL,NULL,NULL   /* reserved[1234] */
};
const ProtobufCEnumValue message__id__enum_values_by_number[19] =
{
  { "READ_TIME", "MESSAGE__ID__READ_TIME", 1 },
  { "READ_TIME_RESPONSE", "MESSAGE__ID__READ_TIME_RESPONSE", 2 },
  { "UPDATE_TIME", "MESSAGE__ID__UPDATE_TIME", 3 },
  { "UPDATE_TIME_RESPONSE", "MESSAGE__ID__UPDATE_TIME_RESPONSE", 4 },
  { "READ_CONF", "MESSAGE__ID__READ_CONF", 5 },
  { "READ_CONF_RESPONSE", "MESSAGE__ID__READ_CONF_RESPONSE", 6 },
  { "UPDATE_CONF", "MESSAGE__ID__UPDATE_CONF", 7 },
  { "UPDATE_CONF_RESPONSE", "MESSAGE__ID__UPDATE_CONF_RESPONSE", 8 },
  { "REBOOT", "MESSAGE__ID__REBOOT", 9 },
  { "REBOOT_RESPONSE", "MESSAGE__ID__REBOOT_RESPONSE", 10 },
  { "READ_CONTROLLER_STATE", "MESSAGE__ID__READ_CONTROLLER_STATE", 1001 },
  { "READ_CONTROLLER_STATE_RESPONSE", "MESSAGE__ID__READ_CONTROLLER_STATE_RESPONSE", 1002 },
  { "UPDATE_CONTROLLER_STATE", "MESSAGE__ID__UPDATE_CONTROLLER_STATE", 1003 },
  { "UPDATE_CONTROLLER_STATE_RESPONSE", "MESSAGE__ID__UPDATE_CONTROLLER_STATE_RESPONSE", 1004 },
  { "READ_SENSOR_DATA", "MESSAGE__ID__READ_SENSOR_DATA", 2001 },
  { "READ_SENSOR_DATA_RESPONSE", "MESSAGE__ID__READ_SENSOR_DATA_RESPONSE", 2002 },
  { "SENSOR_DATA_PUSH", "MESSAGE__ID__SENSOR_DATA_PUSH", 2003 },
  { "PING", "MESSAGE__ID__PING", 3001 },
  { "INIT", "MESSAGE__ID__INIT", 3002 },
};
static const ProtobufCIntRange message__id__value_ranges[] = {
{1, 0},{1001, 10},{2001, 14},{3001, 17},{0, 19}
};
const ProtobufCEnumValueIndex message__id__enum_values_by_name[19] =
{
  { "INIT", 18 },
  { "PING", 17 },
  { "READ_CONF", 4 },
  { "READ_CONF_RESPONSE", 5 },
  { "READ_CONTROLLER_STATE", 10 },
  { "READ_CONTROLLER_STATE_RESPONSE", 11 },
  { "READ_SENSOR_DATA", 14 },
  { "READ_SENSOR_DATA_RESPONSE", 15 },
  { "READ_TIME", 0 },
  { "READ_TIME_RESPONSE", 1 },
  { "REBOOT", 8 },
  { "REBOOT_RESPONSE", 9 },
  { "SENSOR_DATA_PUSH", 16 },
  { "UPDATE_CONF", 6 },
  { "UPDATE_CONF_RESPONSE", 7 },
  { "UPDATE_CONTROLLER_STATE", 12 },
  { "UPDATE_CONTROLLER_STATE_RESPONSE", 13 },
  { "UPDATE_TIME", 2 },
  { "UPDATE_TIME_RESPONSE", 3 },
};
const ProtobufCEnumDescriptor message__id__descriptor =
{
  PROTOBUF_C_ENUM_DESCRIPTOR_MAGIC,
  "MESSAGE_ID",
  "MESSAGE_ID",
  "MESSAGEID",
  "",
  19,
  message__id__enum_values_by_number,
  19,
  message__id__enum_values_by_name,
  4,
  message__id__value_ranges,
  NULL,NULL,NULL,NULL   /* reserved[1234] */
};
const ProtobufCEnumValue response__enum_values_by_number[2] =
{
  { "ERROR", "RESPONSE__ERROR", -1 },
  { "OK", "RESPONSE__OK", 0 },
};
static const ProtobufCIntRange response__value_ranges[] = {
{-1, 0},{0, 2}
};
const ProtobufCEnumValueIndex response__enum_values_by_name[2] =
{
  { "ERROR", 0 },
  { "OK", 1 },
};
const ProtobufCEnumDescriptor response__descriptor =
{
  PROTOBUF_C_ENUM_DESCRIPTOR_MAGIC,
  "RESPONSE",
  "RESPONSE",
  "RESPONSE",
  "",
  2,
  response__enum_values_by_number,
  2,
  response__enum_values_by_name,
  1,
  response__value_ranges,
  NULL,NULL,NULL,NULL   /* reserved[1234] */
};
