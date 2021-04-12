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
import InlineResponse200Links from './InlineResponse200Links';

/**
 * The InlineResponse2008 model module.
 * @module model/InlineResponse2008
 * @version 5170
 */
class InlineResponse2008 {
    /**
     * Constructs a new <code>InlineResponse2008</code>.
     * @alias module:model/InlineResponse2008
     * @param mfaEnabled {Boolean} 
     * @param deletedAt {module:model/AnyType} 
     * @param networkId {String} 
     * @param name {String} 
     * @param updatedAt {String} 
     * @param syncId {module:model/AnyType} 
     * @param sessionIdentityId {module:model/AnyType} 
     * @param osRelease {module:model/AnyType} 
     * @param syncResourceId {module:model/AnyType} 
     * @param zitiId {String} 
     * @param appVersion {module:model/AnyType} 
     * @param branch {module:model/AnyType} 
     * @param os {module:model/AnyType} 
     * @param ownerIdentityId {String} 
     * @param hasEdgeRouterConnection {Boolean} 
     * @param attributes {Array.<String>} 
     * @param hasApiSession {Boolean} 
     * @param revision {module:model/AnyType} 
     * @param version {module:model/AnyType} 
     * @param jwt {String} 
     * @param id {String} 
     * @param sessionActive {Boolean} 
     * @param jwtExpiresAt {String} 
     * @param createdAt {String} 
     * @param arch {module:model/AnyType} 
     * @param createdBy {String} 
     * @param deletedBy {module:model/AnyType} 
     * @param type {module:model/AnyType} 
     * @param osVersion {module:model/AnyType} 
     * @param appId {module:model/AnyType} 
     * @param links {module:model/InlineResponse200Links} 
     */
    constructor(mfaEnabled, deletedAt, networkId, name, updatedAt, syncId, sessionIdentityId, osRelease, syncResourceId, zitiId, appVersion, branch, os, ownerIdentityId, hasEdgeRouterConnection, attributes, hasApiSession, revision, version, jwt, id, sessionActive, jwtExpiresAt, createdAt, arch, createdBy, deletedBy, type, osVersion, appId, links) { 
        
        InlineResponse2008.initialize(this, mfaEnabled, deletedAt, networkId, name, updatedAt, syncId, sessionIdentityId, osRelease, syncResourceId, zitiId, appVersion, branch, os, ownerIdentityId, hasEdgeRouterConnection, attributes, hasApiSession, revision, version, jwt, id, sessionActive, jwtExpiresAt, createdAt, arch, createdBy, deletedBy, type, osVersion, appId, links);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj, mfaEnabled, deletedAt, networkId, name, updatedAt, syncId, sessionIdentityId, osRelease, syncResourceId, zitiId, appVersion, branch, os, ownerIdentityId, hasEdgeRouterConnection, attributes, hasApiSession, revision, version, jwt, id, sessionActive, jwtExpiresAt, createdAt, arch, createdBy, deletedBy, type, osVersion, appId, links) { 
        obj['mfaEnabled'] = mfaEnabled;
        obj['deletedAt'] = deletedAt;
        obj['networkId'] = networkId;
        obj['name'] = name;
        obj['updatedAt'] = updatedAt;
        obj['syncId'] = syncId;
        obj['sessionIdentityId'] = sessionIdentityId;
        obj['osRelease'] = osRelease;
        obj['syncResourceId'] = syncResourceId;
        obj['zitiId'] = zitiId;
        obj['appVersion'] = appVersion;
        obj['branch'] = branch;
        obj['os'] = os;
        obj['ownerIdentityId'] = ownerIdentityId;
        obj['hasEdgeRouterConnection'] = hasEdgeRouterConnection;
        obj['attributes'] = attributes;
        obj['hasApiSession'] = hasApiSession;
        obj['revision'] = revision;
        obj['version'] = version;
        obj['jwt'] = jwt;
        obj['id'] = id;
        obj['sessionActive'] = sessionActive;
        obj['jwtExpiresAt'] = jwtExpiresAt;
        obj['createdAt'] = createdAt;
        obj['arch'] = arch;
        obj['createdBy'] = createdBy;
        obj['deletedBy'] = deletedBy;
        obj['type'] = type;
        obj['osVersion'] = osVersion;
        obj['appId'] = appId;
        obj['_links'] = links;
    }

