// Generated by the protocol buffer compiler.  DO NOT EDIT!

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "motion.pb.h"
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace {

const ::google::protobuf::Descriptor* MotionMessage_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  MotionMessage_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_motion_2eproto() {
  protobuf_AddDesc_motion_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "motion.proto");
  GOOGLE_CHECK(file != NULL);
  MotionMessage_descriptor_ = file->message_type(0);
  static const int MotionMessage_offsets_[7] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MotionMessage, host_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MotionMessage, publisher_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MotionMessage, topic_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MotionMessage, timeout_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MotionMessage, timestamp_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MotionMessage, command_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MotionMessage, parameter_),
  };
  MotionMessage_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      MotionMessage_descriptor_,
      MotionMessage::default_instance_,
      MotionMessage_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MotionMessage, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MotionMessage, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(MotionMessage));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_motion_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    MotionMessage_descriptor_, &MotionMessage::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_motion_2eproto() {
  delete MotionMessage::default_instance_;
  delete MotionMessage_reflection_;
}

void protobuf_AddDesc_motion_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\014motion.proto\"\243\001\n\rMotionMessage\022\027\n\004host"
    "\030\001 \002(\t:\tlocalhost\022\023\n\tpublisher\030\002 \002(\t:\000\022\025"
    "\n\005topic\030\003 \002(\t:\006global\022\022\n\007timeout\030\004 \002(\005:\001"
    "0\022\023\n\ttimestamp\030\005 \002(\t:\000\022\021\n\007command\030\006 \002(\t:"
    "\000\022\021\n\tparameter\030\007 \003(\002", 180);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "motion.proto", &protobuf_RegisterTypes);
  MotionMessage::default_instance_ = new MotionMessage();
  MotionMessage::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_motion_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_motion_2eproto {
  StaticDescriptorInitializer_motion_2eproto() {
    protobuf_AddDesc_motion_2eproto();
  }
} static_descriptor_initializer_motion_2eproto_;


// ===================================================================

const ::std::string MotionMessage::_default_host_("localhost");
const ::std::string MotionMessage::_default_publisher_;
const ::std::string MotionMessage::_default_topic_("global");
const ::std::string MotionMessage::_default_timestamp_;
const ::std::string MotionMessage::_default_command_;
#ifndef _MSC_VER
const int MotionMessage::kHostFieldNumber;
const int MotionMessage::kPublisherFieldNumber;
const int MotionMessage::kTopicFieldNumber;
const int MotionMessage::kTimeoutFieldNumber;
const int MotionMessage::kTimestampFieldNumber;
const int MotionMessage::kCommandFieldNumber;
const int MotionMessage::kParameterFieldNumber;
#endif  // !_MSC_VER

MotionMessage::MotionMessage()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void MotionMessage::InitAsDefaultInstance() {
}

MotionMessage::MotionMessage(const MotionMessage& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void MotionMessage::SharedCtor() {
  _cached_size_ = 0;
  host_ = const_cast< ::std::string*>(&_default_host_);
  publisher_ = const_cast< ::std::string*>(&_default_publisher_);
  topic_ = const_cast< ::std::string*>(&_default_topic_);
  timeout_ = 0;
  timestamp_ = const_cast< ::std::string*>(&_default_timestamp_);
  command_ = const_cast< ::std::string*>(&_default_command_);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

MotionMessage::~MotionMessage() {
  SharedDtor();
}

void MotionMessage::SharedDtor() {
  if (host_ != &_default_host_) {
    delete host_;
  }
  if (publisher_ != &_default_publisher_) {
    delete publisher_;
  }
  if (topic_ != &_default_topic_) {
    delete topic_;
  }
  if (timestamp_ != &_default_timestamp_) {
    delete timestamp_;
  }
  if (command_ != &_default_command_) {
    delete command_;
  }
  if (this != default_instance_) {
  }
}

void MotionMessage::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* MotionMessage::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return MotionMessage_descriptor_;
}

const MotionMessage& MotionMessage::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_motion_2eproto();  return *default_instance_;
}

MotionMessage* MotionMessage::default_instance_ = NULL;

MotionMessage* MotionMessage::New() const {
  return new MotionMessage;
}

