// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: CarlifeMediaInfoProto.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "CarlifeMediaInfoProto.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace com {
namespace baidu {
namespace carlife {
namespace protobuf {

namespace {

const ::google::protobuf::Descriptor* CarlifeMediaInfo_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  CarlifeMediaInfo_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_CarlifeMediaInfoProto_2eproto() {
  protobuf_AddDesc_CarlifeMediaInfoProto_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "CarlifeMediaInfoProto.proto");
  GOOGLE_CHECK(file != NULL);
  CarlifeMediaInfo_descriptor_ = file->message_type(0);
  static const int CarlifeMediaInfo_offsets_[9] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CarlifeMediaInfo, source_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CarlifeMediaInfo, song_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CarlifeMediaInfo, artist_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CarlifeMediaInfo, album_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CarlifeMediaInfo, albumart_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CarlifeMediaInfo, duration_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CarlifeMediaInfo, playlistnum_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CarlifeMediaInfo, songid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CarlifeMediaInfo, mode_),
  };
  CarlifeMediaInfo_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      CarlifeMediaInfo_descriptor_,
      CarlifeMediaInfo::default_instance_,
      CarlifeMediaInfo_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CarlifeMediaInfo, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CarlifeMediaInfo, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(CarlifeMediaInfo));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_CarlifeMediaInfoProto_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    CarlifeMediaInfo_descriptor_, &CarlifeMediaInfo::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_CarlifeMediaInfoProto_2eproto() {
  delete CarlifeMediaInfo::default_instance_;
  delete CarlifeMediaInfo_reflection_;
}

void protobuf_AddDesc_CarlifeMediaInfoProto_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\033CarlifeMediaInfoProto.proto\022\032com.baidu"
    ".carlife.protobuf\"\246\001\n\020CarlifeMediaInfo\022\016"
    "\n\006source\030\001 \002(\t\022\014\n\004song\030\002 \002(\t\022\016\n\006artist\030\003"
    " \002(\t\022\r\n\005album\030\004 \002(\t\022\020\n\010albumArt\030\005 \002(\014\022\020\n"
    "\010duration\030\006 \002(\005\022\023\n\013playlistNum\030\007 \002(\005\022\016\n\006"
    "songId\030\010 \002(\t\022\014\n\004mode\030\t \002(\005", 226);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "CarlifeMediaInfoProto.proto", &protobuf_RegisterTypes);
  CarlifeMediaInfo::default_instance_ = new CarlifeMediaInfo();
  CarlifeMediaInfo::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_CarlifeMediaInfoProto_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_CarlifeMediaInfoProto_2eproto {
  StaticDescriptorInitializer_CarlifeMediaInfoProto_2eproto() {
    protobuf_AddDesc_CarlifeMediaInfoProto_2eproto();
  }
} static_descriptor_initializer_CarlifeMediaInfoProto_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int CarlifeMediaInfo::kSourceFieldNumber;
const int CarlifeMediaInfo::kSongFieldNumber;
const int CarlifeMediaInfo::kArtistFieldNumber;
const int CarlifeMediaInfo::kAlbumFieldNumber;
const int CarlifeMediaInfo::kAlbumArtFieldNumber;
const int CarlifeMediaInfo::kDurationFieldNumber;
const int CarlifeMediaInfo::kPlaylistNumFieldNumber;
const int CarlifeMediaInfo::kSongIdFieldNumber;
const int CarlifeMediaInfo::kModeFieldNumber;
#endif  // !_MSC_VER

CarlifeMediaInfo::CarlifeMediaInfo()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void CarlifeMediaInfo::InitAsDefaultInstance() {
}

