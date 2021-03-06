// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: motion.proto

#ifndef PROTOBUF_motion_2eproto__INCLUDED
#define PROTOBUF_motion_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2003000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2003000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_message_reflection.h>
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_motion_2eproto();
void protobuf_AssignDesc_motion_2eproto();
void protobuf_ShutdownFile_motion_2eproto();

class MotionMessage;

// ===================================================================

class MotionMessage : public ::google::protobuf::Message {
 public:
  MotionMessage();
  virtual ~MotionMessage();
  
  MotionMessage(const MotionMessage& from);
  
  inline MotionMessage& operator=(const MotionMessage& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const MotionMessage& default_instance();
  
  void Swap(MotionMessage* other);
  
  // implements Message ----------------------------------------------
  
  MotionMessage* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const MotionMessage& from);
  void MergeFrom(const MotionMessage& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // required string host = 1 [default = "localhost"];
  inline bool has_host() const;
  inline void clear_host();
  static const int kHostFieldNumber = 1;
  inline const ::std::string& host() const;
  inline void set_host(const ::std::string& value);
  inline void set_host(const char* value);
  inline void set_host(const char* value, size_t size);
  inline ::std::string* mutable_host();
  
  // required string publisher = 2 [default = ""];
  inline bool has_publisher() const;
  inline void clear_publisher();
  static const int kPublisherFieldNumber = 2;
  inline const ::std::string& publisher() const;
  inline void set_publisher(const ::std::string& value);
  inline void set_publisher(const char* value);
  inline void set_publisher(const char* value, size_t size);
  inline ::std::string* mutable_publisher();
  
  // required string topic = 3 [default = "global"];
  inline bool has_topic() const;
  inline void clear_topic();
  static const int kTopicFieldNumber = 3;
  inline const ::std::string& topic() const;
  inline void set_topic(const ::std::string& value);
  inline void set_topic(const char* value);
  inline void set_topic(const char* value, size_t size);
  inline ::std::string* mutable_topic();
  
  // required int32 timeout = 4 [default = 0];
  inline bool has_timeout() const;
  inline void clear_timeout();
  static const int kTimeoutFieldNumber = 4;
  inline ::google::protobuf::int32 timeout() const;
  inline void set_timeout(::google::protobuf::int32 value);
  
  // required string timestamp = 5 [default = ""];
  inline bool has_timestamp() const;
  inline void clear_timestamp();
  static const int kTimestampFieldNumber = 5;
  inline const ::std::string& timestamp() const;
  inline void set_timestamp(const ::std::string& value);
  inline void set_timestamp(const char* value);
  inline void set_timestamp(const char* value, size_t size);
  inline ::std::string* mutable_timestamp();
  
  // required string command = 6 [default = ""];
  inline bool has_command() const;
  inline void clear_command();
  static const int kCommandFieldNumber = 6;
  inline const ::std::string& command() const;
  inline void set_command(const ::std::string& value);
  inline void set_command(const char* value);
  inline void set_command(const char* value, size_t size);
  inline ::std::string* mutable_command();
  
  // repeated float parameter = 7;
  inline int parameter_size() const;
  inline void clear_parameter();
  static const int kParameterFieldNumber = 7;
  inline float parameter(int index) const;
  inline void set_parameter(int index, float value);
  inline void add_parameter(float value);
  inline const ::google::protobuf::RepeatedField< float >&
      parameter() const;
  inline ::google::protobuf::RepeatedField< float >*
      mutable_parameter();
  
  // @@protoc_insertion_point(class_scope:MotionMessage)
 private:
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  mutable int _cached_size_;
  
  ::std::string* host_;
  static const ::std::string _default_host_;
  ::std::string* publisher_;
  static const ::std::string _default_publisher_;
  ::std::string* topic_;
  static const ::std::string _default_topic_;
  ::google::protobuf::int32 timeout_;
  ::std::string* timestamp_;
  static const ::std::string _default_timestamp_;
  ::std::string* command_;
  static const ::std::string _default_command_;
  ::google::protobuf::RepeatedField< float > parameter_;
  friend void  protobuf_AddDesc_motion_2eproto();
  friend void protobuf_AssignDesc_motion_2eproto();
  friend void protobuf_ShutdownFile_motion_2eproto();
  
  ::google::protobuf::uint32 _has_bits_[(7 + 31) / 32];
  
  // WHY DOES & HAVE LOWER PRECEDENCE THAN != !?
  inline bool _has_bit(int index) const {
    return (_has_bits_[index / 32] & (1u << (index % 32))) != 0;
  }
  inline void _set_bit(int index) {
    _has_bits_[index / 32] |= (1u << (index % 32));
  }
  inline void _clear_bit(int index) {
    _has_bits_[index / 32] &= ~(1u << (index % 32));
  }
  
  void InitAsDefaultInstance();
  static MotionMessage* default_instance_;
};
// ===================================================================


// ===================================================================

// MotionMessage

// required string host = 1 [default = "localhost"];
inline bool MotionMessage::has_host() const {
  return _has_bit(0);
}
inline void MotionMessage::clear_host() {
  if (host_ != &_default_host_) {
    host_->assign(_default_host_);
  }
  _clear_bit(0);
}
inline const ::std::string& MotionMessage::host() const {
  return *host_;
}
inline void MotionMessage::set_host(const ::std::string& value) {
  _set_bit(0);
  if (host_ == &_default_host_) {
    host_ = new ::std::string;
  }
  host_->assign(value);
}
inline void MotionMessage::set_host(const char* value) {
  _set_bit(0);
  if (host_ == &_default_host_) {
    host_ = new ::std::string;
  }
  host_->assign(value);
}
inline void MotionMessage::set_host(const char* value, size_t size) {
  _set_bit(0);
  if (host_ == &_default_host_) {
    host_ = new ::std::string;
  }
  host_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* MotionMessage::mutable_host() {
  _set_bit(0);
  if (host_ == &_default_host_) {
    host_ = new ::std::string(_default_host_);
  }
  return host_;
}

// required string publisher = 2 [default = ""];
inline bool MotionMessage::has_publisher() const {
  return _has_bit(1);
}
inline void MotionMessage::clear_publisher() {
  if (publisher_ != &_default_publisher_) {
    publisher_->clear();
  }
  _clear_bit(1);
}
inline const ::std::string& MotionMessage::publisher() const {
  return *publisher_;
}
inline void MotionMessage::set_publisher(const ::std::string& value) {
  _set_bit(1);
  if (publisher_ == &_default_publisher_) {
    publisher_ = new ::std::string;
  }
  publisher_->assign(value);
}
inline void MotionMessage::set_publisher(const char* value) {
  _set_bit(1);
  if (publisher_ == &_default_publisher_) {
    publisher_ = new ::std::string;
  }
  publisher_->assign(value);
}
inline void MotionMessage::set_publisher(const char* value, size_t size) {
  _set_bit(1);
  if (publisher_ == &_default_publisher_) {
    publisher_ = new ::std::string;
  }
  publisher_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* MotionMessage::mutable_publisher() {
  _set_bit(1);
  if (publisher_ == &_default_publisher_) {
    publisher_ = new ::std::string;
  }
  return publisher_;
}

// required string topic = 3 [default = "global"];
inline bool MotionMessage::has_topic() const {
  return _has_bit(2);
}
inline void MotionMessage::clear_topic() {
  if (topic_ != &_default_topic_) {
    topic_->assign(_default_topic_);
  }
  _clear_bit(2);
}
inline const ::std::string& MotionMessage::topic() const {
  return *topic_;
}
inline void MotionMessage::set_topic(const ::std::string& value) {
  _set_bit(2);
  if (topic_ == &_default_topic_) {
    topic_ = new ::std::string;
  }
  topic_->assign(value);
}
inline void MotionMessage::set_topic(const char* value) {
  _set_bit(2);
  if (topic_ == &_default_topic_) {
    topic_ = new ::std::string;
  }
  topic_->assign(value);
}
inline void MotionMessage::set_topic(const char* value, size_t size) {
  _set_bit(2);
  if (topic_ == &_default_topic_) {
    topic_ = new ::std::string;
  }
  topic_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* MotionMessage::mutable_topic() {
  _set_bit(2);
  if (topic_ == &_default_topic_) {
    topic_ = new ::std::string(_default_topic_);
  }
  return topic_;
}

// required int32 timeout = 4 [default = 0];
inline bool MotionMessage::has_timeout() const {
  return _has_bit(3);
}
inline void MotionMessage::clear_timeout() {
  timeout_ = 0;
  _clear_bit(3);
}
inline ::google::protobuf::int32 MotionMessage::timeout() const {
  return timeout_;
}
inline void MotionMessage::set_timeout(::google::protobuf::int32 value) {
  _set_bit(3);
  timeout_ = value;
}

// required string timestamp = 5 [default = ""];
inline bool MotionMessage::has_timestamp() const {
  return _has_bit(4);
}
inline void MotionMessage::clear_timestamp() {
  if (timestamp_ != &_default_timestamp_) {
    timestamp_->clear();
  }
  _clear_bit(4);
}
inline const ::std::string& MotionMessage::timestamp() const {
  return *timestamp_;
}
inline void MotionMessage::set_timestamp(const ::std::string& value) {
  _set_bit(4);
  if (timestamp_ == &_default_timestamp_) {
    timestamp_ = new ::std::string;
  }
  timestamp_->assign(value);
}
inline void MotionMessage::set_timestamp(const char* value) {
  _set_bit(4);
  if (timestamp_ == &_default_timestamp_) {
    timestamp_ = new ::std::string;
  }
  timestamp_->assign(value);
}
inline void MotionMessage::set_timestamp(const char* value, size_t size) {
  _set_bit(4);
  if (timestamp_ == &_default_timestamp_) {
    timestamp_ = new ::std::string;
  }
  timestamp_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* MotionMessage::mutable_timestamp() {
  _set_bit(4);
  if (timestamp_ == &_default_timestamp_) {
    timestamp_ = new ::std::string;
  }
  return timestamp_;
}

// required string command = 6 [default = ""];
inline bool MotionMessage::has_command() const {
  return _has_bit(5);
}
inline void MotionMessage::clear_command() {
  if (command_ != &_default_command_) {
    command_->clear();
  }
  _clear_bit(5);
}
inline const ::std::string& MotionMessage::command() const {
  return *command_;
}
inline void MotionMessage::set_command(const ::std::string& value) {
  _set_bit(5);
  if (command_ == &_default_command_) {
    command_ = new ::std::string;
  }
  command_->assign(value);
}
inline void MotionMessage::set_command(const char* value) {
  _set_bit(5);
  if (command_ == &_default_command_) {
    command_ = new ::std::string;
  }
  command_->assign(value);
}
inline void MotionMessage::set_command(const char* value, size_t size) {
  _set_bit(5);
  if (command_ == &_default_command_) {
    command_ = new ::std::string;
  }
  command_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* MotionMessage::mutable_command() {
  _set_bit(5);
  if (command_ == &_default_command_) {
    command_ = new ::std::string;
  }
  return command_;
}

// repeated float parameter = 7;
inline int MotionMessage::parameter_size() const {
  return parameter_.size();
}
inline void MotionMessage::clear_parameter() {
  parameter_.Clear();
}
inline float MotionMessage::parameter(int index) const {
  return parameter_.Get(index);
}
inline void MotionMessage::set_parameter(int index, float value) {
  parameter_.Set(index, value);
}
inline void MotionMessage::add_parameter(float value) {
  parameter_.Add(value);
}
inline const ::google::protobuf::RepeatedField< float >&
MotionMessage::parameter() const {
  return parameter_;
}
inline ::google::protobuf::RepeatedField< float >*
MotionMessage::mutable_parameter() {
  return &parameter_;
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_motion_2eproto__INCLUDED
