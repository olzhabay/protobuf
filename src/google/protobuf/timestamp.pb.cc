// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/protobuf/timestamp.proto
// Protobuf C++ Version: 5.27.0-dev

#include "google/protobuf/timestamp.pb.h"

#include <algorithm>
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/generated_message_tctable_impl.h"
#include "google/protobuf/extension_set.h"
#include "google/protobuf/wire_format_lite.h"
#include "google/protobuf/descriptor.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/reflection_ops.h"
#include "google/protobuf/wire_format.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"
PROTOBUF_PRAGMA_INIT_SEG
namespace _pb = ::google::protobuf;
namespace _pbi = ::google::protobuf::internal;
namespace _fl = ::google::protobuf::internal::field_layout;
namespace google {
namespace protobuf {

inline constexpr Timestamp::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : seconds_{::int64_t{0}},
        nanos_{0},
        _cached_size_{0} {}

template <typename>
PROTOBUF_CONSTEXPR Timestamp::Timestamp(::_pbi::ConstantInitialized)
    : _impl_(::_pbi::ConstantInitialized()) {}
struct TimestampDefaultTypeInternal {
  PROTOBUF_CONSTEXPR TimestampDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~TimestampDefaultTypeInternal() {}
  union {
    Timestamp _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_EXPORT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 TimestampDefaultTypeInternal _Timestamp_default_instance_;
}  // namespace protobuf
}  // namespace google
static constexpr const ::_pb::EnumDescriptor**
    file_level_enum_descriptors_google_2fprotobuf_2ftimestamp_2eproto = nullptr;
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_google_2fprotobuf_2ftimestamp_2eproto = nullptr;
const ::uint32_t
    TableStruct_google_2fprotobuf_2ftimestamp_2eproto::offsets[] ABSL_ATTRIBUTE_SECTION_VARIABLE(
        protodesc_cold) = {
        ~0u,  // no _has_bits_
        PROTOBUF_FIELD_OFFSET(::google::protobuf::Timestamp, _internal_metadata_),
        ~0u,  // no _extensions_
        ~0u,  // no _oneof_case_
        ~0u,  // no _weak_field_map_
        ~0u,  // no _inlined_string_donated_
        ~0u,  // no _split_
        ~0u,  // no sizeof(Split)
        PROTOBUF_FIELD_OFFSET(::google::protobuf::Timestamp, _impl_.seconds_),
        PROTOBUF_FIELD_OFFSET(::google::protobuf::Timestamp, _impl_.nanos_),
};

static const ::_pbi::MigrationSchema
    schemas[] ABSL_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
        {0, -1, -1, sizeof(::google::protobuf::Timestamp)},
};
static const ::_pb::Message* const file_default_instances[] = {
    &::google::protobuf::_Timestamp_default_instance_._instance,
};
const char descriptor_table_protodef_google_2fprotobuf_2ftimestamp_2eproto[] ABSL_ATTRIBUTE_SECTION_VARIABLE(
    protodesc_cold) = {
    "\n\037google/protobuf/timestamp.proto\022\017googl"
    "e.protobuf\"+\n\tTimestamp\022\017\n\007seconds\030\001 \001(\003"
    "\022\r\n\005nanos\030\002 \001(\005B\205\001\n\023com.google.protobufB"
    "\016TimestampProtoP\001Z2google.golang.org/pro"
    "tobuf/types/known/timestamppb\370\001\001\242\002\003GPB\252\002"
    "\036Google.Protobuf.WellKnownTypesb\006proto3"
};
static ::absl::once_flag descriptor_table_google_2fprotobuf_2ftimestamp_2eproto_once;
PROTOBUF_CONSTINIT const ::_pbi::DescriptorTable descriptor_table_google_2fprotobuf_2ftimestamp_2eproto = {
    false,
    false,
    239,
    descriptor_table_protodef_google_2fprotobuf_2ftimestamp_2eproto,
    "google/protobuf/timestamp.proto",
    &descriptor_table_google_2fprotobuf_2ftimestamp_2eproto_once,
    nullptr,
    0,
    1,
    schemas,
    file_default_instances,
    TableStruct_google_2fprotobuf_2ftimestamp_2eproto::offsets,
    file_level_enum_descriptors_google_2fprotobuf_2ftimestamp_2eproto,
    file_level_service_descriptors_google_2fprotobuf_2ftimestamp_2eproto,
};
namespace google {
namespace protobuf {
// ===================================================================

class Timestamp::_Internal {
 public:
};

Timestamp::Timestamp(::google::protobuf::Arena* arena)
    : ::google::protobuf::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:google.protobuf.Timestamp)
}
Timestamp::Timestamp(
    ::google::protobuf::Arena* arena, const Timestamp& from)
    : Timestamp(arena) {
  MergeFrom(from);
}
inline PROTOBUF_NDEBUG_INLINE Timestamp::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : _cached_size_{0} {}

inline void Timestamp::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
  ::memset(reinterpret_cast<char *>(&_impl_) +
               offsetof(Impl_, seconds_),
           0,
           offsetof(Impl_, nanos_) -
               offsetof(Impl_, seconds_) +
               sizeof(Impl_::nanos_));
}
Timestamp::~Timestamp() {
  // @@protoc_insertion_point(destructor:google.protobuf.Timestamp)
  _internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  SharedDtor();
}
inline void Timestamp::SharedDtor() {
  ABSL_DCHECK(GetArena() == nullptr);
  _impl_.~Impl_();
}