void MotionMessage::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (_has_bit(0)) {
      if (host_ != &_default_host_) {
        host_->assign(_default_host_);
      }
    }
    if (_has_bit(1)) {
      if (publisher_ != &_default_publisher_) {
        publisher_->clear();
      }
    }
    if (_has_bit(2)) {
      if (topic_ != &_default_topic_) {
        topic_->assign(_default_topic_);
      }
    }
    timeout_ = 0;
    if (_has_bit(4)) {
      if (timestamp_ != &_default_timestamp_) {
        timestamp_->clear();
      }
    }
    if (_has_bit(5)) {
      if (command_ != &_default_command_) {
        command_->clear();
      }
    }
  }
  parameter_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool MotionMessage::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string host = 1 [default = "localhost"];
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_host()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->host().data(), this->host().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_publisher;
        break;
      }
      
      // required string publisher = 2 [default = ""];
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_publisher:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_publisher()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->publisher().data(), this->publisher().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(26)) goto parse_topic;
        break;
      }
      
      // required string topic = 3 [default = "global"];
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_topic:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_topic()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->topic().data(), this->topic().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(32)) goto parse_timeout;
        break;
      }
      
      // required int32 timeout = 4 [default = 0];
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_timeout:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &timeout_)));
          _set_bit(3);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(42)) goto parse_timestamp;
        break;
      }
      
      // required string timestamp = 5 [default = ""];
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_timestamp:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_timestamp()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->timestamp().data(), this->timestamp().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(50)) goto parse_command;
        break;
      }
      
      // required string command = 6 [default = ""];
      case 6: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_command:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_command()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->command().data(), this->command().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(61)) goto parse_parameter;
        break;
      }
      
      // repeated float parameter = 7;
      case 7: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED32) {
         parse_parameter:
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 1, 61, input, this->mutable_parameter())));
        } else if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag)
                   == ::google::protobuf::internal::WireFormatLite::
                      WIRETYPE_LENGTH_DELIMITED) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitiveNoInline<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, this->mutable_parameter())));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(61)) goto parse_parameter;
        if (input->ExpectAtEnd()) return true;
        break;
      }
      
      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void MotionMessage::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required string host = 1 [default = "localhost"];
  if (_has_bit(0)) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->host().data(), this->host().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->host(), output);
  }
  
  // required string publisher = 2 [default = ""];
  if (_has_bit(1)) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->publisher().data(), this->publisher().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->publisher(), output);
  }
  
  // required string topic = 3 [default = "global"];
  if (_has_bit(2)) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->topic().data(), this->topic().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      3, this->topic(), output);
  }
  
  // required int32 timeout = 4 [default = 0];
  if (_has_bit(3)) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(4, this->timeout(), output);
  }
  
  // required string timestamp = 5 [default = ""];
  if (_has_bit(4)) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->timestamp().data(), this->timestamp().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      5, this->timestamp(), output);
  }
  
  // required string command = 6 [default = ""];
  if (_has_bit(5)) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->command().data(), this->command().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      6, this->command(), output);
  }
  
  // repeated float parameter = 7;
  for (int i = 0; i < this->parameter_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(
      7, this->parameter(i), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* MotionMessage::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required string host = 1 [default = "localhost"];
  if (_has_bit(0)) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->host().data(), this->host().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->host(), target);
  }
  
  // required string publisher = 2 [default = ""];
  if (_has_bit(1)) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->publisher().data(), this->publisher().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->publisher(), target);
  }
  
  // required string topic = 3 [default = "global"];
  if (_has_bit(2)) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->topic().data(), this->topic().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->topic(), target);
  }
  
  // required int32 timeout = 4 [default = 0];
  if (_has_bit(3)) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(4, this->timeout(), target);
  }
  
  // required string timestamp = 5 [default = ""];
  if (_has_bit(4)) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->timestamp().data(), this->timestamp().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        5, this->timestamp(), target);
  }
  
  // required string command = 6 [default = ""];
  if (_has_bit(5)) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->command().data(), this->command().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        6, this->command(), target);
  }
  
  // repeated float parameter = 7;
  for (int i = 0; i < this->parameter_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteFloatToArray(7, this->parameter(i), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int MotionMessage::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required string host = 1 [default = "localhost"];
    if (has_host()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->host());
    }
    
    // required string publisher = 2 [default = ""];
    if (has_publisher()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->publisher());
    }
    
    // required string topic = 3 [default = "global"];
    if (has_topic()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->topic());
    }
    
    // required int32 timeout = 4 [default = 0];
    if (has_timeout()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->timeout());
    }
    
    // required string timestamp = 5 [default = ""];
    if (has_timestamp()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->timestamp());
    }
    
    // required string command = 6 [default = ""];
    if (has_command()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->command());
    }
    
  }
  // repeated float parameter = 7;
  {
    int data_size = 0;
    data_size = 4 * this->parameter_size();
    total_size += 1 * this->parameter_size() + data_size;
  }
  
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void MotionMessage::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const MotionMessage* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const MotionMessage*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void MotionMessage::MergeFrom(const MotionMessage& from) {
  GOOGLE_CHECK_NE(&from, this);
  parameter_.MergeFrom(from.parameter_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from._has_bit(0)) {
      set_host(from.host());
    }
    if (from._has_bit(1)) {
      set_publisher(from.publisher());
    }
    if (from._has_bit(2)) {
      set_topic(from.topic());
    }
    if (from._has_bit(3)) {
      set_timeout(from.timeout());
    }
    if (from._has_bit(4)) {
      set_timestamp(from.timestamp());
    }
    if (from._has_bit(5)) {
      set_command(from.command());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void MotionMessage::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void MotionMessage::CopyFrom(const MotionMessage& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MotionMessage::IsInitialized() const {
  if ((_has_bits_[0] & 0x0000003f) != 0x0000003f) return false;
  
  return true;
}

void MotionMessage::Swap(MotionMessage* other) {
  if (other != this) {
    std::swap(host_, other->host_);
    std::swap(publisher_, other->publisher_);
    std::swap(topic_, other->topic_);
    std::swap(timeout_, other->timeout_);
    std::swap(timestamp_, other->timestamp_);
    std::swap(command_, other->command_);
    parameter_.Swap(&other->parameter_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata MotionMessage::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = MotionMessage_descriptor_;
  metadata.reflection = MotionMessage_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)
