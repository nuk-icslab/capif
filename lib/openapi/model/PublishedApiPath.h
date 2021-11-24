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
 * PublishedApiPath.h
 *
 * Represents the published API path within the same CAPIF provider domain.
 */

#ifndef PublishedApiPath_H_
#define PublishedApiPath_H_


#include <string>
#include <vector>
#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// Represents the published API path within the same CAPIF provider domain.
/// </summary>
class  PublishedApiPath
{
public:
    PublishedApiPath();
    virtual ~PublishedApiPath() = default;


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

    bool operator==(const PublishedApiPath& rhs) const;
    bool operator!=(const PublishedApiPath& rhs) const;

    /////////////////////////////////////////////
    /// PublishedApiPath members

    /// <summary>
    /// A list of CCF identifiers where the service API is already published.
    /// </summary>
    std::vector<std::string> getCcfIds() const;
    void setCcfIds(std::vector<std::string> const& value);
    bool ccfIdsIsSet() const;
    void unsetCcfIds();

    friend void to_json(nlohmann::json& j, const PublishedApiPath& o);
    friend void from_json(const nlohmann::json& j, PublishedApiPath& o);
protected:
    std::vector<std::string> m_CcfIds;
    bool m_CcfIdsIsSet;
    
};

} // namespace org::openapitools::server::model

#endif /* PublishedApiPath_H_ */