const ::google::protobuf::MessageLite::ClassData*
Timestamp::GetClassData() const {
  PROTOBUF_CONSTINIT static const ::google::protobuf::MessageLite::
      ClassDataFull _data_ = {
          {
              nullptr,  // OnDemandRegisterArenaDtor
              PROTOBUF_FIELD_OFFSET(Timestamp, _impl_._cached_size_),
              false,
          },
          &Timestamp::MergeImpl,
          &Timestamp::kDescriptorMethods,
          &descriptor_table_google_2fprotobuf_2ftimestamp_2eproto,
          nullptr,  // tracker
      };
  return _data_.base();
}
PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<1, 2, 0, 0, 2> Timestamp::_table_ = {
  {
    0,  // no _has_bits_
    0, // no _extensions_
    2, 8,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967292,  // skipmap
    offsetof(decltype(_table_), field_entries),
    2,  // num_field_entries
    0,  // num_aux_entries
    offsetof(decltype(_table_), field_names),  // no aux_entries
    &_Timestamp_default_instance_._instance,
    nullptr,  // post_loop_handler
    ::_pbi::TcParser::GenericFallback,  // fallback
    #ifdef PROTOBUF_PREFETCH_PARSE_TABLE
    ::_pbi::TcParser::GetTable<::google::protobuf::Timestamp>(),  // to_prefetch
    #endif  // PROTOBUF_PREFETCH_PARSE_TABLE
  }, {{
    // int32 nanos = 2;
    {::_pbi::TcParser::SingularVarintNoZag1<::uint32_t, offsetof(Timestamp, _impl_.nanos_), 63>(),
     {16, 63, 0, PROTOBUF_FIELD_OFFSET(Timestamp, _impl_.nanos_)}},
    // int64 seconds = 1;
    {::_pbi::TcParser::SingularVarintNoZag1<::uint64_t, offsetof(Timestamp, _impl_.seconds_), 63>(),
     {8, 63, 0, PROTOBUF_FIELD_OFFSET(Timestamp, _impl_.seconds_)}},
  }}, {{
    65535, 65535
  }}, {{
    // int64 seconds = 1;
    {PROTOBUF_FIELD_OFFSET(Timestamp, _impl_.seconds_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kInt64)},
    // int32 nanos = 2;
    {PROTOBUF_FIELD_OFFSET(Timestamp, _impl_.nanos_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kInt32)},
  }},
  // no aux_entries
  {{
  }},
};

PROTOBUF_NOINLINE void Timestamp::Clear() {
// @@protoc_insertion_point(message_clear_start:google.protobuf.Timestamp)
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&_impl_.seconds_, 0, static_cast<::size_t>(
      reinterpret_cast<char*>(&_impl_.nanos_) -
      reinterpret_cast<char*>(&_impl_.seconds_)) + sizeof(_impl_.nanos_));
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

const char* Timestamp::_InternalParse(
    const char* ptr, ::_pbi::ParseContext* ctx) {
  ptr = ::_pbi::TcParser::ParseLoop(this, ptr, ctx, &_table_.header);
  return ptr;
}


::uint8_t* Timestamp::_InternalSerialize(
    ::uint8_t* target,
    ::google::protobuf::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:google.protobuf.Timestamp)
  ::uint32_t cached_has_bits = 0;
  (void)cached_has_bits;

  // int64 seconds = 1;
  if (this->_internal_seconds() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::
        WriteInt64ToArrayWithField<1>(
            stream, this->_internal_seconds(), target);
  }

  // int32 nanos = 2;
  if (this->_internal_nanos() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::
        WriteInt32ToArrayWithField<2>(
            stream, this->_internal_nanos(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target =
        ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
            _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:google.protobuf.Timestamp)
  return target;
}

::size_t Timestamp::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:google.protobuf.Timestamp)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // int64 seconds = 1;
  if (this->_internal_seconds() != 0) {
    total_size += ::_pbi::WireFormatLite::Int64SizePlusOne(
        this->_internal_seconds());
  }

  // int32 nanos = 2;
  if (this->_internal_nanos() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(
        this->_internal_nanos());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}


void Timestamp::MergeImpl(::google::protobuf::MessageLite& to_msg, const ::google::protobuf::MessageLite& from_msg) {
  auto* const _this = static_cast<Timestamp*>(&to_msg);
  auto& from = static_cast<const Timestamp&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:google.protobuf.Timestamp)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_seconds() != 0) {
    _this->_impl_.seconds_ = from._impl_.seconds_;
  }
  if (from._internal_nanos() != 0) {
    _this->_impl_.nanos_ = from._impl_.nanos_;
  }
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void Timestamp::CopyFrom(const Timestamp& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.protobuf.Timestamp)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

PROTOBUF_NOINLINE bool Timestamp::IsInitialized() const {
  return true;
}

void Timestamp::InternalSwap(Timestamp* PROTOBUF_RESTRICT other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::google::protobuf::internal::memswap<
      PROTOBUF_FIELD_OFFSET(Timestamp, _impl_.nanos_)
      + sizeof(Timestamp::_impl_.nanos_)
      - PROTOBUF_FIELD_OFFSET(Timestamp, _impl_.seconds_)>(
          reinterpret_cast<char*>(&_impl_.seconds_),
          reinterpret_cast<char*>(&other->_impl_.seconds_));
}

::google::protobuf::Metadata Timestamp::GetMetadata() const {
  return ::google::protobuf::Message::GetMetadataImpl(GetClassData()->full());
}
// @@protoc_insertion_point(namespace_scope)
}  // namespace protobuf
}  // namespace google
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google
// @@protoc_insertion_point(global_scope)
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2
static ::std::false_type _static_init_ PROTOBUF_UNUSED =
    (::_pbi::AddDescriptors(&descriptor_table_google_2fprotobuf_2ftimestamp_2eproto),
     ::std::false_type{});
#include "google/protobuf/port_undef.inc"
