// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: sensors.proto

#include "sensors.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

namespace sensors {
class DataGPSDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<DataGPS> _instance;
} _DataGPS_default_instance_;
class DataIMUDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<DataIMU> _instance;
} _DataIMU_default_instance_;
class DataDHTDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<DataDHT> _instance;
} _DataDHT_default_instance_;
}  // namespace sensors
static void InitDefaultsDataGPS_sensors_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::sensors::_DataGPS_default_instance_;
    new (ptr) ::sensors::DataGPS();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::sensors::DataGPS::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_DataGPS_sensors_2eproto =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsDataGPS_sensors_2eproto}, {}};

static void InitDefaultsDataIMU_sensors_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::sensors::_DataIMU_default_instance_;
    new (ptr) ::sensors::DataIMU();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::sensors::DataIMU::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_DataIMU_sensors_2eproto =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsDataIMU_sensors_2eproto}, {}};

static void InitDefaultsDataDHT_sensors_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::sensors::_DataDHT_default_instance_;
    new (ptr) ::sensors::DataDHT();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::sensors::DataDHT::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_DataDHT_sensors_2eproto =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsDataDHT_sensors_2eproto}, {}};

void InitDefaults_sensors_2eproto() {
  ::google::protobuf::internal::InitSCC(&scc_info_DataGPS_sensors_2eproto.base);
  ::google::protobuf::internal::InitSCC(&scc_info_DataIMU_sensors_2eproto.base);
  ::google::protobuf::internal::InitSCC(&scc_info_DataDHT_sensors_2eproto.base);
}

::google::protobuf::Metadata file_level_metadata_sensors_2eproto[3];
constexpr ::google::protobuf::EnumDescriptor const** file_level_enum_descriptors_sensors_2eproto = nullptr;
constexpr ::google::protobuf::ServiceDescriptor const** file_level_service_descriptors_sensors_2eproto = nullptr;

const ::google::protobuf::uint32 TableStruct_sensors_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::sensors::DataGPS, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::sensors::DataGPS, latitude_),
  PROTOBUF_FIELD_OFFSET(::sensors::DataGPS, longitude_),
  PROTOBUF_FIELD_OFFSET(::sensors::DataGPS, height_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::sensors::DataIMU, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::sensors::DataIMU, x_),
  PROTOBUF_FIELD_OFFSET(::sensors::DataIMU, y_),
  PROTOBUF_FIELD_OFFSET(::sensors::DataIMU, z_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::sensors::DataDHT, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::sensors::DataDHT, temperature_),
  PROTOBUF_FIELD_OFFSET(::sensors::DataDHT, humidity_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::sensors::DataGPS)},
  { 8, -1, sizeof(::sensors::DataIMU)},
  { 16, -1, sizeof(::sensors::DataDHT)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::sensors::_DataGPS_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::sensors::_DataIMU_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::sensors::_DataDHT_default_instance_),
};

::google::protobuf::internal::AssignDescriptorsTable assign_descriptors_table_sensors_2eproto = {
  {}, AddDescriptors_sensors_2eproto, "sensors.proto", schemas,
  file_default_instances, TableStruct_sensors_2eproto::offsets,
  file_level_metadata_sensors_2eproto, 3, file_level_enum_descriptors_sensors_2eproto, file_level_service_descriptors_sensors_2eproto,
};

const char descriptor_table_protodef_sensors_2eproto[] =
  "\n\rsensors.proto\022\007sensors\">\n\007DataGPS\022\020\n\010l"
  "atitude\030\001 \001(\002\022\021\n\tlongitude\030\002 \001(\002\022\016\n\006heig"
  "ht\030\003 \001(\002\"*\n\007DataIMU\022\t\n\001x\030\001 \001(\002\022\t\n\001y\030\002 \001("
  "\002\022\t\n\001z\030\003 \001(\002\"0\n\007DataDHT\022\023\n\013temperature\030\001"
  " \001(\002\022\020\n\010humidity\030\002 \001(\002b\006proto3"
  ;
::google::protobuf::internal::DescriptorTable descriptor_table_sensors_2eproto = {
  false, InitDefaults_sensors_2eproto, 
  descriptor_table_protodef_sensors_2eproto,
  "sensors.proto", &assign_descriptors_table_sensors_2eproto, 190,
};

