/**
 * LocationIQ
 * LocationIQ provides flexible enterprise-grade location based solutions. We work with developers, startups and enterprises worldwide serving billions of requests everyday. This page provides an overview of the technical aspects of our API and will help you get started.
 *
 * OpenAPI spec version: 1.0.0
 * 
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#ifndef ModelFactory_H_
#define ModelFactory_H_

#include "OAIObject.h"

#include "OAIAddress.h"
#include "OAIBalance.h"
#include "OAIDaybalance.h"
#include "OAIError.h"
#include "OAILocation.h"
#include "OAINamedetails.h"

namespace OpenAPI {

  inline void* create(QString type) {
    if(QString("OAIAddress").compare(type) == 0) {
      return new OAIAddress();
    }
    if(QString("OAIBalance").compare(type) == 0) {
      return new OAIBalance();
    }
    if(QString("OAIDaybalance").compare(type) == 0) {
      return new OAIDaybalance();
    }
    if(QString("OAIError").compare(type) == 0) {
      return new OAIError();
    }
    if(QString("OAILocation").compare(type) == 0) {
      return new OAILocation();
    }
    if(QString("OAINamedetails").compare(type) == 0) {
      return new OAINamedetails();
    }
    
    return nullptr;
  }

  inline void* create(QString json, QString type) {
    if(type.startsWith("QString")) {
      return new QString();
    }    
    auto val = static_cast<OAIObject*>(create(type));
    if(val != nullptr) {
      return val->fromJson(json);
    }
    return nullptr;
  }

}

#endif /* ModelFactory_H_ */