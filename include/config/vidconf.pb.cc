/*
 * Copyright (c) 2017-2018 Heimdall
 *
 * The computer program contained herein contains proprietary
 * information which is the property of Heimdall.
 * The program may be used and/or copied only with the written
 * permission of Heimdall or in accordance with the
 * terms and conditions stipulated in the agreement/contract under
 * which the programs have been supplied.
 */
#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "vidconf.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
class VidUserDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<VidUser> {
} _VidUser_default_instance_;
class VidUserListDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<VidUserList> {
} _VidUserList_default_instance_;
class VidStorServerConfDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<VidStorServerConf> {
} _VidStorServerConf_default_instance_;
class VidCameraDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<VidCamera> {
} _VidCamera_default_instance_;
class VidCameraListDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<VidCameraList> {
} _VidCameraList_default_instance_;
class VidDiskDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<VidDisk> {
} _VidDisk_default_instance_;
class VidDiskListDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<VidDiskList> {
} _VidDiskList_default_instance_;
class VidHDFSConfDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<VidHDFSConf> {
} _VidHDFSConf_default_instance_;
class VidCameraIdDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<VidCameraId> {
} _VidCameraId_default_instance_;
class VidClientConfDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<VidClientConf> {
} _VidClientConf_default_instance_;
class VidStorDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<VidStor> {
} _VidStor_default_instance_;
class VidStorListDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<VidStorList> {
} _VidStorList_default_instance_;
class VidViewWindowDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<VidViewWindow> {
} _VidViewWindow_default_instance_;
class VidViewDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<VidView> {
} _VidView_default_instance_;
class VidViewListDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<VidViewList> {
} _VidViewList_default_instance_;
class VidTourDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<VidTour> {
} _VidTour_default_instance_;
class VidTourListDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<VidTourList> {
} _VidTourList_default_instance_;
class VidGroupDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<VidGroup> {
} _VidGroup_default_instance_;
class VidGroupListDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<VidGroupList> {
} _VidGroupList_default_instance_;
class VidEmapCameraDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<VidEmapCamera> {
} _VidEmapCamera_default_instance_;
class VidEmapDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<VidEmap> {
} _VidEmap_default_instance_;
class VidEmapListDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<VidEmapList> {
} _VidEmapList_default_instance_;
class VidStreamDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<VidStream> {
} _VidStream_default_instance_;
class VidStreamListDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<VidStreamList> {
} _VidStreamList_default_instance_;
class VidBlobDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<VidBlob> {
} _VidBlob_default_instance_;
class VidBlobListDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<VidBlobList> {
} _VidBlobList_default_instance_;
class VidEventDBConfDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<VidEventDBConf> {
} _VidEventDBConf_default_instance_;
class VidEventDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<VidEvent> {
} _VidEvent_default_instance_;
class VidStreamUrlDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<VidStreamUrl> {
} _VidStreamUrl_default_instance_;
class VidStreamUrlListDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<VidStreamUrlList> {
} _VidStreamUrlList_default_instance_;

namespace protobuf_vidconf_2eproto {


namespace {

::google::protobuf::Metadata file_level_metadata[30];
const ::google::protobuf::EnumDescriptor* file_level_enum_descriptors[7];

}  // namespace

const ::google::protobuf::uint32 TableStruct::offsets[] = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidUser, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidUser, strid_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidUser, strname_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidUser, strpasswd_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidUser, strroleid_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidUserList, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidUserList, cviduser_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidStorServerConf, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidStorServerConf, noapiport_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidStorServerConf, stradminpasswd_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidCamera, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidCamera, bdisable_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidCamera, strid_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidCamera, strname_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidCamera, ntype_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidCamera, strip_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidCamera, strport_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidCamera, struser_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidCamera, strpasswd_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidCamera, stronvifaddress_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidCamera, bprofiletoken_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidCamera, strprofiletoken1_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidCamera, strprofiletoken2_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidCamera, strfile_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidCamera, strrtspurl_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidCamera, bhwaccel_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidCamera, bservermotion_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidCamera, nconnecttype_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidCamera, bhdfsrecord_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidCamera, crecsched_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidCamera, nprerecsec_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidCamera, npostrecsec_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidCamera, bmotionjpeg_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidCamera, nrecordstream_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidCamera, nservermotionstream_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidCamera, nonvifevtlevel_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidCamera, strsched_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidCamera, strmotreg_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidCamera, bonline_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidCamera, brec_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidCameraList, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidCameraList, cvidcamera_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidDisk, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidDisk, strid_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidDisk, strpath_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidDisk, ntotalsize_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidDisk, nfreesize_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidDisk, nstorlimit_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidDisk, nstorused_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidDiskList, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidDiskList, cviddisk_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidHDFSConf, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidHDFSConf, strnamenode_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidHDFSConf, strport_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidHDFSConf, struser_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidHDFSConf, strpasswd_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidHDFSConf, nfileinterval_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidCameraId, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidCameraId, strstorid_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidCameraId, strcameraid_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidClientConf, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidClientConf, nlang_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidClientConf, stradminpasswd_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidClientConf, bautologin_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidClientConf, bautofullscreen_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidStor, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidStor, strid_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidStor, strname_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidStor, strip_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidStor, strport_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidStor, struser_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidStor, strpasswd_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidStorList, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidStorList, cvidstor_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidViewWindow, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidViewWindow, cid_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidViewWindow, nwindowsid_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidViewWindow, bhwaccel_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidView, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidView, strid_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidView, strname_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidView, cview_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidView, clayout_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidViewList, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidViewList, cvidview_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidTour, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidTour, strid_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidTour, strname_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidTour, strview_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidTourList, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidTourList, cvidtour_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidGroup, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidGroup, strid_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidGroup, strname_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidGroup, cgroup_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidGroupList, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidGroupList, cvidgroup_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidEmapCamera, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidEmapCamera, cid_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidEmapCamera, x_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidEmapCamera, y_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidEmapCamera, w_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidEmapCamera, h_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidEmap, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidEmap, strid_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidEmap, strname_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidEmap, ccamera_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidEmapList, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidEmapList, cvidemap_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidStream, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidStream, strtoken_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidStream, strname_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidStreamList, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidStreamList, cvidstream_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidBlob, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidBlob, x0_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidBlob, y0_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidBlob, x1_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidBlob, y1_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidBlobList, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidBlobList, cblob_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidEventDBConf, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidEventDBConf, ntype_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidEventDBConf, strdbpath_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidEvent, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidEvent, strid_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidEvent, strdevice_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidEvent, strdevicename_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidEvent, strtype_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidEvent, ntime_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidEvent, strtime_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidEvent, strdesc_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidEvent, bhandled_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidEvent, bsearched_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidEvent, strcomments_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidEvent, strstorid_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidEvent, strstorname_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidEvent, nidx_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidStreamUrl, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidStreamUrl, strprotocol_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidStreamUrl, strurl_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidStreamUrlList, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VidStreamUrlList, curl_),
};

static const ::google::protobuf::internal::MigrationSchema schemas[] = {
  { 0, -1, sizeof(VidUser)},
  { 8, -1, sizeof(VidUserList)},
  { 13, -1, sizeof(VidStorServerConf)},
  { 19, -1, sizeof(VidCamera)},
  { 52, -1, sizeof(VidCameraList)},
  { 57, -1, sizeof(VidDisk)},
  { 67, -1, sizeof(VidDiskList)},
  { 72, -1, sizeof(VidHDFSConf)},
  { 81, -1, sizeof(VidCameraId)},
  { 87, -1, sizeof(VidClientConf)},
  { 95, -1, sizeof(VidStor)},
  { 105, -1, sizeof(VidStorList)},
  { 110, -1, sizeof(VidViewWindow)},
  { 117, -1, sizeof(VidView)},
  { 125, -1, sizeof(VidViewList)},
  { 130, -1, sizeof(VidTour)},
  { 137, -1, sizeof(VidTourList)},
  { 142, -1, sizeof(VidGroup)},
  { 149, -1, sizeof(VidGroupList)},
  { 154, -1, sizeof(VidEmapCamera)},
  { 163, -1, sizeof(VidEmap)},
  { 170, -1, sizeof(VidEmapList)},
  { 175, -1, sizeof(VidStream)},
  { 181, -1, sizeof(VidStreamList)},
  { 186, -1, sizeof(VidBlob)},
  { 194, -1, sizeof(VidBlobList)},
  { 199, -1, sizeof(VidEventDBConf)},
  { 205, -1, sizeof(VidEvent)},
  { 222, -1, sizeof(VidStreamUrl)},
  { 228, -1, sizeof(VidStreamUrlList)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_VidUser_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_VidUserList_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_VidStorServerConf_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_VidCamera_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_VidCameraList_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_VidDisk_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_VidDiskList_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_VidHDFSConf_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_VidCameraId_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_VidClientConf_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_VidStor_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_VidStorList_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_VidViewWindow_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_VidView_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_VidViewList_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_VidTour_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_VidTourList_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_VidGroup_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_VidGroupList_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_VidEmapCamera_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_VidEmap_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_VidEmapList_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_VidStream_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_VidStreamList_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_VidBlob_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_VidBlobList_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_VidEventDBConf_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_VidEvent_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_VidStreamUrl_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_VidStreamUrlList_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "vidconf.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, file_level_enum_descriptors, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 30);
}

}  // namespace

void TableStruct::Shutdown() {
  _VidUser_default_instance_.Shutdown();
  delete file_level_metadata[0].reflection;
  _VidUserList_default_instance_.Shutdown();
  delete file_level_metadata[1].reflection;
  _VidStorServerConf_default_instance_.Shutdown();
  delete file_level_metadata[2].reflection;
  _VidCamera_default_instance_.Shutdown();
  delete file_level_metadata[3].reflection;
  _VidCameraList_default_instance_.Shutdown();
  delete file_level_metadata[4].reflection;
  _VidDisk_default_instance_.Shutdown();
  delete file_level_metadata[5].reflection;
  _VidDiskList_default_instance_.Shutdown();
  delete file_level_metadata[6].reflection;
  _VidHDFSConf_default_instance_.Shutdown();
  delete file_level_metadata[7].reflection;
  _VidCameraId_default_instance_.Shutdown();
  delete file_level_metadata[8].reflection;
  _VidClientConf_default_instance_.Shutdown();
  delete file_level_metadata[9].reflection;
  _VidStor_default_instance_.Shutdown();
  delete file_level_metadata[10].reflection;
  _VidStorList_default_instance_.Shutdown();
  delete file_level_metadata[11].reflection;
  _VidViewWindow_default_instance_.Shutdown();
  delete file_level_metadata[12].reflection;
  _VidView_default_instance_.Shutdown();
  delete file_level_metadata[13].reflection;
  _VidViewList_default_instance_.Shutdown();
  delete file_level_metadata[14].reflection;
  _VidTour_default_instance_.Shutdown();
  delete file_level_metadata[15].reflection;
  _VidTourList_default_instance_.Shutdown();
  delete file_level_metadata[16].reflection;
  _VidGroup_default_instance_.Shutdown();
  delete file_level_metadata[17].reflection;
  _VidGroupList_default_instance_.Shutdown();
  delete file_level_metadata[18].reflection;
  _VidEmapCamera_default_instance_.Shutdown();
  delete file_level_metadata[19].reflection;
  _VidEmap_default_instance_.Shutdown();
  delete file_level_metadata[20].reflection;
  _VidEmapList_default_instance_.Shutdown();
  delete file_level_metadata[21].reflection;
  _VidStream_default_instance_.Shutdown();
  delete file_level_metadata[22].reflection;
  _VidStreamList_default_instance_.Shutdown();
  delete file_level_metadata[23].reflection;
  _VidBlob_default_instance_.Shutdown();
  delete file_level_metadata[24].reflection;
  _VidBlobList_default_instance_.Shutdown();
  delete file_level_metadata[25].reflection;
  _VidEventDBConf_default_instance_.Shutdown();
  delete file_level_metadata[26].reflection;
  _VidEvent_default_instance_.Shutdown();
  delete file_level_metadata[27].reflection;
  _VidStreamUrl_default_instance_.Shutdown();
  delete file_level_metadata[28].reflection;
  _VidStreamUrlList_default_instance_.Shutdown();
  delete file_level_metadata[29].reflection;
}

void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  _VidUser_default_instance_.DefaultConstruct();
  _VidUserList_default_instance_.DefaultConstruct();
  _VidStorServerConf_default_instance_.DefaultConstruct();
  _VidCamera_default_instance_.DefaultConstruct();
  _VidCameraList_default_instance_.DefaultConstruct();
  _VidDisk_default_instance_.DefaultConstruct();
  _VidDiskList_default_instance_.DefaultConstruct();
  _VidHDFSConf_default_instance_.DefaultConstruct();
  _VidCameraId_default_instance_.DefaultConstruct();
  _VidClientConf_default_instance_.DefaultConstruct();
  _VidStor_default_instance_.DefaultConstruct();
  _VidStorList_default_instance_.DefaultConstruct();
  _VidViewWindow_default_instance_.DefaultConstruct();
  _VidView_default_instance_.DefaultConstruct();
  _VidViewList_default_instance_.DefaultConstruct();
  _VidTour_default_instance_.DefaultConstruct();
  _VidTourList_default_instance_.DefaultConstruct();
  _VidGroup_default_instance_.DefaultConstruct();
  _VidGroupList_default_instance_.DefaultConstruct();
  _VidEmapCamera_default_instance_.DefaultConstruct();
  _VidEmap_default_instance_.DefaultConstruct();
  _VidEmapList_default_instance_.DefaultConstruct();
  _VidStream_default_instance_.DefaultConstruct();
  _VidStreamList_default_instance_.DefaultConstruct();
  _VidBlob_default_instance_.DefaultConstruct();
  _VidBlobList_default_instance_.DefaultConstruct();
  _VidEventDBConf_default_instance_.DefaultConstruct();
  _VidEvent_default_instance_.DefaultConstruct();
  _VidStreamUrl_default_instance_.DefaultConstruct();
  _VidStreamUrlList_default_instance_.DefaultConstruct();
  _VidViewWindow_default_instance_.get_mutable()->cid_ = const_cast< ::VidCameraId*>(
      ::VidCameraId::internal_default_instance());
  _VidEmapCamera_default_instance_.get_mutable()->cid_ = const_cast< ::VidCameraId*>(
      ::VidCameraId::internal_default_instance());
}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] = {
      "\n\rvidconf.proto\"O\n\007VidUser\022\r\n\005strId\030\001 \001("
      "\t\022\017\n\007strName\030\002 \001(\t\022\021\n\tstrPasswd\030\003 \001(\t\022\021\n"
      "\tstrRoleId\030\004 \001(\t\")\n\013VidUserList\022\032\n\010cVidU"
      "ser\030\001 \003(\0132\010.VidUser\">\n\021VidStorServerConf"
      "\022\021\n\tnOapiPort\030\001 \001(\005\022\026\n\016strAdminPasswd\030\002 "
      "\001(\t\"\201\005\n\tVidCamera\022\020\n\010bDisable\030\001 \001(\010\022\r\n\005s"
      "trId\030\002 \001(\t\022\017\n\007strName\030\003 \001(\t\022\032\n\005nType\030\004 \001"
      "(\0162\013.CameraType\022\r\n\005strIP\030\005 \001(\t\022\017\n\007strPor"
      "t\030\006 \001(\t\022\017\n\007strUser\030\007 \001(\t\022\021\n\tstrPasswd\030\010 "
      "\001(\t\022\027\n\017strONVIFAddress\030\t \001(\t\022\025\n\rbProfile"
      "Token\030\n \001(\010\022\030\n\020strProfileToken1\030\013 \001(\t\022\030\n"
      "\020strProfileToken2\030\014 \001(\t\022\017\n\007strFile\030\r \001(\t"
      "\022\022\n\nstrRTSPUrl\030\016 \001(\t\022\020\n\010bHWaccel\030\017 \001(\010\022\025"
      "\n\rbServerMotion\030\020 \001(\010\022(\n\014nConnectType\030\021 "
      "\001(\0162\022.CameraConnectType\022\023\n\013bHDFSRecord\030\022"
      " \001(\010\022\021\n\tcRecSched\030\024 \003(\t\022\022\n\nnPreRecSec\030\025 "
      "\001(\005\022\023\n\013nPostRecSec\030\026 \001(\005\022\023\n\013bMotionJPEG\030"
      "\027 \001(\010\022\025\n\rnRecordStream\030\030 \001(\005\022\033\n\023nServerM"
      "otionStream\030\031 \001(\005\022(\n\016nOnvifEvtLevel\030\032 \001("
      "\0162\020.OnvifEventLevel\022\020\n\010strSched\030\033 \001(\t\022\021\n"
      "\tstrMotReg\030\034 \001(\t\022\017\n\007bOnline\030\035 \001(\010\022\014\n\004bRe"
      "c\030\036 \001(\010\"/\n\rVidCameraList\022\036\n\ncVidCamera\030\001"
      " \003(\0132\n.VidCamera\"w\n\007VidDisk\022\r\n\005strId\030\001 \001"
      "(\t\022\017\n\007strPath\030\002 \001(\t\022\022\n\nnTotalSize\030\003 \001(\003\022"
      "\021\n\tnFreeSize\030\004 \001(\003\022\022\n\nnStorLimit\030\005 \001(\003\022\021"
      "\n\tnStorUsed\030\006 \001(\003\")\n\013VidDiskList\022\032\n\010cVid"
      "Disk\030\001 \003(\0132\010.VidDisk\"n\n\013VidHDFSConf\022\023\n\013s"
      "trNameNode\030\001 \001(\t\022\017\n\007strPort\030\002 \001(\t\022\017\n\007str"
      "User\030\003 \001(\t\022\021\n\tstrPasswd\030\004 \001(\t\022\025\n\rnFileIn"
      "terval\030\005 \001(\005\"5\n\013VidCameraId\022\021\n\tstrStorId"
      "\030\001 \001(\t\022\023\n\013strCameraId\030\002 \001(\t\"q\n\rVidClient"
      "Conf\022\033\n\005nLang\030\001 \001(\0162\014.VidLanguage\022\026\n\016str"
      "AdminPasswd\030\002 \001(\t\022\022\n\nbAutoLogin\030\003 \001(\010\022\027\n"
      "\017bAutoFullScreen\030\004 \001(\010\"m\n\007VidStor\022\r\n\005str"
      "Id\030\001 \001(\t\022\017\n\007strName\030\002 \001(\t\022\r\n\005strIP\030\003 \001(\t"
      "\022\017\n\007strPort\030\004 \001(\t\022\017\n\007strUser\030\005 \001(\t\022\021\n\tst"
      "rPasswd\030\006 \001(\t\")\n\013VidStorList\022\032\n\010cVidStor"
      "\030\001 \003(\0132\010.VidStor\"P\n\rVidViewWindow\022\031\n\003cId"
      "\030\001 \001(\0132\014.VidCameraId\022\022\n\nnWindowsId\030\002 \001(\005"
      "\022\020\n\010bHWAccel\030\003 \001(\010\"e\n\007VidView\022\r\n\005strId\030\001"
      " \001(\t\022\017\n\007strName\030\002 \001(\t\022\035\n\005cView\030\003 \003(\0132\016.V"
      "idViewWindow\022\033\n\007cLayout\030\004 \001(\0162\n.VidLayou"
      "t\")\n\013VidViewList\022\032\n\010cVidView\030\001 \003(\0132\010.Vid"
      "View\":\n\007VidTour\022\r\n\005strId\030\001 \001(\t\022\017\n\007strNam"
      "e\030\002 \001(\t\022\017\n\007strView\030\003 \003(\t\")\n\013VidTourList\022"
      "\032\n\010cVidTour\030\001 \003(\0132\010.VidTour\"H\n\010VidGroup\022"
      "\r\n\005strId\030\001 \001(\t\022\017\n\007strName\030\002 \001(\t\022\034\n\006cGrou"
      "p\030\003 \003(\0132\014.VidCameraId\",\n\014VidGroupList\022\034\n"
      "\tcVidGroup\030\001 \003(\0132\t.VidGroup\"V\n\rVidEmapCa"
      "mera\022\031\n\003cId\030\001 \001(\0132\014.VidCameraId\022\t\n\001x\030\002 \001"
      "(\005\022\t\n\001y\030\003 \001(\005\022\t\n\001w\030\004 \001(\005\022\t\n\001h\030\005 \001(\005\"J\n\007V"
      "idEmap\022\r\n\005strId\030\001 \001(\t\022\017\n\007strName\030\002 \001(\t\022\037"
      "\n\007cCamera\030\003 \003(\0132\016.VidEmapCamera\")\n\013VidEm"
      "apList\022\032\n\010cVidEmap\030\001 \003(\0132\010.VidEmap\".\n\tVi"
      "dStream\022\020\n\010strToken\030\001 \001(\t\022\017\n\007strName\030\002 \001"
      "(\t\"/\n\rVidStreamList\022\036\n\ncVidStream\030\001 \003(\0132"
      "\n.VidStream\"9\n\007VidBlob\022\n\n\002x0\030\001 \001(\005\022\n\n\002y0"
      "\030\002 \001(\005\022\n\n\002x1\030\003 \001(\005\022\n\n\002y1\030\004 \001(\005\"&\n\013VidBlo"
      "bList\022\027\n\005cBlob\030\001 \003(\0132\010.VidBlob\"C\n\016VidEve"
      "ntDBConf\022\036\n\005nType\030\001 \001(\0162\017.VidEventDBType"
      "\022\021\n\tstrDBPath\030\002 \001(\t\"\365\001\n\010VidEvent\022\r\n\005strI"
      "d\030\001 \001(\t\022\021\n\tstrDevice\030\002 \001(\t\022\025\n\rstrDeviceN"
      "ame\030\003 \001(\t\022\017\n\007strType\030\004 \001(\t\022\r\n\005nTime\030\005 \001("
      "\003\022\017\n\007strTime\030\006 \001(\t\022\017\n\007strDesc\030\007 \001(\t\022\020\n\010b"
      "Handled\030\010 \001(\010\022\021\n\tbSearched\030\t \001(\010\022\023\n\013strC"
      "omments\030\n \001(\t\022\021\n\tstrStorId\030\013 \001(\t\022\023\n\013strS"
      "torName\030\014 \001(\t\022\014\n\004nIdx\030\r \001(\003\"3\n\014VidStream"
      "Url\022\023\n\013strProtocol\030\001 \001(\t\022\016\n\006strUrl\030\002 \001(\t"
      "\"/\n\020VidStreamUrlList\022\033\n\004cUrl\030\001 \003(\0132\r.Vid"
      "StreamUrl*q\n\nCameraType\022\t\n\005VID_0\020\000\022\013\n\007VI"
      "D_USB\020\001\022\014\n\010VID_FILE\020\002\022\014\n\010VID_RTSP\020\003\022\017\n\013V"
      "ID_ONVIF_S\020\004\022\017\n\013VID_GB28181\020\005\022\r\n\tVID_MJP"
      "EG\020\006*=\n\nVidRecType\022\r\n\tVID_R_OFF\020\000\022\017\n\013VID"
      "_R_ALARM\020\001\022\017\n\013VID_R_SCHED\020\002*P\n\021CameraCon"
      "nectType\022\021\n\rVID_CONNECT_0\020\000\022\023\n\017VID_CONNE"
      "CT_TCP\020\001\022\023\n\017VID_CONNECT_UDP\020\002*`\n\017OnvifEv"
      "entLevel\022\027\n\023VID_ONVIF_EVENT_OFF\020\000\022\030\n\024VID"
      "_ONVIF_EVENT_FULL\020\001\022\032\n\026VID_ONVIF_EVENT_M"
      "OTION\020\002*;\n\013VidLanguage\022\021\n\rVID_LANG_AUTO\020"
      "\000\022\n\n\006VID_EN\020\001\022\r\n\tVID_ZH_CN\020\002*\342\002\n\tVidLayo"
      "ut\022\025\n\021VID_LAYOUT_MODE_0\020\000\022\025\n\021VID_LAYOUT_"
      "MODE_1\020\001\022\027\n\023VID_LAYOUT_MODE_2X2\020\002\022\027\n\023VID"
      "_LAYOUT_MODE_3X3\020\003\022\027\n\023VID_LAYOUT_MODE_4X"
      "4\020\004\022\025\n\021VID_LAYOUT_MODE_6\020\005\022\025\n\021VID_LAYOUT"
      "_MODE_8\020\006\022\030\n\024VID_LAYOUT_MODE_12p1\020\007\022\027\n\023V"
      "ID_LAYOUT_MODE_5x5\020\010\022\027\n\023VID_LAYOUT_MODE_"
      "6x6\020\t\022\027\n\023VID_LAYOUT_MODE_8x8\020\n\022\027\n\023VID_LA"
      "YOUT_MODE_ONE\020\013\022\027\n\023VID_LAYOUT_MODE_1x3\020\014"
      "\022\027\n\023VID_LAYOUT_MODE_1p6\020\r*:\n\016VidEventDBT"
      "ype\022\021\n\rVID_DB_SQLITE\020\000\022\025\n\021VID_DB_POSTGRE"
      "SQL\020\001b\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 3613);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "vidconf.proto", &protobuf_RegisterTypes);
  ::google::protobuf::internal::OnShutdown(&TableStruct::Shutdown);
}

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;

}  // namespace protobuf_vidconf_2eproto

const ::google::protobuf::EnumDescriptor* CameraType_descriptor() {
  protobuf_vidconf_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_vidconf_2eproto::file_level_enum_descriptors[0];
}
bool CameraType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* VidRecType_descriptor() {
  protobuf_vidconf_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_vidconf_2eproto::file_level_enum_descriptors[1];
}
bool VidRecType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* CameraConnectType_descriptor() {
  protobuf_vidconf_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_vidconf_2eproto::file_level_enum_descriptors[2];
}
bool CameraConnectType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* OnvifEventLevel_descriptor() {
  protobuf_vidconf_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_vidconf_2eproto::file_level_enum_descriptors[3];
}
bool OnvifEventLevel_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* VidLanguage_descriptor() {
  protobuf_vidconf_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_vidconf_2eproto::file_level_enum_descriptors[4];
}
bool VidLanguage_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* VidLayout_descriptor() {
  protobuf_vidconf_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_vidconf_2eproto::file_level_enum_descriptors[5];
}
bool VidLayout_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* VidEventDBType_descriptor() {
  protobuf_vidconf_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_vidconf_2eproto::file_level_enum_descriptors[6];
}
bool VidEventDBType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
      return true;
    default:
      return false;
  }
}


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int VidUser::kStrIdFieldNumber;
const int VidUser::kStrNameFieldNumber;
const int VidUser::kStrPasswdFieldNumber;
const int VidUser::kStrRoleIdFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

VidUser::VidUser()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_vidconf_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:VidUser)
}
VidUser::VidUser(const VidUser& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  strid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.strid().size() > 0) {
    strid_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strid_);
  }
  strname_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.strname().size() > 0) {
    strname_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strname_);
  }
  strpasswd_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.strpasswd().size() > 0) {
    strpasswd_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strpasswd_);
  }
  strroleid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.strroleid().size() > 0) {
    strroleid_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strroleid_);
  }
  // @@protoc_insertion_point(copy_constructor:VidUser)
}

void VidUser::SharedCtor() {
  strid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  strname_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  strpasswd_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  strroleid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _cached_size_ = 0;
}

VidUser::~VidUser() {
  // @@protoc_insertion_point(destructor:VidUser)
  SharedDtor();
}

void VidUser::SharedDtor() {
  strid_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  strname_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  strpasswd_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  strroleid_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void VidUser::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* VidUser::descriptor() {
  protobuf_vidconf_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_vidconf_2eproto::file_level_metadata[0].descriptor;
}

const VidUser& VidUser::default_instance() {
  protobuf_vidconf_2eproto::InitDefaults();
  return *internal_default_instance();
}

VidUser* VidUser::New(::google::protobuf::Arena* arena) const {
  VidUser* n = new VidUser;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void VidUser::Clear() {
// @@protoc_insertion_point(message_clear_start:VidUser)
  strid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  strname_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  strpasswd_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  strroleid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

bool VidUser::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:VidUser)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string strId = 1;
      case 1: {
        if (tag == 10u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_strid()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->strid().data(), this->strid().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "VidUser.strId"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string strName = 2;
      case 2: {
        if (tag == 18u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_strname()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->strname().data(), this->strname().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "VidUser.strName"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string strPasswd = 3;
      case 3: {
        if (tag == 26u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_strpasswd()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->strpasswd().data(), this->strpasswd().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "VidUser.strPasswd"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string strRoleId = 4;
      case 4: {
        if (tag == 34u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_strroleid()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->strroleid().data(), this->strroleid().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "VidUser.strRoleId"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:VidUser)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:VidUser)
  return false;
#undef DO_
}

void VidUser::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:VidUser)
  // string strId = 1;
  if (this->strid().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strid().data(), this->strid().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "VidUser.strId");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->strid(), output);
  }

  // string strName = 2;
  if (this->strname().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strname().data(), this->strname().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "VidUser.strName");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->strname(), output);
  }

  // string strPasswd = 3;
  if (this->strpasswd().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strpasswd().data(), this->strpasswd().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "VidUser.strPasswd");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->strpasswd(), output);
  }

  // string strRoleId = 4;
  if (this->strroleid().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strroleid().data(), this->strroleid().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "VidUser.strRoleId");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      4, this->strroleid(), output);
  }

  // @@protoc_insertion_point(serialize_end:VidUser)
}

::google::protobuf::uint8* VidUser::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic;  // Unused
  // @@protoc_insertion_point(serialize_to_array_start:VidUser)
  // string strId = 1;
  if (this->strid().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strid().data(), this->strid().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "VidUser.strId");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->strid(), target);
  }

  // string strName = 2;
  if (this->strname().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strname().data(), this->strname().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "VidUser.strName");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->strname(), target);
  }

  // string strPasswd = 3;
  if (this->strpasswd().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strpasswd().data(), this->strpasswd().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "VidUser.strPasswd");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->strpasswd(), target);
  }

  // string strRoleId = 4;
  if (this->strroleid().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strroleid().data(), this->strroleid().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "VidUser.strRoleId");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        4, this->strroleid(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:VidUser)
  return target;
}

size_t VidUser::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:VidUser)
  size_t total_size = 0;

  // string strId = 1;
  if (this->strid().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->strid());
  }

  // string strName = 2;
  if (this->strname().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->strname());
  }

  // string strPasswd = 3;
  if (this->strpasswd().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->strpasswd());
  }

  // string strRoleId = 4;
  if (this->strroleid().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->strroleid());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void VidUser::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:VidUser)
  GOOGLE_DCHECK_NE(&from, this);
  const VidUser* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const VidUser>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:VidUser)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:VidUser)
    MergeFrom(*source);
  }
}

void VidUser::MergeFrom(const VidUser& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:VidUser)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.strid().size() > 0) {

    strid_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strid_);
  }
  if (from.strname().size() > 0) {

    strname_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strname_);
  }
  if (from.strpasswd().size() > 0) {

    strpasswd_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strpasswd_);
  }
  if (from.strroleid().size() > 0) {

    strroleid_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strroleid_);
  }
}

void VidUser::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:VidUser)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void VidUser::CopyFrom(const VidUser& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:VidUser)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool VidUser::IsInitialized() const {
  return true;
}

void VidUser::Swap(VidUser* other) {
  if (other == this) return;
  InternalSwap(other);
}
void VidUser::InternalSwap(VidUser* other) {
  strid_.Swap(&other->strid_);
  strname_.Swap(&other->strname_);
  strpasswd_.Swap(&other->strpasswd_);
  strroleid_.Swap(&other->strroleid_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata VidUser::GetMetadata() const {
  protobuf_vidconf_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_vidconf_2eproto::file_level_metadata[0];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// VidUser

// string strId = 1;
void VidUser::clear_strid() {
  strid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& VidUser::strid() const {
  // @@protoc_insertion_point(field_get:VidUser.strId)
  return strid_.GetNoArena();
}
void VidUser::set_strid(const ::std::string& value) {
  
  strid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:VidUser.strId)
}
#if LANG_CXX11
void VidUser::set_strid(::std::string&& value) {
  
  strid_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:VidUser.strId)
}
#endif
void VidUser::set_strid(const char* value) {
  
  strid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:VidUser.strId)
}
void VidUser::set_strid(const char* value, size_t size) {
  
  strid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:VidUser.strId)
}
::std::string* VidUser::mutable_strid() {
  
  // @@protoc_insertion_point(field_mutable:VidUser.strId)
  return strid_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* VidUser::release_strid() {
  // @@protoc_insertion_point(field_release:VidUser.strId)
  
  return strid_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void VidUser::set_allocated_strid(::std::string* strid) {
  if (strid != NULL) {
    
  } else {
    
  }
  strid_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), strid);
  // @@protoc_insertion_point(field_set_allocated:VidUser.strId)
}

// string strName = 2;
void VidUser::clear_strname() {
  strname_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& VidUser::strname() const {
  // @@protoc_insertion_point(field_get:VidUser.strName)
  return strname_.GetNoArena();
}
void VidUser::set_strname(const ::std::string& value) {
  
  strname_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:VidUser.strName)
}
#if LANG_CXX11
void VidUser::set_strname(::std::string&& value) {
  
  strname_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:VidUser.strName)
}
#endif
void VidUser::set_strname(const char* value) {
  
  strname_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:VidUser.strName)
}
void VidUser::set_strname(const char* value, size_t size) {
  
  strname_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:VidUser.strName)
}
::std::string* VidUser::mutable_strname() {
  
  // @@protoc_insertion_point(field_mutable:VidUser.strName)
  return strname_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* VidUser::release_strname() {
  // @@protoc_insertion_point(field_release:VidUser.strName)
  
  return strname_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void VidUser::set_allocated_strname(::std::string* strname) {
  if (strname != NULL) {
    
  } else {
    
  }
  strname_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), strname);
  // @@protoc_insertion_point(field_set_allocated:VidUser.strName)
}

// string strPasswd = 3;
void VidUser::clear_strpasswd() {
  strpasswd_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& VidUser::strpasswd() const {
  // @@protoc_insertion_point(field_get:VidUser.strPasswd)
  return strpasswd_.GetNoArena();
}
void VidUser::set_strpasswd(const ::std::string& value) {
  
  strpasswd_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:VidUser.strPasswd)
}
#if LANG_CXX11
void VidUser::set_strpasswd(::std::string&& value) {
  
  strpasswd_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:VidUser.strPasswd)
}
#endif
void VidUser::set_strpasswd(const char* value) {
  
  strpasswd_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:VidUser.strPasswd)
}
void VidUser::set_strpasswd(const char* value, size_t size) {
  
  strpasswd_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:VidUser.strPasswd)
}
::std::string* VidUser::mutable_strpasswd() {
  
  // @@protoc_insertion_point(field_mutable:VidUser.strPasswd)
  return strpasswd_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* VidUser::release_strpasswd() {
  // @@protoc_insertion_point(field_release:VidUser.strPasswd)
  
  return strpasswd_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void VidUser::set_allocated_strpasswd(::std::string* strpasswd) {
  if (strpasswd != NULL) {
    
  } else {
    
  }
  strpasswd_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), strpasswd);
  // @@protoc_insertion_point(field_set_allocated:VidUser.strPasswd)
}

// string strRoleId = 4;
void VidUser::clear_strroleid() {
  strroleid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& VidUser::strroleid() const {
  // @@protoc_insertion_point(field_get:VidUser.strRoleId)
  return strroleid_.GetNoArena();
}
void VidUser::set_strroleid(const ::std::string& value) {
  
  strroleid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:VidUser.strRoleId)
}
#if LANG_CXX11
void VidUser::set_strroleid(::std::string&& value) {
  
  strroleid_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:VidUser.strRoleId)
}
#endif
void VidUser::set_strroleid(const char* value) {
  
  strroleid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:VidUser.strRoleId)
}
void VidUser::set_strroleid(const char* value, size_t size) {
  
  strroleid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:VidUser.strRoleId)
}
::std::string* VidUser::mutable_strroleid() {
  
  // @@protoc_insertion_point(field_mutable:VidUser.strRoleId)
  return strroleid_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* VidUser::release_strroleid() {
  // @@protoc_insertion_point(field_release:VidUser.strRoleId)
  
  return strroleid_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void VidUser::set_allocated_strroleid(::std::string* strroleid) {
  if (strroleid != NULL) {
    
  } else {
    
  }
  strroleid_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), strroleid);
  // @@protoc_insertion_point(field_set_allocated:VidUser.strRoleId)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int VidUserList::kCVidUserFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

VidUserList::VidUserList()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_vidconf_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:VidUserList)
}
VidUserList::VidUserList(const VidUserList& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      cviduser_(from.cviduser_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:VidUserList)
}

void VidUserList::SharedCtor() {
  _cached_size_ = 0;
}

VidUserList::~VidUserList() {
  // @@protoc_insertion_point(destructor:VidUserList)
  SharedDtor();
}

void VidUserList::SharedDtor() {
}

void VidUserList::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* VidUserList::descriptor() {
  protobuf_vidconf_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_vidconf_2eproto::file_level_metadata[1].descriptor;
}

const VidUserList& VidUserList::default_instance() {
  protobuf_vidconf_2eproto::InitDefaults();
  return *internal_default_instance();
}

