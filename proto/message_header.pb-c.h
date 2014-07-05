/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: message_header.proto */

#ifndef PROTOBUF_C_message_5fheader_2eproto__INCLUDED
#define PROTOBUF_C_message_5fheader_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C_BEGIN_DECLS


typedef struct _MessageHeader MessageHeader;


/* --- enums --- */

typedef enum _MessageHeader__TYPE {
  MESSAGE_HEADER__TYPE__REQUEST = 1,
  MESSAGE_HEADER__TYPE__RESPONSE = 2,
  MESSAGE_HEADER__TYPE__TEXT = 3
    _PROTOBUF_C_FORCE_ENUM_TO_BE_INT_SIZE(MESSAGE_HEADER__TYPE)
} MessageHeader__TYPE;

/* --- messages --- */

struct  _MessageHeader
{
  ProtobufCMessage base;
  int32_t message_id;
  protobuf_c_boolean has_session;
  int32_t session;
  protobuf_c_boolean has_type;
  MessageHeader__TYPE type;
  protobuf_c_boolean has_version;
  int32_t version;
  protobuf_c_boolean has_connection;
  int32_t connection;
  protobuf_c_boolean has_source;
  int32_t source;
};
#define MESSAGE_HEADER__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&message_header__descriptor) \
    , 0, 0,0, 0,0, 0,0, 0,0, 0,0 }


/* MessageHeader methods */
void   message_header__init
                     (MessageHeader         *message);
size_t message_header__get_packed_size
                     (const MessageHeader   *message);
size_t message_header__pack
                     (const MessageHeader   *message,
                      uint8_t             *out);
size_t message_header__pack_to_buffer
                     (const MessageHeader   *message,
                      ProtobufCBuffer     *buffer);
MessageHeader *
       message_header__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   message_header__free_unpacked
                     (MessageHeader *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*MessageHeader_Closure)
                 (const MessageHeader *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor message_header__descriptor;
extern const ProtobufCEnumDescriptor    message_header__type__descriptor;

PROTOBUF_C_END_DECLS


#endif  /* PROTOBUF_message_5fheader_2eproto__INCLUDED */