CarlifeMediaInfo::CarlifeMediaInfo(const CarlifeMediaInfo& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void CarlifeMediaInfo::SharedCtor() {
  _cached_size_ = 0;
  source_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  song_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  artist_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  album_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  albumart_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  duration_ = 0;
  playlistnum_ = 0;
  songid_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  mode_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

CarlifeMediaInfo::~CarlifeMediaInfo() {
  SharedDtor();
}

void CarlifeMediaInfo::SharedDtor() {
  if (source_ != &::google::protobuf::internal::kEmptyString) {
    delete source_;
  }
  if (song_ != &::google::protobuf::internal::kEmptyString) {
    delete song_;
  }
  if (artist_ != &::google::protobuf::internal::kEmptyString) {
    delete artist_;
  }
  if (album_ != &::google::protobuf::internal::kEmptyString) {
    delete album_;
  }
  if (albumart_ != &::google::protobuf::internal::kEmptyString) {
    delete albumart_;
  }
  if (songid_ != &::google::protobuf::internal::kEmptyString) {
    delete songid_;
  }
  if (this != default_instance_) {
  }
}

void CarlifeMediaInfo::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CarlifeMediaInfo::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return CarlifeMediaInfo_descriptor_;
}

const CarlifeMediaInfo& CarlifeMediaInfo::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_CarlifeMediaInfoProto_2eproto();
  return *default_instance_;
}

CarlifeMediaInfo* CarlifeMediaInfo::default_instance_ = NULL;

CarlifeMediaInfo* CarlifeMediaInfo::New() const {
  return new CarlifeMediaInfo;
}

void CarlifeMediaInfo::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_source()) {
      if (source_ != &::google::protobuf::internal::kEmptyString) {
        source_->clear();
      }
    }
    if (has_song()) {
      if (song_ != &::google::protobuf::internal::kEmptyString) {
        song_->clear();
      }
    }
    if (has_artist()) {
      if (artist_ != &::google::protobuf::internal::kEmptyString) {
        artist_->clear();
      }
    }
    if (has_album()) {
      if (album_ != &::google::protobuf::internal::kEmptyString) {
        album_->clear();
      }
    }
    if (has_albumart()) {
      if (albumart_ != &::google::protobuf::internal::kEmptyString) {
        albumart_->clear();
      }
    }
    duration_ = 0;
    playlistnum_ = 0;
    if (has_songid()) {
      if (songid_ != &::google::protobuf::internal::kEmptyString) {
        songid_->clear();
      }
    }
  }
  if (_has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    mode_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool CarlifeMediaInfo::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string source = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_source()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->source().data(), this->source().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_song;
        break;
      }

      // required string song = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_song:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_song()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->song().data(), this->song().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(26)) goto parse_artist;
        break;
      }

      // required string artist = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_artist:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_artist()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->artist().data(), this->artist().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(34)) goto parse_album;
        break;
      }

      // required string album = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_album:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_album()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->album().data(), this->album().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(42)) goto parse_albumArt;
        break;
      }

      // required bytes albumArt = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_albumArt:
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_albumart()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(48)) goto parse_duration;
        break;
      }

      // required int32 duration = 6;
      case 6: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_duration:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &duration_)));
          set_has_duration();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(56)) goto parse_playlistNum;
        break;
      }

      // required int32 playlistNum = 7;
      case 7: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_playlistNum:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &playlistnum_)));
          set_has_playlistnum();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(66)) goto parse_songId;
        break;
      }

      // required string songId = 8;
      case 8: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_songId:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_songid()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->songid().data(), this->songid().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(72)) goto parse_mode;
        break;
      }

      // required int32 mode = 9;
      case 9: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_mode:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &mode_)));
          set_has_mode();
        } else {
          goto handle_uninterpreted;
        }
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