VidUserList* VidUserList::New(::google::protobuf::Arena* arena) const {
  VidUserList* n = new VidUserList;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void VidUserList::Clear() {
// @@protoc_insertion_point(message_clear_start:VidUserList)
  cviduser_.Clear();
}

bool VidUserList::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:VidUserList)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .VidUser cVidUser = 1;
      case 1: {
        if (tag == 10u) {
          DO_(input->IncrementRecursionDepth());
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtualNoRecursionDepth(
                input, add_cviduser()));
        } else {
          goto handle_unusual;
        }
        input->UnsafeDecrementRecursionDepth();
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:VidUserList)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:VidUserList)
  return false;
#undef DO_
}

void VidUserList::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:VidUserList)
  // repeated .VidUser cVidUser = 1;
  for (unsigned int i = 0, n = this->cviduser_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->cviduser(i), output);
  }

  // @@protoc_insertion_point(serialize_end:VidUserList)
}

::google::protobuf::uint8* VidUserList::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic;  // Unused
  // @@protoc_insertion_point(serialize_to_array_start:VidUserList)
  // repeated .VidUser cVidUser = 1;
  for (unsigned int i = 0, n = this->cviduser_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1, this->cviduser(i), false, target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:VidUserList)
  return target;
}

size_t VidUserList::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:VidUserList)
  size_t total_size = 0;

  // repeated .VidUser cVidUser = 1;
  {
    unsigned int count = this->cviduser_size();
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->cviduser(i));
    }
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void VidUserList::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:VidUserList)
  GOOGLE_DCHECK_NE(&from, this);
  const VidUserList* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const VidUserList>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:VidUserList)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:VidUserList)
    MergeFrom(*source);
  }
}

void VidUserList::MergeFrom(const VidUserList& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:VidUserList)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  cviduser_.MergeFrom(from.cviduser_);
}

void VidUserList::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:VidUserList)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void VidUserList::CopyFrom(const VidUserList& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:VidUserList)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool VidUserList::IsInitialized() const {
  return true;
}

void VidUserList::Swap(VidUserList* other) {
  if (other == this) return;
  InternalSwap(other);
}
void VidUserList::InternalSwap(VidUserList* other) {
  cviduser_.UnsafeArenaSwap(&other->cviduser_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata VidUserList::GetMetadata() const {
  protobuf_vidconf_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_vidconf_2eproto::file_level_metadata[1];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// VidUserList

// repeated .VidUser cVidUser = 1;
int VidUserList::cviduser_size() const {
  return cviduser_.size();
}
void VidUserList::clear_cviduser() {
  cviduser_.Clear();
}
const ::VidUser& VidUserList::cviduser(int index) const {
  // @@protoc_insertion_point(field_get:VidUserList.cVidUser)
  return cviduser_.Get(index);
}
::VidUser* VidUserList::mutable_cviduser(int index) {
  // @@protoc_insertion_point(field_mutable:VidUserList.cVidUser)
  return cviduser_.Mutable(index);
}
::VidUser* VidUserList::add_cviduser() {
  // @@protoc_insertion_point(field_add:VidUserList.cVidUser)
  return cviduser_.Add();
}
::google::protobuf::RepeatedPtrField< ::VidUser >*
VidUserList::mutable_cviduser() {
  // @@protoc_insertion_point(field_mutable_list:VidUserList.cVidUser)
  return &cviduser_;
}
const ::google::protobuf::RepeatedPtrField< ::VidUser >&
VidUserList::cviduser() const {
  // @@protoc_insertion_point(field_list:VidUserList.cVidUser)
  return cviduser_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int VidStorServerConf::kNOapiPortFieldNumber;
const int VidStorServerConf::kStrAdminPasswdFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

VidStorServerConf::VidStorServerConf()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_vidconf_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:VidStorServerConf)
}
VidStorServerConf::VidStorServerConf(const VidStorServerConf& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  stradminpasswd_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.stradminpasswd().size() > 0) {
    stradminpasswd_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.stradminpasswd_);
  }
  noapiport_ = from.noapiport_;
  // @@protoc_insertion_point(copy_constructor:VidStorServerConf)
}

void VidStorServerConf::SharedCtor() {
  stradminpasswd_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  noapiport_ = 0;
  _cached_size_ = 0;
}

VidStorServerConf::~VidStorServerConf() {
  // @@protoc_insertion_point(destructor:VidStorServerConf)
  SharedDtor();
}

void VidStorServerConf::SharedDtor() {
  stradminpasswd_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void VidStorServerConf::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* VidStorServerConf::descriptor() {
  protobuf_vidconf_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_vidconf_2eproto::file_level_metadata[2].descriptor;
}

const VidStorServerConf& VidStorServerConf::default_instance() {
  protobuf_vidconf_2eproto::InitDefaults();
  return *internal_default_instance();
}

VidStorServerConf* VidStorServerConf::New(::google::protobuf::Arena* arena) const {
  VidStorServerConf* n = new VidStorServerConf;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void VidStorServerConf::Clear() {
// @@protoc_insertion_point(message_clear_start:VidStorServerConf)
  stradminpasswd_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  noapiport_ = 0;
}

bool VidStorServerConf::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:VidStorServerConf)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // int32 nOapiPort = 1;
      case 1: {
        if (tag == 8u) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &noapiport_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string strAdminPasswd = 2;
      case 2: {
        if (tag == 18u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_stradminpasswd()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->stradminpasswd().data(), this->stradminpasswd().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "VidStorServerConf.strAdminPasswd"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:VidStorServerConf)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:VidStorServerConf)
  return false;
#undef DO_
}

void VidStorServerConf::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:VidStorServerConf)
  // int32 nOapiPort = 1;
  if (this->noapiport() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->noapiport(), output);
  }

  // string strAdminPasswd = 2;
  if (this->stradminpasswd().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->stradminpasswd().data(), this->stradminpasswd().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "VidStorServerConf.strAdminPasswd");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->stradminpasswd(), output);
  }

  // @@protoc_insertion_point(serialize_end:VidStorServerConf)
}

::google::protobuf::uint8* VidStorServerConf::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic;  // Unused
  // @@protoc_insertion_point(serialize_to_array_start:VidStorServerConf)
  // int32 nOapiPort = 1;
  if (this->noapiport() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->noapiport(), target);
  }

  // string strAdminPasswd = 2;
  if (this->stradminpasswd().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->stradminpasswd().data(), this->stradminpasswd().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "VidStorServerConf.strAdminPasswd");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->stradminpasswd(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:VidStorServerConf)
  return target;
}

size_t VidStorServerConf::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:VidStorServerConf)
  size_t total_size = 0;

  // string strAdminPasswd = 2;
  if (this->stradminpasswd().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->stradminpasswd());
  }

  // int32 nOapiPort = 1;
  if (this->noapiport() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->noapiport());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void VidStorServerConf::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:VidStorServerConf)
  GOOGLE_DCHECK_NE(&from, this);
  const VidStorServerConf* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const VidStorServerConf>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:VidStorServerConf)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:VidStorServerConf)
    MergeFrom(*source);
  }
}

void VidStorServerConf::MergeFrom(const VidStorServerConf& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:VidStorServerConf)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.stradminpasswd().size() > 0) {

    stradminpasswd_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.stradminpasswd_);
  }
  if (from.noapiport() != 0) {
    set_noapiport(from.noapiport());
  }
}

void VidStorServerConf::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:VidStorServerConf)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void VidStorServerConf::CopyFrom(const VidStorServerConf& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:VidStorServerConf)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool VidStorServerConf::IsInitialized() const {
  return true;
}

void VidStorServerConf::Swap(VidStorServerConf* other) {
  if (other == this) return;
  InternalSwap(other);
}
void VidStorServerConf::InternalSwap(VidStorServerConf* other) {
  stradminpasswd_.Swap(&other->stradminpasswd_);
  std::swap(noapiport_, other->noapiport_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata VidStorServerConf::GetMetadata() const {
  protobuf_vidconf_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_vidconf_2eproto::file_level_metadata[2];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// VidStorServerConf

// int32 nOapiPort = 1;
void VidStorServerConf::clear_noapiport() {
  noapiport_ = 0;
}
::google::protobuf::int32 VidStorServerConf::noapiport() const {
  // @@protoc_insertion_point(field_get:VidStorServerConf.nOapiPort)
  return noapiport_;
}
void VidStorServerConf::set_noapiport(::google::protobuf::int32 value) {
  
  noapiport_ = value;
  // @@protoc_insertion_point(field_set:VidStorServerConf.nOapiPort)
}

// string strAdminPasswd = 2;
void VidStorServerConf::clear_stradminpasswd() {
  stradminpasswd_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& VidStorServerConf::stradminpasswd() const {
  // @@protoc_insertion_point(field_get:VidStorServerConf.strAdminPasswd)
  return stradminpasswd_.GetNoArena();
}
void VidStorServerConf::set_stradminpasswd(const ::std::string& value) {
  
  stradminpasswd_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:VidStorServerConf.strAdminPasswd)
}
#if LANG_CXX11
void VidStorServerConf::set_stradminpasswd(::std::string&& value) {
  
  stradminpasswd_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:VidStorServerConf.strAdminPasswd)
}
#endif
void VidStorServerConf::set_stradminpasswd(const char* value) {
  
  stradminpasswd_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:VidStorServerConf.strAdminPasswd)
}
void VidStorServerConf::set_stradminpasswd(const char* value, size_t size) {
  
  stradminpasswd_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:VidStorServerConf.strAdminPasswd)
}
::std::string* VidStorServerConf::mutable_stradminpasswd() {
  
  // @@protoc_insertion_point(field_mutable:VidStorServerConf.strAdminPasswd)
  return stradminpasswd_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* VidStorServerConf::release_stradminpasswd() {
  // @@protoc_insertion_point(field_release:VidStorServerConf.strAdminPasswd)
  
  return stradminpasswd_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void VidStorServerConf::set_allocated_stradminpasswd(::std::string* stradminpasswd) {
  if (stradminpasswd != NULL) {
    
  } else {
    
  }
  stradminpasswd_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), stradminpasswd);
  // @@protoc_insertion_point(field_set_allocated:VidStorServerConf.strAdminPasswd)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int VidCamera::kBDisableFieldNumber;
const int VidCamera::kStrIdFieldNumber;
const int VidCamera::kStrNameFieldNumber;
const int VidCamera::kNTypeFieldNumber;
const int VidCamera::kStrIPFieldNumber;
const int VidCamera::kStrPortFieldNumber;
const int VidCamera::kStrUserFieldNumber;
const int VidCamera::kStrPasswdFieldNumber;
const int VidCamera::kStrONVIFAddressFieldNumber;
const int VidCamera::kBProfileTokenFieldNumber;
const int VidCamera::kStrProfileToken1FieldNumber;
const int VidCamera::kStrProfileToken2FieldNumber;
const int VidCamera::kStrFileFieldNumber;
const int VidCamera::kStrRTSPUrlFieldNumber;
const int VidCamera::kBHWaccelFieldNumber;
const int VidCamera::kBServerMotionFieldNumber;
const int VidCamera::kNConnectTypeFieldNumber;
const int VidCamera::kBHDFSRecordFieldNumber;
const int VidCamera::kCRecSchedFieldNumber;
const int VidCamera::kNPreRecSecFieldNumber;
const int VidCamera::kNPostRecSecFieldNumber;
const int VidCamera::kBMotionJPEGFieldNumber;
const int VidCamera::kNRecordStreamFieldNumber;
const int VidCamera::kNServerMotionStreamFieldNumber;
const int VidCamera::kNOnvifEvtLevelFieldNumber;
const int VidCamera::kStrSchedFieldNumber;
const int VidCamera::kStrMotRegFieldNumber;
const int VidCamera::kBOnlineFieldNumber;
const int VidCamera::kBRecFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

VidCamera::VidCamera()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_vidconf_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:VidCamera)
}
VidCamera::VidCamera(const VidCamera& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      crecsched_(from.crecsched_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  strid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.strid().size() > 0) {
    strid_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strid_);
  }
  strname_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.strname().size() > 0) {
    strname_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strname_);
  }
  strip_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.strip().size() > 0) {
    strip_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strip_);
  }
  strport_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.strport().size() > 0) {
    strport_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strport_);
  }
  struser_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.struser().size() > 0) {
    struser_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.struser_);
  }
  strpasswd_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.strpasswd().size() > 0) {
    strpasswd_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strpasswd_);
  }
  stronvifaddress_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.stronvifaddress().size() > 0) {
    stronvifaddress_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.stronvifaddress_);
  }
  strprofiletoken1_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.strprofiletoken1().size() > 0) {
    strprofiletoken1_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strprofiletoken1_);
  }
  strprofiletoken2_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.strprofiletoken2().size() > 0) {
    strprofiletoken2_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strprofiletoken2_);
  }
  strfile_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.strfile().size() > 0) {
    strfile_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strfile_);
  }
  strrtspurl_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.strrtspurl().size() > 0) {
    strrtspurl_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strrtspurl_);
  }
  strsched_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.strsched().size() > 0) {
    strsched_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strsched_);
  }
  strmotreg_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.strmotreg().size() > 0) {
    strmotreg_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strmotreg_);
  }
  ::memcpy(&ntype_, &from.ntype_,
    reinterpret_cast<char*>(&nonvifevtlevel_) -
    reinterpret_cast<char*>(&ntype_) + sizeof(nonvifevtlevel_));
  // @@protoc_insertion_point(copy_constructor:VidCamera)
}

void VidCamera::SharedCtor() {
  strid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  strname_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  strip_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  strport_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  struser_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  strpasswd_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  stronvifaddress_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  strprofiletoken1_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  strprofiletoken2_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  strfile_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  strrtspurl_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  strsched_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  strmotreg_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&ntype_, 0, reinterpret_cast<char*>(&nonvifevtlevel_) -
    reinterpret_cast<char*>(&ntype_) + sizeof(nonvifevtlevel_));
  _cached_size_ = 0;
}

VidCamera::~VidCamera() {
  // @@protoc_insertion_point(destructor:VidCamera)
  SharedDtor();
}

void VidCamera::SharedDtor() {
  strid_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  strname_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  strip_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  strport_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  struser_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  strpasswd_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  stronvifaddress_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  strprofiletoken1_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  strprofiletoken2_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  strfile_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  strrtspurl_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  strsched_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  strmotreg_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void VidCamera::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* VidCamera::descriptor() {
  protobuf_vidconf_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_vidconf_2eproto::file_level_metadata[3].descriptor;
}

const VidCamera& VidCamera::default_instance() {
  protobuf_vidconf_2eproto::InitDefaults();
  return *internal_default_instance();
}

VidCamera* VidCamera::New(::google::protobuf::Arena* arena) const {
  VidCamera* n = new VidCamera;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void VidCamera::Clear() {
// @@protoc_insertion_point(message_clear_start:VidCamera)
  crecsched_.Clear();
  strid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  strname_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  strip_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  strport_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  struser_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  strpasswd_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  stronvifaddress_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  strprofiletoken1_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  strprofiletoken2_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  strfile_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  strrtspurl_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  strsched_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  strmotreg_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&ntype_, 0, reinterpret_cast<char*>(&nonvifevtlevel_) -
    reinterpret_cast<char*>(&ntype_) + sizeof(nonvifevtlevel_));
}

bool VidCamera::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:VidCamera)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(16383u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // bool bDisable = 1;
      case 1: {
        if (tag == 8u) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &bdisable_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string strId = 2;
      case 2: {
        if (tag == 18u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_strid()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->strid().data(), this->strid().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "VidCamera.strId"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string strName = 3;
      case 3: {
        if (tag == 26u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_strname()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->strname().data(), this->strname().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "VidCamera.strName"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .CameraType nType = 4;
      case 4: {
        if (tag == 32u) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_ntype(static_cast< ::CameraType >(value));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string strIP = 5;
      case 5: {
        if (tag == 42u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_strip()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->strip().data(), this->strip().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "VidCamera.strIP"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string strPort = 6;
      case 6: {
        if (tag == 50u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_strport()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->strport().data(), this->strport().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "VidCamera.strPort"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string strUser = 7;
      case 7: {
        if (tag == 58u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_struser()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->struser().data(), this->struser().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "VidCamera.strUser"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string strPasswd = 8;
      case 8: {
        if (tag == 66u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_strpasswd()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->strpasswd().data(), this->strpasswd().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "VidCamera.strPasswd"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string strONVIFAddress = 9;
      case 9: {
        if (tag == 74u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_stronvifaddress()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->stronvifaddress().data(), this->stronvifaddress().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "VidCamera.strONVIFAddress"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool bProfileToken = 10;
      case 10: {
        if (tag == 80u) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &bprofiletoken_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string strProfileToken1 = 11;
      case 11: {
        if (tag == 90u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_strprofiletoken1()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->strprofiletoken1().data(), this->strprofiletoken1().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "VidCamera.strProfileToken1"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string strProfileToken2 = 12;
      case 12: {
        if (tag == 98u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_strprofiletoken2()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->strprofiletoken2().data(), this->strprofiletoken2().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "VidCamera.strProfileToken2"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string strFile = 13;
      case 13: {
        if (tag == 106u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_strfile()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->strfile().data(), this->strfile().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "VidCamera.strFile"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string strRTSPUrl = 14;
      case 14: {
        if (tag == 114u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_strrtspurl()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->strrtspurl().data(), this->strrtspurl().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "VidCamera.strRTSPUrl"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool bHWaccel = 15;
      case 15: {
        if (tag == 120u) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &bhwaccel_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool bServerMotion = 16;
      case 16: {
        if (tag == 128u) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &bservermotion_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .CameraConnectType nConnectType = 17;
      case 17: {
        if (tag == 136u) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_nconnecttype(static_cast< ::CameraConnectType >(value));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool bHDFSRecord = 18;
      case 18: {
        if (tag == 144u) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &bhdfsrecord_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated string cRecSched = 20;
      case 20: {
        if (tag == 162u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->add_crecsched()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->crecsched(this->crecsched_size() - 1).data(),
            this->crecsched(this->crecsched_size() - 1).length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "VidCamera.cRecSched"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 nPreRecSec = 21;
      case 21: {
        if (tag == 168u) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &nprerecsec_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 nPostRecSec = 22;
      case 22: {
        if (tag == 176u) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &npostrecsec_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool bMotionJPEG = 23;
      case 23: {
        if (tag == 184u) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &bmotionjpeg_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 nRecordStream = 24;
      case 24: {
        if (tag == 192u) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &nrecordstream_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 nServerMotionStream = 25;
      case 25: {
        if (tag == 200u) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &nservermotionstream_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .OnvifEventLevel nOnvifEvtLevel = 26;
      case 26: {
        if (tag == 208u) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_nonvifevtlevel(static_cast< ::OnvifEventLevel >(value));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string strSched = 27;
      case 27: {
        if (tag == 218u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_strsched()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->strsched().data(), this->strsched().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "VidCamera.strSched"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string strMotReg = 28;
      case 28: {
        if (tag == 226u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_strmotreg()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->strmotreg().data(), this->strmotreg().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "VidCamera.strMotReg"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool bOnline = 29;
      case 29: {
        if (tag == 232u) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &bonline_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool bRec = 30;
      case 30: {
        if (tag == 240u) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &brec_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:VidCamera)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:VidCamera)
  return false;
#undef DO_
}

void VidCamera::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:VidCamera)
  // bool bDisable = 1;
  if (this->bdisable() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(1, this->bdisable(), output);
  }

  // string strId = 2;
  if (this->strid().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strid().data(), this->strid().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "VidCamera.strId");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->strid(), output);
  }

  // string strName = 3;
  if (this->strname().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strname().data(), this->strname().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "VidCamera.strName");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->strname(), output);
  }

  // .CameraType nType = 4;
  if (this->ntype() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      4, this->ntype(), output);
  }

  // string strIP = 5;
  if (this->strip().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strip().data(), this->strip().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "VidCamera.strIP");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      5, this->strip(), output);
  }

  // string strPort = 6;
  if (this->strport().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strport().data(), this->strport().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "VidCamera.strPort");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      6, this->strport(), output);
  }

  // string strUser = 7;
  if (this->struser().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->struser().data(), this->struser().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "VidCamera.strUser");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      7, this->struser(), output);
  }

  // string strPasswd = 8;
  if (this->strpasswd().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strpasswd().data(), this->strpasswd().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "VidCamera.strPasswd");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      8, this->strpasswd(), output);
  }

  // string strONVIFAddress = 9;
  if (this->stronvifaddress().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->stronvifaddress().data(), this->stronvifaddress().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "VidCamera.strONVIFAddress");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      9, this->stronvifaddress(), output);
  }

  // bool bProfileToken = 10;
  if (this->bprofiletoken() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(10, this->bprofiletoken(), output);
  }

  // string strProfileToken1 = 11;
  if (this->strprofiletoken1().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strprofiletoken1().data(), this->strprofiletoken1().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "VidCamera.strProfileToken1");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      11, this->strprofiletoken1(), output);
  }

  // string strProfileToken2 = 12;
  if (this->strprofiletoken2().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strprofiletoken2().data(), this->strprofiletoken2().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "VidCamera.strProfileToken2");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      12, this->strprofiletoken2(), output);
  }

  // string strFile = 13;
  if (this->strfile().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strfile().data(), this->strfile().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "VidCamera.strFile");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      13, this->strfile(), output);
  }

  // string strRTSPUrl = 14;
  if (this->strrtspurl().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strrtspurl().data(), this->strrtspurl().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "VidCamera.strRTSPUrl");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      14, this->strrtspurl(), output);
  }

  // bool bHWaccel = 15;
  if (this->bhwaccel() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(15, this->bhwaccel(), output);
  }

  // bool bServerMotion = 16;
  if (this->bservermotion() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(16, this->bservermotion(), output);
  }

  // .CameraConnectType nConnectType = 17;
  if (this->nconnecttype() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      17, this->nconnecttype(), output);
  }

  // bool bHDFSRecord = 18;
  if (this->bhdfsrecord() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(18, this->bhdfsrecord(), output);
  }

  // repeated string cRecSched = 20;
  for (int i = 0; i < this->crecsched_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->crecsched(i).data(), this->crecsched(i).length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "VidCamera.cRecSched");
    ::google::protobuf::internal::WireFormatLite::WriteString(
      20, this->crecsched(i), output);
  }

  // int32 nPreRecSec = 21;
  if (this->nprerecsec() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(21, this->nprerecsec(), output);
  }

  // int32 nPostRecSec = 22;
  if (this->npostrecsec() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(22, this->npostrecsec(), output);
  }

  // bool bMotionJPEG = 23;
  if (this->bmotionjpeg() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(23, this->bmotionjpeg(), output);
  }

  // int32 nRecordStream = 24;
  if (this->nrecordstream() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(24, this->nrecordstream(), output);
  }

  // int32 nServerMotionStream = 25;
  if (this->nservermotionstream() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(25, this->nservermotionstream(), output);
  }

  // .OnvifEventLevel nOnvifEvtLevel = 26;
  if (this->nonvifevtlevel() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      26, this->nonvifevtlevel(), output);
  }

  // string strSched = 27;
  if (this->strsched().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strsched().data(), this->strsched().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "VidCamera.strSched");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      27, this->strsched(), output);
  }

  // string strMotReg = 28;
  if (this->strmotreg().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strmotreg().data(), this->strmotreg().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "VidCamera.strMotReg");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      28, this->strmotreg(), output);
  }

  // bool bOnline = 29;
  if (this->bonline() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(29, this->bonline(), output);
  }

  // bool bRec = 30;
  if (this->brec() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(30, this->brec(), output);
  }

  // @@protoc_insertion_point(serialize_end:VidCamera)
}

::google::protobuf::uint8* VidCamera::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic;  // Unused
  // @@protoc_insertion_point(serialize_to_array_start:VidCamera)
  // bool bDisable = 1;
  if (this->bdisable() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(1, this->bdisable(), target);
  }

  // string strId = 2;
  if (this->strid().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strid().data(), this->strid().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "VidCamera.strId");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->strid(), target);
  }

  // string strName = 3;
  if (this->strname().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strname().data(), this->strname().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "VidCamera.strName");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->strname(), target);
  }

  // .CameraType nType = 4;
  if (this->ntype() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      4, this->ntype(), target);
  }

  // string strIP = 5;
  if (this->strip().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strip().data(), this->strip().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "VidCamera.strIP");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        5, this->strip(), target);
  }

  // string strPort = 6;
  if (this->strport().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strport().data(), this->strport().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "VidCamera.strPort");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        6, this->strport(), target);
  }

  // string strUser = 7;
  if (this->struser().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->struser().data(), this->struser().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "VidCamera.strUser");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        7, this->struser(), target);
  }

  // string strPasswd = 8;
  if (this->strpasswd().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strpasswd().data(), this->strpasswd().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "VidCamera.strPasswd");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        8, this->strpasswd(), target);
  }

  // string strONVIFAddress = 9;
  if (this->stronvifaddress().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->stronvifaddress().data(), this->stronvifaddress().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "VidCamera.strONVIFAddress");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        9, this->stronvifaddress(), target);
  }

  // bool bProfileToken = 10;
  if (this->bprofiletoken() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(10, this->bprofiletoken(), target);
  }

  // string strProfileToken1 = 11;
  if (this->strprofiletoken1().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strprofiletoken1().data(), this->strprofiletoken1().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "VidCamera.strProfileToken1");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        11, this->strprofiletoken1(), target);
  }

  // string strProfileToken2 = 12;
  if (this->strprofiletoken2().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strprofiletoken2().data(), this->strprofiletoken2().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "VidCamera.strProfileToken2");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        12, this->strprofiletoken2(), target);
  }

  // string strFile = 13;
  if (this->strfile().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strfile().data(), this->strfile().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "VidCamera.strFile");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        13, this->strfile(), target);
  }

  // string strRTSPUrl = 14;
  if (this->strrtspurl().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strrtspurl().data(), this->strrtspurl().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "VidCamera.strRTSPUrl");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        14, this->strrtspurl(), target);
  }

  // bool bHWaccel = 15;
  if (this->bhwaccel() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(15, this->bhwaccel(), target);
  }

  // bool bServerMotion = 16;
  if (this->bservermotion() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(16, this->bservermotion(), target);
  }

  // .CameraConnectType nConnectType = 17;
  if (this->nconnecttype() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      17, this->nconnecttype(), target);
  }

  // bool bHDFSRecord = 18;
  if (this->bhdfsrecord() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(18, this->bhdfsrecord(), target);
  }

  // repeated string cRecSched = 20;
  for (int i = 0; i < this->crecsched_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->crecsched(i).data(), this->crecsched(i).length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "VidCamera.cRecSched");
    target = ::google::protobuf::internal::WireFormatLite::
      WriteStringToArray(20, this->crecsched(i), target);
  }

  // int32 nPreRecSec = 21;
  if (this->nprerecsec() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(21, this->nprerecsec(), target);
  }

  // int32 nPostRecSec = 22;
  if (this->npostrecsec() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(22, this->npostrecsec(), target);
  }

  // bool bMotionJPEG = 23;
  if (this->bmotionjpeg() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(23, this->bmotionjpeg(), target);
  }

  // int32 nRecordStream = 24;
  if (this->nrecordstream() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(24, this->nrecordstream(), target);
  }

  // int32 nServerMotionStream = 25;
  if (this->nservermotionstream() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(25, this->nservermotionstream(), target);
  }

  // .OnvifEventLevel nOnvifEvtLevel = 26;
  if (this->nonvifevtlevel() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      26, this->nonvifevtlevel(), target);
  }

  // string strSched = 27;
  if (this->strsched().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strsched().data(), this->strsched().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "VidCamera.strSched");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        27, this->strsched(), target);
  }

  // string strMotReg = 28;
  if (this->strmotreg().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strmotreg().data(), this->strmotreg().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "VidCamera.strMotReg");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        28, this->strmotreg(), target);
  }

  // bool bOnline = 29;
  if (this->bonline() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(29, this->bonline(), target);
  }

  // bool bRec = 30;
  if (this->brec() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(30, this->brec(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:VidCamera)
  return target;
}

size_t VidCamera::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:VidCamera)
  size_t total_size = 0;

  // repeated string cRecSched = 20;
  total_size += 2 *
      ::google::protobuf::internal::FromIntSize(this->crecsched_size());
  for (int i = 0; i < this->crecsched_size(); i++) {
    total_size += ::google::protobuf::internal::WireFormatLite::StringSize(
      this->crecsched(i));
  }

  // string strId = 2;
  if (this->strid().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->strid());
  }

  // string strName = 3;
  if (this->strname().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->strname());
  }

  // string strIP = 5;
  if (this->strip().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->strip());
  }

  // string strPort = 6;
  if (this->strport().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->strport());
  }

  // string strUser = 7;
  if (this->struser().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->struser());
  }

  // string strPasswd = 8;
  if (this->strpasswd().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->strpasswd());
  }

  // string strONVIFAddress = 9;
  if (this->stronvifaddress().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->stronvifaddress());
  }

  // string strProfileToken1 = 11;
  if (this->strprofiletoken1().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->strprofiletoken1());
  }

  // string strProfileToken2 = 12;
  if (this->strprofiletoken2().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->strprofiletoken2());
  }

  // string strFile = 13;
  if (this->strfile().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->strfile());
  }

  // string strRTSPUrl = 14;
  if (this->strrtspurl().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->strrtspurl());
  }

  // string strSched = 27;
  if (this->strsched().size() > 0) {
    total_size += 2 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->strsched());
  }

  // string strMotReg = 28;
  if (this->strmotreg().size() > 0) {
    total_size += 2 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->strmotreg());
  }

  // .CameraType nType = 4;
  if (this->ntype() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->ntype());
  }

  // bool bDisable = 1;
  if (this->bdisable() != 0) {
    total_size += 1 + 1;
  }

  // bool bProfileToken = 10;
  if (this->bprofiletoken() != 0) {
    total_size += 1 + 1;
  }

  // bool bHWaccel = 15;
  if (this->bhwaccel() != 0) {
    total_size += 1 + 1;
  }

  // bool bServerMotion = 16;
  if (this->bservermotion() != 0) {
    total_size += 2 + 1;
  }

  // .CameraConnectType nConnectType = 17;
  if (this->nconnecttype() != 0) {
    total_size += 2 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->nconnecttype());
  }

  // int32 nPreRecSec = 21;
  if (this->nprerecsec() != 0) {
    total_size += 2 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->nprerecsec());
  }

  // int32 nPostRecSec = 22;
  if (this->npostrecsec() != 0) {
    total_size += 2 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->npostrecsec());
  }

  // int32 nRecordStream = 24;
  if (this->nrecordstream() != 0) {
    total_size += 2 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->nrecordstream());
  }

  // int32 nServerMotionStream = 25;
  if (this->nservermotionstream() != 0) {
    total_size += 2 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->nservermotionstream());
  }

  // bool bHDFSRecord = 18;
  if (this->bhdfsrecord() != 0) {
    total_size += 2 + 1;
  }

  // bool bMotionJPEG = 23;
  if (this->bmotionjpeg() != 0) {
    total_size += 2 + 1;
  }

  // bool bOnline = 29;
  if (this->bonline() != 0) {
    total_size += 2 + 1;
  }

  // bool bRec = 30;
  if (this->brec() != 0) {
    total_size += 2 + 1;
  }

  // .OnvifEventLevel nOnvifEvtLevel = 26;
  if (this->nonvifevtlevel() != 0) {
    total_size += 2 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->nonvifevtlevel());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void VidCamera::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:VidCamera)
  GOOGLE_DCHECK_NE(&from, this);
  const VidCamera* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const VidCamera>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:VidCamera)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:VidCamera)
    MergeFrom(*source);
  }
}

void VidCamera::MergeFrom(const VidCamera& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:VidCamera)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  crecsched_.MergeFrom(from.crecsched_);
  if (from.strid().size() > 0) {

    strid_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strid_);
  }
  if (from.strname().size() > 0) {

    strname_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strname_);
  }
  if (from.strip().size() > 0) {

    strip_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strip_);
  }
  if (from.strport().size() > 0) {

    strport_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strport_);
  }
  if (from.struser().size() > 0) {

    struser_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.struser_);
  }
  if (from.strpasswd().size() > 0) {

    strpasswd_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strpasswd_);
  }
  if (from.stronvifaddress().size() > 0) {

    stronvifaddress_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.stronvifaddress_);
  }
  if (from.strprofiletoken1().size() > 0) {

    strprofiletoken1_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strprofiletoken1_);
  }
  if (from.strprofiletoken2().size() > 0) {

    strprofiletoken2_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strprofiletoken2_);
  }
  if (from.strfile().size() > 0) {

    strfile_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strfile_);
  }
  if (from.strrtspurl().size() > 0) {

    strrtspurl_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strrtspurl_);
  }
  if (from.strsched().size() > 0) {

    strsched_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strsched_);
  }
  if (from.strmotreg().size() > 0) {

    strmotreg_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strmotreg_);
  }
  if (from.ntype() != 0) {
    set_ntype(from.ntype());
  }
  if (from.bdisable() != 0) {
    set_bdisable(from.bdisable());
  }
  if (from.bprofiletoken() != 0) {
    set_bprofiletoken(from.bprofiletoken());
  }
  if (from.bhwaccel() != 0) {
    set_bhwaccel(from.bhwaccel());
  }
  if (from.bservermotion() != 0) {
    set_bservermotion(from.bservermotion());
  }
  if (from.nconnecttype() != 0) {
    set_nconnecttype(from.nconnecttype());
  }
  if (from.nprerecsec() != 0) {
    set_nprerecsec(from.nprerecsec());
  }
  if (from.npostrecsec() != 0) {
    set_npostrecsec(from.npostrecsec());
  }
  if (from.nrecordstream() != 0) {
    set_nrecordstream(from.nrecordstream());
  }
  if (from.nservermotionstream() != 0) {
    set_nservermotionstream(from.nservermotionstream());
  }
  if (from.bhdfsrecord() != 0) {
    set_bhdfsrecord(from.bhdfsrecord());
  }
  if (from.bmotionjpeg() != 0) {
    set_bmotionjpeg(from.bmotionjpeg());
  }
  if (from.bonline() != 0) {
    set_bonline(from.bonline());
  }
  if (from.brec() != 0) {
    set_brec(from.brec());
  }
  if (from.nonvifevtlevel() != 0) {
    set_nonvifevtlevel(from.nonvifevtlevel());
  }
}

void VidCamera::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:VidCamera)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void VidCamera::CopyFrom(const VidCamera& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:VidCamera)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool VidCamera::IsInitialized() const {
  return true;
}

void VidCamera::Swap(VidCamera* other) {
  if (other == this) return;
  InternalSwap(other);
}
void VidCamera::InternalSwap(VidCamera* other) {
  crecsched_.UnsafeArenaSwap(&other->crecsched_);
  strid_.Swap(&other->strid_);
  strname_.Swap(&other->strname_);
  strip_.Swap(&other->strip_);
  strport_.Swap(&other->strport_);
  struser_.Swap(&other->struser_);
  strpasswd_.Swap(&other->strpasswd_);
  stronvifaddress_.Swap(&other->stronvifaddress_);
  strprofiletoken1_.Swap(&other->strprofiletoken1_);
  strprofiletoken2_.Swap(&other->strprofiletoken2_);
  strfile_.Swap(&other->strfile_);
  strrtspurl_.Swap(&other->strrtspurl_);
  strsched_.Swap(&other->strsched_);
  strmotreg_.Swap(&other->strmotreg_);
  std::swap(ntype_, other->ntype_);
  std::swap(bdisable_, other->bdisable_);
  std::swap(bprofiletoken_, other->bprofiletoken_);
  std::swap(bhwaccel_, other->bhwaccel_);
  std::swap(bservermotion_, other->bservermotion_);
  std::swap(nconnecttype_, other->nconnecttype_);
  std::swap(nprerecsec_, other->nprerecsec_);
  std::swap(npostrecsec_, other->npostrecsec_);
  std::swap(nrecordstream_, other->nrecordstream_);
  std::swap(nservermotionstream_, other->nservermotionstream_);
  std::swap(bhdfsrecord_, other->bhdfsrecord_);
  std::swap(bmotionjpeg_, other->bmotionjpeg_);
  std::swap(bonline_, other->bonline_);
  std::swap(brec_, other->brec_);
  std::swap(nonvifevtlevel_, other->nonvifevtlevel_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata VidCamera::GetMetadata() const {
  protobuf_vidconf_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_vidconf_2eproto::file_level_metadata[3];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// VidCamera

// bool bDisable = 1;
void VidCamera::clear_bdisable() {
  bdisable_ = false;
}
bool VidCamera::bdisable() const {
  // @@protoc_insertion_point(field_get:VidCamera.bDisable)
  return bdisable_;
}
void VidCamera::set_bdisable(bool value) {
  
  bdisable_ = value;
  // @@protoc_insertion_point(field_set:VidCamera.bDisable)
}

// string strId = 2;
void VidCamera::clear_strid() {
  strid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& VidCamera::strid() const {
  // @@protoc_insertion_point(field_get:VidCamera.strId)
  return strid_.GetNoArena();
}
void VidCamera::set_strid(const ::std::string& value) {
  
  strid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:VidCamera.strId)
}
#if LANG_CXX11
void VidCamera::set_strid(::std::string&& value) {
  
  strid_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:VidCamera.strId)
}
#endif
void VidCamera::set_strid(const char* value) {
  
  strid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:VidCamera.strId)
}
void VidCamera::set_strid(const char* value, size_t size) {
  
  strid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:VidCamera.strId)
}
::std::string* VidCamera::mutable_strid() {
  
  // @@protoc_insertion_point(field_mutable:VidCamera.strId)
  return strid_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* VidCamera::release_strid() {
  // @@protoc_insertion_point(field_release:VidCamera.strId)
  
  return strid_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void VidCamera::set_allocated_strid(::std::string* strid) {
  if (strid != NULL) {
    
  } else {
    
  }
  strid_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), strid);
  // @@protoc_insertion_point(field_set_allocated:VidCamera.strId)
}