void AddDescriptors_sensors_2eproto() {
  static constexpr ::google::protobuf::internal::InitFunc deps[1] =
  {
  };
 ::google::protobuf::internal::AddDescriptors(&descriptor_table_sensors_2eproto, deps, 0);
}

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_sensors_2eproto = []() { AddDescriptors_sensors_2eproto(); return true; }();
namespace sensors {

// ===================================================================

void DataGPS::InitAsDefaultInstance() {
}
class DataGPS::HasBitSetters {
 public:
};

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int DataGPS::kLatitudeFieldNumber;
const int DataGPS::kLongitudeFieldNumber;
const int DataGPS::kHeightFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

DataGPS::DataGPS()
  : ::google::protobuf::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:sensors.DataGPS)
}
DataGPS::DataGPS(const DataGPS& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&latitude_, &from.latitude_,
    static_cast<size_t>(reinterpret_cast<char*>(&height_) -
    reinterpret_cast<char*>(&latitude_)) + sizeof(height_));
  // @@protoc_insertion_point(copy_constructor:sensors.DataGPS)
}

void DataGPS::SharedCtor() {
  ::memset(&latitude_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&height_) -
      reinterpret_cast<char*>(&latitude_)) + sizeof(height_));
}

DataGPS::~DataGPS() {
  // @@protoc_insertion_point(destructor:sensors.DataGPS)
  SharedDtor();
}

void DataGPS::SharedDtor() {
}

void DataGPS::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const DataGPS& DataGPS::default_instance() {
  ::google::protobuf::internal::InitSCC(&::scc_info_DataGPS_sensors_2eproto.base);
  return *internal_default_instance();
}


void DataGPS::Clear() {
// @@protoc_insertion_point(message_clear_start:sensors.DataGPS)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&latitude_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&height_) -
      reinterpret_cast<char*>(&latitude_)) + sizeof(height_));
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* DataGPS::_InternalParse(const char* begin, const char* end, void* object,
                  ::google::protobuf::internal::ParseContext* ctx) {
  auto msg = static_cast<DataGPS*>(object);
  ::google::protobuf::int32 size; (void)size;
  int depth; (void)depth;
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::ParseFunc parser_till_end; (void)parser_till_end;
  auto ptr = begin;
  while (ptr < end) {
    ptr = ::google::protobuf::io::Parse32(ptr, &tag);
    GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
    switch (tag >> 3) {
      // float latitude = 1;
      case 1: {
        if (static_cast<::google::protobuf::uint8>(tag) != 13) goto handle_unusual;
        msg->set_latitude(::google::protobuf::io::UnalignedLoad<float>(ptr));
        ptr += sizeof(float);
        break;
      }
      // float longitude = 2;
      case 2: {
        if (static_cast<::google::protobuf::uint8>(tag) != 21) goto handle_unusual;
        msg->set_longitude(::google::protobuf::io::UnalignedLoad<float>(ptr));
        ptr += sizeof(float);
        break;
      }
      // float height = 3;
      case 3: {
        if (static_cast<::google::protobuf::uint8>(tag) != 29) goto handle_unusual;
        msg->set_height(::google::protobuf::io::UnalignedLoad<float>(ptr));
        ptr += sizeof(float);
        break;
      }
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->EndGroup(tag);
          return ptr;
        }
        auto res = UnknownFieldParse(tag, {_InternalParse, msg},
          ptr, end, msg->_internal_metadata_.mutable_unknown_fields(), ctx);
        ptr = res.first;
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr != nullptr);
        if (res.second) return ptr;
      }
    }  // switch
  }  // while
  return ptr;
}
#else  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
bool DataGPS::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:sensors.DataGPS)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // float latitude = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (13 & 0xFF)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &latitude_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // float longitude = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (21 & 0xFF)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &longitude_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // float height = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (29 & 0xFF)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &height_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:sensors.DataGPS)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:sensors.DataGPS)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void DataGPS::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:sensors.DataGPS)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // float latitude = 1;
  if (this->latitude() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(1, this->latitude(), output);
  }

  // float longitude = 2;
  if (this->longitude() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(2, this->longitude(), output);
  }

  // float height = 3;
  if (this->height() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(3, this->height(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:sensors.DataGPS)
}

::google::protobuf::uint8* DataGPS::InternalSerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:sensors.DataGPS)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // float latitude = 1;
  if (this->latitude() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(1, this->latitude(), target);
  }

  // float longitude = 2;
  if (this->longitude() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(2, this->longitude(), target);
  }

  // float height = 3;
  if (this->height() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(3, this->height(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:sensors.DataGPS)
  return target;
}

size_t DataGPS::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:sensors.DataGPS)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // float latitude = 1;
  if (this->latitude() != 0) {
    total_size += 1 + 4;
  }

  // float longitude = 2;
  if (this->longitude() != 0) {
    total_size += 1 + 4;
  }

  // float height = 3;
  if (this->height() != 0) {
    total_size += 1 + 4;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void DataGPS::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:sensors.DataGPS)
  GOOGLE_DCHECK_NE(&from, this);
  const DataGPS* source =
      ::google::protobuf::DynamicCastToGenerated<DataGPS>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:sensors.DataGPS)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:sensors.DataGPS)
    MergeFrom(*source);
  }
}

