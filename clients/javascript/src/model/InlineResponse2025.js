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
import InlineResponse2021Links from './InlineResponse2021Links';

/**
 * The InlineResponse2025 model module.
 * @module model/InlineResponse2025
 * @version 5229
 */
class InlineResponse2025 {
    /**
     * Constructs a new <code>InlineResponse2025</code>.
     * @alias module:model/InlineResponse2025
     * @param deletedAt {module:model/AnyType} 
     * @param networkId {String} 
     * @param name {String} 
     * @param updatedAt {String} 
     * @param provider {module:model/AnyType} 
     * @param online {Boolean} 
     * @param zitiId {module:model/AnyType} 
     * @param userData {module:model/AnyType} 
     * @param ownerIdentityId {String} 
     * @param attributes {Array.<String>} 
     * @param providerId {module:model/AnyType} 
     * @param jwt {module:model/AnyType} 
     * @param id {String} 
     * @param ipAddress {module:model/AnyType} 
     * @param status {String} 
     * @param hostId {module:model/AnyType} 
     * @param createdAt {String} 
     * @param createdBy {String} 
     * @param deletedBy {module:model/AnyType} 
     * @param locationMetadataId {module:model/AnyType} 
     * @param linkListener {Boolean} 
     * @param dataCenterId {module:model/AnyType} 
     * @param verified {Boolean} 
     * @param links {module:model/InlineResponse2021Links} 
     */
    constructor(deletedAt, networkId, name, updatedAt, provider, online, zitiId, userData, ownerIdentityId, attributes, providerId, jwt, id, ipAddress, status, hostId, createdAt, createdBy, deletedBy, locationMetadataId, linkListener, dataCenterId, verified, links) { 
        
        InlineResponse2025.initialize(this, deletedAt, networkId, name, updatedAt, provider, online, zitiId, userData, ownerIdentityId, attributes, providerId, jwt, id, ipAddress, status, hostId, createdAt, createdBy, deletedBy, locationMetadataId, linkListener, dataCenterId, verified, links);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj, deletedAt, networkId, name, updatedAt, provider, online, zitiId, userData, ownerIdentityId, attributes, providerId, jwt, id, ipAddress, status, hostId, createdAt, createdBy, deletedBy, locationMetadataId, linkListener, dataCenterId, verified, links) { 
        obj['deletedAt'] = deletedAt;
        obj['networkId'] = networkId;
        obj['name'] = name;
        obj['updatedAt'] = updatedAt;
        obj['provider'] = provider;
        obj['online'] = online;
        obj['zitiId'] = zitiId;
        obj['userData'] = userData;
        obj['ownerIdentityId'] = ownerIdentityId;
        obj['attributes'] = attributes;
        obj['providerId'] = providerId;
        obj['jwt'] = jwt;
        obj['id'] = id;
        obj['ipAddress'] = ipAddress;
        obj['status'] = status;
        obj['hostId'] = hostId;
        obj['createdAt'] = createdAt;
        obj['createdBy'] = createdBy;
        obj['deletedBy'] = deletedBy;
        obj['locationMetadataId'] = locationMetadataId;
        obj['linkListener'] = linkListener;
        obj['dataCenterId'] = dataCenterId;
        obj['verified'] = verified;
        obj['_links'] = links;
    }