// string strName = 3;
void VidCamera::clear_strname() {
  strname_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& VidCamera::strname() const {
  // @@protoc_insertion_point(field_get:VidCamera.strName)
  return strname_.GetNoArena();
}
void VidCamera::set_strname(const ::std::string& value) {
  
  strname_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:VidCamera.strName)
}
#if LANG_CXX11
void VidCamera::set_strname(::std::string&& value) {
  
  strname_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:VidCamera.strName)
}
#endif
void VidCamera::set_strname(const char* value) {
  
  strname_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:VidCamera.strName)
}
void VidCamera::set_strname(const char* value, size_t size) {
  
  strname_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:VidCamera.strName)
}
::std::string* VidCamera::mutable_strname() {
  
  // @@protoc_insertion_point(field_mutable:VidCamera.strName)
  return strname_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* VidCamera::release_strname() {
  // @@protoc_insertion_point(field_release:VidCamera.strName)
  
  return strname_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void VidCamera::set_allocated_strname(::std::string* strname) {
  if (strname != NULL) {
    
  } else {
    
  }
  strname_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), strname);
  // @@protoc_insertion_point(field_set_allocated:VidCamera.strName)
}

// .CameraType nType = 4;
void VidCamera::clear_ntype() {
  ntype_ = 0;
}
::CameraType VidCamera::ntype() const {
  // @@protoc_insertion_point(field_get:VidCamera.nType)
  return static_cast< ::CameraType >(ntype_);
}
void VidCamera::set_ntype(::CameraType value) {
  
  ntype_ = value;
  // @@protoc_insertion_point(field_set:VidCamera.nType)
}

// string strIP = 5;
void VidCamera::clear_strip() {
  strip_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& VidCamera::strip() const {
  // @@protoc_insertion_point(field_get:VidCamera.strIP)
  return strip_.GetNoArena();
}
void VidCamera::set_strip(const ::std::string& value) {
  
  strip_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:VidCamera.strIP)
}
#if LANG_CXX11
void VidCamera::set_strip(::std::string&& value) {
  
  strip_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:VidCamera.strIP)
}
#endif
void VidCamera::set_strip(const char* value) {
  
  strip_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:VidCamera.strIP)
}
void VidCamera::set_strip(const char* value, size_t size) {
  
  strip_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:VidCamera.strIP)
}
::std::string* VidCamera::mutable_strip() {
  
  // @@protoc_insertion_point(field_mutable:VidCamera.strIP)
  return strip_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* VidCamera::release_strip() {
  // @@protoc_insertion_point(field_release:VidCamera.strIP)
  
  return strip_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void VidCamera::set_allocated_strip(::std::string* strip) {
  if (strip != NULL) {
    
  } else {
    
  }
  strip_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), strip);
  // @@protoc_insertion_point(field_set_allocated:VidCamera.strIP)
}

// string strPort = 6;
void VidCamera::clear_strport() {
  strport_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& VidCamera::strport() const {
  // @@protoc_insertion_point(field_get:VidCamera.strPort)
  return strport_.GetNoArena();
}
void VidCamera::set_strport(const ::std::string& value) {
  
  strport_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:VidCamera.strPort)
}
#if LANG_CXX11
void VidCamera::set_strport(::std::string&& value) {
  
  strport_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:VidCamera.strPort)
}
#endif
void VidCamera::set_strport(const char* value) {
  
  strport_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:VidCamera.strPort)
}
void VidCamera::set_strport(const char* value, size_t size) {
  
  strport_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:VidCamera.strPort)
}
::std::string* VidCamera::mutable_strport() {
  
  // @@protoc_insertion_point(field_mutable:VidCamera.strPort)
  return strport_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* VidCamera::release_strport() {
  // @@protoc_insertion_point(field_release:VidCamera.strPort)
  
  return strport_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void VidCamera::set_allocated_strport(::std::string* strport) {
  if (strport != NULL) {
    
  } else {
    
  }
  strport_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), strport);
  // @@protoc_insertion_point(field_set_allocated:VidCamera.strPort)
}

// string strUser = 7;
void VidCamera::clear_struser() {
  struser_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& VidCamera::struser() const {
  // @@protoc_insertion_point(field_get:VidCamera.strUser)
  return struser_.GetNoArena();
}
void VidCamera::set_struser(const ::std::string& value) {
  
  struser_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:VidCamera.strUser)
}
#if LANG_CXX11
void VidCamera::set_struser(::std::string&& value) {
  
  struser_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:VidCamera.strUser)
}
#endif
void VidCamera::set_struser(const char* value) {
  
  struser_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:VidCamera.strUser)
}
void VidCamera::set_struser(const char* value, size_t size) {
  
  struser_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:VidCamera.strUser)
}
::std::string* VidCamera::mutable_struser() {
  
  // @@protoc_insertion_point(field_mutable:VidCamera.strUser)
  return struser_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* VidCamera::release_struser() {
  // @@protoc_insertion_point(field_release:VidCamera.strUser)
  
  return struser_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void VidCamera::set_allocated_struser(::std::string* struser) {
  if (struser != NULL) {
    
  } else {
    
  }
  struser_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), struser);
  // @@protoc_insertion_point(field_set_allocated:VidCamera.strUser)
}

// string strPasswd = 8;
void VidCamera::clear_strpasswd() {
  strpasswd_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& VidCamera::strpasswd() const {
  // @@protoc_insertion_point(field_get:VidCamera.strPasswd)
  return strpasswd_.GetNoArena();
}
void VidCamera::set_strpasswd(const ::std::string& value) {
  
  strpasswd_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:VidCamera.strPasswd)
}
#if LANG_CXX11
void VidCamera::set_strpasswd(::std::string&& value) {
  
  strpasswd_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:VidCamera.strPasswd)
}
#endif
void VidCamera::set_strpasswd(const char* value) {
  
  strpasswd_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:VidCamera.strPasswd)
}
void VidCamera::set_strpasswd(const char* value, size_t size) {
  
  strpasswd_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:VidCamera.strPasswd)
}
::std::string* VidCamera::mutable_strpasswd() {
  
  // @@protoc_insertion_point(field_mutable:VidCamera.strPasswd)
  return strpasswd_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* VidCamera::release_strpasswd() {
  // @@protoc_insertion_point(field_release:VidCamera.strPasswd)
  
  return strpasswd_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void VidCamera::set_allocated_strpasswd(::std::string* strpasswd) {
  if (strpasswd != NULL) {
    
  } else {
    
  }
  strpasswd_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), strpasswd);
  // @@protoc_insertion_point(field_set_allocated:VidCamera.strPasswd)
}

// string strONVIFAddress = 9;
void VidCamera::clear_stronvifaddress() {
  stronvifaddress_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& VidCamera::stronvifaddress() const {
  // @@protoc_insertion_point(field_get:VidCamera.strONVIFAddress)
  return stronvifaddress_.GetNoArena();
}
void VidCamera::set_stronvifaddress(const ::std::string& value) {
  
  stronvifaddress_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:VidCamera.strONVIFAddress)
}
#if LANG_CXX11
void VidCamera::set_stronvifaddress(::std::string&& value) {
  
  stronvifaddress_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:VidCamera.strONVIFAddress)
}
#endif
void VidCamera::set_stronvifaddress(const char* value) {
  
  stronvifaddress_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:VidCamera.strONVIFAddress)
}
void VidCamera::set_stronvifaddress(const char* value, size_t size) {
  
  stronvifaddress_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:VidCamera.strONVIFAddress)
}
::std::string* VidCamera::mutable_stronvifaddress() {
  
  // @@protoc_insertion_point(field_mutable:VidCamera.strONVIFAddress)
  return stronvifaddress_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* VidCamera::release_stronvifaddress() {
  // @@protoc_insertion_point(field_release:VidCamera.strONVIFAddress)
  
  return stronvifaddress_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void VidCamera::set_allocated_stronvifaddress(::std::string* stronvifaddress) {
  if (stronvifaddress != NULL) {
    
  } else {
    
  }
  stronvifaddress_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), stronvifaddress);
  // @@protoc_insertion_point(field_set_allocated:VidCamera.strONVIFAddress)
}

// bool bProfileToken = 10;
void VidCamera::clear_bprofiletoken() {
  bprofiletoken_ = false;
}
bool VidCamera::bprofiletoken() const {
  // @@protoc_insertion_point(field_get:VidCamera.bProfileToken)
  return bprofiletoken_;
}
void VidCamera::set_bprofiletoken(bool value) {
  
  bprofiletoken_ = value;
  // @@protoc_insertion_point(field_set:VidCamera.bProfileToken)
}

// string strProfileToken1 = 11;
void VidCamera::clear_strprofiletoken1() {
  strprofiletoken1_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& VidCamera::strprofiletoken1() const {
  // @@protoc_insertion_point(field_get:VidCamera.strProfileToken1)
  return strprofiletoken1_.GetNoArena();
}
void VidCamera::set_strprofiletoken1(const ::std::string& value) {
  
  strprofiletoken1_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:VidCamera.strProfileToken1)
}
#if LANG_CXX11
void VidCamera::set_strprofiletoken1(::std::string&& value) {
  
  strprofiletoken1_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:VidCamera.strProfileToken1)
}
#endif
void VidCamera::set_strprofiletoken1(const char* value) {
  
  strprofiletoken1_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:VidCamera.strProfileToken1)
}
void VidCamera::set_strprofiletoken1(const char* value, size_t size) {
  
  strprofiletoken1_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:VidCamera.strProfileToken1)
}
::std::string* VidCamera::mutable_strprofiletoken1() {
  
  // @@protoc_insertion_point(field_mutable:VidCamera.strProfileToken1)
  return strprofiletoken1_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* VidCamera::release_strprofiletoken1() {
  // @@protoc_insertion_point(field_release:VidCamera.strProfileToken1)
  
  return strprofiletoken1_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void VidCamera::set_allocated_strprofiletoken1(::std::string* strprofiletoken1) {
  if (strprofiletoken1 != NULL) {
    
  } else {
    
  }
  strprofiletoken1_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), strprofiletoken1);
  // @@protoc_insertion_point(field_set_allocated:VidCamera.strProfileToken1)
}

// string strProfileToken2 = 12;
void VidCamera::clear_strprofiletoken2() {
  strprofiletoken2_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& VidCamera::strprofiletoken2() const {
  // @@protoc_insertion_point(field_get:VidCamera.strProfileToken2)
  return strprofiletoken2_.GetNoArena();
}
void VidCamera::set_strprofiletoken2(const ::std::string& value) {
  
  strprofiletoken2_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:VidCamera.strProfileToken2)
}
#if LANG_CXX11
void VidCamera::set_strprofiletoken2(::std::string&& value) {
  
  strprofiletoken2_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:VidCamera.strProfileToken2)
}
#endif
void VidCamera::set_strprofiletoken2(const char* value) {
  
  strprofiletoken2_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:VidCamera.strProfileToken2)
}
void VidCamera::set_strprofiletoken2(const char* value, size_t size) {
  
  strprofiletoken2_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:VidCamera.strProfileToken2)
}
::std::string* VidCamera::mutable_strprofiletoken2() {
  
  // @@protoc_insertion_point(field_mutable:VidCamera.strProfileToken2)
  return strprofiletoken2_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* VidCamera::release_strprofiletoken2() {
  // @@protoc_insertion_point(field_release:VidCamera.strProfileToken2)
  
  return strprofiletoken2_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void VidCamera::set_allocated_strprofiletoken2(::std::string* strprofiletoken2) {
  if (strprofiletoken2 != NULL) {
    
  } else {
    
  }
  strprofiletoken2_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), strprofiletoken2);
  // @@protoc_insertion_point(field_set_allocated:VidCamera.strProfileToken2)
}

// string strFile = 13;
void VidCamera::clear_strfile() {
  strfile_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& VidCamera::strfile() const {
  // @@protoc_insertion_point(field_get:VidCamera.strFile)
  return strfile_.GetNoArena();
}
void VidCamera::set_strfile(const ::std::string& value) {
  
  strfile_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:VidCamera.strFile)
}
#if LANG_CXX11
void VidCamera::set_strfile(::std::string&& value) {
  
  strfile_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:VidCamera.strFile)
}
#endif
void VidCamera::set_strfile(const char* value) {
  
  strfile_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:VidCamera.strFile)
}
void VidCamera::set_strfile(const char* value, size_t size) {
  
  strfile_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:VidCamera.strFile)
}
::std::string* VidCamera::mutable_strfile() {
  
  // @@protoc_insertion_point(field_mutable:VidCamera.strFile)
  return strfile_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* VidCamera::release_strfile() {
  // @@protoc_insertion_point(field_release:VidCamera.strFile)
  
  return strfile_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void VidCamera::set_allocated_strfile(::std::string* strfile) {
  if (strfile != NULL) {
    
  } else {
    
  }
  strfile_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), strfile);
  // @@protoc_insertion_point(field_set_allocated:VidCamera.strFile)
}

// string strRTSPUrl = 14;
void VidCamera::clear_strrtspurl() {
  strrtspurl_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& VidCamera::strrtspurl() const {
  // @@protoc_insertion_point(field_get:VidCamera.strRTSPUrl)
  return strrtspurl_.GetNoArena();
}
void VidCamera::set_strrtspurl(const ::std::string& value) {
  
  strrtspurl_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:VidCamera.strRTSPUrl)
}
#if LANG_CXX11
void VidCamera::set_strrtspurl(::std::string&& value) {
  
  strrtspurl_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:VidCamera.strRTSPUrl)
}
#endif
void VidCamera::set_strrtspurl(const char* value) {
  
  strrtspurl_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:VidCamera.strRTSPUrl)
}
void VidCamera::set_strrtspurl(const char* value, size_t size) {
  
  strrtspurl_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:VidCamera.strRTSPUrl)
}
::std::string* VidCamera::mutable_strrtspurl() {
  
  // @@protoc_insertion_point(field_mutable:VidCamera.strRTSPUrl)
  return strrtspurl_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* VidCamera::release_strrtspurl() {
  // @@protoc_insertion_point(field_release:VidCamera.strRTSPUrl)
  
  return strrtspurl_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void VidCamera::set_allocated_strrtspurl(::std::string* strrtspurl) {
  if (strrtspurl != NULL) {
    
  } else {
    
  }
  strrtspurl_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), strrtspurl);
  // @@protoc_insertion_point(field_set_allocated:VidCamera.strRTSPUrl)
}

// bool bHWaccel = 15;
void VidCamera::clear_bhwaccel() {
  bhwaccel_ = false;
}
bool VidCamera::bhwaccel() const {
  // @@protoc_insertion_point(field_get:VidCamera.bHWaccel)
  return bhwaccel_;
}
void VidCamera::set_bhwaccel(bool value) {
  
  bhwaccel_ = value;
  // @@protoc_insertion_point(field_set:VidCamera.bHWaccel)
}

// bool bServerMotion = 16;
void VidCamera::clear_bservermotion() {
  bservermotion_ = false;
}
bool VidCamera::bservermotion() const {
  // @@protoc_insertion_point(field_get:VidCamera.bServerMotion)
  return bservermotion_;
}
void VidCamera::set_bservermotion(bool value) {
  
  bservermotion_ = value;
  // @@protoc_insertion_point(field_set:VidCamera.bServerMotion)
}

// .CameraConnectType nConnectType = 17;
void VidCamera::clear_nconnecttype() {
  nconnecttype_ = 0;
}
::CameraConnectType VidCamera::nconnecttype() const {
  // @@protoc_insertion_point(field_get:VidCamera.nConnectType)
  return static_cast< ::CameraConnectType >(nconnecttype_);
}
void VidCamera::set_nconnecttype(::CameraConnectType value) {
  
  nconnecttype_ = value;
  // @@protoc_insertion_point(field_set:VidCamera.nConnectType)
}

// bool bHDFSRecord = 18;
void VidCamera::clear_bhdfsrecord() {
  bhdfsrecord_ = false;
}
bool VidCamera::bhdfsrecord() const {
  // @@protoc_insertion_point(field_get:VidCamera.bHDFSRecord)
  return bhdfsrecord_;
}
void VidCamera::set_bhdfsrecord(bool value) {
  
  bhdfsrecord_ = value;
  // @@protoc_insertion_point(field_set:VidCamera.bHDFSRecord)
}

// repeated string cRecSched = 20;
int VidCamera::crecsched_size() const {
  return crecsched_.size();
}
void VidCamera::clear_crecsched() {
  crecsched_.Clear();
}
const ::std::string& VidCamera::crecsched(int index) const {
  // @@protoc_insertion_point(field_get:VidCamera.cRecSched)
  return crecsched_.Get(index);
}
::std::string* VidCamera::mutable_crecsched(int index) {
  // @@protoc_insertion_point(field_mutable:VidCamera.cRecSched)
  return crecsched_.Mutable(index);
}
void VidCamera::set_crecsched(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:VidCamera.cRecSched)
  crecsched_.Mutable(index)->assign(value);
}
void VidCamera::set_crecsched(int index, const char* value) {
  crecsched_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:VidCamera.cRecSched)
}
void VidCamera::set_crecsched(int index, const char* value, size_t size) {
  crecsched_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:VidCamera.cRecSched)
}
::std::string* VidCamera::add_crecsched() {
  // @@protoc_insertion_point(field_add_mutable:VidCamera.cRecSched)
  return crecsched_.Add();
}
void VidCamera::add_crecsched(const ::std::string& value) {
  crecsched_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:VidCamera.cRecSched)
}
void VidCamera::add_crecsched(const char* value) {
  crecsched_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:VidCamera.cRecSched)
}
void VidCamera::add_crecsched(const char* value, size_t size) {
  crecsched_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:VidCamera.cRecSched)
}
const ::google::protobuf::RepeatedPtrField< ::std::string>&
VidCamera::crecsched() const {
  // @@protoc_insertion_point(field_list:VidCamera.cRecSched)
  return crecsched_;
}
::google::protobuf::RepeatedPtrField< ::std::string>*
VidCamera::mutable_crecsched() {
  // @@protoc_insertion_point(field_mutable_list:VidCamera.cRecSched)
  return &crecsched_;
}

// int32 nPreRecSec = 21;
void VidCamera::clear_nprerecsec() {
  nprerecsec_ = 0;
}
::google::protobuf::int32 VidCamera::nprerecsec() const {
  // @@protoc_insertion_point(field_get:VidCamera.nPreRecSec)
  return nprerecsec_;
}
void VidCamera::set_nprerecsec(::google::protobuf::int32 value) {
  
  nprerecsec_ = value;
  // @@protoc_insertion_point(field_set:VidCamera.nPreRecSec)
}

// int32 nPostRecSec = 22;
void VidCamera::clear_npostrecsec() {
  npostrecsec_ = 0;
}
::google::protobuf::int32 VidCamera::npostrecsec() const {
  // @@protoc_insertion_point(field_get:VidCamera.nPostRecSec)
  return npostrecsec_;
}
void VidCamera::set_npostrecsec(::google::protobuf::int32 value) {
  
  npostrecsec_ = value;
  // @@protoc_insertion_point(field_set:VidCamera.nPostRecSec)
}

// bool bMotionJPEG = 23;
void VidCamera::clear_bmotionjpeg() {
  bmotionjpeg_ = false;
}
bool VidCamera::bmotionjpeg() const {
  // @@protoc_insertion_point(field_get:VidCamera.bMotionJPEG)
  return bmotionjpeg_;
}
void VidCamera::set_bmotionjpeg(bool value) {
  
  bmotionjpeg_ = value;
  // @@protoc_insertion_point(field_set:VidCamera.bMotionJPEG)
}

// int32 nRecordStream = 24;
void VidCamera::clear_nrecordstream() {
  nrecordstream_ = 0;
}
::google::protobuf::int32 VidCamera::nrecordstream() const {
  // @@protoc_insertion_point(field_get:VidCamera.nRecordStream)
  return nrecordstream_;
}
void VidCamera::set_nrecordstream(::google::protobuf::int32 value) {
  
  nrecordstream_ = value;
  // @@protoc_insertion_point(field_set:VidCamera.nRecordStream)
}

// int32 nServerMotionStream = 25;
void VidCamera::clear_nservermotionstream() {
  nservermotionstream_ = 0;
}
::google::protobuf::int32 VidCamera::nservermotionstream() const {
  // @@protoc_insertion_point(field_get:VidCamera.nServerMotionStream)
  return nservermotionstream_;
}
void VidCamera::set_nservermotionstream(::google::protobuf::int32 value) {
  
  nservermotionstream_ = value;
  // @@protoc_insertion_point(field_set:VidCamera.nServerMotionStream)
}

// .OnvifEventLevel nOnvifEvtLevel = 26;
void VidCamera::clear_nonvifevtlevel() {
  nonvifevtlevel_ = 0;
}
::OnvifEventLevel VidCamera::nonvifevtlevel() const {
  // @@protoc_insertion_point(field_get:VidCamera.nOnvifEvtLevel)
  return static_cast< ::OnvifEventLevel >(nonvifevtlevel_);
}
void VidCamera::set_nonvifevtlevel(::OnvifEventLevel value) {
  
  nonvifevtlevel_ = value;
  // @@protoc_insertion_point(field_set:VidCamera.nOnvifEvtLevel)
}

// string strSched = 27;
void VidCamera::clear_strsched() {
  strsched_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& VidCamera::strsched() const {
  // @@protoc_insertion_point(field_get:VidCamera.strSched)
  return strsched_.GetNoArena();
}
void VidCamera::set_strsched(const ::std::string& value) {
  
  strsched_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:VidCamera.strSched)
}
#if LANG_CXX11
void VidCamera::set_strsched(::std::string&& value) {
  
  strsched_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:VidCamera.strSched)
}
#endif
void VidCamera::set_strsched(const char* value) {
  
  strsched_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:VidCamera.strSched)
}
void VidCamera::set_strsched(const char* value, size_t size) {
  
  strsched_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:VidCamera.strSched)
}
::std::string* VidCamera::mutable_strsched() {
  
  // @@protoc_insertion_point(field_mutable:VidCamera.strSched)
  return strsched_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* VidCamera::release_strsched() {
  // @@protoc_insertion_point(field_release:VidCamera.strSched)
  
  return strsched_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void VidCamera::set_allocated_strsched(::std::string* strsched) {
  if (strsched != NULL) {
    
  } else {
    
  }
  strsched_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), strsched);
  // @@protoc_insertion_point(field_set_allocated:VidCamera.strSched)
}

// string strMotReg = 28;
void VidCamera::clear_strmotreg() {
  strmotreg_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& VidCamera::strmotreg() const {
  // @@protoc_insertion_point(field_get:VidCamera.strMotReg)
  return strmotreg_.GetNoArena();
}
void VidCamera::set_strmotreg(const ::std::string& value) {
  
  strmotreg_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:VidCamera.strMotReg)
}
#if LANG_CXX11
void VidCamera::set_strmotreg(::std::string&& value) {
  
  strmotreg_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:VidCamera.strMotReg)
}
#endif
void VidCamera::set_strmotreg(const char* value) {
  
  strmotreg_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:VidCamera.strMotReg)
}
void VidCamera::set_strmotreg(const char* value, size_t size) {
  
  strmotreg_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:VidCamera.strMotReg)
}
::std::string* VidCamera::mutable_strmotreg() {
  
  // @@protoc_insertion_point(field_mutable:VidCamera.strMotReg)
  return strmotreg_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* VidCamera::release_strmotreg() {
  // @@protoc_insertion_point(field_release:VidCamera.strMotReg)
  
  return strmotreg_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void VidCamera::set_allocated_strmotreg(::std::string* strmotreg) {
  if (strmotreg != NULL) {
    
  } else {
    
  }
  strmotreg_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), strmotreg);
  // @@protoc_insertion_point(field_set_allocated:VidCamera.strMotReg)
}

// bool bOnline = 29;
void VidCamera::clear_bonline() {
  bonline_ = false;
}
bool VidCamera::bonline() const {
  // @@protoc_insertion_point(field_get:VidCamera.bOnline)
  return bonline_;
}
void VidCamera::set_bonline(bool value) {
  
  bonline_ = value;
  // @@protoc_insertion_point(field_set:VidCamera.bOnline)
}

// bool bRec = 30;
void VidCamera::clear_brec() {
  brec_ = false;
}
bool VidCamera::brec() const {
  // @@protoc_insertion_point(field_get:VidCamera.bRec)
  return brec_;
}
void VidCamera::set_brec(bool value) {
  
  brec_ = value;
  // @@protoc_insertion_point(field_set:VidCamera.bRec)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int VidCameraList::kCVidCameraFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

VidCameraList::VidCameraList()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_vidconf_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:VidCameraList)
}
VidCameraList::VidCameraList(const VidCameraList& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      cvidcamera_(from.cvidcamera_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:VidCameraList)
}

void VidCameraList::SharedCtor() {
  _cached_size_ = 0;
}

VidCameraList::~VidCameraList() {
  // @@protoc_insertion_point(destructor:VidCameraList)
  SharedDtor();
}

void VidCameraList::SharedDtor() {
}

void VidCameraList::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* VidCameraList::descriptor() {
  protobuf_vidconf_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_vidconf_2eproto::file_level_metadata[4].descriptor;
}

const VidCameraList& VidCameraList::default_instance() {
  protobuf_vidconf_2eproto::InitDefaults();
  return *internal_default_instance();
}

VidCameraList* VidCameraList::New(::google::protobuf::Arena* arena) const {
  VidCameraList* n = new VidCameraList;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void VidCameraList::Clear() {
// @@protoc_insertion_point(message_clear_start:VidCameraList)
  cvidcamera_.Clear();
}

bool VidCameraList::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:VidCameraList)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .VidCamera cVidCamera = 1;
      case 1: {
        if (tag == 10u) {
          DO_(input->IncrementRecursionDepth());
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtualNoRecursionDepth(
                input, add_cvidcamera()));
        } else {
          goto handle_unusual;
        }
        input->UnsafeDecrementRecursionDepth();
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:VidCameraList)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:VidCameraList)
  return false;
#undef DO_
}

void VidCameraList::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:VidCameraList)
  // repeated .VidCamera cVidCamera = 1;
  for (unsigned int i = 0, n = this->cvidcamera_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->cvidcamera(i), output);
  }

  // @@protoc_insertion_point(serialize_end:VidCameraList)
}

::google::protobuf::uint8* VidCameraList::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic;  // Unused
  // @@protoc_insertion_point(serialize_to_array_start:VidCameraList)
  // repeated .VidCamera cVidCamera = 1;
  for (unsigned int i = 0, n = this->cvidcamera_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1, this->cvidcamera(i), false, target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:VidCameraList)
  return target;
}

size_t VidCameraList::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:VidCameraList)
  size_t total_size = 0;

  // repeated .VidCamera cVidCamera = 1;
  {
    unsigned int count = this->cvidcamera_size();
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->cvidcamera(i));
    }
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void VidCameraList::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:VidCameraList)
  GOOGLE_DCHECK_NE(&from, this);
  const VidCameraList* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const VidCameraList>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:VidCameraList)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:VidCameraList)
    MergeFrom(*source);
  }
}

void VidCameraList::MergeFrom(const VidCameraList& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:VidCameraList)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  cvidcamera_.MergeFrom(from.cvidcamera_);
}

void VidCameraList::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:VidCameraList)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void VidCameraList::CopyFrom(const VidCameraList& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:VidCameraList)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool VidCameraList::IsInitialized() const {
  return true;
}

void VidCameraList::Swap(VidCameraList* other) {
  if (other == this) return;
  InternalSwap(other);
}
void VidCameraList::InternalSwap(VidCameraList* other) {
  cvidcamera_.UnsafeArenaSwap(&other->cvidcamera_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata VidCameraList::GetMetadata() const {
  protobuf_vidconf_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_vidconf_2eproto::file_level_metadata[4];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// VidCameraList

// repeated .VidCamera cVidCamera = 1;
int VidCameraList::cvidcamera_size() const {
  return cvidcamera_.size();
}
void VidCameraList::clear_cvidcamera() {
  cvidcamera_.Clear();
}
const ::VidCamera& VidCameraList::cvidcamera(int index) const {
  // @@protoc_insertion_point(field_get:VidCameraList.cVidCamera)
  return cvidcamera_.Get(index);
}
::VidCamera* VidCameraList::mutable_cvidcamera(int index) {
  // @@protoc_insertion_point(field_mutable:VidCameraList.cVidCamera)
  return cvidcamera_.Mutable(index);
}
::VidCamera* VidCameraList::add_cvidcamera() {
  // @@protoc_insertion_point(field_add:VidCameraList.cVidCamera)
  return cvidcamera_.Add();
}
::google::protobuf::RepeatedPtrField< ::VidCamera >*
VidCameraList::mutable_cvidcamera() {
  // @@protoc_insertion_point(field_mutable_list:VidCameraList.cVidCamera)
  return &cvidcamera_;
}
const ::google::protobuf::RepeatedPtrField< ::VidCamera >&
VidCameraList::cvidcamera() const {
  // @@protoc_insertion_point(field_list:VidCameraList.cVidCamera)
  return cvidcamera_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int VidDisk::kStrIdFieldNumber;
const int VidDisk::kStrPathFieldNumber;
const int VidDisk::kNTotalSizeFieldNumber;
const int VidDisk::kNFreeSizeFieldNumber;
const int VidDisk::kNStorLimitFieldNumber;
const int VidDisk::kNStorUsedFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

VidDisk::VidDisk()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_vidconf_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:VidDisk)
}
VidDisk::VidDisk(const VidDisk& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  strid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.strid().size() > 0) {
    strid_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strid_);
  }
  strpath_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.strpath().size() > 0) {
    strpath_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strpath_);
  }
  ::memcpy(&ntotalsize_, &from.ntotalsize_,
    reinterpret_cast<char*>(&nstorused_) -
    reinterpret_cast<char*>(&ntotalsize_) + sizeof(nstorused_));
  // @@protoc_insertion_point(copy_constructor:VidDisk)
}

void VidDisk::SharedCtor() {
  strid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  strpath_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&ntotalsize_, 0, reinterpret_cast<char*>(&nstorused_) -
    reinterpret_cast<char*>(&ntotalsize_) + sizeof(nstorused_));
  _cached_size_ = 0;
}

VidDisk::~VidDisk() {
  // @@protoc_insertion_point(destructor:VidDisk)
  SharedDtor();
}

void VidDisk::SharedDtor() {
  strid_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  strpath_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void VidDisk::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* VidDisk::descriptor() {
  protobuf_vidconf_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_vidconf_2eproto::file_level_metadata[5].descriptor;
}

const VidDisk& VidDisk::default_instance() {
  protobuf_vidconf_2eproto::InitDefaults();
  return *internal_default_instance();
}

VidDisk* VidDisk::New(::google::protobuf::Arena* arena) const {
  VidDisk* n = new VidDisk;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void VidDisk::Clear() {
// @@protoc_insertion_point(message_clear_start:VidDisk)
  strid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  strpath_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&ntotalsize_, 0, reinterpret_cast<char*>(&nstorused_) -
    reinterpret_cast<char*>(&ntotalsize_) + sizeof(nstorused_));
}

bool VidDisk::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:VidDisk)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string strId = 1;
      case 1: {
        if (tag == 10u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_strid()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->strid().data(), this->strid().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "VidDisk.strId"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string strPath = 2;
      case 2: {
        if (tag == 18u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_strpath()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->strpath().data(), this->strpath().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "VidDisk.strPath"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int64 nTotalSize = 3;
      case 3: {
        if (tag == 24u) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &ntotalsize_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int64 nFreeSize = 4;
      case 4: {
        if (tag == 32u) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &nfreesize_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int64 nStorLimit = 5;
      case 5: {
        if (tag == 40u) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &nstorlimit_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int64 nStorUsed = 6;
      case 6: {
        if (tag == 48u) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &nstorused_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:VidDisk)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:VidDisk)
  return false;
#undef DO_
}

void VidDisk::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:VidDisk)
  // string strId = 1;
  if (this->strid().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strid().data(), this->strid().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "VidDisk.strId");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->strid(), output);
  }

  // string strPath = 2;
  if (this->strpath().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strpath().data(), this->strpath().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "VidDisk.strPath");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->strpath(), output);
  }

  // int64 nTotalSize = 3;
  if (this->ntotalsize() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(3, this->ntotalsize(), output);
  }

  // int64 nFreeSize = 4;
  if (this->nfreesize() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(4, this->nfreesize(), output);
  }

  // int64 nStorLimit = 5;
  if (this->nstorlimit() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(5, this->nstorlimit(), output);
  }

  // int64 nStorUsed = 6;
  if (this->nstorused() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(6, this->nstorused(), output);
  }

  // @@protoc_insertion_point(serialize_end:VidDisk)
}

::google::protobuf::uint8* VidDisk::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic;  // Unused
  // @@protoc_insertion_point(serialize_to_array_start:VidDisk)
  // string strId = 1;
  if (this->strid().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strid().data(), this->strid().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "VidDisk.strId");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->strid(), target);
  }

  // string strPath = 2;
  if (this->strpath().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strpath().data(), this->strpath().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "VidDisk.strPath");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->strpath(), target);
  }

  // int64 nTotalSize = 3;
  if (this->ntotalsize() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(3, this->ntotalsize(), target);
  }

  // int64 nFreeSize = 4;
  if (this->nfreesize() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(4, this->nfreesize(), target);
  }

  // int64 nStorLimit = 5;
  if (this->nstorlimit() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(5, this->nstorlimit(), target);
  }

  // int64 nStorUsed = 6;
  if (this->nstorused() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(6, this->nstorused(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:VidDisk)
  return target;
}

size_t VidDisk::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:VidDisk)
  size_t total_size = 0;

  // string strId = 1;
  if (this->strid().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->strid());
  }

  // string strPath = 2;
  if (this->strpath().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->strpath());
  }

  // int64 nTotalSize = 3;
  if (this->ntotalsize() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->ntotalsize());
  }

  // int64 nFreeSize = 4;
  if (this->nfreesize() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->nfreesize());
  }

  // int64 nStorLimit = 5;
  if (this->nstorlimit() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->nstorlimit());
  }

  // int64 nStorUsed = 6;
  if (this->nstorused() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->nstorused());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void VidDisk::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:VidDisk)
  GOOGLE_DCHECK_NE(&from, this);
  const VidDisk* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const VidDisk>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:VidDisk)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:VidDisk)
    MergeFrom(*source);
  }
}

void VidDisk::MergeFrom(const VidDisk& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:VidDisk)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.strid().size() > 0) {

    strid_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strid_);
  }
  if (from.strpath().size() > 0) {

    strpath_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strpath_);
  }
  if (from.ntotalsize() != 0) {
    set_ntotalsize(from.ntotalsize());
  }
  if (from.nfreesize() != 0) {
    set_nfreesize(from.nfreesize());
  }
  if (from.nstorlimit() != 0) {
    set_nstorlimit(from.nstorlimit());
  }
  if (from.nstorused() != 0) {
    set_nstorused(from.nstorused());
  }
}

void VidDisk::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:VidDisk)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void VidDisk::CopyFrom(const VidDisk& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:VidDisk)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool VidDisk::IsInitialized() const {
  return true;
}

void VidDisk::Swap(VidDisk* other) {
  if (other == this) return;
  InternalSwap(other);
}
void VidDisk::InternalSwap(VidDisk* other) {
  strid_.Swap(&other->strid_);
  strpath_.Swap(&other->strpath_);
  std::swap(ntotalsize_, other->ntotalsize_);
  std::swap(nfreesize_, other->nfreesize_);
  std::swap(nstorlimit_, other->nstorlimit_);
  std::swap(nstorused_, other->nstorused_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata VidDisk::GetMetadata() const {
  protobuf_vidconf_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_vidconf_2eproto::file_level_metadata[5];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// VidDisk

// string strId = 1;
void VidDisk::clear_strid() {
  strid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& VidDisk::strid() const {
  // @@protoc_insertion_point(field_get:VidDisk.strId)
  return strid_.GetNoArena();
}
void VidDisk::set_strid(const ::std::string& value) {
  
  strid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:VidDisk.strId)
}
#if LANG_CXX11
void VidDisk::set_strid(::std::string&& value) {
  
  strid_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:VidDisk.strId)
}
#endif
void VidDisk::set_strid(const char* value) {
  
  strid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:VidDisk.strId)
}
void VidDisk::set_strid(const char* value, size_t size) {
  
  strid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:VidDisk.strId)
}
::std::string* VidDisk::mutable_strid() {
  
  // @@protoc_insertion_point(field_mutable:VidDisk.strId)
  return strid_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* VidDisk::release_strid() {
  // @@protoc_insertion_point(field_release:VidDisk.strId)
  
  return strid_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void VidDisk::set_allocated_strid(::std::string* strid) {
  if (strid != NULL) {
    
  } else {
    
  }
  strid_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), strid);
  // @@protoc_insertion_point(field_set_allocated:VidDisk.strId)
}

