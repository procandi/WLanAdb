// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: client.proto

#ifndef PROTOBUF_client_2eproto__INCLUDED
#define PROTOBUF_client_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2004000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2004001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_message_reflection.h>
// @@protoc_insertion_point(includes)

namespace com {
namespace wlancat {
namespace data {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_client_2eproto();
void protobuf_AssignDesc_client_2eproto();
void protobuf_ShutdownFile_client_2eproto();

class Client;

// ===================================================================

class Client : public ::google::protobuf::Message {
 public:
  Client();
  virtual ~Client();
  
  Client(const Client& from);
  
  inline Client& operator=(const Client& from) {
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
  static const Client& default_instance();
  
  void Swap(Client* other);
  
  // implements Message ----------------------------------------------
  
  Client* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Client& from);
  void MergeFrom(const Client& from);
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
  
  // required string id = 1;
  inline bool has_id() const;
  inline void clear_id();
  static const int kIdFieldNumber = 1;
  inline const ::std::string& id() const;
  inline void set_id(const ::std::string& value);
  inline void set_id(const char* value);
  inline void set_id(const char* value, size_t size);
  inline ::std::string* mutable_id();
  inline ::std::string* release_id();
  
  // optional string ip = 2;
  inline bool has_ip() const;
  inline void clear_ip();
  static const int kIpFieldNumber = 2;
  inline const ::std::string& ip() const;
  inline void set_ip(const ::std::string& value);
  inline void set_ip(const char* value);
  inline void set_ip(const char* value, size_t size);
  inline ::std::string* mutable_ip();
  inline ::std::string* release_ip();
  
  // optional int32 port = 3;
  inline bool has_port() const;
  inline void clear_port();
  static const int kPortFieldNumber = 3;
  inline ::google::protobuf::int32 port() const;
  inline void set_port(::google::protobuf::int32 value);
  
  // optional string name = 4;
  inline bool has_name() const;
  inline void clear_name();
  static const int kNameFieldNumber = 4;
  inline const ::std::string& name() const;
  inline void set_name(const ::std::string& value);
  inline void set_name(const char* value);
  inline void set_name(const char* value, size_t size);
  inline ::std::string* mutable_name();
  inline ::std::string* release_name();
  
  // optional bool use_pin = 5;
  inline bool has_use_pin() const;
  inline void clear_use_pin();
  static const int kUsePinFieldNumber = 5;
  inline bool use_pin() const;
  inline void set_use_pin(bool value);
  
  // @@protoc_insertion_point(class_scope:com.wlancat.data.Client)
 private:
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_ip();
  inline void clear_has_ip();
  inline void set_has_port();
  inline void clear_has_port();
  inline void set_has_name();
  inline void clear_has_name();
  inline void set_has_use_pin();
  inline void clear_has_use_pin();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::std::string* id_;
  ::std::string* ip_;
  ::std::string* name_;
  ::google::protobuf::int32 port_;
  bool use_pin_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(5 + 31) / 32];
  
  friend void  protobuf_AddDesc_client_2eproto();
  friend void protobuf_AssignDesc_client_2eproto();
  friend void protobuf_ShutdownFile_client_2eproto();
  
  void InitAsDefaultInstance();
  static Client* default_instance_;
};
// ===================================================================


// ===================================================================

// Client

// required string id = 1;
inline bool Client::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Client::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Client::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Client::clear_id() {
  if (id_ != &::google::protobuf::internal::kEmptyString) {
    id_->clear();
  }
  clear_has_id();
}
inline const ::std::string& Client::id() const {
  return *id_;
}
inline void Client::set_id(const ::std::string& value) {
  set_has_id();
  if (id_ == &::google::protobuf::internal::kEmptyString) {
    id_ = new ::std::string;
  }
  id_->assign(value);
}
inline void Client::set_id(const char* value) {
  set_has_id();
  if (id_ == &::google::protobuf::internal::kEmptyString) {
    id_ = new ::std::string;
  }
  id_->assign(value);
}
inline void Client::set_id(const char* value, size_t size) {
  set_has_id();
  if (id_ == &::google::protobuf::internal::kEmptyString) {
    id_ = new ::std::string;
  }
  id_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Client::mutable_id() {
  set_has_id();
  if (id_ == &::google::protobuf::internal::kEmptyString) {
    id_ = new ::std::string;
  }
  return id_;
}
inline ::std::string* Client::release_id() {
  clear_has_id();
  if (id_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = id_;
    id_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// optional string ip = 2;
inline bool Client::has_ip() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Client::set_has_ip() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Client::clear_has_ip() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Client::clear_ip() {
  if (ip_ != &::google::protobuf::internal::kEmptyString) {
    ip_->clear();
  }
  clear_has_ip();
}
inline const ::std::string& Client::ip() const {
  return *ip_;
}
inline void Client::set_ip(const ::std::string& value) {
  set_has_ip();
  if (ip_ == &::google::protobuf::internal::kEmptyString) {
    ip_ = new ::std::string;
  }
  ip_->assign(value);
}
inline void Client::set_ip(const char* value) {
  set_has_ip();
  if (ip_ == &::google::protobuf::internal::kEmptyString) {
    ip_ = new ::std::string;
  }
  ip_->assign(value);
}
inline void Client::set_ip(const char* value, size_t size) {
  set_has_ip();
  if (ip_ == &::google::protobuf::internal::kEmptyString) {
    ip_ = new ::std::string;
  }
  ip_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Client::mutable_ip() {
  set_has_ip();
  if (ip_ == &::google::protobuf::internal::kEmptyString) {
    ip_ = new ::std::string;
  }
  return ip_;
}
inline ::std::string* Client::release_ip() {
  clear_has_ip();
  if (ip_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = ip_;
    ip_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// optional int32 port = 3;
inline bool Client::has_port() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Client::set_has_port() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Client::clear_has_port() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Client::clear_port() {
  port_ = 0;
  clear_has_port();
}
inline ::google::protobuf::int32 Client::port() const {
  return port_;
}
inline void Client::set_port(::google::protobuf::int32 value) {
  set_has_port();
  port_ = value;
}

// optional string name = 4;
inline bool Client::has_name() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void Client::set_has_name() {
  _has_bits_[0] |= 0x00000008u;
}
inline void Client::clear_has_name() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void Client::clear_name() {
  if (name_ != &::google::protobuf::internal::kEmptyString) {
    name_->clear();
  }
  clear_has_name();
}
inline const ::std::string& Client::name() const {
  return *name_;
}
inline void Client::set_name(const ::std::string& value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void Client::set_name(const char* value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void Client::set_name(const char* value, size_t size) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Client::mutable_name() {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  return name_;
}
inline ::std::string* Client::release_name() {
  clear_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = name_;
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// optional bool use_pin = 5;
inline bool Client::has_use_pin() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void Client::set_has_use_pin() {
  _has_bits_[0] |= 0x00000010u;
}
inline void Client::clear_has_use_pin() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void Client::clear_use_pin() {
  use_pin_ = false;
  clear_has_use_pin();
}
inline bool Client::use_pin() const {
  return use_pin_;
}
inline void Client::set_use_pin(bool value) {
  set_has_use_pin();
  use_pin_ = value;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace data
}  // namespace wlancat
}  // namespace com

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_client_2eproto__INCLUDED