void DataGPS::MergeFrom(const DataGPS& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:sensors.DataGPS)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.latitude() != 0) {
    set_latitude(from.latitude());
  }
  if (from.longitude() != 0) {
    set_longitude(from.longitude());
  }
  if (from.height() != 0) {
    set_height(from.height());
  }
}

void DataGPS::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:sensors.DataGPS)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void DataGPS::CopyFrom(const DataGPS& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:sensors.DataGPS)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool DataGPS::IsInitialized() const {
  return true;
}

void DataGPS::Swap(DataGPS* other) {
  if (other == this) return;
  InternalSwap(other);
}
void DataGPS::InternalSwap(DataGPS* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(latitude_, other->latitude_);
  swap(longitude_, other->longitude_);
  swap(height_, other->height_);
}

::google::protobuf::Metadata DataGPS::GetMetadata() const {
  ::google::protobuf::internal::AssignDescriptors(&::assign_descriptors_table_sensors_2eproto);
  return ::file_level_metadata_sensors_2eproto[kIndexInFileMessages];
}


// ===================================================================

void DataIMU::InitAsDefaultInstance() {
}
class DataIMU::HasBitSetters {
 public:
};

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int DataIMU::kXFieldNumber;
const int DataIMU::kYFieldNumber;
const int DataIMU::kZFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

DataIMU::DataIMU()
  : ::google::protobuf::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:sensors.DataIMU)
}
DataIMU::DataIMU(const DataIMU& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&x_, &from.x_,
    static_cast<size_t>(reinterpret_cast<char*>(&z_) -
    reinterpret_cast<char*>(&x_)) + sizeof(z_));
  // @@protoc_insertion_point(copy_constructor:sensors.DataIMU)
}

void DataIMU::SharedCtor() {
  ::memset(&x_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&z_) -
      reinterpret_cast<char*>(&x_)) + sizeof(z_));
}

DataIMU::~DataIMU() {
  // @@protoc_insertion_point(destructor:sensors.DataIMU)
  SharedDtor();
}

void DataIMU::SharedDtor() {
}

void DataIMU::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const DataIMU& DataIMU::default_instance() {
  ::google::protobuf::internal::InitSCC(&::scc_info_DataIMU_sensors_2eproto.base);
  return *internal_default_instance();
}