// string strPath = 2;
void VidDisk::clear_strpath() {
  strpath_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& VidDisk::strpath() const {
  // @@protoc_insertion_point(field_get:VidDisk.strPath)
  return strpath_.GetNoArena();
}
void VidDisk::set_strpath(const ::std::string& value) {
  
  strpath_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:VidDisk.strPath)
}
#if LANG_CXX11
void VidDisk::set_strpath(::std::string&& value) {
  
  strpath_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:VidDisk.strPath)
}
#endif
void VidDisk::set_strpath(const char* value) {
  
  strpath_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:VidDisk.strPath)
}
void VidDisk::set_strpath(const char* value, size_t size) {
  
  strpath_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:VidDisk.strPath)
}
::std::string* VidDisk::mutable_strpath() {
  
  // @@protoc_insertion_point(field_mutable:VidDisk.strPath)
  return strpath_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* VidDisk::release_strpath() {
  // @@protoc_insertion_point(field_release:VidDisk.strPath)
  
  return strpath_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void VidDisk::set_allocated_strpath(::std::string* strpath) {
  if (strpath != NULL) {
    
  } else {
    
  }
  strpath_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), strpath);
  // @@protoc_insertion_point(field_set_allocated:VidDisk.strPath)
}

// int64 nTotalSize = 3;
void VidDisk::clear_ntotalsize() {
  ntotalsize_ = GOOGLE_LONGLONG(0);
}
::google::protobuf::int64 VidDisk::ntotalsize() const {
  // @@protoc_insertion_point(field_get:VidDisk.nTotalSize)
  return ntotalsize_;
}
void VidDisk::set_ntotalsize(::google::protobuf::int64 value) {
  
  ntotalsize_ = value;
  // @@protoc_insertion_point(field_set:VidDisk.nTotalSize)
}

// int64 nFreeSize = 4;
void VidDisk::clear_nfreesize() {
  nfreesize_ = GOOGLE_LONGLONG(0);
}
::google::protobuf::int64 VidDisk::nfreesize() const {
  // @@protoc_insertion_point(field_get:VidDisk.nFreeSize)
  return nfreesize_;
}
void VidDisk::set_nfreesize(::google::protobuf::int64 value) {
  
  nfreesize_ = value;
  // @@protoc_insertion_point(field_set:VidDisk.nFreeSize)
}

// int64 nStorLimit = 5;
void VidDisk::clear_nstorlimit() {
  nstorlimit_ = GOOGLE_LONGLONG(0);
}
::google::protobuf::int64 VidDisk::nstorlimit() const {
  // @@protoc_insertion_point(field_get:VidDisk.nStorLimit)
  return nstorlimit_;
}
void VidDisk::set_nstorlimit(::google::protobuf::int64 value) {
  
  nstorlimit_ = value;
  // @@protoc_insertion_point(field_set:VidDisk.nStorLimit)
}

// int64 nStorUsed = 6;
void VidDisk::clear_nstorused() {
  nstorused_ = GOOGLE_LONGLONG(0);
}
::google::protobuf::int64 VidDisk::nstorused() const {
  // @@protoc_insertion_point(field_get:VidDisk.nStorUsed)
  return nstorused_;
}
void VidDisk::set_nstorused(::google::protobuf::int64 value) {
  
  nstorused_ = value;
  // @@protoc_insertion_point(field_set:VidDisk.nStorUsed)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int VidDiskList::kCVidDiskFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

VidDiskList::VidDiskList()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_vidconf_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:VidDiskList)
}
VidDiskList::VidDiskList(const VidDiskList& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      cviddisk_(from.cviddisk_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:VidDiskList)
}

void VidDiskList::SharedCtor() {
  _cached_size_ = 0;
}

VidDiskList::~VidDiskList() {
  // @@protoc_insertion_point(destructor:VidDiskList)
  SharedDtor();
}

void VidDiskList::SharedDtor() {
}

void VidDiskList::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* VidDiskList::descriptor() {
  protobuf_vidconf_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_vidconf_2eproto::file_level_metadata[6].descriptor;
}

const VidDiskList& VidDiskList::default_instance() {
  protobuf_vidconf_2eproto::InitDefaults();
  return *internal_default_instance();
}

VidDiskList* VidDiskList::New(::google::protobuf::Arena* arena) const {
  VidDiskList* n = new VidDiskList;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void VidDiskList::Clear() {
// @@protoc_insertion_point(message_clear_start:VidDiskList)
  cviddisk_.Clear();
}

bool VidDiskList::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:VidDiskList)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .VidDisk cVidDisk = 1;
      case 1: {
        if (tag == 10u) {
          DO_(input->IncrementRecursionDepth());
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtualNoRecursionDepth(
                input, add_cviddisk()));
        } else {
          goto handle_unusual;
        }
        input->UnsafeDecrementRecursionDepth();
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:VidDiskList)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:VidDiskList)
  return false;
#undef DO_
}

void VidDiskList::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:VidDiskList)
  // repeated .VidDisk cVidDisk = 1;
  for (unsigned int i = 0, n = this->cviddisk_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->cviddisk(i), output);
  }

  // @@protoc_insertion_point(serialize_end:VidDiskList)
}

::google::protobuf::uint8* VidDiskList::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic;  // Unused
  // @@protoc_insertion_point(serialize_to_array_start:VidDiskList)
  // repeated .VidDisk cVidDisk = 1;
  for (unsigned int i = 0, n = this->cviddisk_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1, this->cviddisk(i), false, target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:VidDiskList)
  return target;
}

size_t VidDiskList::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:VidDiskList)
  size_t total_size = 0;

  // repeated .VidDisk cVidDisk = 1;
  {
    unsigned int count = this->cviddisk_size();
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->cviddisk(i));
    }
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void VidDiskList::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:VidDiskList)
  GOOGLE_DCHECK_NE(&from, this);
  const VidDiskList* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const VidDiskList>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:VidDiskList)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:VidDiskList)
    MergeFrom(*source);
  }
}

void VidDiskList::MergeFrom(const VidDiskList& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:VidDiskList)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  cviddisk_.MergeFrom(from.cviddisk_);
}

void VidDiskList::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:VidDiskList)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void VidDiskList::CopyFrom(const VidDiskList& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:VidDiskList)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool VidDiskList::IsInitialized() const {
  return true;
}

void VidDiskList::Swap(VidDiskList* other) {
  if (other == this) return;
  InternalSwap(other);
}
void VidDiskList::InternalSwap(VidDiskList* other) {
  cviddisk_.UnsafeArenaSwap(&other->cviddisk_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata VidDiskList::GetMetadata() const {
  protobuf_vidconf_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_vidconf_2eproto::file_level_metadata[6];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// VidDiskList

// repeated .VidDisk cVidDisk = 1;
int VidDiskList::cviddisk_size() const {
  return cviddisk_.size();
}
void VidDiskList::clear_cviddisk() {
  cviddisk_.Clear();
}
const ::VidDisk& VidDiskList::cviddisk(int index) const {
  // @@protoc_insertion_point(field_get:VidDiskList.cVidDisk)
  return cviddisk_.Get(index);
}
::VidDisk* VidDiskList::mutable_cviddisk(int index) {
  // @@protoc_insertion_point(field_mutable:VidDiskList.cVidDisk)
  return cviddisk_.Mutable(index);
}
::VidDisk* VidDiskList::add_cviddisk() {
  // @@protoc_insertion_point(field_add:VidDiskList.cVidDisk)
  return cviddisk_.Add();
}
::google::protobuf::RepeatedPtrField< ::VidDisk >*
VidDiskList::mutable_cviddisk() {
  // @@protoc_insertion_point(field_mutable_list:VidDiskList.cVidDisk)
  return &cviddisk_;
}
const ::google::protobuf::RepeatedPtrField< ::VidDisk >&
VidDiskList::cviddisk() const {
  // @@protoc_insertion_point(field_list:VidDiskList.cVidDisk)
  return cviddisk_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int VidHDFSConf::kStrNameNodeFieldNumber;
const int VidHDFSConf::kStrPortFieldNumber;
const int VidHDFSConf::kStrUserFieldNumber;
const int VidHDFSConf::kStrPasswdFieldNumber;
const int VidHDFSConf::kNFileIntervalFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

VidHDFSConf::VidHDFSConf()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_vidconf_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:VidHDFSConf)
}
VidHDFSConf::VidHDFSConf(const VidHDFSConf& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  strnamenode_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.strnamenode().size() > 0) {
    strnamenode_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strnamenode_);
  }
  strport_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.strport().size() > 0) {
    strport_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strport_);
  }
  struser_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.struser().size() > 0) {
    struser_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.struser_);
  }
  strpasswd_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.strpasswd().size() > 0) {
    strpasswd_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strpasswd_);
  }
  nfileinterval_ = from.nfileinterval_;
  // @@protoc_insertion_point(copy_constructor:VidHDFSConf)
}

void VidHDFSConf::SharedCtor() {
  strnamenode_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  strport_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  struser_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  strpasswd_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  nfileinterval_ = 0;
  _cached_size_ = 0;
}

VidHDFSConf::~VidHDFSConf() {
  // @@protoc_insertion_point(destructor:VidHDFSConf)
  SharedDtor();
}

void VidHDFSConf::SharedDtor() {
  strnamenode_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  strport_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  struser_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  strpasswd_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void VidHDFSConf::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* VidHDFSConf::descriptor() {
  protobuf_vidconf_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_vidconf_2eproto::file_level_metadata[7].descriptor;
}

const VidHDFSConf& VidHDFSConf::default_instance() {
  protobuf_vidconf_2eproto::InitDefaults();
  return *internal_default_instance();
}

VidHDFSConf* VidHDFSConf::New(::google::protobuf::Arena* arena) const {
  VidHDFSConf* n = new VidHDFSConf;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void VidHDFSConf::Clear() {
// @@protoc_insertion_point(message_clear_start:VidHDFSConf)
  strnamenode_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  strport_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  struser_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  strpasswd_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  nfileinterval_ = 0;
}

bool VidHDFSConf::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:VidHDFSConf)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string strNameNode = 1;
      case 1: {
        if (tag == 10u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_strnamenode()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->strnamenode().data(), this->strnamenode().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "VidHDFSConf.strNameNode"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string strPort = 2;
      case 2: {
        if (tag == 18u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_strport()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->strport().data(), this->strport().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "VidHDFSConf.strPort"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string strUser = 3;
      case 3: {
        if (tag == 26u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_struser()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->struser().data(), this->struser().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "VidHDFSConf.strUser"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string strPasswd = 4;
      case 4: {
        if (tag == 34u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_strpasswd()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->strpasswd().data(), this->strpasswd().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "VidHDFSConf.strPasswd"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 nFileInterval = 5;
      case 5: {
        if (tag == 40u) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &nfileinterval_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:VidHDFSConf)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:VidHDFSConf)
  return false;
#undef DO_
}

void VidHDFSConf::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:VidHDFSConf)
  // string strNameNode = 1;
  if (this->strnamenode().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strnamenode().data(), this->strnamenode().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "VidHDFSConf.strNameNode");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->strnamenode(), output);
  }

  // string strPort = 2;
  if (this->strport().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strport().data(), this->strport().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "VidHDFSConf.strPort");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->strport(), output);
  }

  // string strUser = 3;
  if (this->struser().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->struser().data(), this->struser().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "VidHDFSConf.strUser");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->struser(), output);
  }

  // string strPasswd = 4;
  if (this->strpasswd().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strpasswd().data(), this->strpasswd().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "VidHDFSConf.strPasswd");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      4, this->strpasswd(), output);
  }

  // int32 nFileInterval = 5;
  if (this->nfileinterval() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(5, this->nfileinterval(), output);
  }

  // @@protoc_insertion_point(serialize_end:VidHDFSConf)
}

::google::protobuf::uint8* VidHDFSConf::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic;  // Unused
  // @@protoc_insertion_point(serialize_to_array_start:VidHDFSConf)
  // string strNameNode = 1;
  if (this->strnamenode().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strnamenode().data(), this->strnamenode().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "VidHDFSConf.strNameNode");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->strnamenode(), target);
  }

  // string strPort = 2;
  if (this->strport().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strport().data(), this->strport().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "VidHDFSConf.strPort");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->strport(), target);
  }

  // string strUser = 3;
  if (this->struser().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->struser().data(), this->struser().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "VidHDFSConf.strUser");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->struser(), target);
  }

  // string strPasswd = 4;
  if (this->strpasswd().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strpasswd().data(), this->strpasswd().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "VidHDFSConf.strPasswd");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        4, this->strpasswd(), target);
  }

  // int32 nFileInterval = 5;
  if (this->nfileinterval() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(5, this->nfileinterval(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:VidHDFSConf)
  return target;
}

size_t VidHDFSConf::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:VidHDFSConf)
  size_t total_size = 0;

  // string strNameNode = 1;
  if (this->strnamenode().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->strnamenode());
  }

  // string strPort = 2;
  if (this->strport().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->strport());
  }

  // string strUser = 3;
  if (this->struser().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->struser());
  }

  // string strPasswd = 4;
  if (this->strpasswd().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->strpasswd());
  }

  // int32 nFileInterval = 5;
  if (this->nfileinterval() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->nfileinterval());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void VidHDFSConf::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:VidHDFSConf)
  GOOGLE_DCHECK_NE(&from, this);
  const VidHDFSConf* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const VidHDFSConf>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:VidHDFSConf)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:VidHDFSConf)
    MergeFrom(*source);
  }
}

void VidHDFSConf::MergeFrom(const VidHDFSConf& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:VidHDFSConf)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.strnamenode().size() > 0) {

    strnamenode_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strnamenode_);
  }
  if (from.strport().size() > 0) {

    strport_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strport_);
  }
  if (from.struser().size() > 0) {

    struser_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.struser_);
  }
  if (from.strpasswd().size() > 0) {

    strpasswd_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strpasswd_);
  }
  if (from.nfileinterval() != 0) {
    set_nfileinterval(from.nfileinterval());
  }
}

void VidHDFSConf::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:VidHDFSConf)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void VidHDFSConf::CopyFrom(const VidHDFSConf& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:VidHDFSConf)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool VidHDFSConf::IsInitialized() const {
  return true;
}

void VidHDFSConf::Swap(VidHDFSConf* other) {
  if (other == this) return;
  InternalSwap(other);
}
void VidHDFSConf::InternalSwap(VidHDFSConf* other) {
  strnamenode_.Swap(&other->strnamenode_);
  strport_.Swap(&other->strport_);
  struser_.Swap(&other->struser_);
  strpasswd_.Swap(&other->strpasswd_);
  std::swap(nfileinterval_, other->nfileinterval_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata VidHDFSConf::GetMetadata() const {
  protobuf_vidconf_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_vidconf_2eproto::file_level_metadata[7];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// VidHDFSConf

// string strNameNode = 1;
void VidHDFSConf::clear_strnamenode() {
  strnamenode_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& VidHDFSConf::strnamenode() const {
  // @@protoc_insertion_point(field_get:VidHDFSConf.strNameNode)
  return strnamenode_.GetNoArena();
}
void VidHDFSConf::set_strnamenode(const ::std::string& value) {
  
  strnamenode_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:VidHDFSConf.strNameNode)
}
#if LANG_CXX11
void VidHDFSConf::set_strnamenode(::std::string&& value) {
  
  strnamenode_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:VidHDFSConf.strNameNode)
}
#endif
void VidHDFSConf::set_strnamenode(const char* value) {
  
  strnamenode_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:VidHDFSConf.strNameNode)
}
void VidHDFSConf::set_strnamenode(const char* value, size_t size) {
  
  strnamenode_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:VidHDFSConf.strNameNode)
}
::std::string* VidHDFSConf::mutable_strnamenode() {
  
  // @@protoc_insertion_point(field_mutable:VidHDFSConf.strNameNode)
  return strnamenode_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* VidHDFSConf::release_strnamenode() {
  // @@protoc_insertion_point(field_release:VidHDFSConf.strNameNode)
  
  return strnamenode_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void VidHDFSConf::set_allocated_strnamenode(::std::string* strnamenode) {
  if (strnamenode != NULL) {
    
  } else {
    
  }
  strnamenode_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), strnamenode);
  // @@protoc_insertion_point(field_set_allocated:VidHDFSConf.strNameNode)
}

// string strPort = 2;
void VidHDFSConf::clear_strport() {
  strport_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& VidHDFSConf::strport() const {
  // @@protoc_insertion_point(field_get:VidHDFSConf.strPort)
  return strport_.GetNoArena();
}
void VidHDFSConf::set_strport(const ::std::string& value) {
  
  strport_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:VidHDFSConf.strPort)
}
#if LANG_CXX11
void VidHDFSConf::set_strport(::std::string&& value) {
  
  strport_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:VidHDFSConf.strPort)
}
#endif
void VidHDFSConf::set_strport(const char* value) {
  
  strport_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:VidHDFSConf.strPort)
}
void VidHDFSConf::set_strport(const char* value, size_t size) {
  
  strport_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:VidHDFSConf.strPort)
}
::std::string* VidHDFSConf::mutable_strport() {
  
  // @@protoc_insertion_point(field_mutable:VidHDFSConf.strPort)
  return strport_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* VidHDFSConf::release_strport() {
  // @@protoc_insertion_point(field_release:VidHDFSConf.strPort)
  
  return strport_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void VidHDFSConf::set_allocated_strport(::std::string* strport) {
  if (strport != NULL) {
    
  } else {
    
  }
  strport_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), strport);
  // @@protoc_insertion_point(field_set_allocated:VidHDFSConf.strPort)
}

// string strUser = 3;
void VidHDFSConf::clear_struser() {
  struser_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& VidHDFSConf::struser() const {
  // @@protoc_insertion_point(field_get:VidHDFSConf.strUser)
  return struser_.GetNoArena();
}
void VidHDFSConf::set_struser(const ::std::string& value) {
  
  struser_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:VidHDFSConf.strUser)
}
#if LANG_CXX11
void VidHDFSConf::set_struser(::std::string&& value) {
  
  struser_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:VidHDFSConf.strUser)
}
#endif
void VidHDFSConf::set_struser(const char* value) {
  
  struser_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:VidHDFSConf.strUser)
}
void VidHDFSConf::set_struser(const char* value, size_t size) {
  
  struser_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:VidHDFSConf.strUser)
}
::std::string* VidHDFSConf::mutable_struser() {
  
  // @@protoc_insertion_point(field_mutable:VidHDFSConf.strUser)
  return struser_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* VidHDFSConf::release_struser() {
  // @@protoc_insertion_point(field_release:VidHDFSConf.strUser)
  
  return struser_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void VidHDFSConf::set_allocated_struser(::std::string* struser) {
  if (struser != NULL) {
    
  } else {
    
  }
  struser_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), struser);
  // @@protoc_insertion_point(field_set_allocated:VidHDFSConf.strUser)
}

// string strPasswd = 4;
void VidHDFSConf::clear_strpasswd() {
  strpasswd_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& VidHDFSConf::strpasswd() const {
  // @@protoc_insertion_point(field_get:VidHDFSConf.strPasswd)
  return strpasswd_.GetNoArena();
}
void VidHDFSConf::set_strpasswd(const ::std::string& value) {
  
  strpasswd_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:VidHDFSConf.strPasswd)
}
#if LANG_CXX11
void VidHDFSConf::set_strpasswd(::std::string&& value) {
  
  strpasswd_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:VidHDFSConf.strPasswd)
}
#endif
void VidHDFSConf::set_strpasswd(const char* value) {
  
  strpasswd_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:VidHDFSConf.strPasswd)
}
void VidHDFSConf::set_strpasswd(const char* value, size_t size) {
  
  strpasswd_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:VidHDFSConf.strPasswd)
}
::std::string* VidHDFSConf::mutable_strpasswd() {
  
  // @@protoc_insertion_point(field_mutable:VidHDFSConf.strPasswd)
  return strpasswd_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* VidHDFSConf::release_strpasswd() {
  // @@protoc_insertion_point(field_release:VidHDFSConf.strPasswd)
  
  return strpasswd_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void VidHDFSConf::set_allocated_strpasswd(::std::string* strpasswd) {
  if (strpasswd != NULL) {
    
  } else {
    
  }
  strpasswd_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), strpasswd);
  // @@protoc_insertion_point(field_set_allocated:VidHDFSConf.strPasswd)
}

// int32 nFileInterval = 5;
void VidHDFSConf::clear_nfileinterval() {
  nfileinterval_ = 0;
}
::google::protobuf::int32 VidHDFSConf::nfileinterval() const {
  // @@protoc_insertion_point(field_get:VidHDFSConf.nFileInterval)
  return nfileinterval_;
}
void VidHDFSConf::set_nfileinterval(::google::protobuf::int32 value) {
  
  nfileinterval_ = value;
  // @@protoc_insertion_point(field_set:VidHDFSConf.nFileInterval)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int VidCameraId::kStrStorIdFieldNumber;
const int VidCameraId::kStrCameraIdFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

VidCameraId::VidCameraId()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_vidconf_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:VidCameraId)
}
VidCameraId::VidCameraId(const VidCameraId& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  strstorid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.strstorid().size() > 0) {
    strstorid_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strstorid_);
  }
  strcameraid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.strcameraid().size() > 0) {
    strcameraid_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strcameraid_);
  }
  // @@protoc_insertion_point(copy_constructor:VidCameraId)
}

void VidCameraId::SharedCtor() {
  strstorid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  strcameraid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _cached_size_ = 0;
}

VidCameraId::~VidCameraId() {
  // @@protoc_insertion_point(destructor:VidCameraId)
  SharedDtor();
}

void VidCameraId::SharedDtor() {
  strstorid_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  strcameraid_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void VidCameraId::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* VidCameraId::descriptor() {
  protobuf_vidconf_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_vidconf_2eproto::file_level_metadata[8].descriptor;
}

const VidCameraId& VidCameraId::default_instance() {
  protobuf_vidconf_2eproto::InitDefaults();
  return *internal_default_instance();
}

VidCameraId* VidCameraId::New(::google::protobuf::Arena* arena) const {
  VidCameraId* n = new VidCameraId;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void VidCameraId::Clear() {
// @@protoc_insertion_point(message_clear_start:VidCameraId)
  strstorid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  strcameraid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

bool VidCameraId::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:VidCameraId)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string strStorId = 1;
      case 1: {
        if (tag == 10u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_strstorid()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->strstorid().data(), this->strstorid().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "VidCameraId.strStorId"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string strCameraId = 2;
      case 2: {
        if (tag == 18u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_strcameraid()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->strcameraid().data(), this->strcameraid().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "VidCameraId.strCameraId"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:VidCameraId)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:VidCameraId)
  return false;
#undef DO_
}

void VidCameraId::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:VidCameraId)
  // string strStorId = 1;
  if (this->strstorid().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strstorid().data(), this->strstorid().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "VidCameraId.strStorId");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->strstorid(), output);
  }

  // string strCameraId = 2;
  if (this->strcameraid().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strcameraid().data(), this->strcameraid().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "VidCameraId.strCameraId");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->strcameraid(), output);
  }

  // @@protoc_insertion_point(serialize_end:VidCameraId)
}

::google::protobuf::uint8* VidCameraId::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic;  // Unused
  // @@protoc_insertion_point(serialize_to_array_start:VidCameraId)
  // string strStorId = 1;
  if (this->strstorid().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strstorid().data(), this->strstorid().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "VidCameraId.strStorId");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->strstorid(), target);
  }

  // string strCameraId = 2;
  if (this->strcameraid().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strcameraid().data(), this->strcameraid().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "VidCameraId.strCameraId");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->strcameraid(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:VidCameraId)
  return target;
}

size_t VidCameraId::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:VidCameraId)
  size_t total_size = 0;

  // string strStorId = 1;
  if (this->strstorid().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->strstorid());
  }

  // string strCameraId = 2;
  if (this->strcameraid().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->strcameraid());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void VidCameraId::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:VidCameraId)
  GOOGLE_DCHECK_NE(&from, this);
  const VidCameraId* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const VidCameraId>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:VidCameraId)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:VidCameraId)
    MergeFrom(*source);
  }
}

void VidCameraId::MergeFrom(const VidCameraId& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:VidCameraId)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.strstorid().size() > 0) {

    strstorid_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strstorid_);
  }
  if (from.strcameraid().size() > 0) {

    strcameraid_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strcameraid_);
  }
}

void VidCameraId::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:VidCameraId)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void VidCameraId::CopyFrom(const VidCameraId& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:VidCameraId)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool VidCameraId::IsInitialized() const {
  return true;
}

void VidCameraId::Swap(VidCameraId* other) {
  if (other == this) return;
  InternalSwap(other);
}
void VidCameraId::InternalSwap(VidCameraId* other) {
  strstorid_.Swap(&other->strstorid_);
  strcameraid_.Swap(&other->strcameraid_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata VidCameraId::GetMetadata() const {
  protobuf_vidconf_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_vidconf_2eproto::file_level_metadata[8];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// VidCameraId

// string strStorId = 1;
void VidCameraId::clear_strstorid() {
  strstorid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& VidCameraId::strstorid() const {
  // @@protoc_insertion_point(field_get:VidCameraId.strStorId)
  return strstorid_.GetNoArena();
}
void VidCameraId::set_strstorid(const ::std::string& value) {
  
  strstorid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:VidCameraId.strStorId)
}
#if LANG_CXX11
void VidCameraId::set_strstorid(::std::string&& value) {
  
  strstorid_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:VidCameraId.strStorId)
}
#endif
void VidCameraId::set_strstorid(const char* value) {
  
  strstorid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:VidCameraId.strStorId)
}
void VidCameraId::set_strstorid(const char* value, size_t size) {
  
  strstorid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:VidCameraId.strStorId)
}
::std::string* VidCameraId::mutable_strstorid() {
  
  // @@protoc_insertion_point(field_mutable:VidCameraId.strStorId)
  return strstorid_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* VidCameraId::release_strstorid() {
  // @@protoc_insertion_point(field_release:VidCameraId.strStorId)
  
  return strstorid_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void VidCameraId::set_allocated_strstorid(::std::string* strstorid) {
  if (strstorid != NULL) {
    
  } else {
    
  }
  strstorid_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), strstorid);
  // @@protoc_insertion_point(field_set_allocated:VidCameraId.strStorId)
}

// string strCameraId = 2;
void VidCameraId::clear_strcameraid() {
  strcameraid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& VidCameraId::strcameraid() const {
  // @@protoc_insertion_point(field_get:VidCameraId.strCameraId)
  return strcameraid_.GetNoArena();
}
void VidCameraId::set_strcameraid(const ::std::string& value) {
  
  strcameraid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:VidCameraId.strCameraId)
}
#if LANG_CXX11
void VidCameraId::set_strcameraid(::std::string&& value) {
  
  strcameraid_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:VidCameraId.strCameraId)
}
#endif
void VidCameraId::set_strcameraid(const char* value) {
  
  strcameraid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:VidCameraId.strCameraId)
}
void VidCameraId::set_strcameraid(const char* value, size_t size) {
  
  strcameraid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:VidCameraId.strCameraId)
}
::std::string* VidCameraId::mutable_strcameraid() {
  
  // @@protoc_insertion_point(field_mutable:VidCameraId.strCameraId)
  return strcameraid_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* VidCameraId::release_strcameraid() {
  // @@protoc_insertion_point(field_release:VidCameraId.strCameraId)
  
  return strcameraid_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void VidCameraId::set_allocated_strcameraid(::std::string* strcameraid) {
  if (strcameraid != NULL) {
    
  } else {
    
  }
  strcameraid_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), strcameraid);
  // @@protoc_insertion_point(field_set_allocated:VidCameraId.strCameraId)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int VidClientConf::kNLangFieldNumber;
const int VidClientConf::kStrAdminPasswdFieldNumber;
const int VidClientConf::kBAutoLoginFieldNumber;
const int VidClientConf::kBAutoFullScreenFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

VidClientConf::VidClientConf()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_vidconf_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:VidClientConf)
}
VidClientConf::VidClientConf(const VidClientConf& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  stradminpasswd_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.stradminpasswd().size() > 0) {
    stradminpasswd_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.stradminpasswd_);
  }
  ::memcpy(&nlang_, &from.nlang_,
    reinterpret_cast<char*>(&bautofullscreen_) -
    reinterpret_cast<char*>(&nlang_) + sizeof(bautofullscreen_));
  // @@protoc_insertion_point(copy_constructor:VidClientConf)
}

void VidClientConf::SharedCtor() {
  stradminpasswd_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&nlang_, 0, reinterpret_cast<char*>(&bautofullscreen_) -
    reinterpret_cast<char*>(&nlang_) + sizeof(bautofullscreen_));
  _cached_size_ = 0;
}

VidClientConf::~VidClientConf() {
  // @@protoc_insertion_point(destructor:VidClientConf)
  SharedDtor();
}

void VidClientConf::SharedDtor() {
  stradminpasswd_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void VidClientConf::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* VidClientConf::descriptor() {
  protobuf_vidconf_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_vidconf_2eproto::file_level_metadata[9].descriptor;
}

const VidClientConf& VidClientConf::default_instance() {
  protobuf_vidconf_2eproto::InitDefaults();
  return *internal_default_instance();
}

VidClientConf* VidClientConf::New(::google::protobuf::Arena* arena) const {
  VidClientConf* n = new VidClientConf;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void VidClientConf::Clear() {
// @@protoc_insertion_point(message_clear_start:VidClientConf)
  stradminpasswd_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&nlang_, 0, reinterpret_cast<char*>(&bautofullscreen_) -
    reinterpret_cast<char*>(&nlang_) + sizeof(bautofullscreen_));
}

bool VidClientConf::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:VidClientConf)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .VidLanguage nLang = 1;
      case 1: {
        if (tag == 8u) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_nlang(static_cast< ::VidLanguage >(value));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string strAdminPasswd = 2;
      case 2: {
        if (tag == 18u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_stradminpasswd()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->stradminpasswd().data(), this->stradminpasswd().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "VidClientConf.strAdminPasswd"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool bAutoLogin = 3;
      case 3: {
        if (tag == 24u) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &bautologin_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool bAutoFullScreen = 4;
      case 4: {
        if (tag == 32u) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &bautofullscreen_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:VidClientConf)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:VidClientConf)
  return false;
#undef DO_
}

void VidClientConf::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:VidClientConf)
  // .VidLanguage nLang = 1;
  if (this->nlang() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->nlang(), output);
  }

  // string strAdminPasswd = 2;
  if (this->stradminpasswd().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->stradminpasswd().data(), this->stradminpasswd().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "VidClientConf.strAdminPasswd");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->stradminpasswd(), output);
  }

  // bool bAutoLogin = 3;
  if (this->bautologin() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(3, this->bautologin(), output);
  }

  // bool bAutoFullScreen = 4;
  if (this->bautofullscreen() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(4, this->bautofullscreen(), output);
  }

  // @@protoc_insertion_point(serialize_end:VidClientConf)
}

::google::protobuf::uint8* VidClientConf::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic;  // Unused
  // @@protoc_insertion_point(serialize_to_array_start:VidClientConf)
  // .VidLanguage nLang = 1;
  if (this->nlang() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->nlang(), target);
  }

  // string strAdminPasswd = 2;
  if (this->stradminpasswd().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->stradminpasswd().data(), this->stradminpasswd().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "VidClientConf.strAdminPasswd");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->stradminpasswd(), target);
  }

  // bool bAutoLogin = 3;
  if (this->bautologin() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(3, this->bautologin(), target);
  }

  // bool bAutoFullScreen = 4;
  if (this->bautofullscreen() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(4, this->bautofullscreen(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:VidClientConf)
  return target;
}

size_t VidClientConf::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:VidClientConf)
  size_t total_size = 0;

  // string strAdminPasswd = 2;
  if (this->stradminpasswd().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->stradminpasswd());
  }

  // .VidLanguage nLang = 1;
  if (this->nlang() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->nlang());
  }

  // bool bAutoLogin = 3;
  if (this->bautologin() != 0) {
    total_size += 1 + 1;
  }

  // bool bAutoFullScreen = 4;
  if (this->bautofullscreen() != 0) {
    total_size += 1 + 1;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void VidClientConf::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:VidClientConf)
  GOOGLE_DCHECK_NE(&from, this);
  const VidClientConf* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const VidClientConf>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:VidClientConf)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:VidClientConf)
    MergeFrom(*source);
  }
}

void VidClientConf::MergeFrom(const VidClientConf& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:VidClientConf)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.stradminpasswd().size() > 0) {

    stradminpasswd_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.stradminpasswd_);
  }
  if (from.nlang() != 0) {
    set_nlang(from.nlang());
  }
  if (from.bautologin() != 0) {
    set_bautologin(from.bautologin());
  }
  if (from.bautofullscreen() != 0) {
    set_bautofullscreen(from.bautofullscreen());
  }
}

void VidClientConf::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:VidClientConf)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void VidClientConf::CopyFrom(const VidClientConf& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:VidClientConf)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool VidClientConf::IsInitialized() const {
  return true;
}

void VidClientConf::Swap(VidClientConf* other) {
  if (other == this) return;
  InternalSwap(other);
}
void VidClientConf::InternalSwap(VidClientConf* other) {
  stradminpasswd_.Swap(&other->stradminpasswd_);
  std::swap(nlang_, other->nlang_);
  std::swap(bautologin_, other->bautologin_);
  std::swap(bautofullscreen_, other->bautofullscreen_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata VidClientConf::GetMetadata() const {
  protobuf_vidconf_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_vidconf_2eproto::file_level_metadata[9];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// VidClientConf

// .VidLanguage nLang = 1;
void VidClientConf::clear_nlang() {
  nlang_ = 0;
}
::VidLanguage VidClientConf::nlang() const {
  // @@protoc_insertion_point(field_get:VidClientConf.nLang)
  return static_cast< ::VidLanguage >(nlang_);
}
void VidClientConf::set_nlang(::VidLanguage value) {
  
  nlang_ = value;
  // @@protoc_insertion_point(field_set:VidClientConf.nLang)
}

// string strAdminPasswd = 2;
void VidClientConf::clear_stradminpasswd() {
  stradminpasswd_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& VidClientConf::stradminpasswd() const {
  // @@protoc_insertion_point(field_get:VidClientConf.strAdminPasswd)
  return stradminpasswd_.GetNoArena();
}
void VidClientConf::set_stradminpasswd(const ::std::string& value) {
  
  stradminpasswd_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:VidClientConf.strAdminPasswd)
}
#if LANG_CXX11
void VidClientConf::set_stradminpasswd(::std::string&& value) {
  
  stradminpasswd_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:VidClientConf.strAdminPasswd)
}
#endif
void VidClientConf::set_stradminpasswd(const char* value) {
  
  stradminpasswd_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:VidClientConf.strAdminPasswd)
}
void VidClientConf::set_stradminpasswd(const char* value, size_t size) {
  
  stradminpasswd_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:VidClientConf.strAdminPasswd)
}
::std::string* VidClientConf::mutable_stradminpasswd() {
  
  // @@protoc_insertion_point(field_mutable:VidClientConf.strAdminPasswd)
  return stradminpasswd_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* VidClientConf::release_stradminpasswd() {
  // @@protoc_insertion_point(field_release:VidClientConf.strAdminPasswd)
  
  return stradminpasswd_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void VidClientConf::set_allocated_stradminpasswd(::std::string* stradminpasswd) {
  if (stradminpasswd != NULL) {
    
  } else {
    
  }
  stradminpasswd_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), stradminpasswd);
  // @@protoc_insertion_point(field_set_allocated:VidClientConf.strAdminPasswd)
}

// bool bAutoLogin = 3;
void VidClientConf::clear_bautologin() {
  bautologin_ = false;
}
bool VidClientConf::bautologin() const {
  // @@protoc_insertion_point(field_get:VidClientConf.bAutoLogin)
  return bautologin_;
}
void VidClientConf::set_bautologin(bool value) {
  
  bautologin_ = value;
  // @@protoc_insertion_point(field_set:VidClientConf.bAutoLogin)
}

// bool bAutoFullScreen = 4;
void VidClientConf::clear_bautofullscreen() {
  bautofullscreen_ = false;
}
bool VidClientConf::bautofullscreen() const {
  // @@protoc_insertion_point(field_get:VidClientConf.bAutoFullScreen)
  return bautofullscreen_;
}
void VidClientConf::set_bautofullscreen(bool value) {
  
  bautofullscreen_ = value;
  // @@protoc_insertion_point(field_set:VidClientConf.bAutoFullScreen)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int VidStor::kStrIdFieldNumber;
const int VidStor::kStrNameFieldNumber;
const int VidStor::kStrIPFieldNumber;
const int VidStor::kStrPortFieldNumber;
const int VidStor::kStrUserFieldNumber;
const int VidStor::kStrPasswdFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

VidStor::VidStor()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_vidconf_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:VidStor)
}
VidStor::VidStor(const VidStor& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  strid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.strid().size() > 0) {
    strid_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strid_);
  }
  strname_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.strname().size() > 0) {
    strname_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strname_);
  }
  strip_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.strip().size() > 0) {
    strip_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strip_);
  }
  strport_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.strport().size() > 0) {
    strport_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strport_);
  }
  struser_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.struser().size() > 0) {
    struser_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.struser_);
  }
  strpasswd_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.strpasswd().size() > 0) {
    strpasswd_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strpasswd_);
  }
  // @@protoc_insertion_point(copy_constructor:VidStor)
}

