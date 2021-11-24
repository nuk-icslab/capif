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
 * Operation_anyOf.h
 *
 * 
 */

#ifndef Operation_anyOf_H_
#define Operation_anyOf_H_


#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// 
/// </summary>
class  Operation_anyOf
{
public:
    Operation_anyOf();
    virtual ~Operation_anyOf() = default;

    enum class eOperation_anyOf {
    // To have a valid default value.
    // Avoiding name clashes with user defined
    // enum values
    INVALID_VALUE_OPENAPI_GENERATED = 0,
    GET, 
    POST, 
    PUT, 
    PATCH, 
    DELETE
    };

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

    bool operator==(const Operation_anyOf& rhs) const;
    bool operator!=(const Operation_anyOf& rhs) const;

    /////////////////////////////////////////////
    /// Operation_anyOf members

    Operation_anyOf::eOperation_anyOf getValue() const;
    void setValue(Operation_anyOf::eOperation_anyOf value);
    
    friend void to_json(nlohmann::json& j, const Operation_anyOf& o);
    friend void from_json(const nlohmann::json& j, Operation_anyOf& o);
protected:
    Operation_anyOf::eOperation_anyOf m_value = Operation_anyOf::eOperation_anyOf::INVALID_VALUE_OPENAPI_GENERATED;
};

} // namespace org::openapitools::server::model

#endif /* Operation_anyOf_H_ */