void DataIMU::Clear() {
// @@protoc_insertion_point(message_clear_start:sensors.DataIMU)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&x_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&z_) -
      reinterpret_cast<char*>(&x_)) + sizeof(z_));
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* DataIMU::_InternalParse(const char* begin, const char* end, void* object,
                  ::google::protobuf::internal::ParseContext* ctx) {
  auto msg = static_cast<DataIMU*>(object);
  ::google::protobuf::int32 size; (void)size;
  int depth; (void)depth;
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::ParseFunc parser_till_end; (void)parser_till_end;
  auto ptr = begin;
  while (ptr < end) {
    ptr = ::google::protobuf::io::Parse32(ptr, &tag);
    GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
    switch (tag >> 3) {
      // float x = 1;
      case 1: {
        if (static_cast<::google::protobuf::uint8>(tag) != 13) goto handle_unusual;
        msg->set_x(::google::protobuf::io::UnalignedLoad<float>(ptr));
        ptr += sizeof(float);
        break;
      }
      // float y = 2;
      case 2: {
        if (static_cast<::google::protobuf::uint8>(tag) != 21) goto handle_unusual;
        msg->set_y(::google::protobuf::io::UnalignedLoad<float>(ptr));
        ptr += sizeof(float);
        break;
      }
      // float z = 3;
      case 3: {
        if (static_cast<::google::protobuf::uint8>(tag) != 29) goto handle_unusual;
        msg->set_z(::google::protobuf::io::UnalignedLoad<float>(ptr));
        ptr += sizeof(float);
        break;
      }
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->EndGroup(tag);
          return ptr;
        }
        auto res = UnknownFieldParse(tag, {_InternalParse, msg},
          ptr, end, msg->_internal_metadata_.mutable_unknown_fields(), ctx);
        ptr = res.first;
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr != nullptr);
        if (res.second) return ptr;
      }
    }  // switch
  }  // while
  return ptr;
}
#else  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
bool DataIMU::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:sensors.DataIMU)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // float x = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (13 & 0xFF)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &x_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // float y = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (21 & 0xFF)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &y_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // float z = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (29 & 0xFF)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &z_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:sensors.DataIMU)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:sensors.DataIMU)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void DataIMU::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:sensors.DataIMU)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // float x = 1;
  if (this->x() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(1, this->x(), output);
  }

  // float y = 2;
  if (this->y() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(2, this->y(), output);
  }

  // float z = 3;
  if (this->z() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(3, this->z(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:sensors.DataIMU)
}

::google::protobuf::uint8* DataIMU::InternalSerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:sensors.DataIMU)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // float x = 1;
  if (this->x() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(1, this->x(), target);
  }

  // float y = 2;
  if (this->y() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(2, this->y(), target);
  }

  // float z = 3;
  if (this->z() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(3, this->z(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:sensors.DataIMU)
  return target;
}

size_t DataIMU::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:sensors.DataIMU)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // float x = 1;
  if (this->x() != 0) {
    total_size += 1 + 4;
  }

  // float y = 2;
  if (this->y() != 0) {
    total_size += 1 + 4;
  }

  // float z = 3;
  if (this->z() != 0) {
    total_size += 1 + 4;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void DataIMU::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:sensors.DataIMU)
  GOOGLE_DCHECK_NE(&from, this);
  const DataIMU* source =
      ::google::protobuf::DynamicCastToGenerated<DataIMU>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:sensors.DataIMU)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:sensors.DataIMU)
    MergeFrom(*source);
  }
}

void DataIMU::MergeFrom(const DataIMU& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:sensors.DataIMU)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.x() != 0) {
    set_x(from.x());
  }
  if (from.y() != 0) {
    set_y(from.y());
  }
  if (from.z() != 0) {
    set_z(from.z());
  }
}

void DataIMU::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:sensors.DataIMU)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void DataIMU::CopyFrom(const DataIMU& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:sensors.DataIMU)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool DataIMU::IsInitialized() const {
  return true;
}

void DataIMU::Swap(DataIMU* other) {
  if (other == this) return;
  InternalSwap(other);
}
void DataIMU::InternalSwap(DataIMU* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(x_, other->x_);
  swap(y_, other->y_);
  swap(z_, other->z_);
}

::google::protobuf::Metadata DataIMU::GetMetadata() const {
  ::google::protobuf::internal::AssignDescriptors(&::assign_descriptors_table_sensors_2eproto);
  return ::file_level_metadata_sensors_2eproto[kIndexInFileMessages];
}


// ===================================================================

void DataDHT::InitAsDefaultInstance() {
}
class DataDHT::HasBitSetters {
 public:
};

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int DataDHT::kTemperatureFieldNumber;
const int DataDHT::kHumidityFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

DataDHT::DataDHT()
  : ::google::protobuf::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:sensors.DataDHT)
}
DataDHT::DataDHT(const DataDHT& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&temperature_, &from.temperature_,
    static_cast<size_t>(reinterpret_cast<char*>(&humidity_) -
    reinterpret_cast<char*>(&temperature_)) + sizeof(humidity_));
  // @@protoc_insertion_point(copy_constructor:sensors.DataDHT)
}

void DataDHT::SharedCtor() {
  ::memset(&temperature_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&humidity_) -
      reinterpret_cast<char*>(&temperature_)) + sizeof(humidity_));
}

DataDHT::~DataDHT() {
  // @@protoc_insertion_point(destructor:sensors.DataDHT)
  SharedDtor();
}

void DataDHT::SharedDtor() {
}

void DataDHT::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const DataDHT& DataDHT::default_instance() {
  ::google::protobuf::internal::InitSCC(&::scc_info_DataDHT_sensors_2eproto.base);
  return *internal_default_instance();
}