void VidStor::SharedCtor() {
  strid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  strname_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  strip_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  strport_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  struser_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  strpasswd_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _cached_size_ = 0;
}

VidStor::~VidStor() {
  // @@protoc_insertion_point(destructor:VidStor)
  SharedDtor();
}

void VidStor::SharedDtor() {
  strid_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  strname_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  strip_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  strport_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  struser_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  strpasswd_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void VidStor::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* VidStor::descriptor() {
  protobuf_vidconf_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_vidconf_2eproto::file_level_metadata[10].descriptor;
}

const VidStor& VidStor::default_instance() {
  protobuf_vidconf_2eproto::InitDefaults();
  return *internal_default_instance();
}

VidStor* VidStor::New(::google::protobuf::Arena* arena) const {
  VidStor* n = new VidStor;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void VidStor::Clear() {
// @@protoc_insertion_point(message_clear_start:VidStor)
  strid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  strname_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  strip_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  strport_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  struser_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  strpasswd_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

bool VidStor::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:VidStor)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string strId = 1;
      case 1: {
        if (tag == 10u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_strid()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->strid().data(), this->strid().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "VidStor.strId"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string strName = 2;
      case 2: {
        if (tag == 18u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_strname()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->strname().data(), this->strname().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "VidStor.strName"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string strIP = 3;
      case 3: {
        if (tag == 26u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_strip()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->strip().data(), this->strip().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "VidStor.strIP"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string strPort = 4;
      case 4: {
        if (tag == 34u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_strport()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->strport().data(), this->strport().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "VidStor.strPort"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string strUser = 5;
      case 5: {
        if (tag == 42u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_struser()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->struser().data(), this->struser().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "VidStor.strUser"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string strPasswd = 6;
      case 6: {
        if (tag == 50u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_strpasswd()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->strpasswd().data(), this->strpasswd().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "VidStor.strPasswd"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:VidStor)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:VidStor)
  return false;
#undef DO_
}

void VidStor::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:VidStor)
  // string strId = 1;
  if (this->strid().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strid().data(), this->strid().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "VidStor.strId");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->strid(), output);
  }

  // string strName = 2;
  if (this->strname().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strname().data(), this->strname().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "VidStor.strName");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->strname(), output);
  }

  // string strIP = 3;
  if (this->strip().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strip().data(), this->strip().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "VidStor.strIP");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->strip(), output);
  }

  // string strPort = 4;
  if (this->strport().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strport().data(), this->strport().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "VidStor.strPort");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      4, this->strport(), output);
  }

  // string strUser = 5;
  if (this->struser().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->struser().data(), this->struser().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "VidStor.strUser");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      5, this->struser(), output);
  }

  // string strPasswd = 6;
  if (this->strpasswd().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strpasswd().data(), this->strpasswd().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "VidStor.strPasswd");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      6, this->strpasswd(), output);
  }

  // @@protoc_insertion_point(serialize_end:VidStor)
}

::google::protobuf::uint8* VidStor::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic;  // Unused
  // @@protoc_insertion_point(serialize_to_array_start:VidStor)
  // string strId = 1;
  if (this->strid().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strid().data(), this->strid().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "VidStor.strId");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->strid(), target);
  }

  // string strName = 2;
  if (this->strname().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strname().data(), this->strname().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "VidStor.strName");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->strname(), target);
  }

  // string strIP = 3;
  if (this->strip().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strip().data(), this->strip().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "VidStor.strIP");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->strip(), target);
  }

  // string strPort = 4;
  if (this->strport().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strport().data(), this->strport().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "VidStor.strPort");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        4, this->strport(), target);
  }

  // string strUser = 5;
  if (this->struser().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->struser().data(), this->struser().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "VidStor.strUser");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        5, this->struser(), target);
  }

  // string strPasswd = 6;
  if (this->strpasswd().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strpasswd().data(), this->strpasswd().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "VidStor.strPasswd");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        6, this->strpasswd(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:VidStor)
  return target;
}

size_t VidStor::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:VidStor)
  size_t total_size = 0;

  // string strId = 1;
  if (this->strid().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->strid());
  }

  // string strName = 2;
  if (this->strname().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->strname());
  }

  // string strIP = 3;
  if (this->strip().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->strip());
  }

  // string strPort = 4;
  if (this->strport().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->strport());
  }

  // string strUser = 5;
  if (this->struser().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->struser());
  }

  // string strPasswd = 6;
  if (this->strpasswd().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->strpasswd());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void VidStor::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:VidStor)
  GOOGLE_DCHECK_NE(&from, this);
  const VidStor* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const VidStor>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:VidStor)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:VidStor)
    MergeFrom(*source);
  }
}

void VidStor::MergeFrom(const VidStor& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:VidStor)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.strid().size() > 0) {

    strid_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strid_);
  }
  if (from.strname().size() > 0) {

    strname_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strname_);
  }
  if (from.strip().size() > 0) {

    strip_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strip_);
  }
  if (from.strport().size() > 0) {

    strport_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strport_);
  }
  if (from.struser().size() > 0) {

    struser_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.struser_);
  }
  if (from.strpasswd().size() > 0) {

    strpasswd_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strpasswd_);
  }
}

void VidStor::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:VidStor)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void VidStor::CopyFrom(const VidStor& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:VidStor)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool VidStor::IsInitialized() const {
  return true;
}

void VidStor::Swap(VidStor* other) {
  if (other == this) return;
  InternalSwap(other);
}
void VidStor::InternalSwap(VidStor* other) {
  strid_.Swap(&other->strid_);
  strname_.Swap(&other->strname_);
  strip_.Swap(&other->strip_);
  strport_.Swap(&other->strport_);
  struser_.Swap(&other->struser_);
  strpasswd_.Swap(&other->strpasswd_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata VidStor::GetMetadata() const {
  protobuf_vidconf_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_vidconf_2eproto::file_level_metadata[10];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// VidStor

// string strId = 1;
void VidStor::clear_strid() {
  strid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& VidStor::strid() const {
  // @@protoc_insertion_point(field_get:VidStor.strId)
  return strid_.GetNoArena();
}
void VidStor::set_strid(const ::std::string& value) {
  
  strid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:VidStor.strId)
}
#if LANG_CXX11
void VidStor::set_strid(::std::string&& value) {
  
  strid_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:VidStor.strId)
}
#endif
void VidStor::set_strid(const char* value) {
  
  strid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:VidStor.strId)
}
void VidStor::set_strid(const char* value, size_t size) {
  
  strid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:VidStor.strId)
}
::std::string* VidStor::mutable_strid() {
  
  // @@protoc_insertion_point(field_mutable:VidStor.strId)
  return strid_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* VidStor::release_strid() {
  // @@protoc_insertion_point(field_release:VidStor.strId)
  
  return strid_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void VidStor::set_allocated_strid(::std::string* strid) {
  if (strid != NULL) {
    
  } else {
    
  }
  strid_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), strid);
  // @@protoc_insertion_point(field_set_allocated:VidStor.strId)
}

// string strName = 2;
void VidStor::clear_strname() {
  strname_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& VidStor::strname() const {
  // @@protoc_insertion_point(field_get:VidStor.strName)
  return strname_.GetNoArena();
}
void VidStor::set_strname(const ::std::string& value) {
  
  strname_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:VidStor.strName)
}
#if LANG_CXX11
void VidStor::set_strname(::std::string&& value) {
  
  strname_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:VidStor.strName)
}
#endif
void VidStor::set_strname(const char* value) {
  
  strname_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:VidStor.strName)
}
void VidStor::set_strname(const char* value, size_t size) {
  
  strname_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:VidStor.strName)
}
::std::string* VidStor::mutable_strname() {
  
  // @@protoc_insertion_point(field_mutable:VidStor.strName)
  return strname_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* VidStor::release_strname() {
  // @@protoc_insertion_point(field_release:VidStor.strName)
  
  return strname_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void VidStor::set_allocated_strname(::std::string* strname) {
  if (strname != NULL) {
    
  } else {
    
  }
  strname_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), strname);
  // @@protoc_insertion_point(field_set_allocated:VidStor.strName)
}

// string strIP = 3;
void VidStor::clear_strip() {
  strip_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& VidStor::strip() const {
  // @@protoc_insertion_point(field_get:VidStor.strIP)
  return strip_.GetNoArena();
}
void VidStor::set_strip(const ::std::string& value) {
  
  strip_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:VidStor.strIP)
}
#if LANG_CXX11
void VidStor::set_strip(::std::string&& value) {
  
  strip_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:VidStor.strIP)
}
#endif
void VidStor::set_strip(const char* value) {
  
  strip_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:VidStor.strIP)
}
void VidStor::set_strip(const char* value, size_t size) {
  
  strip_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:VidStor.strIP)
}
::std::string* VidStor::mutable_strip() {
  
  // @@protoc_insertion_point(field_mutable:VidStor.strIP)
  return strip_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* VidStor::release_strip() {
  // @@protoc_insertion_point(field_release:VidStor.strIP)
  
  return strip_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void VidStor::set_allocated_strip(::std::string* strip) {
  if (strip != NULL) {
    
  } else {
    
  }
  strip_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), strip);
  // @@protoc_insertion_point(field_set_allocated:VidStor.strIP)
}

// string strPort = 4;
void VidStor::clear_strport() {
  strport_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& VidStor::strport() const {
  // @@protoc_insertion_point(field_get:VidStor.strPort)
  return strport_.GetNoArena();
}
void VidStor::set_strport(const ::std::string& value) {
  
  strport_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:VidStor.strPort)
}
#if LANG_CXX11
void VidStor::set_strport(::std::string&& value) {
  
  strport_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:VidStor.strPort)
}
#endif
void VidStor::set_strport(const char* value) {
  
  strport_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:VidStor.strPort)
}
void VidStor::set_strport(const char* value, size_t size) {
  
  strport_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:VidStor.strPort)
}
::std::string* VidStor::mutable_strport() {
  
  // @@protoc_insertion_point(field_mutable:VidStor.strPort)
  return strport_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* VidStor::release_strport() {
  // @@protoc_insertion_point(field_release:VidStor.strPort)
  
  return strport_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void VidStor::set_allocated_strport(::std::string* strport) {
  if (strport != NULL) {
    
  } else {
    
  }
  strport_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), strport);
  // @@protoc_insertion_point(field_set_allocated:VidStor.strPort)
}

// string strUser = 5;
void VidStor::clear_struser() {
  struser_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& VidStor::struser() const {
  // @@protoc_insertion_point(field_get:VidStor.strUser)
  return struser_.GetNoArena();
}
void VidStor::set_struser(const ::std::string& value) {
  
  struser_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:VidStor.strUser)
}
#if LANG_CXX11
void VidStor::set_struser(::std::string&& value) {
  
  struser_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:VidStor.strUser)
}
#endif
void VidStor::set_struser(const char* value) {
  
  struser_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:VidStor.strUser)
}
void VidStor::set_struser(const char* value, size_t size) {
  
  struser_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:VidStor.strUser)
}
::std::string* VidStor::mutable_struser() {
  
  // @@protoc_insertion_point(field_mutable:VidStor.strUser)
  return struser_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* VidStor::release_struser() {
  // @@protoc_insertion_point(field_release:VidStor.strUser)
  
  return struser_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void VidStor::set_allocated_struser(::std::string* struser) {
  if (struser != NULL) {
    
  } else {
    
  }
  struser_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), struser);
  // @@protoc_insertion_point(field_set_allocated:VidStor.strUser)
}

// string strPasswd = 6;
void VidStor::clear_strpasswd() {
  strpasswd_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& VidStor::strpasswd() const {
  // @@protoc_insertion_point(field_get:VidStor.strPasswd)
  return strpasswd_.GetNoArena();
}
void VidStor::set_strpasswd(const ::std::string& value) {
  
  strpasswd_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:VidStor.strPasswd)
}
#if LANG_CXX11
void VidStor::set_strpasswd(::std::string&& value) {
  
  strpasswd_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:VidStor.strPasswd)
}
#endif
void VidStor::set_strpasswd(const char* value) {
  
  strpasswd_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:VidStor.strPasswd)
}
void VidStor::set_strpasswd(const char* value, size_t size) {
  
  strpasswd_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:VidStor.strPasswd)
}
::std::string* VidStor::mutable_strpasswd() {
  
  // @@protoc_insertion_point(field_mutable:VidStor.strPasswd)
  return strpasswd_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* VidStor::release_strpasswd() {
  // @@protoc_insertion_point(field_release:VidStor.strPasswd)
  
  return strpasswd_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void VidStor::set_allocated_strpasswd(::std::string* strpasswd) {
  if (strpasswd != NULL) {
    
  } else {
    
  }
  strpasswd_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), strpasswd);
  // @@protoc_insertion_point(field_set_allocated:VidStor.strPasswd)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int VidStorList::kCVidStorFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

VidStorList::VidStorList()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_vidconf_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:VidStorList)
}
VidStorList::VidStorList(const VidStorList& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      cvidstor_(from.cvidstor_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:VidStorList)
}

void VidStorList::SharedCtor() {
  _cached_size_ = 0;
}

VidStorList::~VidStorList() {
  // @@protoc_insertion_point(destructor:VidStorList)
  SharedDtor();
}

void VidStorList::SharedDtor() {
}

void VidStorList::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* VidStorList::descriptor() {
  protobuf_vidconf_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_vidconf_2eproto::file_level_metadata[11].descriptor;
}

const VidStorList& VidStorList::default_instance() {
  protobuf_vidconf_2eproto::InitDefaults();
  return *internal_default_instance();
}

VidStorList* VidStorList::New(::google::protobuf::Arena* arena) const {
  VidStorList* n = new VidStorList;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void VidStorList::Clear() {
// @@protoc_insertion_point(message_clear_start:VidStorList)
  cvidstor_.Clear();
}

bool VidStorList::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:VidStorList)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .VidStor cVidStor = 1;
      case 1: {
        if (tag == 10u) {
          DO_(input->IncrementRecursionDepth());
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtualNoRecursionDepth(
                input, add_cvidstor()));
        } else {
          goto handle_unusual;
        }
        input->UnsafeDecrementRecursionDepth();
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:VidStorList)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:VidStorList)
  return false;
#undef DO_
}

void VidStorList::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:VidStorList)
  // repeated .VidStor cVidStor = 1;
  for (unsigned int i = 0, n = this->cvidstor_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->cvidstor(i), output);
  }

  // @@protoc_insertion_point(serialize_end:VidStorList)
}

::google::protobuf::uint8* VidStorList::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic;  // Unused
  // @@protoc_insertion_point(serialize_to_array_start:VidStorList)
  // repeated .VidStor cVidStor = 1;
  for (unsigned int i = 0, n = this->cvidstor_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1, this->cvidstor(i), false, target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:VidStorList)
  return target;
}

size_t VidStorList::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:VidStorList)
  size_t total_size = 0;

  // repeated .VidStor cVidStor = 1;
  {
    unsigned int count = this->cvidstor_size();
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->cvidstor(i));
    }
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void VidStorList::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:VidStorList)
  GOOGLE_DCHECK_NE(&from, this);
  const VidStorList* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const VidStorList>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:VidStorList)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:VidStorList)
    MergeFrom(*source);
  }
}

void VidStorList::MergeFrom(const VidStorList& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:VidStorList)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  cvidstor_.MergeFrom(from.cvidstor_);
}

void VidStorList::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:VidStorList)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void VidStorList::CopyFrom(const VidStorList& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:VidStorList)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool VidStorList::IsInitialized() const {
  return true;
}

void VidStorList::Swap(VidStorList* other) {
  if (other == this) return;
  InternalSwap(other);
}
void VidStorList::InternalSwap(VidStorList* other) {
  cvidstor_.UnsafeArenaSwap(&other->cvidstor_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata VidStorList::GetMetadata() const {
  protobuf_vidconf_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_vidconf_2eproto::file_level_metadata[11];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// VidStorList

// repeated .VidStor cVidStor = 1;
int VidStorList::cvidstor_size() const {
  return cvidstor_.size();
}
void VidStorList::clear_cvidstor() {
  cvidstor_.Clear();
}
const ::VidStor& VidStorList::cvidstor(int index) const {
  // @@protoc_insertion_point(field_get:VidStorList.cVidStor)
  return cvidstor_.Get(index);
}
::VidStor* VidStorList::mutable_cvidstor(int index) {
  // @@protoc_insertion_point(field_mutable:VidStorList.cVidStor)
  return cvidstor_.Mutable(index);
}
::VidStor* VidStorList::add_cvidstor() {
  // @@protoc_insertion_point(field_add:VidStorList.cVidStor)
  return cvidstor_.Add();
}
::google::protobuf::RepeatedPtrField< ::VidStor >*
VidStorList::mutable_cvidstor() {
  // @@protoc_insertion_point(field_mutable_list:VidStorList.cVidStor)
  return &cvidstor_;
}
const ::google::protobuf::RepeatedPtrField< ::VidStor >&
VidStorList::cvidstor() const {
  // @@protoc_insertion_point(field_list:VidStorList.cVidStor)
  return cvidstor_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int VidViewWindow::kCIdFieldNumber;
const int VidViewWindow::kNWindowsIdFieldNumber;
const int VidViewWindow::kBHWAccelFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

VidViewWindow::VidViewWindow()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_vidconf_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:VidViewWindow)
}
VidViewWindow::VidViewWindow(const VidViewWindow& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_cid()) {
    cid_ = new ::VidCameraId(*from.cid_);
  } else {
    cid_ = NULL;
  }
  ::memcpy(&nwindowsid_, &from.nwindowsid_,
    reinterpret_cast<char*>(&bhwaccel_) -
    reinterpret_cast<char*>(&nwindowsid_) + sizeof(bhwaccel_));
  // @@protoc_insertion_point(copy_constructor:VidViewWindow)
}

void VidViewWindow::SharedCtor() {
  ::memset(&cid_, 0, reinterpret_cast<char*>(&bhwaccel_) -
    reinterpret_cast<char*>(&cid_) + sizeof(bhwaccel_));
  _cached_size_ = 0;
}

VidViewWindow::~VidViewWindow() {
  // @@protoc_insertion_point(destructor:VidViewWindow)
  SharedDtor();
}

void VidViewWindow::SharedDtor() {
  if (this != internal_default_instance()) {
    delete cid_;
  }
}

void VidViewWindow::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* VidViewWindow::descriptor() {
  protobuf_vidconf_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_vidconf_2eproto::file_level_metadata[12].descriptor;
}

const VidViewWindow& VidViewWindow::default_instance() {
  protobuf_vidconf_2eproto::InitDefaults();
  return *internal_default_instance();
}

VidViewWindow* VidViewWindow::New(::google::protobuf::Arena* arena) const {
  VidViewWindow* n = new VidViewWindow;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void VidViewWindow::Clear() {
// @@protoc_insertion_point(message_clear_start:VidViewWindow)
  if (GetArenaNoVirtual() == NULL && cid_ != NULL) {
    delete cid_;
  }
  cid_ = NULL;
  ::memset(&nwindowsid_, 0, reinterpret_cast<char*>(&bhwaccel_) -
    reinterpret_cast<char*>(&nwindowsid_) + sizeof(bhwaccel_));
}

bool VidViewWindow::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:VidViewWindow)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .VidCameraId cId = 1;
      case 1: {
        if (tag == 10u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_cid()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 nWindowsId = 2;
      case 2: {
        if (tag == 16u) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &nwindowsid_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool bHWAccel = 3;
      case 3: {
        if (tag == 24u) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &bhwaccel_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:VidViewWindow)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:VidViewWindow)
  return false;
#undef DO_
}

void VidViewWindow::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:VidViewWindow)
  // .VidCameraId cId = 1;
  if (this->has_cid()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, *this->cid_, output);
  }

  // int32 nWindowsId = 2;
  if (this->nwindowsid() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->nwindowsid(), output);
  }

  // bool bHWAccel = 3;
  if (this->bhwaccel() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(3, this->bhwaccel(), output);
  }

  // @@protoc_insertion_point(serialize_end:VidViewWindow)
}

::google::protobuf::uint8* VidViewWindow::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic;  // Unused
  // @@protoc_insertion_point(serialize_to_array_start:VidViewWindow)
  // .VidCameraId cId = 1;
  if (this->has_cid()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1, *this->cid_, false, target);
  }

  // int32 nWindowsId = 2;
  if (this->nwindowsid() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->nwindowsid(), target);
  }

  // bool bHWAccel = 3;
  if (this->bhwaccel() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(3, this->bhwaccel(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:VidViewWindow)
  return target;
}

size_t VidViewWindow::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:VidViewWindow)
  size_t total_size = 0;

  // .VidCameraId cId = 1;
  if (this->has_cid()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->cid_);
  }

  // int32 nWindowsId = 2;
  if (this->nwindowsid() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->nwindowsid());
  }

  // bool bHWAccel = 3;
  if (this->bhwaccel() != 0) {
    total_size += 1 + 1;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void VidViewWindow::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:VidViewWindow)
  GOOGLE_DCHECK_NE(&from, this);
  const VidViewWindow* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const VidViewWindow>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:VidViewWindow)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:VidViewWindow)
    MergeFrom(*source);
  }
}

void VidViewWindow::MergeFrom(const VidViewWindow& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:VidViewWindow)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_cid()) {
    mutable_cid()->::VidCameraId::MergeFrom(from.cid());
  }
  if (from.nwindowsid() != 0) {
    set_nwindowsid(from.nwindowsid());
  }
  if (from.bhwaccel() != 0) {
    set_bhwaccel(from.bhwaccel());
  }
}

void VidViewWindow::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:VidViewWindow)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void VidViewWindow::CopyFrom(const VidViewWindow& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:VidViewWindow)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool VidViewWindow::IsInitialized() const {
  return true;
}

void VidViewWindow::Swap(VidViewWindow* other) {
  if (other == this) return;
  InternalSwap(other);
}
void VidViewWindow::InternalSwap(VidViewWindow* other) {
  std::swap(cid_, other->cid_);
  std::swap(nwindowsid_, other->nwindowsid_);
  std::swap(bhwaccel_, other->bhwaccel_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata VidViewWindow::GetMetadata() const {
  protobuf_vidconf_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_vidconf_2eproto::file_level_metadata[12];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// VidViewWindow

// .VidCameraId cId = 1;
bool VidViewWindow::has_cid() const {
  return this != internal_default_instance() && cid_ != NULL;
}
void VidViewWindow::clear_cid() {
  if (GetArenaNoVirtual() == NULL && cid_ != NULL) delete cid_;
  cid_ = NULL;
}
const ::VidCameraId& VidViewWindow::cid() const {
  // @@protoc_insertion_point(field_get:VidViewWindow.cId)
  return cid_ != NULL ? *cid_
                         : *::VidCameraId::internal_default_instance();
}
::VidCameraId* VidViewWindow::mutable_cid() {
  
  if (cid_ == NULL) {
    cid_ = new ::VidCameraId;
  }
  // @@protoc_insertion_point(field_mutable:VidViewWindow.cId)
  return cid_;
}
::VidCameraId* VidViewWindow::release_cid() {
  // @@protoc_insertion_point(field_release:VidViewWindow.cId)
  
  ::VidCameraId* temp = cid_;
  cid_ = NULL;
  return temp;
}
void VidViewWindow::set_allocated_cid(::VidCameraId* cid) {
  delete cid_;
  cid_ = cid;
  if (cid) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:VidViewWindow.cId)
}

// int32 nWindowsId = 2;
void VidViewWindow::clear_nwindowsid() {
  nwindowsid_ = 0;
}
::google::protobuf::int32 VidViewWindow::nwindowsid() const {
  // @@protoc_insertion_point(field_get:VidViewWindow.nWindowsId)
  return nwindowsid_;
}
void VidViewWindow::set_nwindowsid(::google::protobuf::int32 value) {
  
  nwindowsid_ = value;
  // @@protoc_insertion_point(field_set:VidViewWindow.nWindowsId)
}

// bool bHWAccel = 3;
void VidViewWindow::clear_bhwaccel() {
  bhwaccel_ = false;
}
bool VidViewWindow::bhwaccel() const {
  // @@protoc_insertion_point(field_get:VidViewWindow.bHWAccel)
  return bhwaccel_;
}
void VidViewWindow::set_bhwaccel(bool value) {
  
  bhwaccel_ = value;
  // @@protoc_insertion_point(field_set:VidViewWindow.bHWAccel)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int VidView::kStrIdFieldNumber;
const int VidView::kStrNameFieldNumber;
const int VidView::kCViewFieldNumber;
const int VidView::kCLayoutFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

VidView::VidView()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_vidconf_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:VidView)
}
VidView::VidView(const VidView& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      cview_(from.cview_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  strid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.strid().size() > 0) {
    strid_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strid_);
  }
  strname_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.strname().size() > 0) {
    strname_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strname_);
  }
  clayout_ = from.clayout_;
  // @@protoc_insertion_point(copy_constructor:VidView)
}

void VidView::SharedCtor() {
  strid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  strname_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clayout_ = 0;
  _cached_size_ = 0;
}

VidView::~VidView() {
  // @@protoc_insertion_point(destructor:VidView)
  SharedDtor();
}

void VidView::SharedDtor() {
  strid_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  strname_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void VidView::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* VidView::descriptor() {
  protobuf_vidconf_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_vidconf_2eproto::file_level_metadata[13].descriptor;
}

const VidView& VidView::default_instance() {
  protobuf_vidconf_2eproto::InitDefaults();
  return *internal_default_instance();
}

VidView* VidView::New(::google::protobuf::Arena* arena) const {
  VidView* n = new VidView;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void VidView::Clear() {
// @@protoc_insertion_point(message_clear_start:VidView)
  cview_.Clear();
  strid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  strname_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clayout_ = 0;
}

bool VidView::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:VidView)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string strId = 1;
      case 1: {
        if (tag == 10u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_strid()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->strid().data(), this->strid().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "VidView.strId"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string strName = 2;
      case 2: {
        if (tag == 18u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_strname()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->strname().data(), this->strname().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "VidView.strName"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .VidViewWindow cView = 3;
      case 3: {
        if (tag == 26u) {
          DO_(input->IncrementRecursionDepth());
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtualNoRecursionDepth(
                input, add_cview()));
        } else {
          goto handle_unusual;
        }
        input->UnsafeDecrementRecursionDepth();
        break;
      }

      // .VidLayout cLayout = 4;
      case 4: {
        if (tag == 32u) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_clayout(static_cast< ::VidLayout >(value));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:VidView)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:VidView)
  return false;
#undef DO_
}

void VidView::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:VidView)
  // string strId = 1;
  if (this->strid().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strid().data(), this->strid().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "VidView.strId");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->strid(), output);
  }

  // string strName = 2;
  if (this->strname().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strname().data(), this->strname().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "VidView.strName");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->strname(), output);
  }

  // repeated .VidViewWindow cView = 3;
  for (unsigned int i = 0, n = this->cview_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, this->cview(i), output);
  }

  // .VidLayout cLayout = 4;
  if (this->clayout() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      4, this->clayout(), output);
  }

  // @@protoc_insertion_point(serialize_end:VidView)
}

::google::protobuf::uint8* VidView::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic;  // Unused
  // @@protoc_insertion_point(serialize_to_array_start:VidView)
  // string strId = 1;
  if (this->strid().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strid().data(), this->strid().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "VidView.strId");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->strid(), target);
  }

  // string strName = 2;
  if (this->strname().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strname().data(), this->strname().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "VidView.strName");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->strname(), target);
  }

  // repeated .VidViewWindow cView = 3;
  for (unsigned int i = 0, n = this->cview_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        3, this->cview(i), false, target);
  }

  // .VidLayout cLayout = 4;
  if (this->clayout() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      4, this->clayout(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:VidView)
  return target;
}

size_t VidView::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:VidView)
  size_t total_size = 0;

  // repeated .VidViewWindow cView = 3;
  {
    unsigned int count = this->cview_size();
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->cview(i));
    }
  }

  // string strId = 1;
  if (this->strid().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->strid());
  }

  // string strName = 2;
  if (this->strname().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->strname());
  }

  // .VidLayout cLayout = 4;
  if (this->clayout() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->clayout());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void VidView::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:VidView)
  GOOGLE_DCHECK_NE(&from, this);
  const VidView* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const VidView>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:VidView)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:VidView)
    MergeFrom(*source);
  }
}

void VidView::MergeFrom(const VidView& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:VidView)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  cview_.MergeFrom(from.cview_);
  if (from.strid().size() > 0) {

    strid_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strid_);
  }
  if (from.strname().size() > 0) {

    strname_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strname_);
  }
  if (from.clayout() != 0) {
    set_clayout(from.clayout());
  }
}

void VidView::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:VidView)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void VidView::CopyFrom(const VidView& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:VidView)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool VidView::IsInitialized() const {
  return true;
}

void VidView::Swap(VidView* other) {
  if (other == this) return;
  InternalSwap(other);
}
void VidView::InternalSwap(VidView* other) {
  cview_.UnsafeArenaSwap(&other->cview_);
  strid_.Swap(&other->strid_);
  strname_.Swap(&other->strname_);
  std::swap(clayout_, other->clayout_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata VidView::GetMetadata() const {
  protobuf_vidconf_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_vidconf_2eproto::file_level_metadata[13];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// VidView

// string strId = 1;
void VidView::clear_strid() {
  strid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& VidView::strid() const {
  // @@protoc_insertion_point(field_get:VidView.strId)
  return strid_.GetNoArena();
}
void VidView::set_strid(const ::std::string& value) {
  
  strid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:VidView.strId)
}
#if LANG_CXX11
void VidView::set_strid(::std::string&& value) {
  
  strid_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:VidView.strId)
}
#endif
void VidView::set_strid(const char* value) {
  
  strid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:VidView.strId)
}
void VidView::set_strid(const char* value, size_t size) {
  
  strid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:VidView.strId)
}
::std::string* VidView::mutable_strid() {
  
  // @@protoc_insertion_point(field_mutable:VidView.strId)
  return strid_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* VidView::release_strid() {
  // @@protoc_insertion_point(field_release:VidView.strId)
  
  return strid_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void VidView::set_allocated_strid(::std::string* strid) {
  if (strid != NULL) {
    
  } else {
    
  }
  strid_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), strid);
  // @@protoc_insertion_point(field_set_allocated:VidView.strId)
}

// string strName = 2;
void VidView::clear_strname() {
  strname_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& VidView::strname() const {
  // @@protoc_insertion_point(field_get:VidView.strName)
  return strname_.GetNoArena();
}
void VidView::set_strname(const ::std::string& value) {
  
  strname_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:VidView.strName)
}
#if LANG_CXX11
void VidView::set_strname(::std::string&& value) {
  
  strname_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:VidView.strName)
}
#endif
void VidView::set_strname(const char* value) {
  
  strname_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:VidView.strName)
}
void VidView::set_strname(const char* value, size_t size) {
  
  strname_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:VidView.strName)
}
::std::string* VidView::mutable_strname() {
  
  // @@protoc_insertion_point(field_mutable:VidView.strName)
  return strname_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* VidView::release_strname() {
  // @@protoc_insertion_point(field_release:VidView.strName)
  
  return strname_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void VidView::set_allocated_strname(::std::string* strname) {
  if (strname != NULL) {
    
  } else {
    
  }
  strname_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), strname);
  // @@protoc_insertion_point(field_set_allocated:VidView.strName)
}

// repeated .VidViewWindow cView = 3;
int VidView::cview_size() const {
  return cview_.size();
}
void VidView::clear_cview() {
  cview_.Clear();
}
const ::VidViewWindow& VidView::cview(int index) const {
  // @@protoc_insertion_point(field_get:VidView.cView)
  return cview_.Get(index);
}
::VidViewWindow* VidView::mutable_cview(int index) {
  // @@protoc_insertion_point(field_mutable:VidView.cView)
  return cview_.Mutable(index);
}
::VidViewWindow* VidView::add_cview() {
  // @@protoc_insertion_point(field_add:VidView.cView)
  return cview_.Add();
}
::google::protobuf::RepeatedPtrField< ::VidViewWindow >*
VidView::mutable_cview() {
  // @@protoc_insertion_point(field_mutable_list:VidView.cView)
  return &cview_;
}
const ::google::protobuf::RepeatedPtrField< ::VidViewWindow >&
VidView::cview() const {
  // @@protoc_insertion_point(field_list:VidView.cView)
  return cview_;
}

// .VidLayout cLayout = 4;
void VidView::clear_clayout() {
  clayout_ = 0;
}
::VidLayout VidView::clayout() const {
  // @@protoc_insertion_point(field_get:VidView.cLayout)
  return static_cast< ::VidLayout >(clayout_);
}
void VidView::set_clayout(::VidLayout value) {
  
  clayout_ = value;
  // @@protoc_insertion_point(field_set:VidView.cLayout)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int VidViewList::kCVidViewFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

VidViewList::VidViewList()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_vidconf_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:VidViewList)
}
VidViewList::VidViewList(const VidViewList& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      cvidview_(from.cvidview_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:VidViewList)
}

void VidViewList::SharedCtor() {
  _cached_size_ = 0;
}

VidViewList::~VidViewList() {
  // @@protoc_insertion_point(destructor:VidViewList)
  SharedDtor();
}

void VidViewList::SharedDtor() {
}

void VidViewList::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* VidViewList::descriptor() {
  protobuf_vidconf_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_vidconf_2eproto::file_level_metadata[14].descriptor;
}

const VidViewList& VidViewList::default_instance() {
  protobuf_vidconf_2eproto::InitDefaults();
  return *internal_default_instance();
}

VidViewList* VidViewList::New(::google::protobuf::Arena* arena) const {
  VidViewList* n = new VidViewList;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void VidViewList::Clear() {
// @@protoc_insertion_point(message_clear_start:VidViewList)
  cvidview_.Clear();
}

bool VidViewList::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:VidViewList)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .VidView cVidView = 1;
      case 1: {
        if (tag == 10u) {
          DO_(input->IncrementRecursionDepth());
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtualNoRecursionDepth(
                input, add_cvidview()));
        } else {
          goto handle_unusual;
        }
        input->UnsafeDecrementRecursionDepth();
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:VidViewList)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:VidViewList)
  return false;
#undef DO_
}

void VidViewList::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:VidViewList)
  // repeated .VidView cVidView = 1;
  for (unsigned int i = 0, n = this->cvidview_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->cvidview(i), output);
  }

  // @@protoc_insertion_point(serialize_end:VidViewList)
}

::google::protobuf::uint8* VidViewList::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic;  // Unused
  // @@protoc_insertion_point(serialize_to_array_start:VidViewList)
  // repeated .VidView cVidView = 1;
  for (unsigned int i = 0, n = this->cvidview_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1, this->cvidview(i), false, target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:VidViewList)
  return target;
}

size_t VidViewList::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:VidViewList)
  size_t total_size = 0;

  // repeated .VidView cVidView = 1;
  {
    unsigned int count = this->cvidview_size();
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->cvidview(i));
    }
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void VidViewList::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:VidViewList)
  GOOGLE_DCHECK_NE(&from, this);
  const VidViewList* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const VidViewList>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:VidViewList)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:VidViewList)
    MergeFrom(*source);
  }
}

void VidViewList::MergeFrom(const VidViewList& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:VidViewList)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  cvidview_.MergeFrom(from.cvidview_);
}

void VidViewList::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:VidViewList)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void VidViewList::CopyFrom(const VidViewList& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:VidViewList)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool VidViewList::IsInitialized() const {
  return true;
}

void VidViewList::Swap(VidViewList* other) {
  if (other == this) return;
  InternalSwap(other);
}
void VidViewList::InternalSwap(VidViewList* other) {
  cvidview_.UnsafeArenaSwap(&other->cvidview_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata VidViewList::GetMetadata() const {
  protobuf_vidconf_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_vidconf_2eproto::file_level_metadata[14];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// VidViewList

// repeated .VidView cVidView = 1;
int VidViewList::cvidview_size() const {
  return cvidview_.size();
}
void VidViewList::clear_cvidview() {
  cvidview_.Clear();
}
const ::VidView& VidViewList::cvidview(int index) const {
  // @@protoc_insertion_point(field_get:VidViewList.cVidView)
  return cvidview_.Get(index);
}
::VidView* VidViewList::mutable_cvidview(int index) {
  // @@protoc_insertion_point(field_mutable:VidViewList.cVidView)
  return cvidview_.Mutable(index);
}
::VidView* VidViewList::add_cvidview() {
  // @@protoc_insertion_point(field_add:VidViewList.cVidView)
  return cvidview_.Add();
}
::google::protobuf::RepeatedPtrField< ::VidView >*
VidViewList::mutable_cvidview() {
  // @@protoc_insertion_point(field_mutable_list:VidViewList.cVidView)
  return &cvidview_;
}
const ::google::protobuf::RepeatedPtrField< ::VidView >&
VidViewList::cvidview() const {
  // @@protoc_insertion_point(field_list:VidViewList.cVidView)
  return cvidview_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int VidTour::kStrIdFieldNumber;
const int VidTour::kStrNameFieldNumber;
const int VidTour::kStrViewFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

VidTour::VidTour()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_vidconf_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:VidTour)
}
VidTour::VidTour(const VidTour& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      strview_(from.strview_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  strid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.strid().size() > 0) {
    strid_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strid_);
  }
  strname_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.strname().size() > 0) {
    strname_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strname_);
  }
  // @@protoc_insertion_point(copy_constructor:VidTour)
}

