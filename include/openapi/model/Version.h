/**
* CAPIF_Publish_Service_API
* API for publishing service APIs. © 2021, 3GPP Organizational Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved. 
*
* The version of the OpenAPI document: 1.2.0-alpha.2
* 
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/
/*
 * Version.h
 *
 * Represents the API version information.
 */

#ifndef Version_H_
#define Version_H_


#include <string>
#include "CustomOperation.h"
#include <vector>
#include "Resource.h"
#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// Represents the API version information.
/// </summary>
class  Version
{
public:
    Version();
    virtual ~Version() = default;


    /// <summary>
    /// Validate the current data in the model. Throws a ValidationException on failure.
    /// </summary>
    void validate() const;

    /// <summary>
    /// Validate the current data in the model. Returns false on error and writes an error
    /// message into the given stringstream.
    /// </summary>
    bool validate(std::stringstream& msg) const;

    /// <summary>
    /// Helper overload for validate. Used when one model stores another model and calls it's validate.
    /// Not meant to be called outside that case.
    /// </summary>
    bool validate(std::stringstream& msg, const std::string& pathPrefix) const;

    bool operator==(const Version& rhs) const;
    bool operator!=(const Version& rhs) const;

    /////////////////////////////////////////////
    /// Version members

    /// <summary>
    /// API major version in URI (e.g. v1)
    /// </summary>
    std::string getApiVersion() const;
    void setApiVersion(std::string const& value);
    /// <summary>
    /// string with format \&quot;date-time\&quot; as defined in OpenAPI.
    /// </summary>
    std::string getExpiry() const;
    void setExpiry(std::string const& value);
    bool expiryIsSet() const;
    void unsetExpiry();
    /// <summary>
    /// Resources supported by the API.
    /// </summary>
    std::vector<Resource> getResources() const;
    void setResources(std::vector<Resource> const& value);
    bool resourcesIsSet() const;
    void unsetResources();
    /// <summary>
    /// Custom operations without resource association.
    /// </summary>
    std::vector<CustomOperation> getCustOperations() const;
    void setCustOperations(std::vector<CustomOperation> const& value);
    bool custOperationsIsSet() const;
    void unsetCustOperations();

    friend void to_json(nlohmann::json& j, const Version& o);
    friend void from_json(const nlohmann::json& j, Version& o);
protected:
    std::string m_ApiVersion;

    std::string m_Expiry;
    bool m_ExpiryIsSet;
    std::vector<Resource> m_Resources;
    bool m_ResourcesIsSet;
    std::vector<CustomOperation> m_CustOperations;
    bool m_CustOperationsIsSet;
    
};

} // namespace org::openapitools::server::model

#endif /* Version_H_ */