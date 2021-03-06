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

/*
 * OAILocation.h
 *
 * 
 */

#ifndef OAILocation_H_
#define OAILocation_H_

#include <QJsonObject>


#include "OAIOAIAddress.h"
#include "OAIOAINamedetails.h"
#include "OAIOAINumber.h"
#include <QList>
#include <QString>

#include "OAIObject.h"

namespace OpenAPI {

class OAILocation: public OAIObject {
public:
    OAILocation();
    OAILocation(QString json);
    ~OAILocation();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAILocation* fromJson(QString jsonString) override;

    QString* getPlaceId();
    void setPlaceId(QString* place_id);

    QString* getLicence();
    void setLicence(QString* licence);

    QString* getOsmType();
    void setOsmType(QString* osm_type);

    QString* getOsmId();
    void setOsmId(QString* osm_id);

    QList<QString*>* getBoundingbox();
    void setBoundingbox(QList<QString*>* boundingbox);

    QString* getLat();
    void setLat(QString* lat);

    QString* getLon();
    void setLon(QString* lon);

    QString* getDisplayName();
    void setDisplayName(QString* display_name);

    QString* getClass();
    void setClass(QString* _class);

    QString* getType();
    void setType(QString* type);

    OAINumber* getImportance();
    void setImportance(OAINumber* importance);

    OAIAddress* getAddress();
    void setAddress(OAIAddress* address);

    OAINamedetails* getNamedetails();
    void setNamedetails(OAINamedetails* namedetails);


    virtual bool isSet() override;

private:
    QString* place_id;
    bool m_place_id_isSet;

    QString* licence;
    bool m_licence_isSet;

    QString* osm_type;
    bool m_osm_type_isSet;

    QString* osm_id;
    bool m_osm_id_isSet;

    QList<QString*>* boundingbox;
    bool m_boundingbox_isSet;

    QString* lat;
    bool m_lat_isSet;

    QString* lon;
    bool m_lon_isSet;

    QString* display_name;
    bool m_display_name_isSet;

    QString* _class;
    bool m__class_isSet;

    QString* type;
    bool m_type_isSet;

    OAINumber* importance;
    bool m_importance_isSet;

    OAIAddress* address;
    bool m_address_isSet;

    OAINamedetails* namedetails;
    bool m_namedetails_isSet;

};

}

#endif /* OAILocation_H_ */