void VidTour::SharedCtor() {
  strid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  strname_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _cached_size_ = 0;
}

VidTour::~VidTour() {
  // @@protoc_insertion_point(destructor:VidTour)
  SharedDtor();
}

void VidTour::SharedDtor() {
  strid_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  strname_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void VidTour::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* VidTour::descriptor() {
  protobuf_vidconf_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_vidconf_2eproto::file_level_metadata[15].descriptor;
}

const VidTour& VidTour::default_instance() {
  protobuf_vidconf_2eproto::InitDefaults();
  return *internal_default_instance();
}

VidTour* VidTour::New(::google::protobuf::Arena* arena) const {
  VidTour* n = new VidTour;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void VidTour::Clear() {
// @@protoc_insertion_point(message_clear_start:VidTour)
  strview_.Clear();
  strid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  strname_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

bool VidTour::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:VidTour)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string strId = 1;
      case 1: {
        if (tag == 10u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_strid()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->strid().data(), this->strid().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "VidTour.strId"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string strName = 2;
      case 2: {
        if (tag == 18u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_strname()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->strname().data(), this->strname().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "VidTour.strName"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated string strView = 3;
      case 3: {
        if (tag == 26u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->add_strview()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->strview(this->strview_size() - 1).data(),
            this->strview(this->strview_size() - 1).length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "VidTour.strView"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:VidTour)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:VidTour)
  return false;
#undef DO_
}

void VidTour::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:VidTour)
  // string strId = 1;
  if (this->strid().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strid().data(), this->strid().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "VidTour.strId");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->strid(), output);
  }

  // string strName = 2;
  if (this->strname().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strname().data(), this->strname().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "VidTour.strName");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->strname(), output);
  }

  // repeated string strView = 3;
  for (int i = 0; i < this->strview_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strview(i).data(), this->strview(i).length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "VidTour.strView");
    ::google::protobuf::internal::WireFormatLite::WriteString(
      3, this->strview(i), output);
  }

  // @@protoc_insertion_point(serialize_end:VidTour)
}

::google::protobuf::uint8* VidTour::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic;  // Unused
  // @@protoc_insertion_point(serialize_to_array_start:VidTour)
  // string strId = 1;
  if (this->strid().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strid().data(), this->strid().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "VidTour.strId");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->strid(), target);
  }

  // string strName = 2;
  if (this->strname().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strname().data(), this->strname().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "VidTour.strName");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->strname(), target);
  }

  // repeated string strView = 3;
  for (int i = 0; i < this->strview_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strview(i).data(), this->strview(i).length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "VidTour.strView");
    target = ::google::protobuf::internal::WireFormatLite::
      WriteStringToArray(3, this->strview(i), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:VidTour)
  return target;
}

size_t VidTour::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:VidTour)
  size_t total_size = 0;

  // repeated string strView = 3;
  total_size += 1 *
      ::google::protobuf::internal::FromIntSize(this->strview_size());
  for (int i = 0; i < this->strview_size(); i++) {
    total_size += ::google::protobuf::internal::WireFormatLite::StringSize(
      this->strview(i));
  }

  // string strId = 1;
  if (this->strid().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->strid());
  }

  // string strName = 2;
  if (this->strname().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->strname());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void VidTour::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:VidTour)
  GOOGLE_DCHECK_NE(&from, this);
  const VidTour* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const VidTour>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:VidTour)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:VidTour)
    MergeFrom(*source);
  }
}

void VidTour::MergeFrom(const VidTour& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:VidTour)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  strview_.MergeFrom(from.strview_);
  if (from.strid().size() > 0) {

    strid_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strid_);
  }
  if (from.strname().size() > 0) {

    strname_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strname_);
  }
}

void VidTour::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:VidTour)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void VidTour::CopyFrom(const VidTour& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:VidTour)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool VidTour::IsInitialized() const {
  return true;
}

void VidTour::Swap(VidTour* other) {
  if (other == this) return;
  InternalSwap(other);
}
void VidTour::InternalSwap(VidTour* other) {
  strview_.UnsafeArenaSwap(&other->strview_);
  strid_.Swap(&other->strid_);
  strname_.Swap(&other->strname_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata VidTour::GetMetadata() const {
  protobuf_vidconf_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_vidconf_2eproto::file_level_metadata[15];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// VidTour

// string strId = 1;
void VidTour::clear_strid() {
  strid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& VidTour::strid() const {
  // @@protoc_insertion_point(field_get:VidTour.strId)
  return strid_.GetNoArena();
}
void VidTour::set_strid(const ::std::string& value) {
  
  strid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:VidTour.strId)
}
#if LANG_CXX11
void VidTour::set_strid(::std::string&& value) {
  
  strid_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:VidTour.strId)
}
#endif
void VidTour::set_strid(const char* value) {
  
  strid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:VidTour.strId)
}
void VidTour::set_strid(const char* value, size_t size) {
  
  strid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:VidTour.strId)
}
::std::string* VidTour::mutable_strid() {
  
  // @@protoc_insertion_point(field_mutable:VidTour.strId)
  return strid_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* VidTour::release_strid() {
  // @@protoc_insertion_point(field_release:VidTour.strId)
  
  return strid_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void VidTour::set_allocated_strid(::std::string* strid) {
  if (strid != NULL) {
    
  } else {
    
  }
  strid_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), strid);
  // @@protoc_insertion_point(field_set_allocated:VidTour.strId)
}

// string strName = 2;
void VidTour::clear_strname() {
  strname_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& VidTour::strname() const {
  // @@protoc_insertion_point(field_get:VidTour.strName)
  return strname_.GetNoArena();
}
void VidTour::set_strname(const ::std::string& value) {
  
  strname_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:VidTour.strName)
}
#if LANG_CXX11
void VidTour::set_strname(::std::string&& value) {
  
  strname_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:VidTour.strName)
}
#endif
void VidTour::set_strname(const char* value) {
  
  strname_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:VidTour.strName)
}
void VidTour::set_strname(const char* value, size_t size) {
  
  strname_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:VidTour.strName)
}
::std::string* VidTour::mutable_strname() {
  
  // @@protoc_insertion_point(field_mutable:VidTour.strName)
  return strname_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* VidTour::release_strname() {
  // @@protoc_insertion_point(field_release:VidTour.strName)
  
  return strname_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void VidTour::set_allocated_strname(::std::string* strname) {
  if (strname != NULL) {
    
  } else {
    
  }
  strname_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), strname);
  // @@protoc_insertion_point(field_set_allocated:VidTour.strName)
}

// repeated string strView = 3;
int VidTour::strview_size() const {
  return strview_.size();
}
void VidTour::clear_strview() {
  strview_.Clear();
}
const ::std::string& VidTour::strview(int index) const {
  // @@protoc_insertion_point(field_get:VidTour.strView)
  return strview_.Get(index);
}
::std::string* VidTour::mutable_strview(int index) {
  // @@protoc_insertion_point(field_mutable:VidTour.strView)
  return strview_.Mutable(index);
}
void VidTour::set_strview(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:VidTour.strView)
  strview_.Mutable(index)->assign(value);
}
void VidTour::set_strview(int index, const char* value) {
  strview_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:VidTour.strView)
}
void VidTour::set_strview(int index, const char* value, size_t size) {
  strview_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:VidTour.strView)
}
::std::string* VidTour::add_strview() {
  // @@protoc_insertion_point(field_add_mutable:VidTour.strView)
  return strview_.Add();
}
void VidTour::add_strview(const ::std::string& value) {
  strview_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:VidTour.strView)
}
void VidTour::add_strview(const char* value) {
  strview_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:VidTour.strView)
}
void VidTour::add_strview(const char* value, size_t size) {
  strview_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:VidTour.strView)
}
const ::google::protobuf::RepeatedPtrField< ::std::string>&
VidTour::strview() const {
  // @@protoc_insertion_point(field_list:VidTour.strView)
  return strview_;
}
::google::protobuf::RepeatedPtrField< ::std::string>*
VidTour::mutable_strview() {
  // @@protoc_insertion_point(field_mutable_list:VidTour.strView)
  return &strview_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int VidTourList::kCVidTourFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

VidTourList::VidTourList()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_vidconf_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:VidTourList)
}
VidTourList::VidTourList(const VidTourList& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      cvidtour_(from.cvidtour_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:VidTourList)
}

void VidTourList::SharedCtor() {
  _cached_size_ = 0;
}

VidTourList::~VidTourList() {
  // @@protoc_insertion_point(destructor:VidTourList)
  SharedDtor();
}

void VidTourList::SharedDtor() {
}

void VidTourList::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* VidTourList::descriptor() {
  protobuf_vidconf_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_vidconf_2eproto::file_level_metadata[16].descriptor;
}

const VidTourList& VidTourList::default_instance() {
  protobuf_vidconf_2eproto::InitDefaults();
  return *internal_default_instance();
}

VidTourList* VidTourList::New(::google::protobuf::Arena* arena) const {
  VidTourList* n = new VidTourList;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void VidTourList::Clear() {
// @@protoc_insertion_point(message_clear_start:VidTourList)
  cvidtour_.Clear();
}

bool VidTourList::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:VidTourList)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .VidTour cVidTour = 1;
      case 1: {
        if (tag == 10u) {
          DO_(input->IncrementRecursionDepth());
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtualNoRecursionDepth(
                input, add_cvidtour()));
        } else {
          goto handle_unusual;
        }
        input->UnsafeDecrementRecursionDepth();
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:VidTourList)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:VidTourList)
  return false;
#undef DO_
}

void VidTourList::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:VidTourList)
  // repeated .VidTour cVidTour = 1;
  for (unsigned int i = 0, n = this->cvidtour_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->cvidtour(i), output);
  }

  // @@protoc_insertion_point(serialize_end:VidTourList)
}

::google::protobuf::uint8* VidTourList::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic;  // Unused
  // @@protoc_insertion_point(serialize_to_array_start:VidTourList)
  // repeated .VidTour cVidTour = 1;
  for (unsigned int i = 0, n = this->cvidtour_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1, this->cvidtour(i), false, target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:VidTourList)
  return target;
}

size_t VidTourList::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:VidTourList)
  size_t total_size = 0;

  // repeated .VidTour cVidTour = 1;
  {
    unsigned int count = this->cvidtour_size();
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->cvidtour(i));
    }
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void VidTourList::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:VidTourList)
  GOOGLE_DCHECK_NE(&from, this);
  const VidTourList* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const VidTourList>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:VidTourList)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:VidTourList)
    MergeFrom(*source);
  }
}

void VidTourList::MergeFrom(const VidTourList& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:VidTourList)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  cvidtour_.MergeFrom(from.cvidtour_);
}

void VidTourList::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:VidTourList)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void VidTourList::CopyFrom(const VidTourList& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:VidTourList)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool VidTourList::IsInitialized() const {
  return true;
}

void VidTourList::Swap(VidTourList* other) {
  if (other == this) return;
  InternalSwap(other);
}
void VidTourList::InternalSwap(VidTourList* other) {
  cvidtour_.UnsafeArenaSwap(&other->cvidtour_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata VidTourList::GetMetadata() const {
  protobuf_vidconf_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_vidconf_2eproto::file_level_metadata[16];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// VidTourList

// repeated .VidTour cVidTour = 1;
int VidTourList::cvidtour_size() const {
  return cvidtour_.size();
}
void VidTourList::clear_cvidtour() {
  cvidtour_.Clear();
}
const ::VidTour& VidTourList::cvidtour(int index) const {
  // @@protoc_insertion_point(field_get:VidTourList.cVidTour)
  return cvidtour_.Get(index);
}
::VidTour* VidTourList::mutable_cvidtour(int index) {
  // @@protoc_insertion_point(field_mutable:VidTourList.cVidTour)
  return cvidtour_.Mutable(index);
}
::VidTour* VidTourList::add_cvidtour() {
  // @@protoc_insertion_point(field_add:VidTourList.cVidTour)
  return cvidtour_.Add();
}
::google::protobuf::RepeatedPtrField< ::VidTour >*
VidTourList::mutable_cvidtour() {
  // @@protoc_insertion_point(field_mutable_list:VidTourList.cVidTour)
  return &cvidtour_;
}
const ::google::protobuf::RepeatedPtrField< ::VidTour >&
VidTourList::cvidtour() const {
  // @@protoc_insertion_point(field_list:VidTourList.cVidTour)
  return cvidtour_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int VidGroup::kStrIdFieldNumber;
const int VidGroup::kStrNameFieldNumber;
const int VidGroup::kCGroupFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

VidGroup::VidGroup()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_vidconf_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:VidGroup)
}
VidGroup::VidGroup(const VidGroup& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      cgroup_(from.cgroup_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  strid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.strid().size() > 0) {
    strid_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strid_);
  }
  strname_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.strname().size() > 0) {
    strname_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strname_);
  }
  // @@protoc_insertion_point(copy_constructor:VidGroup)
}

void VidGroup::SharedCtor() {
  strid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  strname_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _cached_size_ = 0;
}

VidGroup::~VidGroup() {
  // @@protoc_insertion_point(destructor:VidGroup)
  SharedDtor();
}

void VidGroup::SharedDtor() {
  strid_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  strname_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void VidGroup::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* VidGroup::descriptor() {
  protobuf_vidconf_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_vidconf_2eproto::file_level_metadata[17].descriptor;
}

const VidGroup& VidGroup::default_instance() {
  protobuf_vidconf_2eproto::InitDefaults();
  return *internal_default_instance();
}

VidGroup* VidGroup::New(::google::protobuf::Arena* arena) const {
  VidGroup* n = new VidGroup;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void VidGroup::Clear() {
// @@protoc_insertion_point(message_clear_start:VidGroup)
  cgroup_.Clear();
  strid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  strname_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

bool VidGroup::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:VidGroup)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string strId = 1;
      case 1: {
        if (tag == 10u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_strid()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->strid().data(), this->strid().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "VidGroup.strId"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string strName = 2;
      case 2: {
        if (tag == 18u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_strname()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->strname().data(), this->strname().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "VidGroup.strName"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .VidCameraId cGroup = 3;
      case 3: {
        if (tag == 26u) {
          DO_(input->IncrementRecursionDepth());
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtualNoRecursionDepth(
                input, add_cgroup()));
        } else {
          goto handle_unusual;
        }
        input->UnsafeDecrementRecursionDepth();
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:VidGroup)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:VidGroup)
  return false;
#undef DO_
}

void VidGroup::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:VidGroup)
  // string strId = 1;
  if (this->strid().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strid().data(), this->strid().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "VidGroup.strId");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->strid(), output);
  }

  // string strName = 2;
  if (this->strname().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strname().data(), this->strname().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "VidGroup.strName");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->strname(), output);
  }

  // repeated .VidCameraId cGroup = 3;
  for (unsigned int i = 0, n = this->cgroup_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, this->cgroup(i), output);
  }

  // @@protoc_insertion_point(serialize_end:VidGroup)
}

::google::protobuf::uint8* VidGroup::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic;  // Unused
  // @@protoc_insertion_point(serialize_to_array_start:VidGroup)
  // string strId = 1;
  if (this->strid().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strid().data(), this->strid().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "VidGroup.strId");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->strid(), target);
  }

  // string strName = 2;
  if (this->strname().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strname().data(), this->strname().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "VidGroup.strName");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->strname(), target);
  }

  // repeated .VidCameraId cGroup = 3;
  for (unsigned int i = 0, n = this->cgroup_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        3, this->cgroup(i), false, target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:VidGroup)
  return target;
}

size_t VidGroup::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:VidGroup)
  size_t total_size = 0;

  // repeated .VidCameraId cGroup = 3;
  {
    unsigned int count = this->cgroup_size();
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->cgroup(i));
    }
  }

  // string strId = 1;
  if (this->strid().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->strid());
  }

  // string strName = 2;
  if (this->strname().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->strname());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void VidGroup::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:VidGroup)
  GOOGLE_DCHECK_NE(&from, this);
  const VidGroup* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const VidGroup>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:VidGroup)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:VidGroup)
    MergeFrom(*source);
  }
}

void VidGroup::MergeFrom(const VidGroup& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:VidGroup)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  cgroup_.MergeFrom(from.cgroup_);
  if (from.strid().size() > 0) {

    strid_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strid_);
  }
  if (from.strname().size() > 0) {

    strname_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strname_);
  }
}

void VidGroup::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:VidGroup)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void VidGroup::CopyFrom(const VidGroup& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:VidGroup)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool VidGroup::IsInitialized() const {
  return true;
}

void VidGroup::Swap(VidGroup* other) {
  if (other == this) return;
  InternalSwap(other);
}
void VidGroup::InternalSwap(VidGroup* other) {
  cgroup_.UnsafeArenaSwap(&other->cgroup_);
  strid_.Swap(&other->strid_);
  strname_.Swap(&other->strname_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata VidGroup::GetMetadata() const {
  protobuf_vidconf_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_vidconf_2eproto::file_level_metadata[17];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// VidGroup

// string strId = 1;
void VidGroup::clear_strid() {
  strid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& VidGroup::strid() const {
  // @@protoc_insertion_point(field_get:VidGroup.strId)
  return strid_.GetNoArena();
}
void VidGroup::set_strid(const ::std::string& value) {
  
  strid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:VidGroup.strId)
}
#if LANG_CXX11
void VidGroup::set_strid(::std::string&& value) {
  
  strid_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:VidGroup.strId)
}
#endif
void VidGroup::set_strid(const char* value) {
  
  strid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:VidGroup.strId)
}
void VidGroup::set_strid(const char* value, size_t size) {
  
  strid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:VidGroup.strId)
}
::std::string* VidGroup::mutable_strid() {
  
  // @@protoc_insertion_point(field_mutable:VidGroup.strId)
  return strid_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* VidGroup::release_strid() {
  // @@protoc_insertion_point(field_release:VidGroup.strId)
  
  return strid_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void VidGroup::set_allocated_strid(::std::string* strid) {
  if (strid != NULL) {
    
  } else {
    
  }
  strid_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), strid);
  // @@protoc_insertion_point(field_set_allocated:VidGroup.strId)
}

// string strName = 2;
void VidGroup::clear_strname() {
  strname_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& VidGroup::strname() const {
  // @@protoc_insertion_point(field_get:VidGroup.strName)
  return strname_.GetNoArena();
}
void VidGroup::set_strname(const ::std::string& value) {
  
  strname_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:VidGroup.strName)
}
#if LANG_CXX11
void VidGroup::set_strname(::std::string&& value) {
  
  strname_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:VidGroup.strName)
}
#endif
void VidGroup::set_strname(const char* value) {
  
  strname_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:VidGroup.strName)
}
void VidGroup::set_strname(const char* value, size_t size) {
  
  strname_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:VidGroup.strName)
}
::std::string* VidGroup::mutable_strname() {
  
  // @@protoc_insertion_point(field_mutable:VidGroup.strName)
  return strname_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* VidGroup::release_strname() {
  // @@protoc_insertion_point(field_release:VidGroup.strName)
  
  return strname_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void VidGroup::set_allocated_strname(::std::string* strname) {
  if (strname != NULL) {
    
  } else {
    
  }
  strname_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), strname);
  // @@protoc_insertion_point(field_set_allocated:VidGroup.strName)
}

// repeated .VidCameraId cGroup = 3;
int VidGroup::cgroup_size() const {
  return cgroup_.size();
}
void VidGroup::clear_cgroup() {
  cgroup_.Clear();
}
const ::VidCameraId& VidGroup::cgroup(int index) const {
  // @@protoc_insertion_point(field_get:VidGroup.cGroup)
  return cgroup_.Get(index);
}
::VidCameraId* VidGroup::mutable_cgroup(int index) {
  // @@protoc_insertion_point(field_mutable:VidGroup.cGroup)
  return cgroup_.Mutable(index);
}
::VidCameraId* VidGroup::add_cgroup() {
  // @@protoc_insertion_point(field_add:VidGroup.cGroup)
  return cgroup_.Add();
}
::google::protobuf::RepeatedPtrField< ::VidCameraId >*
VidGroup::mutable_cgroup() {
  // @@protoc_insertion_point(field_mutable_list:VidGroup.cGroup)
  return &cgroup_;
}
const ::google::protobuf::RepeatedPtrField< ::VidCameraId >&
VidGroup::cgroup() const {
  // @@protoc_insertion_point(field_list:VidGroup.cGroup)
  return cgroup_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int VidGroupList::kCVidGroupFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

VidGroupList::VidGroupList()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_vidconf_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:VidGroupList)
}
VidGroupList::VidGroupList(const VidGroupList& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      cvidgroup_(from.cvidgroup_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:VidGroupList)
}

void VidGroupList::SharedCtor() {
  _cached_size_ = 0;
}

VidGroupList::~VidGroupList() {
  // @@protoc_insertion_point(destructor:VidGroupList)
  SharedDtor();
}

void VidGroupList::SharedDtor() {
}

void VidGroupList::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* VidGroupList::descriptor() {
  protobuf_vidconf_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_vidconf_2eproto::file_level_metadata[18].descriptor;
}

const VidGroupList& VidGroupList::default_instance() {
  protobuf_vidconf_2eproto::InitDefaults();
  return *internal_default_instance();
}

VidGroupList* VidGroupList::New(::google::protobuf::Arena* arena) const {
  VidGroupList* n = new VidGroupList;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void VidGroupList::Clear() {
// @@protoc_insertion_point(message_clear_start:VidGroupList)
  cvidgroup_.Clear();
}

bool VidGroupList::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:VidGroupList)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .VidGroup cVidGroup = 1;
      case 1: {
        if (tag == 10u) {
          DO_(input->IncrementRecursionDepth());
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtualNoRecursionDepth(
                input, add_cvidgroup()));
        } else {
          goto handle_unusual;
        }
        input->UnsafeDecrementRecursionDepth();
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:VidGroupList)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:VidGroupList)
  return false;
#undef DO_
}

void VidGroupList::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:VidGroupList)
  // repeated .VidGroup cVidGroup = 1;
  for (unsigned int i = 0, n = this->cvidgroup_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->cvidgroup(i), output);
  }

  // @@protoc_insertion_point(serialize_end:VidGroupList)
}

::google::protobuf::uint8* VidGroupList::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic;  // Unused
  // @@protoc_insertion_point(serialize_to_array_start:VidGroupList)
  // repeated .VidGroup cVidGroup = 1;
  for (unsigned int i = 0, n = this->cvidgroup_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1, this->cvidgroup(i), false, target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:VidGroupList)
  return target;
}

size_t VidGroupList::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:VidGroupList)
  size_t total_size = 0;

  // repeated .VidGroup cVidGroup = 1;
  {
    unsigned int count = this->cvidgroup_size();
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->cvidgroup(i));
    }
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void VidGroupList::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:VidGroupList)
  GOOGLE_DCHECK_NE(&from, this);
  const VidGroupList* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const VidGroupList>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:VidGroupList)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:VidGroupList)
    MergeFrom(*source);
  }
}

void VidGroupList::MergeFrom(const VidGroupList& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:VidGroupList)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  cvidgroup_.MergeFrom(from.cvidgroup_);
}

void VidGroupList::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:VidGroupList)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void VidGroupList::CopyFrom(const VidGroupList& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:VidGroupList)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool VidGroupList::IsInitialized() const {
  return true;
}

void VidGroupList::Swap(VidGroupList* other) {
  if (other == this) return;
  InternalSwap(other);
}
void VidGroupList::InternalSwap(VidGroupList* other) {
  cvidgroup_.UnsafeArenaSwap(&other->cvidgroup_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata VidGroupList::GetMetadata() const {
  protobuf_vidconf_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_vidconf_2eproto::file_level_metadata[18];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// VidGroupList

// repeated .VidGroup cVidGroup = 1;
int VidGroupList::cvidgroup_size() const {
  return cvidgroup_.size();
}
void VidGroupList::clear_cvidgroup() {
  cvidgroup_.Clear();
}
const ::VidGroup& VidGroupList::cvidgroup(int index) const {
  // @@protoc_insertion_point(field_get:VidGroupList.cVidGroup)
  return cvidgroup_.Get(index);
}
::VidGroup* VidGroupList::mutable_cvidgroup(int index) {
  // @@protoc_insertion_point(field_mutable:VidGroupList.cVidGroup)
  return cvidgroup_.Mutable(index);
}
::VidGroup* VidGroupList::add_cvidgroup() {
  // @@protoc_insertion_point(field_add:VidGroupList.cVidGroup)
  return cvidgroup_.Add();
}
::google::protobuf::RepeatedPtrField< ::VidGroup >*
VidGroupList::mutable_cvidgroup() {
  // @@protoc_insertion_point(field_mutable_list:VidGroupList.cVidGroup)
  return &cvidgroup_;
}
const ::google::protobuf::RepeatedPtrField< ::VidGroup >&
VidGroupList::cvidgroup() const {
  // @@protoc_insertion_point(field_list:VidGroupList.cVidGroup)
  return cvidgroup_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int VidEmapCamera::kCIdFieldNumber;
const int VidEmapCamera::kXFieldNumber;
const int VidEmapCamera::kYFieldNumber;
const int VidEmapCamera::kWFieldNumber;
const int VidEmapCamera::kHFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

VidEmapCamera::VidEmapCamera()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_vidconf_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:VidEmapCamera)
}
VidEmapCamera::VidEmapCamera(const VidEmapCamera& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_cid()) {
    cid_ = new ::VidCameraId(*from.cid_);
  } else {
    cid_ = NULL;
  }
  ::memcpy(&x_, &from.x_,
    reinterpret_cast<char*>(&h_) -
    reinterpret_cast<char*>(&x_) + sizeof(h_));
  // @@protoc_insertion_point(copy_constructor:VidEmapCamera)
}

void VidEmapCamera::SharedCtor() {
  ::memset(&cid_, 0, reinterpret_cast<char*>(&h_) -
    reinterpret_cast<char*>(&cid_) + sizeof(h_));
  _cached_size_ = 0;
}

VidEmapCamera::~VidEmapCamera() {
  // @@protoc_insertion_point(destructor:VidEmapCamera)
  SharedDtor();
}

void VidEmapCamera::SharedDtor() {
  if (this != internal_default_instance()) {
    delete cid_;
  }
}

void VidEmapCamera::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* VidEmapCamera::descriptor() {
  protobuf_vidconf_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_vidconf_2eproto::file_level_metadata[19].descriptor;
}

const VidEmapCamera& VidEmapCamera::default_instance() {
  protobuf_vidconf_2eproto::InitDefaults();
  return *internal_default_instance();
}

VidEmapCamera* VidEmapCamera::New(::google::protobuf::Arena* arena) const {
  VidEmapCamera* n = new VidEmapCamera;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void VidEmapCamera::Clear() {
// @@protoc_insertion_point(message_clear_start:VidEmapCamera)
  if (GetArenaNoVirtual() == NULL && cid_ != NULL) {
    delete cid_;
  }
  cid_ = NULL;
  ::memset(&x_, 0, reinterpret_cast<char*>(&h_) -
    reinterpret_cast<char*>(&x_) + sizeof(h_));
}

bool VidEmapCamera::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:VidEmapCamera)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .VidCameraId cId = 1;
      case 1: {
        if (tag == 10u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_cid()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 x = 2;
      case 2: {
        if (tag == 16u) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &x_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 y = 3;
      case 3: {
        if (tag == 24u) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &y_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 w = 4;
      case 4: {
        if (tag == 32u) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &w_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 h = 5;
      case 5: {
        if (tag == 40u) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &h_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:VidEmapCamera)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:VidEmapCamera)
  return false;
#undef DO_
}

void VidEmapCamera::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:VidEmapCamera)
  // .VidCameraId cId = 1;
  if (this->has_cid()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, *this->cid_, output);
  }

  // int32 x = 2;
  if (this->x() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->x(), output);
  }

  // int32 y = 3;
  if (this->y() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->y(), output);
  }

  // int32 w = 4;
  if (this->w() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(4, this->w(), output);
  }

  // int32 h = 5;
  if (this->h() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(5, this->h(), output);
  }

  // @@protoc_insertion_point(serialize_end:VidEmapCamera)
}

::google::protobuf::uint8* VidEmapCamera::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic;  // Unused
  // @@protoc_insertion_point(serialize_to_array_start:VidEmapCamera)
  // .VidCameraId cId = 1;
  if (this->has_cid()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1, *this->cid_, false, target);
  }

  // int32 x = 2;
  if (this->x() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->x(), target);
  }

  // int32 y = 3;
  if (this->y() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->y(), target);
  }

  // int32 w = 4;
  if (this->w() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(4, this->w(), target);
  }

  // int32 h = 5;
  if (this->h() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(5, this->h(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:VidEmapCamera)
  return target;
}

size_t VidEmapCamera::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:VidEmapCamera)
  size_t total_size = 0;

  // .VidCameraId cId = 1;
  if (this->has_cid()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->cid_);
  }

  // int32 x = 2;
  if (this->x() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->x());
  }

  // int32 y = 3;
  if (this->y() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->y());
  }

  // int32 w = 4;
  if (this->w() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->w());
  }

  // int32 h = 5;
  if (this->h() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->h());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void VidEmapCamera::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:VidEmapCamera)
  GOOGLE_DCHECK_NE(&from, this);
  const VidEmapCamera* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const VidEmapCamera>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:VidEmapCamera)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:VidEmapCamera)
    MergeFrom(*source);
  }
}

void VidEmapCamera::MergeFrom(const VidEmapCamera& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:VidEmapCamera)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_cid()) {
    mutable_cid()->::VidCameraId::MergeFrom(from.cid());
  }
  if (from.x() != 0) {
    set_x(from.x());
  }
  if (from.y() != 0) {
    set_y(from.y());
  }
  if (from.w() != 0) {
    set_w(from.w());
  }
  if (from.h() != 0) {
    set_h(from.h());
  }
}

void VidEmapCamera::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:VidEmapCamera)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void VidEmapCamera::CopyFrom(const VidEmapCamera& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:VidEmapCamera)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool VidEmapCamera::IsInitialized() const {
  return true;
}

void VidEmapCamera::Swap(VidEmapCamera* other) {
  if (other == this) return;
  InternalSwap(other);
}
void VidEmapCamera::InternalSwap(VidEmapCamera* other) {
  std::swap(cid_, other->cid_);
  std::swap(x_, other->x_);
  std::swap(y_, other->y_);
  std::swap(w_, other->w_);
  std::swap(h_, other->h_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata VidEmapCamera::GetMetadata() const {
  protobuf_vidconf_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_vidconf_2eproto::file_level_metadata[19];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// VidEmapCamera

// .VidCameraId cId = 1;
bool VidEmapCamera::has_cid() const {
  return this != internal_default_instance() && cid_ != NULL;
}
void VidEmapCamera::clear_cid() {
  if (GetArenaNoVirtual() == NULL && cid_ != NULL) delete cid_;
  cid_ = NULL;
}
const ::VidCameraId& VidEmapCamera::cid() const {
  // @@protoc_insertion_point(field_get:VidEmapCamera.cId)
  return cid_ != NULL ? *cid_
                         : *::VidCameraId::internal_default_instance();
}
::VidCameraId* VidEmapCamera::mutable_cid() {
  
  if (cid_ == NULL) {
    cid_ = new ::VidCameraId;
  }
  // @@protoc_insertion_point(field_mutable:VidEmapCamera.cId)
  return cid_;
}
::VidCameraId* VidEmapCamera::release_cid() {
  // @@protoc_insertion_point(field_release:VidEmapCamera.cId)
  
  ::VidCameraId* temp = cid_;
  cid_ = NULL;
  return temp;
}
void VidEmapCamera::set_allocated_cid(::VidCameraId* cid) {
  delete cid_;
  cid_ = cid;
  if (cid) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:VidEmapCamera.cId)
}

// int32 x = 2;
void VidEmapCamera::clear_x() {
  x_ = 0;
}
::google::protobuf::int32 VidEmapCamera::x() const {
  // @@protoc_insertion_point(field_get:VidEmapCamera.x)
  return x_;
}
void VidEmapCamera::set_x(::google::protobuf::int32 value) {
  
  x_ = value;
  // @@protoc_insertion_point(field_set:VidEmapCamera.x)
}

// int32 y = 3;
void VidEmapCamera::clear_y() {
  y_ = 0;
}
::google::protobuf::int32 VidEmapCamera::y() const {
  // @@protoc_insertion_point(field_get:VidEmapCamera.y)
  return y_;
}
void VidEmapCamera::set_y(::google::protobuf::int32 value) {
  
  y_ = value;
  // @@protoc_insertion_point(field_set:VidEmapCamera.y)
}

// int32 w = 4;
void VidEmapCamera::clear_w() {
  w_ = 0;
}
::google::protobuf::int32 VidEmapCamera::w() const {
  // @@protoc_insertion_point(field_get:VidEmapCamera.w)
  return w_;
}
void VidEmapCamera::set_w(::google::protobuf::int32 value) {
  
  w_ = value;
  // @@protoc_insertion_point(field_set:VidEmapCamera.w)
}

// int32 h = 5;
void VidEmapCamera::clear_h() {
  h_ = 0;
}
::google::protobuf::int32 VidEmapCamera::h() const {
  // @@protoc_insertion_point(field_get:VidEmapCamera.h)
  return h_;
}
void VidEmapCamera::set_h(::google::protobuf::int32 value) {
  
  h_ = value;
  // @@protoc_insertion_point(field_set:VidEmapCamera.h)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int VidEmap::kStrIdFieldNumber;
const int VidEmap::kStrNameFieldNumber;
const int VidEmap::kCCameraFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

VidEmap::VidEmap()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_vidconf_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:VidEmap)
}
VidEmap::VidEmap(const VidEmap& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      ccamera_(from.ccamera_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  strid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.strid().size() > 0) {
    strid_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strid_);
  }
  strname_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.strname().size() > 0) {
    strname_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strname_);
  }
  // @@protoc_insertion_point(copy_constructor:VidEmap)
}

void VidEmap::SharedCtor() {
  strid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  strname_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _cached_size_ = 0;
}

VidEmap::~VidEmap() {
  // @@protoc_insertion_point(destructor:VidEmap)
  SharedDtor();
}

void VidEmap::SharedDtor() {
  strid_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  strname_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void VidEmap::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* VidEmap::descriptor() {
  protobuf_vidconf_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_vidconf_2eproto::file_level_metadata[20].descriptor;
}

const VidEmap& VidEmap::default_instance() {
  protobuf_vidconf_2eproto::InitDefaults();
  return *internal_default_instance();
}

VidEmap* VidEmap::New(::google::protobuf::Arena* arena) const {
  VidEmap* n = new VidEmap;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void VidEmap::Clear() {
// @@protoc_insertion_point(message_clear_start:VidEmap)
  ccamera_.Clear();
  strid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  strname_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

bool VidEmap::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:VidEmap)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string strId = 1;
      case 1: {
        if (tag == 10u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_strid()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->strid().data(), this->strid().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "VidEmap.strId"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string strName = 2;
      case 2: {
        if (tag == 18u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_strname()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->strname().data(), this->strname().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "VidEmap.strName"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .VidEmapCamera cCamera = 3;
      case 3: {
        if (tag == 26u) {
          DO_(input->IncrementRecursionDepth());
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtualNoRecursionDepth(
                input, add_ccamera()));
        } else {
          goto handle_unusual;
        }
        input->UnsafeDecrementRecursionDepth();
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:VidEmap)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:VidEmap)
  return false;
#undef DO_
}

void VidEmap::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:VidEmap)
  // string strId = 1;
  if (this->strid().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strid().data(), this->strid().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "VidEmap.strId");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->strid(), output);
  }

  // string strName = 2;
  if (this->strname().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strname().data(), this->strname().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "VidEmap.strName");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->strname(), output);
  }

  // repeated .VidEmapCamera cCamera = 3;
  for (unsigned int i = 0, n = this->ccamera_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, this->ccamera(i), output);
  }

  // @@protoc_insertion_point(serialize_end:VidEmap)
}

::google::protobuf::uint8* VidEmap::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic;  // Unused
  // @@protoc_insertion_point(serialize_to_array_start:VidEmap)
  // string strId = 1;
  if (this->strid().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strid().data(), this->strid().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "VidEmap.strId");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->strid(), target);
  }

  // string strName = 2;
  if (this->strname().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strname().data(), this->strname().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "VidEmap.strName");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->strname(), target);
  }

  // repeated .VidEmapCamera cCamera = 3;
  for (unsigned int i = 0, n = this->ccamera_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        3, this->ccamera(i), false, target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:VidEmap)
  return target;
}

