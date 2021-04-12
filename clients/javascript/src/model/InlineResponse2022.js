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
import InlineResponse2021Links from './InlineResponse2021Links';
import InlineResponse2022ConfigIdByConfigTypeId from './InlineResponse2022ConfigIdByConfigTypeId';

/**
 * The InlineResponse2022 model module.
 * @module model/InlineResponse2022
 * @version 5170
 */
class InlineResponse2022 {
    /**
     * Constructs a new <code>InlineResponse2022</code>.
     * @alias module:model/InlineResponse2022
     * @param deletedAt {String} 
     * @param networkId {String} 
     * @param name {String} 
     * @param updatedAt {String} 
     * @param model {module:model/AnyType} 
     * @param zitiId {module:model/AnyType} 
     * @param ownerIdentityId {String} 
     * @param attributes {module:model/AnyType} 
     * @param modelType {String} 
     * @param id {String} 
     * @param configIdByConfigTypeId {module:model/InlineResponse2022ConfigIdByConfigTypeId} 
     * @param createdAt {String} 
     * @param createdBy {String} 
     * @param deletedBy {String} 
     * @param encryptionRequired {Boolean} 
     * @param authority {module:model/AnyType} 
     * @param links {module:model/InlineResponse2021Links} 
     */
    constructor(deletedAt, networkId, name, updatedAt, model, zitiId, ownerIdentityId, attributes, modelType, id, configIdByConfigTypeId, createdAt, createdBy, deletedBy, encryptionRequired, authority, links) { 
        
        InlineResponse2022.initialize(this, deletedAt, networkId, name, updatedAt, model, zitiId, ownerIdentityId, attributes, modelType, id, configIdByConfigTypeId, createdAt, createdBy, deletedBy, encryptionRequired, authority, links);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj, deletedAt, networkId, name, updatedAt, model, zitiId, ownerIdentityId, attributes, modelType, id, configIdByConfigTypeId, createdAt, createdBy, deletedBy, encryptionRequired, authority, links) { 
        obj['deletedAt'] = deletedAt;
        obj['networkId'] = networkId;
        obj['name'] = name;
        obj['updatedAt'] = updatedAt;
        obj['model'] = model;
        obj['zitiId'] = zitiId;
        obj['ownerIdentityId'] = ownerIdentityId;
        obj['attributes'] = attributes;
        obj['modelType'] = modelType;
        obj['id'] = id;
        obj['configIdByConfigTypeId'] = configIdByConfigTypeId;
        obj['createdAt'] = createdAt;
        obj['createdBy'] = createdBy;
        obj['deletedBy'] = deletedBy;
        obj['encryptionRequired'] = encryptionRequired;
        obj['authority'] = authority;
        obj['_links'] = links;
    }

    /**
     * Constructs a <code>InlineResponse2022</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/InlineResponse2022} obj Optional instance to populate.
     * @return {module:model/InlineResponse2022} The populated <code>InlineResponse2022</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new InlineResponse2022();

            if (data.hasOwnProperty('deletedAt')) {
                obj['deletedAt'] = ApiClient.convertToType(data['deletedAt'], 'String');
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
            if (data.hasOwnProperty('model')) {
                obj['model'] = ApiClient.convertToType(data['model'], AnyType);
            }
            if (data.hasOwnProperty('zitiId')) {
                obj['zitiId'] = ApiClient.convertToType(data['zitiId'], AnyType);
            }
            if (data.hasOwnProperty('ownerIdentityId')) {
                obj['ownerIdentityId'] = ApiClient.convertToType(data['ownerIdentityId'], 'String');
            }
            if (data.hasOwnProperty('attributes')) {
                obj['attributes'] = ApiClient.convertToType(data['attributes'], AnyType);
            }
            if (data.hasOwnProperty('modelType')) {
                obj['modelType'] = ApiClient.convertToType(data['modelType'], 'String');
            }
            if (data.hasOwnProperty('id')) {
                obj['id'] = ApiClient.convertToType(data['id'], 'String');
            }
            if (data.hasOwnProperty('configIdByConfigTypeId')) {
                obj['configIdByConfigTypeId'] = InlineResponse2022ConfigIdByConfigTypeId.constructFromObject(data['configIdByConfigTypeId']);
            }
            if (data.hasOwnProperty('createdAt')) {
                obj['createdAt'] = ApiClient.convertToType(data['createdAt'], 'String');
            }
            if (data.hasOwnProperty('createdBy')) {
                obj['createdBy'] = ApiClient.convertToType(data['createdBy'], 'String');
            }
            if (data.hasOwnProperty('deletedBy')) {
                obj['deletedBy'] = ApiClient.convertToType(data['deletedBy'], 'String');
            }
            if (data.hasOwnProperty('encryptionRequired')) {
                obj['encryptionRequired'] = ApiClient.convertToType(data['encryptionRequired'], 'Boolean');
            }
            if (data.hasOwnProperty('authority')) {
                obj['authority'] = ApiClient.convertToType(data['authority'], AnyType);
            }
            if (data.hasOwnProperty('_links')) {
                obj['_links'] = InlineResponse2021Links.constructFromObject(data['_links']);
            }
        }
        return obj;
    }


}

/**
 * @member {String} deletedAt
 */
InlineResponse2022.prototype['deletedAt'] = undefined;

/**
 * @member {String} networkId
 */
InlineResponse2022.prototype['networkId'] = undefined;

/**
 * @member {String} name
 */
InlineResponse2022.prototype['name'] = undefined;

/**
 * @member {String} updatedAt
 */
InlineResponse2022.prototype['updatedAt'] = undefined;

/**
 * @member {module:model/AnyType} model
 */
InlineResponse2022.prototype['model'] = undefined;

/**
 * @member {module:model/AnyType} zitiId
 */
InlineResponse2022.prototype['zitiId'] = undefined;

/**
 * @member {String} ownerIdentityId
 */
InlineResponse2022.prototype['ownerIdentityId'] = undefined;

/**
 * @member {module:model/AnyType} attributes
 */
InlineResponse2022.prototype['attributes'] = undefined;

/**
 * @member {String} modelType
 */
InlineResponse2022.prototype['modelType'] = undefined;

/**
 * @member {String} id
 */
InlineResponse2022.prototype['id'] = undefined;

/**
 * @member {module:model/InlineResponse2022ConfigIdByConfigTypeId} configIdByConfigTypeId
 */
InlineResponse2022.prototype['configIdByConfigTypeId'] = undefined;

/**
 * @member {String} createdAt
 */
InlineResponse2022.prototype['createdAt'] = undefined;

/**
 * @member {String} createdBy
 */
InlineResponse2022.prototype['createdBy'] = undefined;

/**
 * @member {String} deletedBy
 */
InlineResponse2022.prototype['deletedBy'] = undefined;

/**
 * @member {Boolean} encryptionRequired
 */
InlineResponse2022.prototype['encryptionRequired'] = undefined;

/**
 * @member {module:model/AnyType} authority
 */
InlineResponse2022.prototype['authority'] = undefined;

/**
 * @member {module:model/InlineResponse2021Links} _links
 */
InlineResponse2022.prototype['_links'] = undefined;






export default InlineResponse2022;

