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

#ifndef _OAI_OAIReverseApi_H_
#define _OAI_OAIReverseApi_H_

#include "OAIHttpRequest.h"

#include "OAIOAIError.h"
#include "OAIOAILocation.h"
#include "OAIOAINumber.h"
#include <QString>

#include <QObject>

namespace OpenAPI {

class OAIReverseApi: public QObject {
    Q_OBJECT

public:
    OAIReverseApi();
    OAIReverseApi(QString host, QString basePath);
    ~OAIReverseApi();

    QString host;
    QString basePath;
    QMap<QString, QString> defaultHeaders;

    void reverse(OAINumber* lat, OAINumber* lon, QString* format, qint32 normalizecity, qint32 addressdetails, QString* accept_language, qint32 namedetails, qint32 extratags, qint32 statecode);
    
private:
    void reverseCallback (OAIHttpRequestWorker * worker);
    
signals:
    void reverseSignal(OAILocation* summary);
    
    void reverseSignalE(OAILocation* summary, QNetworkReply::NetworkError error_type, QString& error_str);
    
    void reverseSignalEFull(OAIHttpRequestWorker* worker, QNetworkReply::NetworkError error_type, QString& error_str);
    
};

}
#endif