size_t VidEmap::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:VidEmap)
  size_t total_size = 0;

  // repeated .VidEmapCamera cCamera = 3;
  {
    unsigned int count = this->ccamera_size();
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->ccamera(i));
    }
  }

  // string strId = 1;
  if (this->strid().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->strid());
  }

  // string strName = 2;
  if (this->strname().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->strname());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void VidEmap::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:VidEmap)
  GOOGLE_DCHECK_NE(&from, this);
  const VidEmap* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const VidEmap>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:VidEmap)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:VidEmap)
    MergeFrom(*source);
  }
}

void VidEmap::MergeFrom(const VidEmap& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:VidEmap)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ccamera_.MergeFrom(from.ccamera_);
  if (from.strid().size() > 0) {

    strid_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strid_);
  }
  if (from.strname().size() > 0) {

    strname_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strname_);
  }
}

void VidEmap::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:VidEmap)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void VidEmap::CopyFrom(const VidEmap& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:VidEmap)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool VidEmap::IsInitialized() const {
  return true;
}

void VidEmap::Swap(VidEmap* other) {
  if (other == this) return;
  InternalSwap(other);
}
void VidEmap::InternalSwap(VidEmap* other) {
  ccamera_.UnsafeArenaSwap(&other->ccamera_);
  strid_.Swap(&other->strid_);
  strname_.Swap(&other->strname_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata VidEmap::GetMetadata() const {
  protobuf_vidconf_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_vidconf_2eproto::file_level_metadata[20];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// VidEmap

// string strId = 1;
void VidEmap::clear_strid() {
  strid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& VidEmap::strid() const {
  // @@protoc_insertion_point(field_get:VidEmap.strId)
  return strid_.GetNoArena();
}
void VidEmap::set_strid(const ::std::string& value) {
  
  strid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:VidEmap.strId)
}
#if LANG_CXX11
void VidEmap::set_strid(::std::string&& value) {
  
  strid_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:VidEmap.strId)
}
#endif
void VidEmap::set_strid(const char* value) {
  
  strid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:VidEmap.strId)
}
void VidEmap::set_strid(const char* value, size_t size) {
  
  strid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:VidEmap.strId)
}
::std::string* VidEmap::mutable_strid() {
  
  // @@protoc_insertion_point(field_mutable:VidEmap.strId)
  return strid_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* VidEmap::release_strid() {
  // @@protoc_insertion_point(field_release:VidEmap.strId)
  
  return strid_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void VidEmap::set_allocated_strid(::std::string* strid) {
  if (strid != NULL) {
    
  } else {
    
  }
  strid_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), strid);
  // @@protoc_insertion_point(field_set_allocated:VidEmap.strId)
}

// string strName = 2;
void VidEmap::clear_strname() {
  strname_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& VidEmap::strname() const {
  // @@protoc_insertion_point(field_get:VidEmap.strName)
  return strname_.GetNoArena();
}
void VidEmap::set_strname(const ::std::string& value) {
  
  strname_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:VidEmap.strName)
}
#if LANG_CXX11
void VidEmap::set_strname(::std::string&& value) {
  
  strname_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:VidEmap.strName)
}
#endif
void VidEmap::set_strname(const char* value) {
  
  strname_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:VidEmap.strName)
}
void VidEmap::set_strname(const char* value, size_t size) {
  
  strname_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:VidEmap.strName)
}
::std::string* VidEmap::mutable_strname() {
  
  // @@protoc_insertion_point(field_mutable:VidEmap.strName)
  return strname_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* VidEmap::release_strname() {
  // @@protoc_insertion_point(field_release:VidEmap.strName)
  
  return strname_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void VidEmap::set_allocated_strname(::std::string* strname) {
  if (strname != NULL) {
    
  } else {
    
  }
  strname_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), strname);
  // @@protoc_insertion_point(field_set_allocated:VidEmap.strName)
}

// repeated .VidEmapCamera cCamera = 3;
int VidEmap::ccamera_size() const {
  return ccamera_.size();
}
void VidEmap::clear_ccamera() {
  ccamera_.Clear();
}
const ::VidEmapCamera& VidEmap::ccamera(int index) const {
  // @@protoc_insertion_point(field_get:VidEmap.cCamera)
  return ccamera_.Get(index);
}
::VidEmapCamera* VidEmap::mutable_ccamera(int index) {
  // @@protoc_insertion_point(field_mutable:VidEmap.cCamera)
  return ccamera_.Mutable(index);
}
::VidEmapCamera* VidEmap::add_ccamera() {
  // @@protoc_insertion_point(field_add:VidEmap.cCamera)
  return ccamera_.Add();
}
::google::protobuf::RepeatedPtrField< ::VidEmapCamera >*
VidEmap::mutable_ccamera() {
  // @@protoc_insertion_point(field_mutable_list:VidEmap.cCamera)
  return &ccamera_;
}
const ::google::protobuf::RepeatedPtrField< ::VidEmapCamera >&
VidEmap::ccamera() const {
  // @@protoc_insertion_point(field_list:VidEmap.cCamera)
  return ccamera_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int VidEmapList::kCVidEmapFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

VidEmapList::VidEmapList()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_vidconf_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:VidEmapList)
}
VidEmapList::VidEmapList(const VidEmapList& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      cvidemap_(from.cvidemap_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:VidEmapList)
}

void VidEmapList::SharedCtor() {
  _cached_size_ = 0;
}

VidEmapList::~VidEmapList() {
  // @@protoc_insertion_point(destructor:VidEmapList)
  SharedDtor();
}

void VidEmapList::SharedDtor() {
}

void VidEmapList::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* VidEmapList::descriptor() {
  protobuf_vidconf_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_vidconf_2eproto::file_level_metadata[21].descriptor;
}

const VidEmapList& VidEmapList::default_instance() {
  protobuf_vidconf_2eproto::InitDefaults();
  return *internal_default_instance();
}

VidEmapList* VidEmapList::New(::google::protobuf::Arena* arena) const {
  VidEmapList* n = new VidEmapList;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void VidEmapList::Clear() {
// @@protoc_insertion_point(message_clear_start:VidEmapList)
  cvidemap_.Clear();
}

bool VidEmapList::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:VidEmapList)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .VidEmap cVidEmap = 1;
      case 1: {
        if (tag == 10u) {
          DO_(input->IncrementRecursionDepth());
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtualNoRecursionDepth(
                input, add_cvidemap()));
        } else {
          goto handle_unusual;
        }
        input->UnsafeDecrementRecursionDepth();
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:VidEmapList)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:VidEmapList)
  return false;
#undef DO_
}

void VidEmapList::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:VidEmapList)
  // repeated .VidEmap cVidEmap = 1;
  for (unsigned int i = 0, n = this->cvidemap_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->cvidemap(i), output);
  }

  // @@protoc_insertion_point(serialize_end:VidEmapList)
}

::google::protobuf::uint8* VidEmapList::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic;  // Unused
  // @@protoc_insertion_point(serialize_to_array_start:VidEmapList)
  // repeated .VidEmap cVidEmap = 1;
  for (unsigned int i = 0, n = this->cvidemap_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1, this->cvidemap(i), false, target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:VidEmapList)
  return target;
}

size_t VidEmapList::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:VidEmapList)
  size_t total_size = 0;

  // repeated .VidEmap cVidEmap = 1;
  {
    unsigned int count = this->cvidemap_size();
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->cvidemap(i));
    }
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void VidEmapList::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:VidEmapList)
  GOOGLE_DCHECK_NE(&from, this);
  const VidEmapList* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const VidEmapList>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:VidEmapList)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:VidEmapList)
    MergeFrom(*source);
  }
}

void VidEmapList::MergeFrom(const VidEmapList& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:VidEmapList)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  cvidemap_.MergeFrom(from.cvidemap_);
}

void VidEmapList::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:VidEmapList)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void VidEmapList::CopyFrom(const VidEmapList& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:VidEmapList)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool VidEmapList::IsInitialized() const {
  return true;
}

void VidEmapList::Swap(VidEmapList* other) {
  if (other == this) return;
  InternalSwap(other);
}
void VidEmapList::InternalSwap(VidEmapList* other) {
  cvidemap_.UnsafeArenaSwap(&other->cvidemap_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata VidEmapList::GetMetadata() const {
  protobuf_vidconf_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_vidconf_2eproto::file_level_metadata[21];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// VidEmapList

// repeated .VidEmap cVidEmap = 1;
int VidEmapList::cvidemap_size() const {
  return cvidemap_.size();
}
void VidEmapList::clear_cvidemap() {
  cvidemap_.Clear();
}
const ::VidEmap& VidEmapList::cvidemap(int index) const {
  // @@protoc_insertion_point(field_get:VidEmapList.cVidEmap)
  return cvidemap_.Get(index);
}
::VidEmap* VidEmapList::mutable_cvidemap(int index) {
  // @@protoc_insertion_point(field_mutable:VidEmapList.cVidEmap)
  return cvidemap_.Mutable(index);
}
::VidEmap* VidEmapList::add_cvidemap() {
  // @@protoc_insertion_point(field_add:VidEmapList.cVidEmap)
  return cvidemap_.Add();
}
::google::protobuf::RepeatedPtrField< ::VidEmap >*
VidEmapList::mutable_cvidemap() {
  // @@protoc_insertion_point(field_mutable_list:VidEmapList.cVidEmap)
  return &cvidemap_;
}
const ::google::protobuf::RepeatedPtrField< ::VidEmap >&
VidEmapList::cvidemap() const {
  // @@protoc_insertion_point(field_list:VidEmapList.cVidEmap)
  return cvidemap_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int VidStream::kStrTokenFieldNumber;
const int VidStream::kStrNameFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

VidStream::VidStream()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_vidconf_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:VidStream)
}
VidStream::VidStream(const VidStream& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  strtoken_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.strtoken().size() > 0) {
    strtoken_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strtoken_);
  }
  strname_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.strname().size() > 0) {
    strname_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strname_);
  }
  // @@protoc_insertion_point(copy_constructor:VidStream)
}

void VidStream::SharedCtor() {
  strtoken_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  strname_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _cached_size_ = 0;
}

VidStream::~VidStream() {
  // @@protoc_insertion_point(destructor:VidStream)
  SharedDtor();
}

void VidStream::SharedDtor() {
  strtoken_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  strname_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void VidStream::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* VidStream::descriptor() {
  protobuf_vidconf_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_vidconf_2eproto::file_level_metadata[22].descriptor;
}

const VidStream& VidStream::default_instance() {
  protobuf_vidconf_2eproto::InitDefaults();
  return *internal_default_instance();
}

VidStream* VidStream::New(::google::protobuf::Arena* arena) const {
  VidStream* n = new VidStream;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void VidStream::Clear() {
// @@protoc_insertion_point(message_clear_start:VidStream)
  strtoken_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  strname_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

bool VidStream::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:VidStream)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string strToken = 1;
      case 1: {
        if (tag == 10u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_strtoken()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->strtoken().data(), this->strtoken().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "VidStream.strToken"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string strName = 2;
      case 2: {
        if (tag == 18u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_strname()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->strname().data(), this->strname().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "VidStream.strName"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:VidStream)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:VidStream)
  return false;
#undef DO_
}

void VidStream::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:VidStream)
  // string strToken = 1;
  if (this->strtoken().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strtoken().data(), this->strtoken().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "VidStream.strToken");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->strtoken(), output);
  }

  // string strName = 2;
  if (this->strname().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strname().data(), this->strname().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "VidStream.strName");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->strname(), output);
  }

  // @@protoc_insertion_point(serialize_end:VidStream)
}

::google::protobuf::uint8* VidStream::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic;  // Unused
  // @@protoc_insertion_point(serialize_to_array_start:VidStream)
  // string strToken = 1;
  if (this->strtoken().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strtoken().data(), this->strtoken().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "VidStream.strToken");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->strtoken(), target);
  }

  // string strName = 2;
  if (this->strname().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strname().data(), this->strname().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "VidStream.strName");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->strname(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:VidStream)
  return target;
}

size_t VidStream::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:VidStream)
  size_t total_size = 0;

  // string strToken = 1;
  if (this->strtoken().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->strtoken());
  }

  // string strName = 2;
  if (this->strname().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->strname());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void VidStream::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:VidStream)
  GOOGLE_DCHECK_NE(&from, this);
  const VidStream* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const VidStream>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:VidStream)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:VidStream)
    MergeFrom(*source);
  }
}

void VidStream::MergeFrom(const VidStream& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:VidStream)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.strtoken().size() > 0) {

    strtoken_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strtoken_);
  }
  if (from.strname().size() > 0) {

    strname_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strname_);
  }
}

void VidStream::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:VidStream)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void VidStream::CopyFrom(const VidStream& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:VidStream)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool VidStream::IsInitialized() const {
  return true;
}

void VidStream::Swap(VidStream* other) {
  if (other == this) return;
  InternalSwap(other);
}
void VidStream::InternalSwap(VidStream* other) {
  strtoken_.Swap(&other->strtoken_);
  strname_.Swap(&other->strname_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata VidStream::GetMetadata() const {
  protobuf_vidconf_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_vidconf_2eproto::file_level_metadata[22];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// VidStream

// string strToken = 1;
void VidStream::clear_strtoken() {
  strtoken_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& VidStream::strtoken() const {
  // @@protoc_insertion_point(field_get:VidStream.strToken)
  return strtoken_.GetNoArena();
}
void VidStream::set_strtoken(const ::std::string& value) {
  
  strtoken_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:VidStream.strToken)
}
#if LANG_CXX11
void VidStream::set_strtoken(::std::string&& value) {
  
  strtoken_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:VidStream.strToken)
}
#endif
void VidStream::set_strtoken(const char* value) {
  
  strtoken_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:VidStream.strToken)
}
void VidStream::set_strtoken(const char* value, size_t size) {
  
  strtoken_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:VidStream.strToken)
}
::std::string* VidStream::mutable_strtoken() {
  
  // @@protoc_insertion_point(field_mutable:VidStream.strToken)
  return strtoken_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* VidStream::release_strtoken() {
  // @@protoc_insertion_point(field_release:VidStream.strToken)
  
  return strtoken_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void VidStream::set_allocated_strtoken(::std::string* strtoken) {
  if (strtoken != NULL) {
    
  } else {
    
  }
  strtoken_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), strtoken);
  // @@protoc_insertion_point(field_set_allocated:VidStream.strToken)
}

// string strName = 2;
void VidStream::clear_strname() {
  strname_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& VidStream::strname() const {
  // @@protoc_insertion_point(field_get:VidStream.strName)
  return strname_.GetNoArena();
}
void VidStream::set_strname(const ::std::string& value) {
  
  strname_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:VidStream.strName)
}
#if LANG_CXX11
void VidStream::set_strname(::std::string&& value) {
  
  strname_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:VidStream.strName)
}
#endif
void VidStream::set_strname(const char* value) {
  
  strname_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:VidStream.strName)
}
void VidStream::set_strname(const char* value, size_t size) {
  
  strname_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:VidStream.strName)
}
::std::string* VidStream::mutable_strname() {
  
  // @@protoc_insertion_point(field_mutable:VidStream.strName)
  return strname_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* VidStream::release_strname() {
  // @@protoc_insertion_point(field_release:VidStream.strName)
  
  return strname_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void VidStream::set_allocated_strname(::std::string* strname) {
  if (strname != NULL) {
    
  } else {
    
  }
  strname_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), strname);
  // @@protoc_insertion_point(field_set_allocated:VidStream.strName)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int VidStreamList::kCVidStreamFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

VidStreamList::VidStreamList()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_vidconf_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:VidStreamList)
}
VidStreamList::VidStreamList(const VidStreamList& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      cvidstream_(from.cvidstream_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:VidStreamList)
}

void VidStreamList::SharedCtor() {
  _cached_size_ = 0;
}

VidStreamList::~VidStreamList() {
  // @@protoc_insertion_point(destructor:VidStreamList)
  SharedDtor();
}

void VidStreamList::SharedDtor() {
}

void VidStreamList::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* VidStreamList::descriptor() {
  protobuf_vidconf_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_vidconf_2eproto::file_level_metadata[23].descriptor;
}

const VidStreamList& VidStreamList::default_instance() {
  protobuf_vidconf_2eproto::InitDefaults();
  return *internal_default_instance();
}

VidStreamList* VidStreamList::New(::google::protobuf::Arena* arena) const {
  VidStreamList* n = new VidStreamList;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void VidStreamList::Clear() {
// @@protoc_insertion_point(message_clear_start:VidStreamList)
  cvidstream_.Clear();
}

bool VidStreamList::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:VidStreamList)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .VidStream cVidStream = 1;
      case 1: {
        if (tag == 10u) {
          DO_(input->IncrementRecursionDepth());
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtualNoRecursionDepth(
                input, add_cvidstream()));
        } else {
          goto handle_unusual;
        }
        input->UnsafeDecrementRecursionDepth();
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:VidStreamList)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:VidStreamList)
  return false;
#undef DO_
}

void VidStreamList::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:VidStreamList)
  // repeated .VidStream cVidStream = 1;
  for (unsigned int i = 0, n = this->cvidstream_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->cvidstream(i), output);
  }

  // @@protoc_insertion_point(serialize_end:VidStreamList)
}

::google::protobuf::uint8* VidStreamList::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic;  // Unused
  // @@protoc_insertion_point(serialize_to_array_start:VidStreamList)
  // repeated .VidStream cVidStream = 1;
  for (unsigned int i = 0, n = this->cvidstream_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1, this->cvidstream(i), false, target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:VidStreamList)
  return target;
}

size_t VidStreamList::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:VidStreamList)
  size_t total_size = 0;

  // repeated .VidStream cVidStream = 1;
  {
    unsigned int count = this->cvidstream_size();
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->cvidstream(i));
    }
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void VidStreamList::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:VidStreamList)
  GOOGLE_DCHECK_NE(&from, this);
  const VidStreamList* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const VidStreamList>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:VidStreamList)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:VidStreamList)
    MergeFrom(*source);
  }
}

void VidStreamList::MergeFrom(const VidStreamList& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:VidStreamList)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  cvidstream_.MergeFrom(from.cvidstream_);
}

void VidStreamList::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:VidStreamList)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void VidStreamList::CopyFrom(const VidStreamList& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:VidStreamList)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool VidStreamList::IsInitialized() const {
  return true;
}

void VidStreamList::Swap(VidStreamList* other) {
  if (other == this) return;
  InternalSwap(other);
}
void VidStreamList::InternalSwap(VidStreamList* other) {
  cvidstream_.UnsafeArenaSwap(&other->cvidstream_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata VidStreamList::GetMetadata() const {
  protobuf_vidconf_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_vidconf_2eproto::file_level_metadata[23];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// VidStreamList

// repeated .VidStream cVidStream = 1;
int VidStreamList::cvidstream_size() const {
  return cvidstream_.size();
}
void VidStreamList::clear_cvidstream() {
  cvidstream_.Clear();
}
const ::VidStream& VidStreamList::cvidstream(int index) const {
  // @@protoc_insertion_point(field_get:VidStreamList.cVidStream)
  return cvidstream_.Get(index);
}
::VidStream* VidStreamList::mutable_cvidstream(int index) {
  // @@protoc_insertion_point(field_mutable:VidStreamList.cVidStream)
  return cvidstream_.Mutable(index);
}
::VidStream* VidStreamList::add_cvidstream() {
  // @@protoc_insertion_point(field_add:VidStreamList.cVidStream)
  return cvidstream_.Add();
}
::google::protobuf::RepeatedPtrField< ::VidStream >*
VidStreamList::mutable_cvidstream() {
  // @@protoc_insertion_point(field_mutable_list:VidStreamList.cVidStream)
  return &cvidstream_;
}
const ::google::protobuf::RepeatedPtrField< ::VidStream >&
VidStreamList::cvidstream() const {
  // @@protoc_insertion_point(field_list:VidStreamList.cVidStream)
  return cvidstream_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int VidBlob::kX0FieldNumber;
const int VidBlob::kY0FieldNumber;
const int VidBlob::kX1FieldNumber;
const int VidBlob::kY1FieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

VidBlob::VidBlob()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_vidconf_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:VidBlob)
}
VidBlob::VidBlob(const VidBlob& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&x0_, &from.x0_,
    reinterpret_cast<char*>(&y1_) -
    reinterpret_cast<char*>(&x0_) + sizeof(y1_));
  // @@protoc_insertion_point(copy_constructor:VidBlob)
}

void VidBlob::SharedCtor() {
  ::memset(&x0_, 0, reinterpret_cast<char*>(&y1_) -
    reinterpret_cast<char*>(&x0_) + sizeof(y1_));
  _cached_size_ = 0;
}

VidBlob::~VidBlob() {
  // @@protoc_insertion_point(destructor:VidBlob)
  SharedDtor();
}

void VidBlob::SharedDtor() {
}

void VidBlob::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* VidBlob::descriptor() {
  protobuf_vidconf_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_vidconf_2eproto::file_level_metadata[24].descriptor;
}

const VidBlob& VidBlob::default_instance() {
  protobuf_vidconf_2eproto::InitDefaults();
  return *internal_default_instance();
}

VidBlob* VidBlob::New(::google::protobuf::Arena* arena) const {
  VidBlob* n = new VidBlob;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void VidBlob::Clear() {
// @@protoc_insertion_point(message_clear_start:VidBlob)
  ::memset(&x0_, 0, reinterpret_cast<char*>(&y1_) -
    reinterpret_cast<char*>(&x0_) + sizeof(y1_));
}

bool VidBlob::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:VidBlob)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // int32 x0 = 1;
      case 1: {
        if (tag == 8u) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &x0_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 y0 = 2;
      case 2: {
        if (tag == 16u) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &y0_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 x1 = 3;
      case 3: {
        if (tag == 24u) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &x1_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 y1 = 4;
      case 4: {
        if (tag == 32u) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &y1_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:VidBlob)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:VidBlob)
  return false;
#undef DO_
}

void VidBlob::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:VidBlob)
  // int32 x0 = 1;
  if (this->x0() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->x0(), output);
  }

  // int32 y0 = 2;
  if (this->y0() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->y0(), output);
  }

  // int32 x1 = 3;
  if (this->x1() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->x1(), output);
  }

  // int32 y1 = 4;
  if (this->y1() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(4, this->y1(), output);
  }

  // @@protoc_insertion_point(serialize_end:VidBlob)
}

::google::protobuf::uint8* VidBlob::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic;  // Unused
  // @@protoc_insertion_point(serialize_to_array_start:VidBlob)
  // int32 x0 = 1;
  if (this->x0() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->x0(), target);
  }

  // int32 y0 = 2;
  if (this->y0() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->y0(), target);
  }

  // int32 x1 = 3;
  if (this->x1() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->x1(), target);
  }

  // int32 y1 = 4;
  if (this->y1() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(4, this->y1(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:VidBlob)
  return target;
}

size_t VidBlob::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:VidBlob)
  size_t total_size = 0;

  // int32 x0 = 1;
  if (this->x0() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->x0());
  }

  // int32 y0 = 2;
  if (this->y0() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->y0());
  }

  // int32 x1 = 3;
  if (this->x1() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->x1());
  }

  // int32 y1 = 4;
  if (this->y1() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->y1());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void VidBlob::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:VidBlob)
  GOOGLE_DCHECK_NE(&from, this);
  const VidBlob* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const VidBlob>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:VidBlob)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:VidBlob)
    MergeFrom(*source);
  }
}

void VidBlob::MergeFrom(const VidBlob& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:VidBlob)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.x0() != 0) {
    set_x0(from.x0());
  }
  if (from.y0() != 0) {
    set_y0(from.y0());
  }
  if (from.x1() != 0) {
    set_x1(from.x1());
  }
  if (from.y1() != 0) {
    set_y1(from.y1());
  }
}

void VidBlob::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:VidBlob)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void VidBlob::CopyFrom(const VidBlob& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:VidBlob)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool VidBlob::IsInitialized() const {
  return true;
}

void VidBlob::Swap(VidBlob* other) {
  if (other == this) return;
  InternalSwap(other);
}
void VidBlob::InternalSwap(VidBlob* other) {
  std::swap(x0_, other->x0_);
  std::swap(y0_, other->y0_);
  std::swap(x1_, other->x1_);
  std::swap(y1_, other->y1_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata VidBlob::GetMetadata() const {
  protobuf_vidconf_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_vidconf_2eproto::file_level_metadata[24];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// VidBlob

// int32 x0 = 1;
void VidBlob::clear_x0() {
  x0_ = 0;
}
::google::protobuf::int32 VidBlob::x0() const {
  // @@protoc_insertion_point(field_get:VidBlob.x0)
  return x0_;
}
void VidBlob::set_x0(::google::protobuf::int32 value) {
  
  x0_ = value;
  // @@protoc_insertion_point(field_set:VidBlob.x0)
}

// int32 y0 = 2;
void VidBlob::clear_y0() {
  y0_ = 0;
}
::google::protobuf::int32 VidBlob::y0() const {
  // @@protoc_insertion_point(field_get:VidBlob.y0)
  return y0_;
}
void VidBlob::set_y0(::google::protobuf::int32 value) {
  
  y0_ = value;
  // @@protoc_insertion_point(field_set:VidBlob.y0)
}

// int32 x1 = 3;
void VidBlob::clear_x1() {
  x1_ = 0;
}
::google::protobuf::int32 VidBlob::x1() const {
  // @@protoc_insertion_point(field_get:VidBlob.x1)
  return x1_;
}
void VidBlob::set_x1(::google::protobuf::int32 value) {
  
  x1_ = value;
  // @@protoc_insertion_point(field_set:VidBlob.x1)
}

// int32 y1 = 4;
void VidBlob::clear_y1() {
  y1_ = 0;
}
::google::protobuf::int32 VidBlob::y1() const {
  // @@protoc_insertion_point(field_get:VidBlob.y1)
  return y1_;
}
void VidBlob::set_y1(::google::protobuf::int32 value) {
  
  y1_ = value;
  // @@protoc_insertion_point(field_set:VidBlob.y1)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int VidBlobList::kCBlobFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

VidBlobList::VidBlobList()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_vidconf_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:VidBlobList)
}
VidBlobList::VidBlobList(const VidBlobList& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      cblob_(from.cblob_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:VidBlobList)
}

void VidBlobList::SharedCtor() {
  _cached_size_ = 0;
}

VidBlobList::~VidBlobList() {
  // @@protoc_insertion_point(destructor:VidBlobList)
  SharedDtor();
}

void VidBlobList::SharedDtor() {
}

void VidBlobList::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* VidBlobList::descriptor() {
  protobuf_vidconf_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_vidconf_2eproto::file_level_metadata[25].descriptor;
}

const VidBlobList& VidBlobList::default_instance() {
  protobuf_vidconf_2eproto::InitDefaults();
  return *internal_default_instance();
}

VidBlobList* VidBlobList::New(::google::protobuf::Arena* arena) const {
  VidBlobList* n = new VidBlobList;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void VidBlobList::Clear() {
// @@protoc_insertion_point(message_clear_start:VidBlobList)
  cblob_.Clear();
}

bool VidBlobList::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:VidBlobList)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .VidBlob cBlob = 1;
      case 1: {
        if (tag == 10u) {
          DO_(input->IncrementRecursionDepth());
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtualNoRecursionDepth(
                input, add_cblob()));
        } else {
          goto handle_unusual;
        }
        input->UnsafeDecrementRecursionDepth();
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:VidBlobList)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:VidBlobList)
  return false;
#undef DO_
}

void VidBlobList::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:VidBlobList)
  // repeated .VidBlob cBlob = 1;
  for (unsigned int i = 0, n = this->cblob_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->cblob(i), output);
  }

  // @@protoc_insertion_point(serialize_end:VidBlobList)
}

::google::protobuf::uint8* VidBlobList::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic;  // Unused
  // @@protoc_insertion_point(serialize_to_array_start:VidBlobList)
  // repeated .VidBlob cBlob = 1;
  for (unsigned int i = 0, n = this->cblob_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1, this->cblob(i), false, target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:VidBlobList)
  return target;
}

size_t VidBlobList::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:VidBlobList)
  size_t total_size = 0;

  // repeated .VidBlob cBlob = 1;
  {
    unsigned int count = this->cblob_size();
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->cblob(i));
    }
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void VidBlobList::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:VidBlobList)
  GOOGLE_DCHECK_NE(&from, this);
  const VidBlobList* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const VidBlobList>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:VidBlobList)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:VidBlobList)
    MergeFrom(*source);
  }
}

void VidBlobList::MergeFrom(const VidBlobList& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:VidBlobList)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  cblob_.MergeFrom(from.cblob_);
}

void VidBlobList::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:VidBlobList)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void VidBlobList::CopyFrom(const VidBlobList& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:VidBlobList)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool VidBlobList::IsInitialized() const {
  return true;
}

void VidBlobList::Swap(VidBlobList* other) {
  if (other == this) return;
  InternalSwap(other);
}
void VidBlobList::InternalSwap(VidBlobList* other) {
  cblob_.UnsafeArenaSwap(&other->cblob_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata VidBlobList::GetMetadata() const {
  protobuf_vidconf_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_vidconf_2eproto::file_level_metadata[25];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// VidBlobList

// repeated .VidBlob cBlob = 1;
int VidBlobList::cblob_size() const {
  return cblob_.size();
}
void VidBlobList::clear_cblob() {
  cblob_.Clear();
}
const ::VidBlob& VidBlobList::cblob(int index) const {
  // @@protoc_insertion_point(field_get:VidBlobList.cBlob)
  return cblob_.Get(index);
}
::VidBlob* VidBlobList::mutable_cblob(int index) {
  // @@protoc_insertion_point(field_mutable:VidBlobList.cBlob)
  return cblob_.Mutable(index);
}
::VidBlob* VidBlobList::add_cblob() {
  // @@protoc_insertion_point(field_add:VidBlobList.cBlob)
  return cblob_.Add();
}
::google::protobuf::RepeatedPtrField< ::VidBlob >*
VidBlobList::mutable_cblob() {
  // @@protoc_insertion_point(field_mutable_list:VidBlobList.cBlob)
  return &cblob_;
}
const ::google::protobuf::RepeatedPtrField< ::VidBlob >&
VidBlobList::cblob() const {
  // @@protoc_insertion_point(field_list:VidBlobList.cBlob)
  return cblob_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int VidEventDBConf::kNTypeFieldNumber;
const int VidEventDBConf::kStrDBPathFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

VidEventDBConf::VidEventDBConf()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_vidconf_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:VidEventDBConf)
}
VidEventDBConf::VidEventDBConf(const VidEventDBConf& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  strdbpath_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.strdbpath().size() > 0) {
    strdbpath_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strdbpath_);
  }
  ntype_ = from.ntype_;
  // @@protoc_insertion_point(copy_constructor:VidEventDBConf)
}

void VidEventDBConf::SharedCtor() {
  strdbpath_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ntype_ = 0;
  _cached_size_ = 0;
}

VidEventDBConf::~VidEventDBConf() {
  // @@protoc_insertion_point(destructor:VidEventDBConf)
  SharedDtor();
}

void VidEventDBConf::SharedDtor() {
  strdbpath_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void VidEventDBConf::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* VidEventDBConf::descriptor() {
  protobuf_vidconf_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_vidconf_2eproto::file_level_metadata[26].descriptor;
}

const VidEventDBConf& VidEventDBConf::default_instance() {
  protobuf_vidconf_2eproto::InitDefaults();
  return *internal_default_instance();
}

VidEventDBConf* VidEventDBConf::New(::google::protobuf::Arena* arena) const {
  VidEventDBConf* n = new VidEventDBConf;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void VidEventDBConf::Clear() {
// @@protoc_insertion_point(message_clear_start:VidEventDBConf)
  strdbpath_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ntype_ = 0;
}

bool VidEventDBConf::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:VidEventDBConf)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .VidEventDBType nType = 1;
      case 1: {
        if (tag == 8u) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_ntype(static_cast< ::VidEventDBType >(value));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string strDBPath = 2;
      case 2: {
        if (tag == 18u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_strdbpath()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->strdbpath().data(), this->strdbpath().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "VidEventDBConf.strDBPath"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:VidEventDBConf)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:VidEventDBConf)
  return false;
#undef DO_
}

void VidEventDBConf::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:VidEventDBConf)
  // .VidEventDBType nType = 1;
  if (this->ntype() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->ntype(), output);
  }

  // string strDBPath = 2;
  if (this->strdbpath().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strdbpath().data(), this->strdbpath().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "VidEventDBConf.strDBPath");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->strdbpath(), output);
  }

  // @@protoc_insertion_point(serialize_end:VidEventDBConf)
}

::google::protobuf::uint8* VidEventDBConf::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic;  // Unused
  // @@protoc_insertion_point(serialize_to_array_start:VidEventDBConf)
  // .VidEventDBType nType = 1;
  if (this->ntype() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->ntype(), target);
  }

  // string strDBPath = 2;
  if (this->strdbpath().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strdbpath().data(), this->strdbpath().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "VidEventDBConf.strDBPath");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->strdbpath(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:VidEventDBConf)
  return target;
}

size_t VidEventDBConf::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:VidEventDBConf)
  size_t total_size = 0;

  // string strDBPath = 2;
  if (this->strdbpath().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->strdbpath());
  }

  // .VidEventDBType nType = 1;
  if (this->ntype() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->ntype());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void VidEventDBConf::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:VidEventDBConf)
  GOOGLE_DCHECK_NE(&from, this);
  const VidEventDBConf* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const VidEventDBConf>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:VidEventDBConf)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:VidEventDBConf)
    MergeFrom(*source);
  }
}

void VidEventDBConf::MergeFrom(const VidEventDBConf& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:VidEventDBConf)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.strdbpath().size() > 0) {

    strdbpath_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strdbpath_);
  }
  if (from.ntype() != 0) {
    set_ntype(from.ntype());
  }
}

void VidEventDBConf::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:VidEventDBConf)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void VidEventDBConf::CopyFrom(const VidEventDBConf& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:VidEventDBConf)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool VidEventDBConf::IsInitialized() const {
  return true;
}

void VidEventDBConf::Swap(VidEventDBConf* other) {
  if (other == this) return;
  InternalSwap(other);
}
void VidEventDBConf::InternalSwap(VidEventDBConf* other) {
  strdbpath_.Swap(&other->strdbpath_);
  std::swap(ntype_, other->ntype_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata VidEventDBConf::GetMetadata() const {
  protobuf_vidconf_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_vidconf_2eproto::file_level_metadata[26];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// VidEventDBConf

// .VidEventDBType nType = 1;
void VidEventDBConf::clear_ntype() {
  ntype_ = 0;
}
::VidEventDBType VidEventDBConf::ntype() const {
  // @@protoc_insertion_point(field_get:VidEventDBConf.nType)
  return static_cast< ::VidEventDBType >(ntype_);
}
void VidEventDBConf::set_ntype(::VidEventDBType value) {
  
  ntype_ = value;
  // @@protoc_insertion_point(field_set:VidEventDBConf.nType)
}

// string strDBPath = 2;
void VidEventDBConf::clear_strdbpath() {
  strdbpath_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& VidEventDBConf::strdbpath() const {
  // @@protoc_insertion_point(field_get:VidEventDBConf.strDBPath)
  return strdbpath_.GetNoArena();
}
void VidEventDBConf::set_strdbpath(const ::std::string& value) {
  
  strdbpath_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:VidEventDBConf.strDBPath)
}
#if LANG_CXX11
void VidEventDBConf::set_strdbpath(::std::string&& value) {
  
  strdbpath_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:VidEventDBConf.strDBPath)
}
#endif
void VidEventDBConf::set_strdbpath(const char* value) {
  
  strdbpath_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:VidEventDBConf.strDBPath)
}
void VidEventDBConf::set_strdbpath(const char* value, size_t size) {
  
  strdbpath_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:VidEventDBConf.strDBPath)
}
::std::string* VidEventDBConf::mutable_strdbpath() {
  
  // @@protoc_insertion_point(field_mutable:VidEventDBConf.strDBPath)
  return strdbpath_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* VidEventDBConf::release_strdbpath() {
  // @@protoc_insertion_point(field_release:VidEventDBConf.strDBPath)
  
  return strdbpath_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void VidEventDBConf::set_allocated_strdbpath(::std::string* strdbpath) {
  if (strdbpath != NULL) {
    
  } else {
    
  }
  strdbpath_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), strdbpath);
  // @@protoc_insertion_point(field_set_allocated:VidEventDBConf.strDBPath)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int VidEvent::kStrIdFieldNumber;
const int VidEvent::kStrDeviceFieldNumber;
const int VidEvent::kStrDeviceNameFieldNumber;
const int VidEvent::kStrTypeFieldNumber;
const int VidEvent::kNTimeFieldNumber;
const int VidEvent::kStrTimeFieldNumber;
const int VidEvent::kStrDescFieldNumber;
const int VidEvent::kBHandledFieldNumber;
const int VidEvent::kBSearchedFieldNumber;
const int VidEvent::kStrCommentsFieldNumber;
const int VidEvent::kStrStorIdFieldNumber;
const int VidEvent::kStrStorNameFieldNumber;
const int VidEvent::kNIdxFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

VidEvent::VidEvent()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_vidconf_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:VidEvent)
}
VidEvent::VidEvent(const VidEvent& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  strid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.strid().size() > 0) {
    strid_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strid_);
  }
  strdevice_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.strdevice().size() > 0) {
    strdevice_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strdevice_);
  }
  strdevicename_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.strdevicename().size() > 0) {
    strdevicename_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strdevicename_);
  }
  strtype_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.strtype().size() > 0) {
    strtype_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strtype_);
  }
  strtime_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.strtime().size() > 0) {
    strtime_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strtime_);
  }
  strdesc_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.strdesc().size() > 0) {
    strdesc_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strdesc_);
  }
  strcomments_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.strcomments().size() > 0) {
    strcomments_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strcomments_);
  }
  strstorid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.strstorid().size() > 0) {
    strstorid_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strstorid_);
  }
  strstorname_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.strstorname().size() > 0) {
    strstorname_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strstorname_);
  }
  ::memcpy(&ntime_, &from.ntime_,
    reinterpret_cast<char*>(&bsearched_) -
    reinterpret_cast<char*>(&ntime_) + sizeof(bsearched_));
  // @@protoc_insertion_point(copy_constructor:VidEvent)
}

