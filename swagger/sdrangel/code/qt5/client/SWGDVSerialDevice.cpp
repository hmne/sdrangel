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


#include "SWGDVSerialDevice.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace SWGSDRangel {

SWGDVSerialDevice::SWGDVSerialDevice(QString* json) {
    init();
    this->fromJson(*json);
}

SWGDVSerialDevice::SWGDVSerialDevice() {
    init();
}

SWGDVSerialDevice::~SWGDVSerialDevice() {
    this->cleanup();
}

void
SWGDVSerialDevice::init() {
    device_name = new QString("");
}

void
SWGDVSerialDevice::cleanup() {
    
    if(device_name != nullptr) {
        delete device_name;
    }
}

SWGDVSerialDevice*
SWGDVSerialDevice::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGDVSerialDevice::fromJsonObject(QJsonObject &pJson) {
    ::SWGSDRangel::setValue(&device_name, pJson["deviceName"], "QString", "QString");
}

QString
SWGDVSerialDevice::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGDVSerialDevice::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    toJsonValue(QString("deviceName"), device_name, obj, QString("QString"));

    return obj;
}

QString*
SWGDVSerialDevice::getDeviceName() {
    return device_name;
}
void
SWGDVSerialDevice::setDeviceName(QString* device_name) {
    this->device_name = device_name;
}


}

