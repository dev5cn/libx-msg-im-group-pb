// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: db-x-msg-im-group.proto

#ifndef PROTOBUF_db_2dx_2dmsg_2dim_2dgroup_2eproto__INCLUDED
#define PROTOBUF_db_2dx_2dmsg_2dim_2dgroup_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3005001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/map.h>  // IWYU pragma: export
#include <google/protobuf/map_entry.h>
#include <google/protobuf/map_field_inl.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace protobuf_db_2dx_2dmsg_2dim_2dgroup_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[2];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
void InitDefaultsXmsgImGroupMemberInfoHistory_ExtEntry_DoNotUseImpl();
void InitDefaultsXmsgImGroupMemberInfoHistory_ExtEntry_DoNotUse();
void InitDefaultsXmsgImGroupMemberInfoHistoryImpl();
void InitDefaultsXmsgImGroupMemberInfoHistory();
inline void InitDefaults() {
  InitDefaultsXmsgImGroupMemberInfoHistory_ExtEntry_DoNotUse();
  InitDefaultsXmsgImGroupMemberInfoHistory();
}
}  // namespace protobuf_db_2dx_2dmsg_2dim_2dgroup_2eproto
class XmsgImGroupMemberInfoHistory;
class XmsgImGroupMemberInfoHistoryDefaultTypeInternal;
extern XmsgImGroupMemberInfoHistoryDefaultTypeInternal _XmsgImGroupMemberInfoHistory_default_instance_;
class XmsgImGroupMemberInfoHistory_ExtEntry_DoNotUse;
class XmsgImGroupMemberInfoHistory_ExtEntry_DoNotUseDefaultTypeInternal;
extern XmsgImGroupMemberInfoHistory_ExtEntry_DoNotUseDefaultTypeInternal _XmsgImGroupMemberInfoHistory_ExtEntry_DoNotUse_default_instance_;

// ===================================================================

class XmsgImGroupMemberInfoHistory_ExtEntry_DoNotUse : public ::google::protobuf::internal::MapEntry<XmsgImGroupMemberInfoHistory_ExtEntry_DoNotUse, 
    ::std::string, ::std::string,
    ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
    ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
    0 > {
public:
  typedef ::google::protobuf::internal::MapEntry<XmsgImGroupMemberInfoHistory_ExtEntry_DoNotUse, 
    ::std::string, ::std::string,
    ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
    ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
    0 > SuperType;
  XmsgImGroupMemberInfoHistory_ExtEntry_DoNotUse();
  XmsgImGroupMemberInfoHistory_ExtEntry_DoNotUse(::google::protobuf::Arena* arena);
  void MergeFrom(const XmsgImGroupMemberInfoHistory_ExtEntry_DoNotUse& other);
  static const XmsgImGroupMemberInfoHistory_ExtEntry_DoNotUse* internal_default_instance() { return reinterpret_cast<const XmsgImGroupMemberInfoHistory_ExtEntry_DoNotUse*>(&_XmsgImGroupMemberInfoHistory_ExtEntry_DoNotUse_default_instance_); }
  void MergeFrom(const ::google::protobuf::Message& other) PROTOBUF_FINAL;
  ::google::protobuf::Metadata GetMetadata() const;
};

// -------------------------------------------------------------------

class XmsgImGroupMemberInfoHistory : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:XmsgImGroupMemberInfoHistory) */ {
 public:
  XmsgImGroupMemberInfoHistory();
  virtual ~XmsgImGroupMemberInfoHistory();

  XmsgImGroupMemberInfoHistory(const XmsgImGroupMemberInfoHistory& from);