void CarlifeMediaInfo::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required string source = 1;
  if (has_source()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->source().data(), this->source().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->source(), output);
  }

  // required string song = 2;
  if (has_song()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->song().data(), this->song().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->song(), output);
  }

  // required string artist = 3;
  if (has_artist()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->artist().data(), this->artist().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      3, this->artist(), output);
  }

  // required string album = 4;
  if (has_album()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->album().data(), this->album().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      4, this->album(), output);
  }

  // required bytes albumArt = 5;
  if (has_albumart()) {
    ::google::protobuf::internal::WireFormatLite::WriteBytes(
      5, this->albumart(), output);
  }

  // required int32 duration = 6;
  if (has_duration()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(6, this->duration(), output);
  }

  // required int32 playlistNum = 7;
  if (has_playlistnum()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(7, this->playlistnum(), output);
  }

  // required string songId = 8;
  if (has_songid()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->songid().data(), this->songid().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      8, this->songid(), output);
  }

  // required int32 mode = 9;
  if (has_mode()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(9, this->mode(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* CarlifeMediaInfo::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required string source = 1;
  if (has_source()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->source().data(), this->source().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->source(), target);
  }

  // required string song = 2;
  if (has_song()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->song().data(), this->song().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->song(), target);
  }

  // required string artist = 3;
  if (has_artist()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->artist().data(), this->artist().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->artist(), target);
  }

  // required string album = 4;
  if (has_album()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->album().data(), this->album().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        4, this->album(), target);
  }

  // required bytes albumArt = 5;
  if (has_albumart()) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        5, this->albumart(), target);
  }

  // required int32 duration = 6;
  if (has_duration()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(6, this->duration(), target);
  }

  // required int32 playlistNum = 7;
  if (has_playlistnum()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(7, this->playlistnum(), target);
  }

  // required string songId = 8;
  if (has_songid()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->songid().data(), this->songid().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        8, this->songid(), target);
  }

  // required int32 mode = 9;
  if (has_mode()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(9, this->mode(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int CarlifeMediaInfo::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required string source = 1;
    if (has_source()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->source());
    }

    // required string song = 2;
    if (has_song()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->song());
    }

    // required string artist = 3;
    if (has_artist()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->artist());
    }

    // required string album = 4;
    if (has_album()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->album());
    }

    // required bytes albumArt = 5;
    if (has_albumart()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::BytesSize(
          this->albumart());
    }

    // required int32 duration = 6;
    if (has_duration()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->duration());
    }

    // required int32 playlistNum = 7;
    if (has_playlistnum()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->playlistnum());
    }

    // required string songId = 8;
    if (has_songid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->songid());
    }

  }
  if (_has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    // required int32 mode = 9;
    if (has_mode()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->mode());
    }

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

void CarlifeMediaInfo::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const CarlifeMediaInfo* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const CarlifeMediaInfo*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void CarlifeMediaInfo::MergeFrom(const CarlifeMediaInfo& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_source()) {
      set_source(from.source());
    }
    if (from.has_song()) {
      set_song(from.song());
    }
    if (from.has_artist()) {
      set_artist(from.artist());
    }
    if (from.has_album()) {
      set_album(from.album());
    }
    if (from.has_albumart()) {
      set_albumart(from.albumart());
    }
    if (from.has_duration()) {
      set_duration(from.duration());
    }
    if (from.has_playlistnum()) {
      set_playlistnum(from.playlistnum());
    }
    if (from.has_songid()) {
      set_songid(from.songid());
    }
  }
  if (from._has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    if (from.has_mode()) {
      set_mode(from.mode());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void CarlifeMediaInfo::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void CarlifeMediaInfo::CopyFrom(const CarlifeMediaInfo& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool CarlifeMediaInfo::IsInitialized() const {
  if ((_has_bits_[0] & 0x000001ff) != 0x000001ff) return false;

  return true;
}

void CarlifeMediaInfo::Swap(CarlifeMediaInfo* other) {
  if (other != this) {
    std::swap(source_, other->source_);
    std::swap(song_, other->song_);
    std::swap(artist_, other->artist_);
    std::swap(album_, other->album_);
    std::swap(albumart_, other->albumart_);
    std::swap(duration_, other->duration_);
    std::swap(playlistnum_, other->playlistnum_);
    std::swap(songid_, other->songid_);
    std::swap(mode_, other->mode_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata CarlifeMediaInfo::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = CarlifeMediaInfo_descriptor_;
  metadata.reflection = CarlifeMediaInfo_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace protobuf
}  // namespace carlife
}  // namespace baidu
}  // namespace com

// @@protoc_insertion_point(global_scope)