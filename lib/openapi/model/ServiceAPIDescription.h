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
 * ServiceAPIDescription.h
 *
 * Represents the description of a service API as published by the APF.
 */

#ifndef ServiceAPIDescription_H_
#define ServiceAPIDescription_H_


#include "AefProfile.h"
#include "ShareableInformation.h"
#include <string>
#include <vector>
#include "PublishedApiPath.h"
#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// Represents the description of a service API as published by the APF.
/// </summary>
class  ServiceAPIDescription
{
public:
    ServiceAPIDescription();
    virtual ~ServiceAPIDescription() = default;


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

    bool operator==(const ServiceAPIDescription& rhs) const;
    bool operator!=(const ServiceAPIDescription& rhs) const;

    /////////////////////////////////////////////
    /// ServiceAPIDescription members

    /// <summary>
    /// API name, it is set as {apiName} part of the URI structure as defined in subclause 4.4 of 3GPP TS 29.501.
    /// </summary>
    std::string getApiName() const;
    void setApiName(std::string const& value);
    /// <summary>
    /// API identifier assigned by the CAPIF core function to the published service API. Shall not be present in the HTTP POST request from the API publishing function to the CAPIF core function. Shall be present in the HTTP POST response from the CAPIF core function to the API publishing function and in the HTTP GET response from the CAPIF core function to the API invoker (discovery API).
    /// </summary>
    std::string getApiId() const;
    void setApiId(std::string const& value);
    bool apiIdIsSet() const;
    void unsetApiId();
    /// <summary>
    /// AEF profile information, which includes the exposed API details (e.g. protocol).
    /// </summary>
    std::vector<AefProfile> getAefProfiles() const;
    void setAefProfiles(std::vector<AefProfile> const& value);
    bool aefProfilesIsSet() const;
    void unsetAefProfiles();
    /// <summary>
    /// Text description of the API
    /// </summary>
    std::string getDescription() const;
    void setDescription(std::string const& value);
    bool descriptionIsSet() const;
    void unsetDescription();
    /// <summary>
    /// A string used to indicate the features supported by an API that is used as defined in clause 6.6 in 3GPP TS 29.500. The string shall contain a bitmask indicating supported features in hexadecimal representation Each character in the string shall take a value of \&quot;0\&quot; to \&quot;9\&quot;, \&quot;a\&quot; to \&quot;f\&quot; or \&quot;A\&quot; to \&quot;F\&quot; and shall represent the support of 4 features as described in table 5.2.2-3. The most significant character representing the highest-numbered features shall appear first in the string, and the character representing features 1 to 4 shall appear last in the string. The list of features and their numbering (starting with 1) are defined separately for each API. If the string contains a lower number of characters than there are defined features for an API, all features that would be represented by characters that are not present in the string are not supported
    /// </summary>
    std::string getSupportedFeatures() const;
    void setSupportedFeatures(std::string const& value);
    bool supportedFeaturesIsSet() const;
    void unsetSupportedFeatures();
    /// <summary>
    /// 
    /// </summary>
    ShareableInformation getShareableInfo() const;
    void setShareableInfo(ShareableInformation const& value);
    bool shareableInfoIsSet() const;
    void unsetShareableInfo();
    /// <summary>
    /// 
    /// </summary>
    std::string getServiceAPICategory() const;
    void setServiceAPICategory(std::string const& value);
    bool serviceAPICategoryIsSet() const;
    void unsetServiceAPICategory();
    /// <summary>
    /// A string used to indicate the features supported by an API that is used as defined in clause 6.6 in 3GPP TS 29.500. The string shall contain a bitmask indicating supported features in hexadecimal representation Each character in the string shall take a value of \&quot;0\&quot; to \&quot;9\&quot;, \&quot;a\&quot; to \&quot;f\&quot; or \&quot;A\&quot; to \&quot;F\&quot; and shall represent the support of 4 features as described in table 5.2.2-3. The most significant character representing the highest-numbered features shall appear first in the string, and the character representing features 1 to 4 shall appear last in the string. The list of features and their numbering (starting with 1) are defined separately for each API. If the string contains a lower number of characters than there are defined features for an API, all features that would be represented by characters that are not present in the string are not supported
    /// </summary>
    std::string getApiSuppFeats() const;
    void setApiSuppFeats(std::string const& value);
    bool apiSuppFeatsIsSet() const;
    void unsetApiSuppFeats();
    /// <summary>
    /// 
    /// </summary>
    PublishedApiPath getPubApiPath() const;
    void setPubApiPath(PublishedApiPath const& value);
    bool pubApiPathIsSet() const;
    void unsetPubApiPath();
    /// <summary>
    /// CAPIF core function identifier.
    /// </summary>
    std::string getCcfId() const;
    void setCcfId(std::string const& value);
    bool ccfIdIsSet() const;
    void unsetCcfId();

    friend void to_json(nlohmann::json& j, const ServiceAPIDescription& o);
    friend void from_json(const nlohmann::json& j, ServiceAPIDescription& o);
protected:
    std::string m_ApiName;

    std::string m_ApiId;
    bool m_ApiIdIsSet;
    std::vector<AefProfile> m_AefProfiles;
    bool m_AefProfilesIsSet;
    std::string m_Description;
    bool m_DescriptionIsSet;
    std::string m_SupportedFeatures;
    bool m_SupportedFeaturesIsSet;
    ShareableInformation m_ShareableInfo;
    bool m_ShareableInfoIsSet;
    std::string m_ServiceAPICategory;
    bool m_ServiceAPICategoryIsSet;
    std::string m_ApiSuppFeats;
    bool m_ApiSuppFeatsIsSet;
    PublishedApiPath m_PubApiPath;
    bool m_PubApiPathIsSet;
    std::string m_CcfId;
    bool m_CcfIdIsSet;
    
};

} // namespace org::openapitools::server::model

#endif /* ServiceAPIDescription_H_ */