void DataDHT::Clear() {
// @@protoc_insertion_point(message_clear_start:sensors.DataDHT)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&temperature_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&humidity_) -
      reinterpret_cast<char*>(&temperature_)) + sizeof(humidity_));
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* DataDHT::_InternalParse(const char* begin, const char* end, void* object,
                  ::google::protobuf::internal::ParseContext* ctx) {
  auto msg = static_cast<DataDHT*>(object);
  ::google::protobuf::int32 size; (void)size;
  int depth; (void)depth;
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::ParseFunc parser_till_end; (void)parser_till_end;
  auto ptr = begin;
  while (ptr < end) {
    ptr = ::google::protobuf::io::Parse32(ptr, &tag);
    GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
    switch (tag >> 3) {
      // float temperature = 1;
      case 1: {
        if (static_cast<::google::protobuf::uint8>(tag) != 13) goto handle_unusual;
        msg->set_temperature(::google::protobuf::io::UnalignedLoad<float>(ptr));
        ptr += sizeof(float);
        break;
      }
      // float humidity = 2;
      case 2: {
        if (static_cast<::google::protobuf::uint8>(tag) != 21) goto handle_unusual;
        msg->set_humidity(::google::protobuf::io::UnalignedLoad<float>(ptr));
        ptr += sizeof(float);
        break;
      }
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->EndGroup(tag);
          return ptr;
        }
        auto res = UnknownFieldParse(tag, {_InternalParse, msg},
          ptr, end, msg->_internal_metadata_.mutable_unknown_fields(), ctx);
        ptr = res.first;
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr != nullptr);
        if (res.second) return ptr;
      }
    }  // switch
  }  // while
  return ptr;
}
#else  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
bool DataDHT::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:sensors.DataDHT)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // float temperature = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (13 & 0xFF)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &temperature_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // float humidity = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (21 & 0xFF)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &humidity_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:sensors.DataDHT)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:sensors.DataDHT)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void DataDHT::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:sensors.DataDHT)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // float temperature = 1;
  if (this->temperature() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(1, this->temperature(), output);
  }

  // float humidity = 2;
  if (this->humidity() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(2, this->humidity(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:sensors.DataDHT)
}

::google::protobuf::uint8* DataDHT::InternalSerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:sensors.DataDHT)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // float temperature = 1;
  if (this->temperature() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(1, this->temperature(), target);
  }

  // float humidity = 2;
  if (this->humidity() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(2, this->humidity(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:sensors.DataDHT)
  return target;
}

size_t DataDHT::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:sensors.DataDHT)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // float temperature = 1;
  if (this->temperature() != 0) {
    total_size += 1 + 4;
  }

  // float humidity = 2;
  if (this->humidity() != 0) {
    total_size += 1 + 4;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void DataDHT::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:sensors.DataDHT)
  GOOGLE_DCHECK_NE(&from, this);
  const DataDHT* source =
      ::google::protobuf::DynamicCastToGenerated<DataDHT>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:sensors.DataDHT)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:sensors.DataDHT)
    MergeFrom(*source);
  }
}

void DataDHT::MergeFrom(const DataDHT& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:sensors.DataDHT)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.temperature() != 0) {
    set_temperature(from.temperature());
  }
  if (from.humidity() != 0) {
    set_humidity(from.humidity());
  }
}

void DataDHT::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:sensors.DataDHT)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void DataDHT::CopyFrom(const DataDHT& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:sensors.DataDHT)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool DataDHT::IsInitialized() const {
  return true;
}

void DataDHT::Swap(DataDHT* other) {
  if (other == this) return;
  InternalSwap(other);
}
void DataDHT::InternalSwap(DataDHT* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(temperature_, other->temperature_);
  swap(humidity_, other->humidity_);
}

::google::protobuf::Metadata DataDHT::GetMetadata() const {
  ::google::protobuf::internal::AssignDescriptors(&::assign_descriptors_table_sensors_2eproto);
  return ::file_level_metadata_sensors_2eproto[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace sensors
namespace google {
namespace protobuf {
template<> PROTOBUF_NOINLINE ::sensors::DataGPS* Arena::CreateMaybeMessage< ::sensors::DataGPS >(Arena* arena) {
  return Arena::CreateInternal< ::sensors::DataGPS >(arena);
}
template<> PROTOBUF_NOINLINE ::sensors::DataIMU* Arena::CreateMaybeMessage< ::sensors::DataIMU >(Arena* arena) {
  return Arena::CreateInternal< ::sensors::DataIMU >(arena);
}
template<> PROTOBUF_NOINLINE ::sensors::DataDHT* Arena::CreateMaybeMessage< ::sensors::DataDHT >(Arena* arena) {
  return Arena::CreateInternal< ::sensors::DataDHT >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
