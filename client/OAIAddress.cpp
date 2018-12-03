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


#include "OAIAddress.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIAddress::OAIAddress(QString json) {
    init();
    this->fromJson(json);
}

OAIAddress::OAIAddress() {
    init();
}

OAIAddress::~OAIAddress() {
    this->cleanup();
}

void
OAIAddress::init() {
    house_number = new QString("");
    m_house_number_isSet = false;
    road = new QString("");
    m_road_isSet = false;
    residential = new QString("");
    m_residential_isSet = false;
    village = new QString("");
    m_village_isSet = false;
    county = new QString("");
    m_county_isSet = false;
    state = new QString("");
    m_state_isSet = false;
    postcode = new QString("");
    m_postcode_isSet = false;
    country = new QString("");
    m_country_isSet = false;
    country_code = new QString("");
    m_country_code_isSet = false;
    city = new QString("");
    m_city_isSet = false;
}

void
OAIAddress::cleanup() {
    if(house_number != nullptr) { 
        delete house_number;
    }
    if(road != nullptr) { 
        delete road;
    }
    if(residential != nullptr) { 
        delete residential;
    }
    if(village != nullptr) { 
        delete village;
    }
    if(county != nullptr) { 
        delete county;
    }
    if(state != nullptr) { 
        delete state;
    }
    if(postcode != nullptr) { 
        delete postcode;
    }
    if(country != nullptr) { 
        delete country;
    }
    if(country_code != nullptr) { 
        delete country_code;
    }
    if(city != nullptr) { 
        delete city;
    }
}

OAIAddress*
OAIAddress::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIAddress::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&house_number, pJson["house_number"], "QString", "QString");
    
    ::OpenAPI::setValue(&road, pJson["road"], "QString", "QString");
    
    ::OpenAPI::setValue(&residential, pJson["residential"], "QString", "QString");
    
    ::OpenAPI::setValue(&village, pJson["village"], "QString", "QString");
    
    ::OpenAPI::setValue(&county, pJson["county"], "QString", "QString");
    
    ::OpenAPI::setValue(&state, pJson["state"], "QString", "QString");
    
    ::OpenAPI::setValue(&postcode, pJson["postcode"], "QString", "QString");
    
    ::OpenAPI::setValue(&country, pJson["country"], "QString", "QString");
    
    ::OpenAPI::setValue(&country_code, pJson["country_code"], "QString", "QString");
    
    ::OpenAPI::setValue(&city, pJson["city"], "QString", "QString");
    
}

QString
OAIAddress::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIAddress::asJsonObject() {
    QJsonObject obj;
    if(house_number != nullptr && *house_number != QString("")){
        toJsonValue(QString("house_number"), house_number, obj, QString("QString"));
    }
    if(road != nullptr && *road != QString("")){
        toJsonValue(QString("road"), road, obj, QString("QString"));
    }
    if(residential != nullptr && *residential != QString("")){
        toJsonValue(QString("residential"), residential, obj, QString("QString"));
    }
    if(village != nullptr && *village != QString("")){
        toJsonValue(QString("village"), village, obj, QString("QString"));
    }
    if(county != nullptr && *county != QString("")){
        toJsonValue(QString("county"), county, obj, QString("QString"));
    }
    if(state != nullptr && *state != QString("")){
        toJsonValue(QString("state"), state, obj, QString("QString"));
    }
    if(postcode != nullptr && *postcode != QString("")){
        toJsonValue(QString("postcode"), postcode, obj, QString("QString"));
    }
    if(country != nullptr && *country != QString("")){
        toJsonValue(QString("country"), country, obj, QString("QString"));
    }
    if(country_code != nullptr && *country_code != QString("")){
        toJsonValue(QString("country_code"), country_code, obj, QString("QString"));
    }
    if(city != nullptr && *city != QString("")){
        toJsonValue(QString("city"), city, obj, QString("QString"));
    }

    return obj;
}

QString*
OAIAddress::getHouseNumber() {
    return house_number;
}
void
OAIAddress::setHouseNumber(QString* house_number) {
    this->house_number = house_number;
    this->m_house_number_isSet = true;
}

QString*
OAIAddress::getRoad() {
    return road;
}
void
OAIAddress::setRoad(QString* road) {
    this->road = road;
    this->m_road_isSet = true;
}

QString*
OAIAddress::getResidential() {
    return residential;
}
void
OAIAddress::setResidential(QString* residential) {
    this->residential = residential;
    this->m_residential_isSet = true;
}

QString*
OAIAddress::getVillage() {
    return village;
}
void
OAIAddress::setVillage(QString* village) {
    this->village = village;
    this->m_village_isSet = true;
}

QString*
OAIAddress::getCounty() {
    return county;
}
void
OAIAddress::setCounty(QString* county) {
    this->county = county;
    this->m_county_isSet = true;
}

QString*
OAIAddress::getState() {
    return state;
}
void
OAIAddress::setState(QString* state) {
    this->state = state;
    this->m_state_isSet = true;
}

QString*
OAIAddress::getPostcode() {
    return postcode;
}
void
OAIAddress::setPostcode(QString* postcode) {
    this->postcode = postcode;
    this->m_postcode_isSet = true;
}

QString*
OAIAddress::getCountry() {
    return country;
}
void
OAIAddress::setCountry(QString* country) {
    this->country = country;
    this->m_country_isSet = true;
}

QString*
OAIAddress::getCountryCode() {
    return country_code;
}
void
OAIAddress::setCountryCode(QString* country_code) {
    this->country_code = country_code;
    this->m_country_code_isSet = true;
}

QString*
OAIAddress::getCity() {
    return city;
}
void
OAIAddress::setCity(QString* city) {
    this->city = city;
    this->m_city_isSet = true;
}


bool
OAIAddress::isSet(){
    bool isObjectUpdated = false;
    do{
        if(house_number != nullptr && *house_number != QString("")){ isObjectUpdated = true; break;}
        if(road != nullptr && *road != QString("")){ isObjectUpdated = true; break;}
        if(residential != nullptr && *residential != QString("")){ isObjectUpdated = true; break;}
        if(village != nullptr && *village != QString("")){ isObjectUpdated = true; break;}
        if(county != nullptr && *county != QString("")){ isObjectUpdated = true; break;}
        if(state != nullptr && *state != QString("")){ isObjectUpdated = true; break;}
        if(postcode != nullptr && *postcode != QString("")){ isObjectUpdated = true; break;}
        if(country != nullptr && *country != QString("")){ isObjectUpdated = true; break;}
        if(country_code != nullptr && *country_code != QString("")){ isObjectUpdated = true; break;}
        if(city != nullptr && *city != QString("")){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

