/**
 * LocationIQ
 * LocationIQ provides flexible enterprise-grade location based solutions. We work with developers, startups and enterprises worldwide serving billions of requests everyday. This page provides an overview of the technical aspects of our API and will help you get started.
 *
 * OpenAPI spec version: 1.0.1
 * 
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */


#include "OAIBalance.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIBalance::OAIBalance(QString json) {
    init();
    this->fromJson(json);
}

OAIBalance::OAIBalance() {
    init();
}

OAIBalance::~OAIBalance() {
    this->cleanup();
}

void
OAIBalance::init() {
    status = new QString("");
    m_status_isSet = false;
    balance = new OAIDaybalance();
    m_balance_isSet = false;
}

void
OAIBalance::cleanup() {
    if(status != nullptr) { 
        delete status;
    }
    if(balance != nullptr) { 
        delete balance;
    }
}

OAIBalance*
OAIBalance::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIBalance::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&status, pJson["status"], "QString", "QString");
    
    ::OpenAPI::setValue(&balance, pJson["balance"], "OAIDaybalance", "OAIDaybalance");
    
}

QString
OAIBalance::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIBalance::asJsonObject() {
    QJsonObject obj;
    if(status != nullptr && *status != QString("")){
        toJsonValue(QString("status"), status, obj, QString("QString"));
    }
    if((balance != nullptr) && (balance->isSet())){
        toJsonValue(QString("balance"), balance, obj, QString("OAIDaybalance"));
    }

    return obj;
}

QString*
OAIBalance::getStatus() {
    return status;
}
void
OAIBalance::setStatus(QString* status) {
    this->status = status;
    this->m_status_isSet = true;
}

OAIDaybalance*
OAIBalance::getBalance() {
    return balance;
}
void
OAIBalance::setBalance(OAIDaybalance* balance) {
    this->balance = balance;
    this->m_balance_isSet = true;
}


bool
OAIBalance::isSet(){
    bool isObjectUpdated = false;
    do{
        if(status != nullptr && *status != QString("")){ isObjectUpdated = true; break;}
        if(balance != nullptr && balance->isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

