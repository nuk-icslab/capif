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
 * Protocol.h
 *
 * Possible values are - HTTP_1_1: HTTP version 1.1 - HTTP_2: HTTP version 2 
 */

#ifndef Protocol_H_
#define Protocol_H_


#include "Protocol_anyOf.h"
#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// Possible values are - HTTP_1_1: HTTP version 1.1 - HTTP_2: HTTP version 2 
/// </summary>
class  Protocol
{
public:
    Protocol();
    virtual ~Protocol() = default;


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

    bool operator==(const Protocol& rhs) const;
    bool operator!=(const Protocol& rhs) const;

    /////////////////////////////////////////////
    /// Protocol members


    Protocol_anyOf getValue() const;
    void setValue(Protocol_anyOf value);
    Protocol_anyOf::eProtocol_anyOf getEnumValue() const;
    void setEnumValue(Protocol_anyOf::eProtocol_anyOf value);
    friend void to_json(nlohmann::json& j, const Protocol& o);
    friend void from_json(const nlohmann::json& j, Protocol& o);
    friend void to_json(nlohmann::json& j, const Protocol_anyOf& o);
    friend void from_json(const nlohmann::json& j, Protocol_anyOf& o);
protected:
    Protocol_anyOf m_value;
};

} // namespace org::openapitools::server::model

#endif /* Protocol_H_ */
