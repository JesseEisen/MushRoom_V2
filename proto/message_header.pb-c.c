/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: message_header.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C_NO_DEPRECATED
#define PROTOBUF_C_NO_DEPRECATED
#endif

#include "message_header.pb-c.h"
void   message_header__init
                     (MessageHeader         *message)
{
  static MessageHeader init_value = MESSAGE_HEADER__INIT;
  *message = init_value;
}
size_t message_header__get_packed_size
                     (const MessageHeader *message)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &message_header__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t message_header__pack
                     (const MessageHeader *message,
                      uint8_t       *out)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &message_header__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t message_header__pack_to_buffer
                     (const MessageHeader *message,
                      ProtobufCBuffer *buffer)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &message_header__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
MessageHeader *
       message_header__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (MessageHeader *)
     protobuf_c_message_unpack (&message_header__descriptor,
                                allocator, len, data);
}
void   message_header__free_unpacked
                     (MessageHeader *message,
                      ProtobufCAllocator *allocator)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &message_header__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
const ProtobufCEnumValue message_header__type__enum_values_by_number[3] =
{
  { "REQUEST", "MESSAGE_HEADER__TYPE__REQUEST", 1 },
  { "RESPONSE", "MESSAGE_HEADER__TYPE__RESPONSE", 2 },
  { "TEXT", "MESSAGE_HEADER__TYPE__TEXT", 3 },
};
static const ProtobufCIntRange message_header__type__value_ranges[] = {
{1, 0},{0, 3}
};
const ProtobufCEnumValueIndex message_header__type__enum_values_by_name[3] =
{
  { "REQUEST", 0 },
  { "RESPONSE", 1 },
  { "TEXT", 2 },
};
const ProtobufCEnumDescriptor message_header__type__descriptor =
{
  PROTOBUF_C_ENUM_DESCRIPTOR_MAGIC,
  "MessageHeader.TYPE",
  "TYPE",
  "MessageHeader__TYPE",
  "",
  3,
  message_header__type__enum_values_by_number,
  3,
  message_header__type__enum_values_by_name,
  1,
  message_header__type__value_ranges,
  NULL,NULL,NULL,NULL   /* reserved[1234] */
};
static const ProtobufCFieldDescriptor message_header__field_descriptors[6] =
{
  {
    "message_id",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_INT32,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(MessageHeader, message_id),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "session",
    2,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    PROTOBUF_C_OFFSETOF(MessageHeader, has_session),
    PROTOBUF_C_OFFSETOF(MessageHeader, session),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "type",
    3,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_ENUM,
    PROTOBUF_C_OFFSETOF(MessageHeader, has_type),
    PROTOBUF_C_OFFSETOF(MessageHeader, type),
    &message_header__type__descriptor,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "version",
    4,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    PROTOBUF_C_OFFSETOF(MessageHeader, has_version),
    PROTOBUF_C_OFFSETOF(MessageHeader, version),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "connection",
    5,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    PROTOBUF_C_OFFSETOF(MessageHeader, has_connection),
    PROTOBUF_C_OFFSETOF(MessageHeader, connection),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "source",
    6,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    PROTOBUF_C_OFFSETOF(MessageHeader, has_source),
    PROTOBUF_C_OFFSETOF(MessageHeader, source),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned message_header__field_indices_by_name[] = {
  4,   /* field[4] = connection */
  0,   /* field[0] = message_id */
  1,   /* field[1] = session */
  5,   /* field[5] = source */
  2,   /* field[2] = type */
  3,   /* field[3] = version */
};
static const ProtobufCIntRange message_header__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 6 }
};
const ProtobufCMessageDescriptor message_header__descriptor =
{
  PROTOBUF_C_MESSAGE_DESCRIPTOR_MAGIC,
  "MessageHeader",
  "MessageHeader",
  "MessageHeader",
  "",
  sizeof(MessageHeader),
  6,
  message_header__field_descriptors,
  message_header__field_indices_by_name,
  1,  message_header__number_ranges,
  (ProtobufCMessageInit) message_header__init,
  NULL,NULL,NULL    /* reserved[123] */
};
