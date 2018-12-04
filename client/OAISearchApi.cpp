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

#include "OAISearchApi.h"
#include "OAIHelpers.h"
#include "OAIModelFactory.h"
#include "OAIQObjectWrapper.h"

#include <QJsonArray>
#include <QJsonDocument>

namespace OpenAPI {

OAISearchApi::OAISearchApi() {}

OAISearchApi::~OAISearchApi() {}

OAISearchApi::OAISearchApi(QString host, QString basePath) {
    this->host = host;
    this->basePath = basePath;
}

void
OAISearchApi::search(QString* q, QString* format, qint32 normalizecity, qint32 addressdetails, QString* viewbox, qint32 bounded, qint32 limit, QString* accept_language, QString* countrycodes, qint32 namedetails, qint32 dedupe, qint32 extratags, qint32 statecode) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/search.php");


    if (fullPath.indexOf("?") > 0)
      fullPath.append("&");
    else
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("q"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(q)));

    if (fullPath.indexOf("?") > 0)
      fullPath.append("&");
    else
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("format"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(format)));

    if (fullPath.indexOf("?") > 0)
      fullPath.append("&");
    else
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("normalizecity"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(normalizecity)));

    if (fullPath.indexOf("?") > 0)
      fullPath.append("&");
    else
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("addressdetails"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(addressdetails)));

    if (fullPath.indexOf("?") > 0)
      fullPath.append("&");
    else
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("viewbox"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(viewbox)));

    if (fullPath.indexOf("?") > 0)
      fullPath.append("&");
    else
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("bounded"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(bounded)));

    if (fullPath.indexOf("?") > 0)
      fullPath.append("&");
    else
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("limit"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(limit)));

    if (fullPath.indexOf("?") > 0)
      fullPath.append("&");
    else
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("accept-language"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(accept_language)));

    if (fullPath.indexOf("?") > 0)
      fullPath.append("&");
    else
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("countrycodes"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(countrycodes)));

    if (fullPath.indexOf("?") > 0)
      fullPath.append("&");
    else
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("namedetails"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(namedetails)));

    if (fullPath.indexOf("?") > 0)
      fullPath.append("&");
    else
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("dedupe"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(dedupe)));

    if (fullPath.indexOf("?") > 0)
      fullPath.append("&");
    else
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("extratags"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(extratags)));

    if (fullPath.indexOf("?") > 0)
      fullPath.append("&");
    else
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("statecode"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(statecode)));


    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker();
    OAIHttpRequestInput input(fullPath, "GET");





    foreach(QString key, this->defaultHeaders.keys()) {
        input.headers.insert(key, this->defaultHeaders.value(key));
    }

    connect(worker,
            &OAIHttpRequestWorker::on_execution_finished,
            this,
            &OAISearchApi::searchCallback);

    worker->execute(&input);
}

void
OAISearchApi::searchCallback(OAIHttpRequestWorker * worker) {
    QString msg;
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    QList<OAILocation*>* output = new QList<OAILocation*>();
    QString json(worker->response);
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonArray jsonArray = doc.array();
    auto wrapper = new OAIQObjectWrapper<QList<OAILocation*>*> (output);
    wrapper->deleteLater();
    foreach(QJsonValue obj, jsonArray) {
        OAILocation* o = new OAILocation();
        QJsonObject jv = obj.toObject();
        QJsonObject * ptr = (QJsonObject*)&jv;
        o->fromJsonObject(*ptr);
        auto objwrapper = new OAIQObjectWrapper<OAILocation*> (o);
        objwrapper->deleteLater();
        output->append(o);
    }
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit searchSignal(output);
    } else {
        emit searchSignalE(output, error_type, error_str);
        emit searchSignalEFull(worker, error_type, error_str);
    }
}


}
