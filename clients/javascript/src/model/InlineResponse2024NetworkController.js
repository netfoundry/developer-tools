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

/**
 * The InlineResponse2024NetworkController model module.
 * @module model/InlineResponse2024NetworkController
 * @version 5170
 */
class InlineResponse2024NetworkController {
    /**
     * Constructs a new <code>InlineResponse2024NetworkController</code>.
     * @alias module:model/InlineResponse2024NetworkController
     * @param deletedAt {module:model/AnyType} 
     * @param networkId {String} 
     * @param name {String} 
     * @param updatedAt {String} 
     * @param provider {String} 
     * @param userData {module:model/AnyType} 
     * @param ownerIdentityId {module:model/AnyType} 
     * @param domainName {String} 
     * @param providerId {String} 
     * @param id {String} 
     * @param port {Number} 
     * @param ipAddress {String} 
     * @param status {String} 
     * @param hostId {String} 
     * @param createdAt {String} 
     * @param deletedBy {module:model/AnyType} 
     * @param locationMetadataId {String} 
     * @param dataCenterId {String} 
     */
    constructor(deletedAt, networkId, name, updatedAt, provider, userData, ownerIdentityId, domainName, providerId, id, port, ipAddress, status, hostId, createdAt, deletedBy, locationMetadataId, dataCenterId) { 
        
        InlineResponse2024NetworkController.initialize(this, deletedAt, networkId, name, updatedAt, provider, userData, ownerIdentityId, domainName, providerId, id, port, ipAddress, status, hostId, createdAt, deletedBy, locationMetadataId, dataCenterId);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj, deletedAt, networkId, name, updatedAt, provider, userData, ownerIdentityId, domainName, providerId, id, port, ipAddress, status, hostId, createdAt, deletedBy, locationMetadataId, dataCenterId) { 
        obj['deletedAt'] = deletedAt;
        obj['networkId'] = networkId;
        obj['name'] = name;
        obj['updatedAt'] = updatedAt;
        obj['provider'] = provider;
        obj['userData'] = userData;
        obj['ownerIdentityId'] = ownerIdentityId;
        obj['domainName'] = domainName;
        obj['providerId'] = providerId;
        obj['id'] = id;
        obj['port'] = port;
        obj['ipAddress'] = ipAddress;
        obj['status'] = status;
        obj['hostId'] = hostId;
        obj['createdAt'] = createdAt;
        obj['deletedBy'] = deletedBy;
        obj['locationMetadataId'] = locationMetadataId;
        obj['dataCenterId'] = dataCenterId;
    }

    /**
     * Constructs a <code>InlineResponse2024NetworkController</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/InlineResponse2024NetworkController} obj Optional instance to populate.
     * @return {module:model/InlineResponse2024NetworkController} The populated <code>InlineResponse2024NetworkController</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new InlineResponse2024NetworkController();

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
                obj['provider'] = ApiClient.convertToType(data['provider'], 'String');
            }
            if (data.hasOwnProperty('userData')) {
                obj['userData'] = ApiClient.convertToType(data['userData'], AnyType);
            }
            if (data.hasOwnProperty('ownerIdentityId')) {
                obj['ownerIdentityId'] = ApiClient.convertToType(data['ownerIdentityId'], AnyType);
            }
            if (data.hasOwnProperty('domainName')) {
                obj['domainName'] = ApiClient.convertToType(data['domainName'], 'String');
            }
            if (data.hasOwnProperty('providerId')) {
                obj['providerId'] = ApiClient.convertToType(data['providerId'], 'String');
            }
            if (data.hasOwnProperty('id')) {
                obj['id'] = ApiClient.convertToType(data['id'], 'String');
            }
            if (data.hasOwnProperty('port')) {
                obj['port'] = ApiClient.convertToType(data['port'], 'Number');
            }
            if (data.hasOwnProperty('ipAddress')) {
                obj['ipAddress'] = ApiClient.convertToType(data['ipAddress'], 'String');
            }
            if (data.hasOwnProperty('status')) {
                obj['status'] = ApiClient.convertToType(data['status'], 'String');
            }
            if (data.hasOwnProperty('hostId')) {
                obj['hostId'] = ApiClient.convertToType(data['hostId'], 'String');
            }
            if (data.hasOwnProperty('createdAt')) {
                obj['createdAt'] = ApiClient.convertToType(data['createdAt'], 'String');
            }
            if (data.hasOwnProperty('deletedBy')) {
                obj['deletedBy'] = ApiClient.convertToType(data['deletedBy'], AnyType);
            }
            if (data.hasOwnProperty('locationMetadataId')) {
                obj['locationMetadataId'] = ApiClient.convertToType(data['locationMetadataId'], 'String');
            }
            if (data.hasOwnProperty('dataCenterId')) {
                obj['dataCenterId'] = ApiClient.convertToType(data['dataCenterId'], 'String');
            }
        }
        return obj;
    }


}

/**
 * @member {module:model/AnyType} deletedAt
 */
InlineResponse2024NetworkController.prototype['deletedAt'] = undefined;

/**
 * @member {String} networkId
 */
InlineResponse2024NetworkController.prototype['networkId'] = undefined;

/**
 * @member {String} name
 */
InlineResponse2024NetworkController.prototype['name'] = undefined;

/**
 * @member {String} updatedAt
 */
InlineResponse2024NetworkController.prototype['updatedAt'] = undefined;

/**
 * @member {String} provider
 */
InlineResponse2024NetworkController.prototype['provider'] = undefined;

/**
 * @member {module:model/AnyType} userData
 */
InlineResponse2024NetworkController.prototype['userData'] = undefined;

/**
 * @member {module:model/AnyType} ownerIdentityId
 */
InlineResponse2024NetworkController.prototype['ownerIdentityId'] = undefined;

/**
 * @member {String} domainName
 */
InlineResponse2024NetworkController.prototype['domainName'] = undefined;

/**
 * @member {String} providerId
 */
InlineResponse2024NetworkController.prototype['providerId'] = undefined;

/**
 * @member {String} id
 */
InlineResponse2024NetworkController.prototype['id'] = undefined;

/**
 * @member {Number} port
 */
InlineResponse2024NetworkController.prototype['port'] = undefined;

/**
 * @member {String} ipAddress
 */
InlineResponse2024NetworkController.prototype['ipAddress'] = undefined;

/**
 * @member {String} status
 */
InlineResponse2024NetworkController.prototype['status'] = undefined;

/**
 * @member {String} hostId
 */
InlineResponse2024NetworkController.prototype['hostId'] = undefined;

/**
 * @member {String} createdAt
 */
InlineResponse2024NetworkController.prototype['createdAt'] = undefined;

/**
 * @member {module:model/AnyType} deletedBy
 */
InlineResponse2024NetworkController.prototype['deletedBy'] = undefined;

/**
 * @member {String} locationMetadataId
 */
InlineResponse2024NetworkController.prototype['locationMetadataId'] = undefined;

/**
 * @member {String} dataCenterId
 */
InlineResponse2024NetworkController.prototype['dataCenterId'] = undefined;






export default InlineResponse2024NetworkController;

