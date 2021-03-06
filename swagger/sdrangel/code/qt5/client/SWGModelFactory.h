/**
 * SDRangel
 * This is the web API of SDRangel SDR software. SDRangel is an Open Source Qt5/OpenGL 3.0+ GUI and server Software Defined Radio and signal analyzer in software. It supports Airspy, BladeRF, HackRF, LimeSDR, PlutoSDR, RTL-SDR, SDRplay RSP1 and FunCube
 *
 * OpenAPI spec version: 4.0.0
 * Contact: f4exb06@gmail.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

#ifndef ModelFactory_H_
#define ModelFactory_H_


#include "SWGAudioDevice.h"
#include "SWGAudioDevices.h"
#include "SWGAudioDevicesSelect.h"
#include "SWGChannel.h"
#include "SWGChannelListItem.h"
#include "SWGDVSeralDevices.h"
#include "SWGDVSerialDevice.h"
#include "SWGDeviceListItem.h"
#include "SWGDeviceSet.h"
#include "SWGDeviceSetList.h"
#include "SWGErrorResponse.h"
#include "SWGInstanceChannelsResponse.h"
#include "SWGInstanceDevicesResponse.h"
#include "SWGInstanceSummaryResponse.h"
#include "SWGLocationInformation.h"
#include "SWGLoggingInfo.h"
#include "SWGPresetGroup.h"
#include "SWGPresetIdentifier.h"
#include "SWGPresetItem.h"
#include "SWGPresetTransfer.h"
#include "SWGPresets.h"
#include "SWGSamplingDevice.h"
#include "SWGUser.h"

namespace SWGSDRangel {

  inline void* create(QString type) {
    if(QString("SWGAudioDevice").compare(type) == 0) {
      return new SWGAudioDevice();
    }
    if(QString("SWGAudioDevices").compare(type) == 0) {
      return new SWGAudioDevices();
    }
    if(QString("SWGAudioDevicesSelect").compare(type) == 0) {
      return new SWGAudioDevicesSelect();
    }
    if(QString("SWGChannel").compare(type) == 0) {
      return new SWGChannel();
    }
    if(QString("SWGChannelListItem").compare(type) == 0) {
      return new SWGChannelListItem();
    }
    if(QString("SWGDVSeralDevices").compare(type) == 0) {
      return new SWGDVSeralDevices();
    }
    if(QString("SWGDVSerialDevice").compare(type) == 0) {
      return new SWGDVSerialDevice();
    }
    if(QString("SWGDeviceListItem").compare(type) == 0) {
      return new SWGDeviceListItem();
    }
    if(QString("SWGDeviceSet").compare(type) == 0) {
      return new SWGDeviceSet();
    }
    if(QString("SWGDeviceSetList").compare(type) == 0) {
      return new SWGDeviceSetList();
    }
    if(QString("SWGErrorResponse").compare(type) == 0) {
      return new SWGErrorResponse();
    }
    if(QString("SWGInstanceChannelsResponse").compare(type) == 0) {
      return new SWGInstanceChannelsResponse();
    }
    if(QString("SWGInstanceDevicesResponse").compare(type) == 0) {
      return new SWGInstanceDevicesResponse();
    }
    if(QString("SWGInstanceSummaryResponse").compare(type) == 0) {
      return new SWGInstanceSummaryResponse();
    }
    if(QString("SWGLocationInformation").compare(type) == 0) {
      return new SWGLocationInformation();
    }
    if(QString("SWGLoggingInfo").compare(type) == 0) {
      return new SWGLoggingInfo();
    }
    if(QString("SWGPresetGroup").compare(type) == 0) {
      return new SWGPresetGroup();
    }
    if(QString("SWGPresetIdentifier").compare(type) == 0) {
      return new SWGPresetIdentifier();
    }
    if(QString("SWGPresetItem").compare(type) == 0) {
      return new SWGPresetItem();
    }
    if(QString("SWGPresetTransfer").compare(type) == 0) {
      return new SWGPresetTransfer();
    }
    if(QString("SWGPresets").compare(type) == 0) {
      return new SWGPresets();
    }
    if(QString("SWGSamplingDevice").compare(type) == 0) {
      return new SWGSamplingDevice();
    }
    if(QString("SWGUser").compare(type) == 0) {
      return new SWGUser();
    }
    
    return nullptr;
  }

  inline void* create(QString json, QString type) {
    void* val = create(type);
    if(val != nullptr) {
      SWGObject* obj = static_cast<SWGObject*>(val);
      return obj->fromJson(json);
    }
    if(type.startsWith("QString")) {
      return new QString();
    }
    return nullptr;
  }

}

#endif /* ModelFactory_H_ */
