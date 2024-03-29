/**
 * untitled API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 5229
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
 * The InlineResponse20014IdentityProviders model module.
 * @module model/InlineResponse20014IdentityProviders
 * @version 5229
 */
class InlineResponse20014IdentityProviders {
    /**
     * Constructs a new <code>InlineResponse20014IdentityProviders</code>.
     * @alias module:model/InlineResponse20014IdentityProviders
     * @param deletedAt {module:model/AnyType} 
     * @param name {String} 
     * @param updatedAt {module:model/AnyType} 
     * @param auth0ConnectionType {String} 
     * @param auth0ConnectionId {String} 
     * @param id {String} 
     * @param createdAt {module:model/InlineResponse20014UpdatedAt} 
     * @param organizationId {String} 
     * @param active {Boolean} 
     */
    constructor(deletedAt, name, updatedAt, auth0ConnectionType, auth0ConnectionId, id, createdAt, organizationId, active) { 
        
        InlineResponse20014IdentityProviders.initialize(this, deletedAt, name, updatedAt, auth0ConnectionType, auth0ConnectionId, id, createdAt, organizationId, active);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj, deletedAt, name, updatedAt, auth0ConnectionType, auth0ConnectionId, id, createdAt, organizationId, active) { 
        obj['deletedAt'] = deletedAt;
        obj['name'] = name;
        obj['updatedAt'] = updatedAt;
        obj['auth0ConnectionType'] = auth0ConnectionType;
        obj['auth0ConnectionId'] = auth0ConnectionId;
        obj['id'] = id;
        obj['createdAt'] = createdAt;
        obj['organizationId'] = organizationId;
        obj['active'] = active;
    }

    /**
     * Constructs a <code>InlineResponse20014IdentityProviders</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/InlineResponse20014IdentityProviders} obj Optional instance to populate.
     * @return {module:model/InlineResponse20014IdentityProviders} The populated <code>InlineResponse20014IdentityProviders</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new InlineResponse20014IdentityProviders();

            if (data.hasOwnProperty('deletedAt')) {
                obj['deletedAt'] = ApiClient.convertToType(data['deletedAt'], AnyType);
            }
            if (data.hasOwnProperty('name')) {
                obj['name'] = ApiClient.convertToType(data['name'], 'String');
            }
            if (data.hasOwnProperty('updatedAt')) {
                obj['updatedAt'] = ApiClient.convertToType(data['updatedAt'], AnyType);
            }
            if (data.hasOwnProperty('auth0ConnectionType')) {
                obj['auth0ConnectionType'] = ApiClient.convertToType(data['auth0ConnectionType'], 'String');
            }
            if (data.hasOwnProperty('auth0ConnectionId')) {
                obj['auth0ConnectionId'] = ApiClient.convertToType(data['auth0ConnectionId'], 'String');
            }
            if (data.hasOwnProperty('id')) {
                obj['id'] = ApiClient.convertToType(data['id'], 'String');
            }
            if (data.hasOwnProperty('createdAt')) {
                obj['createdAt'] = InlineResponse20014UpdatedAt.constructFromObject(data['createdAt']);
            }
            if (data.hasOwnProperty('organizationId')) {
                obj['organizationId'] = ApiClient.convertToType(data['organizationId'], 'String');
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
InlineResponse20014IdentityProviders.prototype['deletedAt'] = undefined;

/**
 * @member {String} name
 */
InlineResponse20014IdentityProviders.prototype['name'] = undefined;

/**
 * @member {module:model/AnyType} updatedAt
 */
InlineResponse20014IdentityProviders.prototype['updatedAt'] = undefined;

/**
 * @member {String} auth0ConnectionType
 */
InlineResponse20014IdentityProviders.prototype['auth0ConnectionType'] = undefined;

/**
 * @member {String} auth0ConnectionId
 */
InlineResponse20014IdentityProviders.prototype['auth0ConnectionId'] = undefined;

/**
 * @member {String} id
 */
InlineResponse20014IdentityProviders.prototype['id'] = undefined;

/**
 * @member {module:model/InlineResponse20014UpdatedAt} createdAt
 */
InlineResponse20014IdentityProviders.prototype['createdAt'] = undefined;

/**
 * @member {String} organizationId
 */
InlineResponse20014IdentityProviders.prototype['organizationId'] = undefined;

/**
 * @member {Boolean} active
 */
InlineResponse20014IdentityProviders.prototype['active'] = undefined;






export default InlineResponse20014IdentityProviders;

