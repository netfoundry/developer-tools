/**
 * untitled API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 5170
 * 
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 *
 */

import ApiClient from '../ApiClient';
import AnyType from './AnyType';
import InlineResponse20014UpdatedAt from './InlineResponse20014UpdatedAt';

/**
 * The InlineResponse20016 model module.
 * @module model/InlineResponse20016
 * @version 5170
 */
class InlineResponse20016 {
    /**
     * Constructs a new <code>InlineResponse20016</code>.
     * @alias module:model/InlineResponse20016
     * @param deletedAt {module:model/AnyType} 
     * @param name {String} 
     * @param updatedAt {module:model/AnyType} 
     * @param email {String} 
     * @param description {String} 
     * @param awsCognitoClientId {String} 
     * @param auth0ClientId {module:model/AnyType} 
     * @param id {String} 
     * @param contactEmail {String} 
     * @param createdAt {module:model/InlineResponse20014UpdatedAt} 
     * @param organizationId {String} 
     * @param tenantId {String} 
     * @param type {String} 
     * @param authenticationUrl {String} 
     * @param active {Boolean} 
     */
    constructor(deletedAt, name, updatedAt, email, description, awsCognitoClientId, auth0ClientId, id, contactEmail, createdAt, organizationId, tenantId, type, authenticationUrl, active) { 
        
        InlineResponse20016.initialize(this, deletedAt, name, updatedAt, email, description, awsCognitoClientId, auth0ClientId, id, contactEmail, createdAt, organizationId, tenantId, type, authenticationUrl, active);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj, deletedAt, name, updatedAt, email, description, awsCognitoClientId, auth0ClientId, id, contactEmail, createdAt, organizationId, tenantId, type, authenticationUrl, active) { 
        obj['deletedAt'] = deletedAt;
        obj['name'] = name;
        obj['updatedAt'] = updatedAt;
        obj['email'] = email;
        obj['description'] = description;
        obj['awsCognitoClientId'] = awsCognitoClientId;
        obj['auth0ClientId'] = auth0ClientId;
        obj['id'] = id;
        obj['contactEmail'] = contactEmail;
        obj['createdAt'] = createdAt;
        obj['organizationId'] = organizationId;
        obj['tenantId'] = tenantId;
        obj['type'] = type;
        obj['authenticationUrl'] = authenticationUrl;
        obj['active'] = active;
    }

    /**
     * Constructs a <code>InlineResponse20016</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/InlineResponse20016} obj Optional instance to populate.
     * @return {module:model/InlineResponse20016} The populated <code>InlineResponse20016</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new InlineResponse20016();

            if (data.hasOwnProperty('deletedAt')) {
                obj['deletedAt'] = ApiClient.convertToType(data['deletedAt'], AnyType);
            }
            if (data.hasOwnProperty('name')) {
                obj['name'] = ApiClient.convertToType(data['name'], 'String');
            }
            if (data.hasOwnProperty('updatedAt')) {
                obj['updatedAt'] = ApiClient.convertToType(data['updatedAt'], AnyType);
            }
            if (data.hasOwnProperty('email')) {
                obj['email'] = ApiClient.convertToType(data['email'], 'String');
            }
            if (data.hasOwnProperty('description')) {
                obj['description'] = ApiClient.convertToType(data['description'], 'String');
            }
            if (data.hasOwnProperty('awsCognitoClientId')) {
                obj['awsCognitoClientId'] = ApiClient.convertToType(data['awsCognitoClientId'], 'String');
            }
            if (data.hasOwnProperty('auth0ClientId')) {
                obj['auth0ClientId'] = ApiClient.convertToType(data['auth0ClientId'], AnyType);
            }
            if (data.hasOwnProperty('id')) {
                obj['id'] = ApiClient.convertToType(data['id'], 'String');
            }
            if (data.hasOwnProperty('contactEmail')) {
                obj['contactEmail'] = ApiClient.convertToType(data['contactEmail'], 'String');
            }
            if (data.hasOwnProperty('createdAt')) {
                obj['createdAt'] = InlineResponse20014UpdatedAt.constructFromObject(data['createdAt']);
            }
            if (data.hasOwnProperty('organizationId')) {
                obj['organizationId'] = ApiClient.convertToType(data['organizationId'], 'String');
            }
            if (data.hasOwnProperty('tenantId')) {
                obj['tenantId'] = ApiClient.convertToType(data['tenantId'], 'String');
            }
            if (data.hasOwnProperty('type')) {
                obj['type'] = ApiClient.convertToType(data['type'], 'String');
            }
            if (data.hasOwnProperty('authenticationUrl')) {
                obj['authenticationUrl'] = ApiClient.convertToType(data['authenticationUrl'], 'String');
            }
            if (data.hasOwnProperty('active')) {
                obj['active'] = ApiClient.convertToType(data['active'], 'Boolean');
            }
        }
        return obj;
    }


}

/**
 * @member {module:model/AnyType} deletedAt
 */
InlineResponse20016.prototype['deletedAt'] = undefined;

/**
 * @member {String} name
 */
InlineResponse20016.prototype['name'] = undefined;

/**
 * @member {module:model/AnyType} updatedAt
 */
InlineResponse20016.prototype['updatedAt'] = undefined;

/**
 * @member {String} email
 */
InlineResponse20016.prototype['email'] = undefined;

/**
 * @member {String} description
 */
InlineResponse20016.prototype['description'] = undefined;

/**
 * @member {String} awsCognitoClientId
 */
InlineResponse20016.prototype['awsCognitoClientId'] = undefined;

/**
 * @member {module:model/AnyType} auth0ClientId
 */
InlineResponse20016.prototype['auth0ClientId'] = undefined;

/**
 * @member {String} id
 */
InlineResponse20016.prototype['id'] = undefined;

/**
 * @member {String} contactEmail
 */
InlineResponse20016.prototype['contactEmail'] = undefined;

/**
 * @member {module:model/InlineResponse20014UpdatedAt} createdAt
 */
InlineResponse20016.prototype['createdAt'] = undefined;

/**
 * @member {String} organizationId
 */
InlineResponse20016.prototype['organizationId'] = undefined;

/**
 * @member {String} tenantId
 */
InlineResponse20016.prototype['tenantId'] = undefined;

/**
 * @member {String} type
 */
InlineResponse20016.prototype['type'] = undefined;

/**
 * @member {String} authenticationUrl
 */
InlineResponse20016.prototype['authenticationUrl'] = undefined;

/**
 * @member {Boolean} active
 */
InlineResponse20016.prototype['active'] = undefined;






export default InlineResponse20016;

