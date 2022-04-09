/**
 * CAPIF_Discover_Service_API
 * API for discovering service APIs. © 2021, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * DefaultApi.h
 *
 *
 */

#ifndef DiscoverServiceServer_H_
#define DiscoverServiceServer_H_

#include <pistache/http.h>
#include <pistache/http_headers.h>
//#include <pistache/optional.h>
#include <pistache/router.h>

#include <string>
#include <utility>

#include "capif/model/CommunicationType.h"
#include "capif/model/DataFormat.h"
#include "capif/model/DiscoveredAPIs.h"
#include "capif/model/ProblemDetails.h"
#include "capif/model/Protocol.h"

namespace org::openapitools::server::api {

using namespace org::openapitools::server::model;

class DiscoverServiceServer {
 public:
  explicit DiscoverServiceServer(
      const std::shared_ptr<Pistache::Rest::Router> &rtr);
  virtual ~DiscoverServiceServer() = default;
  void init();

  static const std::string base;

 private:
  void setupRoutes();

  void all_service_apis_get_handler(const Pistache::Rest::Request &request,
                                    Pistache::Http::ResponseWriter response);
  void default_api_default_handler(const Pistache::Rest::Request &request,
                                   Pistache::Http::ResponseWriter response);

  const std::shared_ptr<Pistache::Rest::Router> router;

  /// <summary>
  /// Helper function to handle unexpected Exceptions during Parameter parsing
  /// and validation. May be overridden to return custom error formats. This is
  /// called inside a catch block. Important: When overriding, do not call
  /// `throw ex;`, but instead use `throw;`.
  /// </summary>
  virtual std::pair<Pistache::Http::Code, std::string> handleParsingException(
      const std::exception &ex) const noexcept;

  /// <summary>
  /// Helper function to handle unexpected Exceptions during processing of the
  /// request in handler functions. May be overridden to return custom error
  /// formats. This is called inside a catch block. Important: When overriding,
  /// do not call `throw ex;`, but instead use `throw;`.
  /// </summary>
  virtual std::pair<Pistache::Http::Code, std::string> handleOperationException(
      const std::exception &ex) const noexcept;

  /// <summary>
  ///
  /// </summary>
  /// <remarks>
  /// Discover published service APIs and retrieve a collection of APIs
  /// according to certain filter criteria.
  /// </remarks>
  /// <param name="apiInvokerId">String identifying the API invoker assigned by
  /// the CAPIF core function. It also represents the CCF identifier in the
  /// CAPIF-6/6e interface.</param> <param name="apiName">API name, it is set as
  /// {apiName} part of the URI structure as defined in subclause 4.4 of 3GPP
  /// TS 29.501. (optional, default to &quot;&quot;)</param> <param
  /// name="apiVersion">API major version the URI (e.g. v1). (optional, default
  /// to &quot;&quot;)</param> <param name="commType">Communication type used by
  /// the API (e.g. REQUEST_RESPONSE). (optional, default to
  /// std::make_shared&lt;CommunicationType&gt;())</param> <param
  /// name="protocol">Protocol used by the API. (optional, default to
  /// std::make_shared&lt;Protocol&gt;())</param> <param name="aefId">AEF
  /// identifer. (optional, default to &quot;&quot;)</param> <param
  /// name="dataFormat">Data formats used by the API (e.g. serialization
  /// protocol JSON used). (optional, default to
  /// std::make_shared&lt;DataFormat&gt;())</param> <param name="apiCat">The
  /// service API category to which the service API belongs to. (optional,
  /// default to &quot;&quot;)</param> <param name="supportedFeatures">Features
  /// supported by the NF consumer for the CAPIF Discover Service API.
  /// (optional, default to &quot;&quot;)</param> <param
  /// name="apiSupportedFeatures">Features supported by the discovered service
  /// API indicated by api-name parameter. This may only be present if api-name
  /// query parameter is present. (optional, default to &quot;&quot;)</param>
  // Pistache::Optional
  virtual void all_service_apis_get(
      const std::string &apiInvokerId,
      const std::optional<std::string> &apiName,
      const std::optional<std::string> &apiVersion,
      const std::optional<CommunicationType> &commType,
      const std::optional<Protocol> &protocol,
      const std::optional<std::string> &aefId,
      const std::optional<DataFormat> &dataFormat,
      const std::optional<std::string> &apiCat,
      const std::optional<std::string> &supportedFeatures,
      const std::optional<std::string> &apiSupportedFeatures,
      Pistache::Http::ResponseWriter &response) = 0;
};

}  // namespace org::openapitools::server::api

#endif /* DefaultApi_H_ */