    /**
     * Constructs a <code>InlineResponse2025</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/InlineResponse2025} obj Optional instance to populate.
     * @return {module:model/InlineResponse2025} The populated <code>InlineResponse2025</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new InlineResponse2025();

            if (data.hasOwnProperty('deletedAt')) {
                obj['deletedAt'] = ApiClient.convertToType(data['deletedAt'], AnyType);
            }
            if (data.hasOwnProperty('networkId')) {
                obj['networkId'] = ApiClient.convertToType(data['networkId'], 'String');
            }
            if (data.hasOwnProperty('name')) {
                obj['name'] = ApiClient.convertToType(data['name'], 'String');
            }
            if (data.hasOwnProperty('updatedAt')) {
                obj['updatedAt'] = ApiClient.convertToType(data['updatedAt'], 'String');
            }
            if (data.hasOwnProperty('provider')) {
                obj['provider'] = ApiClient.convertToType(data['provider'], AnyType);
            }
            if (data.hasOwnProperty('online')) {
                obj['online'] = ApiClient.convertToType(data['online'], 'Boolean');
            }
            if (data.hasOwnProperty('zitiId')) {
                obj['zitiId'] = ApiClient.convertToType(data['zitiId'], AnyType);
            }
            if (data.hasOwnProperty('userData')) {
                obj['userData'] = ApiClient.convertToType(data['userData'], AnyType);
            }
            if (data.hasOwnProperty('ownerIdentityId')) {
                obj['ownerIdentityId'] = ApiClient.convertToType(data['ownerIdentityId'], 'String');
            }
            if (data.hasOwnProperty('attributes')) {
                obj['attributes'] = ApiClient.convertToType(data['attributes'], ['String']);
            }
            if (data.hasOwnProperty('providerId')) {
                obj['providerId'] = ApiClient.convertToType(data['providerId'], AnyType);
            }
            if (data.hasOwnProperty('jwt')) {
                obj['jwt'] = ApiClient.convertToType(data['jwt'], AnyType);
            }
            if (data.hasOwnProperty('id')) {
                obj['id'] = ApiClient.convertToType(data['id'], 'String');
            }
            if (data.hasOwnProperty('ipAddress')) {
                obj['ipAddress'] = ApiClient.convertToType(data['ipAddress'], AnyType);
            }
            if (data.hasOwnProperty('status')) {
                obj['status'] = ApiClient.convertToType(data['status'], 'String');
            }
            if (data.hasOwnProperty('hostId')) {
                obj['hostId'] = ApiClient.convertToType(data['hostId'], AnyType);
            }
            if (data.hasOwnProperty('createdAt')) {
                obj['createdAt'] = ApiClient.convertToType(data['createdAt'], 'String');
            }
            if (data.hasOwnProperty('createdBy')) {
                obj['createdBy'] = ApiClient.convertToType(data['createdBy'], 'String');
            }
            if (data.hasOwnProperty('deletedBy')) {
                obj['deletedBy'] = ApiClient.convertToType(data['deletedBy'], AnyType);
            }
            if (data.hasOwnProperty('locationMetadataId')) {
                obj['locationMetadataId'] = ApiClient.convertToType(data['locationMetadataId'], AnyType);
            }
            if (data.hasOwnProperty('linkListener')) {
                obj['linkListener'] = ApiClient.convertToType(data['linkListener'], 'Boolean');
            }
            if (data.hasOwnProperty('dataCenterId')) {
                obj['dataCenterId'] = ApiClient.convertToType(data['dataCenterId'], AnyType);
            }
            if (data.hasOwnProperty('verified')) {
                obj['verified'] = ApiClient.convertToType(data['verified'], 'Boolean');
            }
            if (data.hasOwnProperty('_links')) {
                obj['_links'] = InlineResponse2021Links.constructFromObject(data['_links']);
            }
        }
        return obj;
    }


}

/**
 * @member {module:model/AnyType} deletedAt
 */
InlineResponse2025.prototype['deletedAt'] = undefined;

/**
 * @member {String} networkId
 */
InlineResponse2025.prototype['networkId'] = undefined;

/**
 * @member {String} name
 */
InlineResponse2025.prototype['name'] = undefined;

/**
 * @member {String} updatedAt
 */
InlineResponse2025.prototype['updatedAt'] = undefined;

/**
 * @member {module:model/AnyType} provider
 */
InlineResponse2025.prototype['provider'] = undefined;

/**
 * @member {Boolean} online
 */
InlineResponse2025.prototype['online'] = undefined;

/**
 * @member {module:model/AnyType} zitiId
 */
InlineResponse2025.prototype['zitiId'] = undefined;

/**
 * @member {module:model/AnyType} userData
 */
InlineResponse2025.prototype['userData'] = undefined;

/**
 * @member {String} ownerIdentityId
 */
InlineResponse2025.prototype['ownerIdentityId'] = undefined;

/**
 * @member {Array.<String>} attributes
 */
InlineResponse2025.prototype['attributes'] = undefined;

/**
 * @member {module:model/AnyType} providerId
 */
InlineResponse2025.prototype['providerId'] = undefined;

/**
 * @member {module:model/AnyType} jwt
 */
InlineResponse2025.prototype['jwt'] = undefined;

/**
 * @member {String} id
 */
InlineResponse2025.prototype['id'] = undefined;

/**
 * @member {module:model/AnyType} ipAddress
 */
InlineResponse2025.prototype['ipAddress'] = undefined;

/**
 * @member {String} status
 */
InlineResponse2025.prototype['status'] = undefined;

/**
 * @member {module:model/AnyType} hostId
 */
InlineResponse2025.prototype['hostId'] = undefined;

/**
 * @member {String} createdAt
 */
InlineResponse2025.prototype['createdAt'] = undefined;

/**
 * @member {String} createdBy
 */
InlineResponse2025.prototype['createdBy'] = undefined;

/**
 * @member {module:model/AnyType} deletedBy
 */
InlineResponse2025.prototype['deletedBy'] = undefined;

/**
 * @member {module:model/AnyType} locationMetadataId
 */
InlineResponse2025.prototype['locationMetadataId'] = undefined;

/**
 * @member {Boolean} linkListener
 */
InlineResponse2025.prototype['linkListener'] = undefined;

/**
 * @member {module:model/AnyType} dataCenterId
 */
InlineResponse2025.prototype['dataCenterId'] = undefined;

/**
 * @member {Boolean} verified
 */
InlineResponse2025.prototype['verified'] = undefined;

/**
 * @member {module:model/InlineResponse2021Links} _links
 */
InlineResponse2025.prototype['_links'] = undefined;






export default InlineResponse2025;