void VidEvent::SharedCtor() {
  strid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  strdevice_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  strdevicename_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  strtype_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  strtime_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  strdesc_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  strcomments_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  strstorid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  strstorname_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&ntime_, 0, reinterpret_cast<char*>(&bsearched_) -
    reinterpret_cast<char*>(&ntime_) + sizeof(bsearched_));
  _cached_size_ = 0;
}

VidEvent::~VidEvent() {
  // @@protoc_insertion_point(destructor:VidEvent)
  SharedDtor();
}

void VidEvent::SharedDtor() {
  strid_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  strdevice_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  strdevicename_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  strtype_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  strtime_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  strdesc_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  strcomments_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  strstorid_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  strstorname_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void VidEvent::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* VidEvent::descriptor() {
  protobuf_vidconf_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_vidconf_2eproto::file_level_metadata[27].descriptor;
}

const VidEvent& VidEvent::default_instance() {
  protobuf_vidconf_2eproto::InitDefaults();
  return *internal_default_instance();
}

VidEvent* VidEvent::New(::google::protobuf::Arena* arena) const {
  VidEvent* n = new VidEvent;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void VidEvent::Clear() {
// @@protoc_insertion_point(message_clear_start:VidEvent)
  strid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  strdevice_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  strdevicename_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  strtype_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  strtime_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  strdesc_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  strcomments_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  strstorid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  strstorname_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&ntime_, 0, reinterpret_cast<char*>(&bsearched_) -
    reinterpret_cast<char*>(&ntime_) + sizeof(bsearched_));
}

bool VidEvent::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:VidEvent)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string strId = 1;
      case 1: {
        if (tag == 10u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_strid()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->strid().data(), this->strid().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "VidEvent.strId"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string strDevice = 2;
      case 2: {
        if (tag == 18u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_strdevice()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->strdevice().data(), this->strdevice().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "VidEvent.strDevice"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string strDeviceName = 3;
      case 3: {
        if (tag == 26u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_strdevicename()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->strdevicename().data(), this->strdevicename().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "VidEvent.strDeviceName"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string strType = 4;
      case 4: {
        if (tag == 34u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_strtype()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->strtype().data(), this->strtype().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "VidEvent.strType"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int64 nTime = 5;
      case 5: {
        if (tag == 40u) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &ntime_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string strTime = 6;
      case 6: {
        if (tag == 50u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_strtime()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->strtime().data(), this->strtime().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "VidEvent.strTime"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string strDesc = 7;
      case 7: {
        if (tag == 58u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_strdesc()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->strdesc().data(), this->strdesc().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "VidEvent.strDesc"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool bHandled = 8;
      case 8: {
        if (tag == 64u) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &bhandled_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool bSearched = 9;
      case 9: {
        if (tag == 72u) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &bsearched_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string strComments = 10;
      case 10: {
        if (tag == 82u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_strcomments()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->strcomments().data(), this->strcomments().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "VidEvent.strComments"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string strStorId = 11;
      case 11: {
        if (tag == 90u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_strstorid()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->strstorid().data(), this->strstorid().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "VidEvent.strStorId"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string strStorName = 12;
      case 12: {
        if (tag == 98u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_strstorname()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->strstorname().data(), this->strstorname().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "VidEvent.strStorName"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int64 nIdx = 13;
      case 13: {
        if (tag == 104u) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &nidx_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:VidEvent)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:VidEvent)
  return false;
#undef DO_
}

void VidEvent::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:VidEvent)
  // string strId = 1;
  if (this->strid().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strid().data(), this->strid().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "VidEvent.strId");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->strid(), output);
  }

  // string strDevice = 2;
  if (this->strdevice().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strdevice().data(), this->strdevice().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "VidEvent.strDevice");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->strdevice(), output);
  }

  // string strDeviceName = 3;
  if (this->strdevicename().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strdevicename().data(), this->strdevicename().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "VidEvent.strDeviceName");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->strdevicename(), output);
  }

  // string strType = 4;
  if (this->strtype().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strtype().data(), this->strtype().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "VidEvent.strType");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      4, this->strtype(), output);
  }

  // int64 nTime = 5;
  if (this->ntime() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(5, this->ntime(), output);
  }

  // string strTime = 6;
  if (this->strtime().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strtime().data(), this->strtime().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "VidEvent.strTime");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      6, this->strtime(), output);
  }

  // string strDesc = 7;
  if (this->strdesc().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strdesc().data(), this->strdesc().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "VidEvent.strDesc");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      7, this->strdesc(), output);
  }

  // bool bHandled = 8;
  if (this->bhandled() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(8, this->bhandled(), output);
  }

  // bool bSearched = 9;
  if (this->bsearched() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(9, this->bsearched(), output);
  }

  // string strComments = 10;
  if (this->strcomments().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strcomments().data(), this->strcomments().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "VidEvent.strComments");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      10, this->strcomments(), output);
  }

  // string strStorId = 11;
  if (this->strstorid().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strstorid().data(), this->strstorid().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "VidEvent.strStorId");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      11, this->strstorid(), output);
  }

  // string strStorName = 12;
  if (this->strstorname().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strstorname().data(), this->strstorname().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "VidEvent.strStorName");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      12, this->strstorname(), output);
  }

  // int64 nIdx = 13;
  if (this->nidx() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(13, this->nidx(), output);
  }

  // @@protoc_insertion_point(serialize_end:VidEvent)
}

::google::protobuf::uint8* VidEvent::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic;  // Unused
  // @@protoc_insertion_point(serialize_to_array_start:VidEvent)
  // string strId = 1;
  if (this->strid().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strid().data(), this->strid().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "VidEvent.strId");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->strid(), target);
  }

  // string strDevice = 2;
  if (this->strdevice().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strdevice().data(), this->strdevice().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "VidEvent.strDevice");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->strdevice(), target);
  }

  // string strDeviceName = 3;
  if (this->strdevicename().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strdevicename().data(), this->strdevicename().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "VidEvent.strDeviceName");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->strdevicename(), target);
  }

  // string strType = 4;
  if (this->strtype().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strtype().data(), this->strtype().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "VidEvent.strType");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        4, this->strtype(), target);
  }

  // int64 nTime = 5;
  if (this->ntime() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(5, this->ntime(), target);
  }

  // string strTime = 6;
  if (this->strtime().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strtime().data(), this->strtime().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "VidEvent.strTime");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        6, this->strtime(), target);
  }

  // string strDesc = 7;
  if (this->strdesc().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strdesc().data(), this->strdesc().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "VidEvent.strDesc");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        7, this->strdesc(), target);
  }

  // bool bHandled = 8;
  if (this->bhandled() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(8, this->bhandled(), target);
  }

  // bool bSearched = 9;
  if (this->bsearched() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(9, this->bsearched(), target);
  }

  // string strComments = 10;
  if (this->strcomments().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strcomments().data(), this->strcomments().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "VidEvent.strComments");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        10, this->strcomments(), target);
  }

  // string strStorId = 11;
  if (this->strstorid().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strstorid().data(), this->strstorid().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "VidEvent.strStorId");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        11, this->strstorid(), target);
  }

  // string strStorName = 12;
  if (this->strstorname().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strstorname().data(), this->strstorname().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "VidEvent.strStorName");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        12, this->strstorname(), target);
  }

  // int64 nIdx = 13;
  if (this->nidx() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(13, this->nidx(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:VidEvent)
  return target;
}

size_t VidEvent::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:VidEvent)
  size_t total_size = 0;

  // string strId = 1;
  if (this->strid().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->strid());
  }

  // string strDevice = 2;
  if (this->strdevice().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->strdevice());
  }

  // string strDeviceName = 3;
  if (this->strdevicename().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->strdevicename());
  }

  // string strType = 4;
  if (this->strtype().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->strtype());
  }

  // string strTime = 6;
  if (this->strtime().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->strtime());
  }

  // string strDesc = 7;
  if (this->strdesc().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->strdesc());
  }

  // string strComments = 10;
  if (this->strcomments().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->strcomments());
  }

  // string strStorId = 11;
  if (this->strstorid().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->strstorid());
  }

  // string strStorName = 12;
  if (this->strstorname().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->strstorname());
  }

  // int64 nTime = 5;
  if (this->ntime() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->ntime());
  }

  // int64 nIdx = 13;
  if (this->nidx() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->nidx());
  }

  // bool bHandled = 8;
  if (this->bhandled() != 0) {
    total_size += 1 + 1;
  }

  // bool bSearched = 9;
  if (this->bsearched() != 0) {
    total_size += 1 + 1;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void VidEvent::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:VidEvent)
  GOOGLE_DCHECK_NE(&from, this);
  const VidEvent* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const VidEvent>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:VidEvent)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:VidEvent)
    MergeFrom(*source);
  }
}

void VidEvent::MergeFrom(const VidEvent& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:VidEvent)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.strid().size() > 0) {

    strid_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strid_);
  }
  if (from.strdevice().size() > 0) {

    strdevice_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strdevice_);
  }
  if (from.strdevicename().size() > 0) {

    strdevicename_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strdevicename_);
  }
  if (from.strtype().size() > 0) {

    strtype_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strtype_);
  }
  if (from.strtime().size() > 0) {

    strtime_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strtime_);
  }
  if (from.strdesc().size() > 0) {

    strdesc_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strdesc_);
  }
  if (from.strcomments().size() > 0) {

    strcomments_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strcomments_);
  }
  if (from.strstorid().size() > 0) {

    strstorid_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strstorid_);
  }
  if (from.strstorname().size() > 0) {

    strstorname_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strstorname_);
  }
  if (from.ntime() != 0) {
    set_ntime(from.ntime());
  }
  if (from.nidx() != 0) {
    set_nidx(from.nidx());
  }
  if (from.bhandled() != 0) {
    set_bhandled(from.bhandled());
  }
  if (from.bsearched() != 0) {
    set_bsearched(from.bsearched());
  }
}

void VidEvent::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:VidEvent)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void VidEvent::CopyFrom(const VidEvent& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:VidEvent)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool VidEvent::IsInitialized() const {
  return true;
}

void VidEvent::Swap(VidEvent* other) {
  if (other == this) return;
  InternalSwap(other);
}
void VidEvent::InternalSwap(VidEvent* other) {
  strid_.Swap(&other->strid_);
  strdevice_.Swap(&other->strdevice_);
  strdevicename_.Swap(&other->strdevicename_);
  strtype_.Swap(&other->strtype_);
  strtime_.Swap(&other->strtime_);
  strdesc_.Swap(&other->strdesc_);
  strcomments_.Swap(&other->strcomments_);
  strstorid_.Swap(&other->strstorid_);
  strstorname_.Swap(&other->strstorname_);
  std::swap(ntime_, other->ntime_);
  std::swap(nidx_, other->nidx_);
  std::swap(bhandled_, other->bhandled_);
  std::swap(bsearched_, other->bsearched_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata VidEvent::GetMetadata() const {
  protobuf_vidconf_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_vidconf_2eproto::file_level_metadata[27];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// VidEvent

// string strId = 1;
void VidEvent::clear_strid() {
  strid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& VidEvent::strid() const {
  // @@protoc_insertion_point(field_get:VidEvent.strId)
  return strid_.GetNoArena();
}
void VidEvent::set_strid(const ::std::string& value) {
  
  strid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:VidEvent.strId)
}
#if LANG_CXX11
void VidEvent::set_strid(::std::string&& value) {
  
  strid_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:VidEvent.strId)
}
#endif
void VidEvent::set_strid(const char* value) {
  
  strid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:VidEvent.strId)
}
void VidEvent::set_strid(const char* value, size_t size) {
  
  strid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:VidEvent.strId)
}
::std::string* VidEvent::mutable_strid() {
  
  // @@protoc_insertion_point(field_mutable:VidEvent.strId)
  return strid_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* VidEvent::release_strid() {
  // @@protoc_insertion_point(field_release:VidEvent.strId)
  
  return strid_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void VidEvent::set_allocated_strid(::std::string* strid) {
  if (strid != NULL) {
    
  } else {
    
  }
  strid_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), strid);
  // @@protoc_insertion_point(field_set_allocated:VidEvent.strId)
}

// string strDevice = 2;
void VidEvent::clear_strdevice() {
  strdevice_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& VidEvent::strdevice() const {
  // @@protoc_insertion_point(field_get:VidEvent.strDevice)
  return strdevice_.GetNoArena();
}
void VidEvent::set_strdevice(const ::std::string& value) {
  
  strdevice_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:VidEvent.strDevice)
}
#if LANG_CXX11
void VidEvent::set_strdevice(::std::string&& value) {
  
  strdevice_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:VidEvent.strDevice)
}
#endif
void VidEvent::set_strdevice(const char* value) {
  
  strdevice_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:VidEvent.strDevice)
}
void VidEvent::set_strdevice(const char* value, size_t size) {
  
  strdevice_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:VidEvent.strDevice)
}
::std::string* VidEvent::mutable_strdevice() {
  
  // @@protoc_insertion_point(field_mutable:VidEvent.strDevice)
  return strdevice_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* VidEvent::release_strdevice() {
  // @@protoc_insertion_point(field_release:VidEvent.strDevice)
  
  return strdevice_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void VidEvent::set_allocated_strdevice(::std::string* strdevice) {
  if (strdevice != NULL) {
    
  } else {
    
  }
  strdevice_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), strdevice);
  // @@protoc_insertion_point(field_set_allocated:VidEvent.strDevice)
}

// string strDeviceName = 3;
void VidEvent::clear_strdevicename() {
  strdevicename_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& VidEvent::strdevicename() const {
  // @@protoc_insertion_point(field_get:VidEvent.strDeviceName)
  return strdevicename_.GetNoArena();
}
void VidEvent::set_strdevicename(const ::std::string& value) {
  
  strdevicename_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:VidEvent.strDeviceName)
}
#if LANG_CXX11
void VidEvent::set_strdevicename(::std::string&& value) {
  
  strdevicename_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:VidEvent.strDeviceName)
}
#endif
void VidEvent::set_strdevicename(const char* value) {
  
  strdevicename_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:VidEvent.strDeviceName)
}
void VidEvent::set_strdevicename(const char* value, size_t size) {
  
  strdevicename_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:VidEvent.strDeviceName)
}
::std::string* VidEvent::mutable_strdevicename() {
  
  // @@protoc_insertion_point(field_mutable:VidEvent.strDeviceName)
  return strdevicename_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* VidEvent::release_strdevicename() {
  // @@protoc_insertion_point(field_release:VidEvent.strDeviceName)
  
  return strdevicename_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void VidEvent::set_allocated_strdevicename(::std::string* strdevicename) {
  if (strdevicename != NULL) {
    
  } else {
    
  }
  strdevicename_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), strdevicename);
  // @@protoc_insertion_point(field_set_allocated:VidEvent.strDeviceName)
}

// string strType = 4;
void VidEvent::clear_strtype() {
  strtype_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& VidEvent::strtype() const {
  // @@protoc_insertion_point(field_get:VidEvent.strType)
  return strtype_.GetNoArena();
}
void VidEvent::set_strtype(const ::std::string& value) {
  
  strtype_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:VidEvent.strType)
}
#if LANG_CXX11
void VidEvent::set_strtype(::std::string&& value) {
  
  strtype_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:VidEvent.strType)
}
#endif
void VidEvent::set_strtype(const char* value) {
  
  strtype_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:VidEvent.strType)
}
void VidEvent::set_strtype(const char* value, size_t size) {
  
  strtype_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:VidEvent.strType)
}
::std::string* VidEvent::mutable_strtype() {
  
  // @@protoc_insertion_point(field_mutable:VidEvent.strType)
  return strtype_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* VidEvent::release_strtype() {
  // @@protoc_insertion_point(field_release:VidEvent.strType)
  
  return strtype_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void VidEvent::set_allocated_strtype(::std::string* strtype) {
  if (strtype != NULL) {
    
  } else {
    
  }
  strtype_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), strtype);
  // @@protoc_insertion_point(field_set_allocated:VidEvent.strType)
}

// int64 nTime = 5;
void VidEvent::clear_ntime() {
  ntime_ = GOOGLE_LONGLONG(0);
}
::google::protobuf::int64 VidEvent::ntime() const {
  // @@protoc_insertion_point(field_get:VidEvent.nTime)
  return ntime_;
}
void VidEvent::set_ntime(::google::protobuf::int64 value) {
  
  ntime_ = value;
  // @@protoc_insertion_point(field_set:VidEvent.nTime)
}

// string strTime = 6;
void VidEvent::clear_strtime() {
  strtime_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& VidEvent::strtime() const {
  // @@protoc_insertion_point(field_get:VidEvent.strTime)
  return strtime_.GetNoArena();
}
void VidEvent::set_strtime(const ::std::string& value) {
  
  strtime_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:VidEvent.strTime)
}
#if LANG_CXX11
void VidEvent::set_strtime(::std::string&& value) {
  
  strtime_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:VidEvent.strTime)
}
#endif
void VidEvent::set_strtime(const char* value) {
  
  strtime_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:VidEvent.strTime)
}
void VidEvent::set_strtime(const char* value, size_t size) {
  
  strtime_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:VidEvent.strTime)
}
::std::string* VidEvent::mutable_strtime() {
  
  // @@protoc_insertion_point(field_mutable:VidEvent.strTime)
  return strtime_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* VidEvent::release_strtime() {
  // @@protoc_insertion_point(field_release:VidEvent.strTime)
  
  return strtime_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void VidEvent::set_allocated_strtime(::std::string* strtime) {
  if (strtime != NULL) {
    
  } else {
    
  }
  strtime_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), strtime);
  // @@protoc_insertion_point(field_set_allocated:VidEvent.strTime)
}

// string strDesc = 7;
void VidEvent::clear_strdesc() {
  strdesc_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& VidEvent::strdesc() const {
  // @@protoc_insertion_point(field_get:VidEvent.strDesc)
  return strdesc_.GetNoArena();
}
void VidEvent::set_strdesc(const ::std::string& value) {
  
  strdesc_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:VidEvent.strDesc)
}
#if LANG_CXX11
void VidEvent::set_strdesc(::std::string&& value) {
  
  strdesc_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:VidEvent.strDesc)
}
#endif
void VidEvent::set_strdesc(const char* value) {
  
  strdesc_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:VidEvent.strDesc)
}
void VidEvent::set_strdesc(const char* value, size_t size) {
  
  strdesc_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:VidEvent.strDesc)
}
::std::string* VidEvent::mutable_strdesc() {
  
  // @@protoc_insertion_point(field_mutable:VidEvent.strDesc)
  return strdesc_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* VidEvent::release_strdesc() {
  // @@protoc_insertion_point(field_release:VidEvent.strDesc)
  
  return strdesc_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void VidEvent::set_allocated_strdesc(::std::string* strdesc) {
  if (strdesc != NULL) {
    
  } else {
    
  }
  strdesc_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), strdesc);
  // @@protoc_insertion_point(field_set_allocated:VidEvent.strDesc)
}

// bool bHandled = 8;
void VidEvent::clear_bhandled() {
  bhandled_ = false;
}
bool VidEvent::bhandled() const {
  // @@protoc_insertion_point(field_get:VidEvent.bHandled)
  return bhandled_;
}
void VidEvent::set_bhandled(bool value) {
  
  bhandled_ = value;
  // @@protoc_insertion_point(field_set:VidEvent.bHandled)
}

// bool bSearched = 9;
void VidEvent::clear_bsearched() {
  bsearched_ = false;
}
bool VidEvent::bsearched() const {
  // @@protoc_insertion_point(field_get:VidEvent.bSearched)
  return bsearched_;
}
void VidEvent::set_bsearched(bool value) {
  
  bsearched_ = value;
  // @@protoc_insertion_point(field_set:VidEvent.bSearched)
}

// string strComments = 10;
void VidEvent::clear_strcomments() {
  strcomments_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& VidEvent::strcomments() const {
  // @@protoc_insertion_point(field_get:VidEvent.strComments)
  return strcomments_.GetNoArena();
}
void VidEvent::set_strcomments(const ::std::string& value) {
  
  strcomments_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:VidEvent.strComments)
}
#if LANG_CXX11
void VidEvent::set_strcomments(::std::string&& value) {
  
  strcomments_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:VidEvent.strComments)
}
#endif
void VidEvent::set_strcomments(const char* value) {
  
  strcomments_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:VidEvent.strComments)
}
void VidEvent::set_strcomments(const char* value, size_t size) {
  
  strcomments_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:VidEvent.strComments)
}
::std::string* VidEvent::mutable_strcomments() {
  
  // @@protoc_insertion_point(field_mutable:VidEvent.strComments)
  return strcomments_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* VidEvent::release_strcomments() {
  // @@protoc_insertion_point(field_release:VidEvent.strComments)
  
  return strcomments_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void VidEvent::set_allocated_strcomments(::std::string* strcomments) {
  if (strcomments != NULL) {
    
  } else {
    
  }
  strcomments_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), strcomments);
  // @@protoc_insertion_point(field_set_allocated:VidEvent.strComments)
}

// string strStorId = 11;
void VidEvent::clear_strstorid() {
  strstorid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& VidEvent::strstorid() const {
  // @@protoc_insertion_point(field_get:VidEvent.strStorId)
  return strstorid_.GetNoArena();
}
void VidEvent::set_strstorid(const ::std::string& value) {
  
  strstorid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:VidEvent.strStorId)
}
#if LANG_CXX11
void VidEvent::set_strstorid(::std::string&& value) {
  
  strstorid_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:VidEvent.strStorId)
}
#endif
void VidEvent::set_strstorid(const char* value) {
  
  strstorid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:VidEvent.strStorId)
}
void VidEvent::set_strstorid(const char* value, size_t size) {
  
  strstorid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:VidEvent.strStorId)
}
::std::string* VidEvent::mutable_strstorid() {
  
  // @@protoc_insertion_point(field_mutable:VidEvent.strStorId)
  return strstorid_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* VidEvent::release_strstorid() {
  // @@protoc_insertion_point(field_release:VidEvent.strStorId)
  
  return strstorid_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void VidEvent::set_allocated_strstorid(::std::string* strstorid) {
  if (strstorid != NULL) {
    
  } else {
    
  }
  strstorid_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), strstorid);
  // @@protoc_insertion_point(field_set_allocated:VidEvent.strStorId)
}

// string strStorName = 12;
void VidEvent::clear_strstorname() {
  strstorname_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& VidEvent::strstorname() const {
  // @@protoc_insertion_point(field_get:VidEvent.strStorName)
  return strstorname_.GetNoArena();
}
void VidEvent::set_strstorname(const ::std::string& value) {
  
  strstorname_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:VidEvent.strStorName)
}
#if LANG_CXX11
void VidEvent::set_strstorname(::std::string&& value) {
  
  strstorname_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:VidEvent.strStorName)
}
#endif
void VidEvent::set_strstorname(const char* value) {
  
  strstorname_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:VidEvent.strStorName)
}
void VidEvent::set_strstorname(const char* value, size_t size) {
  
  strstorname_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:VidEvent.strStorName)
}
::std::string* VidEvent::mutable_strstorname() {
  
  // @@protoc_insertion_point(field_mutable:VidEvent.strStorName)
  return strstorname_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* VidEvent::release_strstorname() {
  // @@protoc_insertion_point(field_release:VidEvent.strStorName)
  
  return strstorname_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void VidEvent::set_allocated_strstorname(::std::string* strstorname) {
  if (strstorname != NULL) {
    
  } else {
    
  }
  strstorname_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), strstorname);
  // @@protoc_insertion_point(field_set_allocated:VidEvent.strStorName)
}

// int64 nIdx = 13;
void VidEvent::clear_nidx() {
  nidx_ = GOOGLE_LONGLONG(0);
}
::google::protobuf::int64 VidEvent::nidx() const {
  // @@protoc_insertion_point(field_get:VidEvent.nIdx)
  return nidx_;
}
void VidEvent::set_nidx(::google::protobuf::int64 value) {
  
  nidx_ = value;
  // @@protoc_insertion_point(field_set:VidEvent.nIdx)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int VidStreamUrl::kStrProtocolFieldNumber;
const int VidStreamUrl::kStrUrlFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

VidStreamUrl::VidStreamUrl()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_vidconf_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:VidStreamUrl)
}
VidStreamUrl::VidStreamUrl(const VidStreamUrl& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  strprotocol_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.strprotocol().size() > 0) {
    strprotocol_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strprotocol_);
  }
  strurl_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.strurl().size() > 0) {
    strurl_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strurl_);
  }
  // @@protoc_insertion_point(copy_constructor:VidStreamUrl)
}

void VidStreamUrl::SharedCtor() {
  strprotocol_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  strurl_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _cached_size_ = 0;
}

VidStreamUrl::~VidStreamUrl() {
  // @@protoc_insertion_point(destructor:VidStreamUrl)
  SharedDtor();
}

void VidStreamUrl::SharedDtor() {
  strprotocol_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  strurl_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void VidStreamUrl::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* VidStreamUrl::descriptor() {
  protobuf_vidconf_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_vidconf_2eproto::file_level_metadata[28].descriptor;
}

const VidStreamUrl& VidStreamUrl::default_instance() {
  protobuf_vidconf_2eproto::InitDefaults();
  return *internal_default_instance();
}

VidStreamUrl* VidStreamUrl::New(::google::protobuf::Arena* arena) const {
  VidStreamUrl* n = new VidStreamUrl;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void VidStreamUrl::Clear() {
// @@protoc_insertion_point(message_clear_start:VidStreamUrl)
  strprotocol_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  strurl_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

bool VidStreamUrl::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:VidStreamUrl)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string strProtocol = 1;
      case 1: {
        if (tag == 10u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_strprotocol()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->strprotocol().data(), this->strprotocol().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "VidStreamUrl.strProtocol"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string strUrl = 2;
      case 2: {
        if (tag == 18u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_strurl()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->strurl().data(), this->strurl().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "VidStreamUrl.strUrl"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:VidStreamUrl)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:VidStreamUrl)
  return false;
#undef DO_
}

void VidStreamUrl::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:VidStreamUrl)
  // string strProtocol = 1;
  if (this->strprotocol().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strprotocol().data(), this->strprotocol().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "VidStreamUrl.strProtocol");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->strprotocol(), output);
  }

  // string strUrl = 2;
  if (this->strurl().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strurl().data(), this->strurl().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "VidStreamUrl.strUrl");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->strurl(), output);
  }

  // @@protoc_insertion_point(serialize_end:VidStreamUrl)
}

::google::protobuf::uint8* VidStreamUrl::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic;  // Unused
  // @@protoc_insertion_point(serialize_to_array_start:VidStreamUrl)
  // string strProtocol = 1;
  if (this->strprotocol().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strprotocol().data(), this->strprotocol().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "VidStreamUrl.strProtocol");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->strprotocol(), target);
  }

  // string strUrl = 2;
  if (this->strurl().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strurl().data(), this->strurl().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "VidStreamUrl.strUrl");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->strurl(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:VidStreamUrl)
  return target;
}

size_t VidStreamUrl::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:VidStreamUrl)
  size_t total_size = 0;

  // string strProtocol = 1;
  if (this->strprotocol().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->strprotocol());
  }

  // string strUrl = 2;
  if (this->strurl().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->strurl());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void VidStreamUrl::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:VidStreamUrl)
  GOOGLE_DCHECK_NE(&from, this);
  const VidStreamUrl* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const VidStreamUrl>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:VidStreamUrl)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:VidStreamUrl)
    MergeFrom(*source);
  }
}

void VidStreamUrl::MergeFrom(const VidStreamUrl& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:VidStreamUrl)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.strprotocol().size() > 0) {

    strprotocol_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strprotocol_);
  }
  if (from.strurl().size() > 0) {

    strurl_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strurl_);
  }
}

void VidStreamUrl::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:VidStreamUrl)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void VidStreamUrl::CopyFrom(const VidStreamUrl& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:VidStreamUrl)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool VidStreamUrl::IsInitialized() const {
  return true;
}

void VidStreamUrl::Swap(VidStreamUrl* other) {
  if (other == this) return;
  InternalSwap(other);
}
void VidStreamUrl::InternalSwap(VidStreamUrl* other) {
  strprotocol_.Swap(&other->strprotocol_);
  strurl_.Swap(&other->strurl_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata VidStreamUrl::GetMetadata() const {
  protobuf_vidconf_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_vidconf_2eproto::file_level_metadata[28];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// VidStreamUrl

// string strProtocol = 1;
void VidStreamUrl::clear_strprotocol() {
  strprotocol_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& VidStreamUrl::strprotocol() const {
  // @@protoc_insertion_point(field_get:VidStreamUrl.strProtocol)
  return strprotocol_.GetNoArena();
}
void VidStreamUrl::set_strprotocol(const ::std::string& value) {
  
  strprotocol_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:VidStreamUrl.strProtocol)
}
#if LANG_CXX11
void VidStreamUrl::set_strprotocol(::std::string&& value) {
  
  strprotocol_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:VidStreamUrl.strProtocol)
}
#endif
void VidStreamUrl::set_strprotocol(const char* value) {
  
  strprotocol_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:VidStreamUrl.strProtocol)
}
void VidStreamUrl::set_strprotocol(const char* value, size_t size) {
  
  strprotocol_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:VidStreamUrl.strProtocol)
}
::std::string* VidStreamUrl::mutable_strprotocol() {
  
  // @@protoc_insertion_point(field_mutable:VidStreamUrl.strProtocol)
  return strprotocol_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* VidStreamUrl::release_strprotocol() {
  // @@protoc_insertion_point(field_release:VidStreamUrl.strProtocol)
  
  return strprotocol_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void VidStreamUrl::set_allocated_strprotocol(::std::string* strprotocol) {
  if (strprotocol != NULL) {
    
  } else {
    
  }
  strprotocol_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), strprotocol);
  // @@protoc_insertion_point(field_set_allocated:VidStreamUrl.strProtocol)
}

// string strUrl = 2;
void VidStreamUrl::clear_strurl() {
  strurl_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& VidStreamUrl::strurl() const {
  // @@protoc_insertion_point(field_get:VidStreamUrl.strUrl)
  return strurl_.GetNoArena();
}
void VidStreamUrl::set_strurl(const ::std::string& value) {
  
  strurl_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:VidStreamUrl.strUrl)
}
#if LANG_CXX11
void VidStreamUrl::set_strurl(::std::string&& value) {
  
  strurl_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:VidStreamUrl.strUrl)
}
#endif
void VidStreamUrl::set_strurl(const char* value) {
  
  strurl_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:VidStreamUrl.strUrl)
}
void VidStreamUrl::set_strurl(const char* value, size_t size) {
  
  strurl_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:VidStreamUrl.strUrl)
}
::std::string* VidStreamUrl::mutable_strurl() {
  
  // @@protoc_insertion_point(field_mutable:VidStreamUrl.strUrl)
  return strurl_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* VidStreamUrl::release_strurl() {
  // @@protoc_insertion_point(field_release:VidStreamUrl.strUrl)
  
  return strurl_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void VidStreamUrl::set_allocated_strurl(::std::string* strurl) {
  if (strurl != NULL) {
    
  } else {
    
  }
  strurl_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), strurl);
  // @@protoc_insertion_point(field_set_allocated:VidStreamUrl.strUrl)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int VidStreamUrlList::kCUrlFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

VidStreamUrlList::VidStreamUrlList()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_vidconf_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:VidStreamUrlList)
}
VidStreamUrlList::VidStreamUrlList(const VidStreamUrlList& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      curl_(from.curl_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:VidStreamUrlList)
}

void VidStreamUrlList::SharedCtor() {
  _cached_size_ = 0;
}

VidStreamUrlList::~VidStreamUrlList() {
  // @@protoc_insertion_point(destructor:VidStreamUrlList)
  SharedDtor();
}

void VidStreamUrlList::SharedDtor() {
}

void VidStreamUrlList::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* VidStreamUrlList::descriptor() {
  protobuf_vidconf_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_vidconf_2eproto::file_level_metadata[29].descriptor;
}

const VidStreamUrlList& VidStreamUrlList::default_instance() {
  protobuf_vidconf_2eproto::InitDefaults();
  return *internal_default_instance();
}

VidStreamUrlList* VidStreamUrlList::New(::google::protobuf::Arena* arena) const {
  VidStreamUrlList* n = new VidStreamUrlList;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void VidStreamUrlList::Clear() {
// @@protoc_insertion_point(message_clear_start:VidStreamUrlList)
  curl_.Clear();
}

bool VidStreamUrlList::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:VidStreamUrlList)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .VidStreamUrl cUrl = 1;
      case 1: {
        if (tag == 10u) {
          DO_(input->IncrementRecursionDepth());
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtualNoRecursionDepth(
                input, add_curl()));
        } else {
          goto handle_unusual;
        }
        input->UnsafeDecrementRecursionDepth();
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:VidStreamUrlList)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:VidStreamUrlList)
  return false;
#undef DO_
}

void VidStreamUrlList::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:VidStreamUrlList)
  // repeated .VidStreamUrl cUrl = 1;
  for (unsigned int i = 0, n = this->curl_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->curl(i), output);
  }

  // @@protoc_insertion_point(serialize_end:VidStreamUrlList)
}

::google::protobuf::uint8* VidStreamUrlList::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic;  // Unused
  // @@protoc_insertion_point(serialize_to_array_start:VidStreamUrlList)
  // repeated .VidStreamUrl cUrl = 1;
  for (unsigned int i = 0, n = this->curl_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1, this->curl(i), false, target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:VidStreamUrlList)
  return target;
}

size_t VidStreamUrlList::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:VidStreamUrlList)
  size_t total_size = 0;

  // repeated .VidStreamUrl cUrl = 1;
  {
    unsigned int count = this->curl_size();
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->curl(i));
    }
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void VidStreamUrlList::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:VidStreamUrlList)
  GOOGLE_DCHECK_NE(&from, this);
  const VidStreamUrlList* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const VidStreamUrlList>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:VidStreamUrlList)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:VidStreamUrlList)
    MergeFrom(*source);
  }
}

void VidStreamUrlList::MergeFrom(const VidStreamUrlList& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:VidStreamUrlList)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  curl_.MergeFrom(from.curl_);
}

void VidStreamUrlList::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:VidStreamUrlList)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void VidStreamUrlList::CopyFrom(const VidStreamUrlList& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:VidStreamUrlList)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool VidStreamUrlList::IsInitialized() const {
  return true;
}

void VidStreamUrlList::Swap(VidStreamUrlList* other) {
  if (other == this) return;
  InternalSwap(other);
}
void VidStreamUrlList::InternalSwap(VidStreamUrlList* other) {
  curl_.UnsafeArenaSwap(&other->curl_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata VidStreamUrlList::GetMetadata() const {
  protobuf_vidconf_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_vidconf_2eproto::file_level_metadata[29];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// VidStreamUrlList

// repeated .VidStreamUrl cUrl = 1;
int VidStreamUrlList::curl_size() const {
  return curl_.size();
}
void VidStreamUrlList::clear_curl() {
  curl_.Clear();
}
const ::VidStreamUrl& VidStreamUrlList::curl(int index) const {
  // @@protoc_insertion_point(field_get:VidStreamUrlList.cUrl)
  return curl_.Get(index);
}
::VidStreamUrl* VidStreamUrlList::mutable_curl(int index) {
  // @@protoc_insertion_point(field_mutable:VidStreamUrlList.cUrl)
  return curl_.Mutable(index);
}
::VidStreamUrl* VidStreamUrlList::add_curl() {
  // @@protoc_insertion_point(field_add:VidStreamUrlList.cUrl)
  return curl_.Add();
}
::google::protobuf::RepeatedPtrField< ::VidStreamUrl >*
VidStreamUrlList::mutable_curl() {
  // @@protoc_insertion_point(field_mutable_list:VidStreamUrlList.cUrl)
  return &curl_;
}
const ::google::protobuf::RepeatedPtrField< ::VidStreamUrl >&
VidStreamUrlList::curl() const {
  // @@protoc_insertion_point(field_list:VidStreamUrlList.cUrl)
  return curl_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)