    /**
     * Constructs a <code>InlineResponse2008</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/InlineResponse2008} obj Optional instance to populate.
     * @return {module:model/InlineResponse2008} The populated <code>InlineResponse2008</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new InlineResponse2008();

            if (data.hasOwnProperty('mfaEnabled')) {
                obj['mfaEnabled'] = ApiClient.convertToType(data['mfaEnabled'], 'Boolean');
            }
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
            if (data.hasOwnProperty('syncId')) {
                obj['syncId'] = ApiClient.convertToType(data['syncId'], AnyType);
            }
            if (data.hasOwnProperty('sessionIdentityId')) {
                obj['sessionIdentityId'] = ApiClient.convertToType(data['sessionIdentityId'], AnyType);
            }
            if (data.hasOwnProperty('osRelease')) {
                obj['osRelease'] = ApiClient.convertToType(data['osRelease'], AnyType);
            }
            if (data.hasOwnProperty('syncResourceId')) {
                obj['syncResourceId'] = ApiClient.convertToType(data['syncResourceId'], AnyType);
            }
            if (data.hasOwnProperty('zitiId')) {
                obj['zitiId'] = ApiClient.convertToType(data['zitiId'], 'String');
            }
            if (data.hasOwnProperty('appVersion')) {
                obj['appVersion'] = ApiClient.convertToType(data['appVersion'], AnyType);
            }
            if (data.hasOwnProperty('branch')) {
                obj['branch'] = ApiClient.convertToType(data['branch'], AnyType);
            }
            if (data.hasOwnProperty('os')) {
                obj['os'] = ApiClient.convertToType(data['os'], AnyType);
            }
            if (data.hasOwnProperty('ownerIdentityId')) {
                obj['ownerIdentityId'] = ApiClient.convertToType(data['ownerIdentityId'], 'String');
            }
            if (data.hasOwnProperty('hasEdgeRouterConnection')) {
                obj['hasEdgeRouterConnection'] = ApiClient.convertToType(data['hasEdgeRouterConnection'], 'Boolean');
            }
            if (data.hasOwnProperty('attributes')) {
                obj['attributes'] = ApiClient.convertToType(data['attributes'], ['String']);
            }
            if (data.hasOwnProperty('hasApiSession')) {
                obj['hasApiSession'] = ApiClient.convertToType(data['hasApiSession'], 'Boolean');
            }
            if (data.hasOwnProperty('revision')) {
                obj['revision'] = ApiClient.convertToType(data['revision'], AnyType);
            }
            if (data.hasOwnProperty('version')) {
                obj['version'] = ApiClient.convertToType(data['version'], AnyType);
            }
            if (data.hasOwnProperty('jwt')) {
                obj['jwt'] = ApiClient.convertToType(data['jwt'], 'String');
            }
            if (data.hasOwnProperty('id')) {
                obj['id'] = ApiClient.convertToType(data['id'], 'String');
            }
            if (data.hasOwnProperty('sessionActive')) {
                obj['sessionActive'] = ApiClient.convertToType(data['sessionActive'], 'Boolean');
            }
            if (data.hasOwnProperty('jwtExpiresAt')) {
                obj['jwtExpiresAt'] = ApiClient.convertToType(data['jwtExpiresAt'], 'String');
            }
            if (data.hasOwnProperty('createdAt')) {
                obj['createdAt'] = ApiClient.convertToType(data['createdAt'], 'String');
            }
            if (data.hasOwnProperty('arch')) {
                obj['arch'] = ApiClient.convertToType(data['arch'], AnyType);
            }
            if (data.hasOwnProperty('createdBy')) {
                obj['createdBy'] = ApiClient.convertToType(data['createdBy'], 'String');
            }
            if (data.hasOwnProperty('deletedBy')) {
                obj['deletedBy'] = ApiClient.convertToType(data['deletedBy'], AnyType);
            }
            if (data.hasOwnProperty('type')) {
                obj['type'] = ApiClient.convertToType(data['type'], AnyType);
            }
            if (data.hasOwnProperty('osVersion')) {
                obj['osVersion'] = ApiClient.convertToType(data['osVersion'], AnyType);
            }
            if (data.hasOwnProperty('appId')) {
                obj['appId'] = ApiClient.convertToType(data['appId'], AnyType);
            }
            if (data.hasOwnProperty('_links')) {
                obj['_links'] = InlineResponse200Links.constructFromObject(data['_links']);
            }
        }
        return obj;
    }


}

/**
 * @member {Boolean} mfaEnabled
 */
InlineResponse2008.prototype['mfaEnabled'] = undefined;

/**
 * @member {module:model/AnyType} deletedAt
 */
InlineResponse2008.prototype['deletedAt'] = undefined;

/**
 * @member {String} networkId
 */
InlineResponse2008.prototype['networkId'] = undefined;

/**
 * @member {String} name
 */
InlineResponse2008.prototype['name'] = undefined;

/**
 * @member {String} updatedAt
 */
InlineResponse2008.prototype['updatedAt'] = undefined;

/**
 * @member {module:model/AnyType} syncId
 */
InlineResponse2008.prototype['syncId'] = undefined;

/**
 * @member {module:model/AnyType} sessionIdentityId
 */
InlineResponse2008.prototype['sessionIdentityId'] = undefined;

/**
 * @member {module:model/AnyType} osRelease
 */
InlineResponse2008.prototype['osRelease'] = undefined;

/**
 * @member {module:model/AnyType} syncResourceId
 */
InlineResponse2008.prototype['syncResourceId'] = undefined;

/**
 * @member {String} zitiId
 */
InlineResponse2008.prototype['zitiId'] = undefined;

/**
 * @member {module:model/AnyType} appVersion
 */
InlineResponse2008.prototype['appVersion'] = undefined;

/**
 * @member {module:model/AnyType} branch
 */
InlineResponse2008.prototype['branch'] = undefined;

/**
 * @member {module:model/AnyType} os
 */
InlineResponse2008.prototype['os'] = undefined;

/**
 * @member {String} ownerIdentityId
 */
InlineResponse2008.prototype['ownerIdentityId'] = undefined;

/**
 * @member {Boolean} hasEdgeRouterConnection
 */
InlineResponse2008.prototype['hasEdgeRouterConnection'] = undefined;

/**
 * @member {Array.<String>} attributes
 */
InlineResponse2008.prototype['attributes'] = undefined;

/**
 * @member {Boolean} hasApiSession
 */
InlineResponse2008.prototype['hasApiSession'] = undefined;

/**
 * @member {module:model/AnyType} revision
 */
InlineResponse2008.prototype['revision'] = undefined;

/**
 * @member {module:model/AnyType} version
 */
InlineResponse2008.prototype['version'] = undefined;

/**
 * @member {String} jwt
 */
InlineResponse2008.prototype['jwt'] = undefined;

/**
 * @member {String} id
 */
InlineResponse2008.prototype['id'] = undefined;

/**
 * @member {Boolean} sessionActive
 */
InlineResponse2008.prototype['sessionActive'] = undefined;

/**
 * @member {String} jwtExpiresAt
 */
InlineResponse2008.prototype['jwtExpiresAt'] = undefined;

/**
 * @member {String} createdAt
 */
InlineResponse2008.prototype['createdAt'] = undefined;

/**
 * @member {module:model/AnyType} arch
 */
InlineResponse2008.prototype['arch'] = undefined;

/**
 * @member {String} createdBy
 */
InlineResponse2008.prototype['createdBy'] = undefined;

/**
 * @member {module:model/AnyType} deletedBy
 */
InlineResponse2008.prototype['deletedBy'] = undefined;

/**
 * @member {module:model/AnyType} type
 */
InlineResponse2008.prototype['type'] = undefined;

/**
 * @member {module:model/AnyType} osVersion
 */
InlineResponse2008.prototype['osVersion'] = undefined;

/**
 * @member {module:model/AnyType} appId
 */
InlineResponse2008.prototype['appId'] = undefined;

/**
 * @member {module:model/InlineResponse200Links} _links
 */
InlineResponse2008.prototype['_links'] = undefined;






export default InlineResponse2008;