  inline XmsgImGroupMemberInfoHistory& operator=(const XmsgImGroupMemberInfoHistory& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  XmsgImGroupMemberInfoHistory(XmsgImGroupMemberInfoHistory&& from) noexcept
    : XmsgImGroupMemberInfoHistory() {
    *this = ::std::move(from);
  }

  inline XmsgImGroupMemberInfoHistory& operator=(XmsgImGroupMemberInfoHistory&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const XmsgImGroupMemberInfoHistory& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const XmsgImGroupMemberInfoHistory* internal_default_instance() {
    return reinterpret_cast<const XmsgImGroupMemberInfoHistory*>(
               &_XmsgImGroupMemberInfoHistory_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(XmsgImGroupMemberInfoHistory* other);
  friend void swap(XmsgImGroupMemberInfoHistory& a, XmsgImGroupMemberInfoHistory& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline XmsgImGroupMemberInfoHistory* New() const PROTOBUF_FINAL { return New(NULL); }

  XmsgImGroupMemberInfoHistory* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const XmsgImGroupMemberInfoHistory& from);
  void MergeFrom(const XmsgImGroupMemberInfoHistory& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(XmsgImGroupMemberInfoHistory* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------


  // accessors -------------------------------------------------------

  // map<string, string> ext = 3;
  int ext_size() const;
  void clear_ext();
  static const int kExtFieldNumber = 3;
  const ::google::protobuf::Map< ::std::string, ::std::string >&
      ext() const;
  ::google::protobuf::Map< ::std::string, ::std::string >*
      mutable_ext();

  // uint64 start = 1;
  void clear_start();
  static const int kStartFieldNumber = 1;
  ::google::protobuf::uint64 start() const;
  void set_start(::google::protobuf::uint64 value);

  // uint64 end = 2;
  void clear_end();
  static const int kEndFieldNumber = 2;
  ::google::protobuf::uint64 end() const;
  void set_end(::google::protobuf::uint64 value);

  // @@protoc_insertion_point(class_scope:XmsgImGroupMemberInfoHistory)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::MapField<
      XmsgImGroupMemberInfoHistory_ExtEntry_DoNotUse,
      ::std::string, ::std::string,
      ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
      ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
      0 > ext_;
  ::google::protobuf::uint64 start_;
  ::google::protobuf::uint64 end_;
  mutable int _cached_size_;
  friend struct ::protobuf_db_2dx_2dmsg_2dim_2dgroup_2eproto::TableStruct;
  friend void ::protobuf_db_2dx_2dmsg_2dim_2dgroup_2eproto::InitDefaultsXmsgImGroupMemberInfoHistoryImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// XmsgImGroupMemberInfoHistory

// uint64 start = 1;
inline void XmsgImGroupMemberInfoHistory::clear_start() {
  start_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 XmsgImGroupMemberInfoHistory::start() const {
  // @@protoc_insertion_point(field_get:XmsgImGroupMemberInfoHistory.start)
  return start_;
}
inline void XmsgImGroupMemberInfoHistory::set_start(::google::protobuf::uint64 value) {
  
  start_ = value;
  // @@protoc_insertion_point(field_set:XmsgImGroupMemberInfoHistory.start)
}

// uint64 end = 2;
inline void XmsgImGroupMemberInfoHistory::clear_end() {
  end_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 XmsgImGroupMemberInfoHistory::end() const {
  // @@protoc_insertion_point(field_get:XmsgImGroupMemberInfoHistory.end)
  return end_;
}
inline void XmsgImGroupMemberInfoHistory::set_end(::google::protobuf::uint64 value) {
  
  end_ = value;
  // @@protoc_insertion_point(field_set:XmsgImGroupMemberInfoHistory.end)
}

// map<string, string> ext = 3;
inline int XmsgImGroupMemberInfoHistory::ext_size() const {
  return ext_.size();
}
inline void XmsgImGroupMemberInfoHistory::clear_ext() {
  ext_.Clear();
}
inline const ::google::protobuf::Map< ::std::string, ::std::string >&
XmsgImGroupMemberInfoHistory::ext() const {
  // @@protoc_insertion_point(field_map:XmsgImGroupMemberInfoHistory.ext)
  return ext_.GetMap();
}
inline ::google::protobuf::Map< ::std::string, ::std::string >*
XmsgImGroupMemberInfoHistory::mutable_ext() {
  // @@protoc_insertion_point(field_mutable_map:XmsgImGroupMemberInfoHistory.ext)
  return ext_.MutableMap();
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_db_2dx_2dmsg_2dim_2dgroup_2eproto__INCLUDED
