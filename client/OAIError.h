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
 * OAIError.h
 *
 * 
 */

#ifndef OAIError_H_
#define OAIError_H_

#include <QJsonObject>


#include <QString>

#include "OAIObject.h"

namespace OpenAPI {

class OAIError: public OAIObject {
public:
    OAIError();
    OAIError(QString json);
    ~OAIError();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIError* fromJson(QString jsonString) override;

    QString* getError();
    void setError(QString* error);


    virtual bool isSet() override;

private:
    QString* error;
    bool m_error_isSet;

};

}

#endif /* OAIError_H_ */
