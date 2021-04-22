/**
 * untitled API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 5227
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
 * The InlineResponse2007EmbeddedEndpointList model module.
 * @module model/InlineResponse2007EmbeddedEndpointList
 * @version 5227
 */
class InlineResponse2007EmbeddedEndpointList {
    /**
     * Constructs a new <code>InlineResponse2007EmbeddedEndpointList</code>.
     * @alias module:model/InlineResponse2007EmbeddedEndpointList
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
     * @param jwt {module:model/AnyType} 
     * @param id {String} 
     * @param sessionActive {Boolean} 
     * @param jwtExpiresAt {module:model/AnyType} 
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
        
        InlineResponse2007EmbeddedEndpointList.initialize(this, mfaEnabled, deletedAt, networkId, name, updatedAt, syncId, sessionIdentityId, osRelease, syncResourceId, zitiId, appVersion, branch, os, ownerIdentityId, hasEdgeRouterConnection, attributes, hasApiSession, revision, version, jwt, id, sessionActive, jwtExpiresAt, createdAt, arch, createdBy, deletedBy, type, osVersion, appId, links);
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
     * Constructs a <code>InlineResponse2007EmbeddedEndpointList</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/InlineResponse2007EmbeddedEndpointList} obj Optional instance to populate.
     * @return {module:model/InlineResponse2007EmbeddedEndpointList} The populated <code>InlineResponse2007EmbeddedEndpointList</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new InlineResponse2007EmbeddedEndpointList();

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
                obj['jwt'] = ApiClient.convertToType(data['jwt'], AnyType);
            }
            if (data.hasOwnProperty('id')) {
                obj['id'] = ApiClient.convertToType(data['id'], 'String');
            }
            if (data.hasOwnProperty('sessionActive')) {
                obj['sessionActive'] = ApiClient.convertToType(data['sessionActive'], 'Boolean');
            }
            if (data.hasOwnProperty('jwtExpiresAt')) {
                obj['jwtExpiresAt'] = ApiClient.convertToType(data['jwtExpiresAt'], AnyType);
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
InlineResponse2007EmbeddedEndpointList.prototype['mfaEnabled'] = undefined;

/**
 * @member {module:model/AnyType} deletedAt
 */
InlineResponse2007EmbeddedEndpointList.prototype['deletedAt'] = undefined;

/**
 * @member {String} networkId
 */
InlineResponse2007EmbeddedEndpointList.prototype['networkId'] = undefined;

/**
 * @member {String} name
 */
InlineResponse2007EmbeddedEndpointList.prototype['name'] = undefined;

/**
 * @member {String} updatedAt
 */
InlineResponse2007EmbeddedEndpointList.prototype['updatedAt'] = undefined;

/**
 * @member {module:model/AnyType} syncId
 */
InlineResponse2007EmbeddedEndpointList.prototype['syncId'] = undefined;

/**
 * @member {module:model/AnyType} sessionIdentityId
 */
InlineResponse2007EmbeddedEndpointList.prototype['sessionIdentityId'] = undefined;

/**
 * @member {module:model/AnyType} osRelease
 */
InlineResponse2007EmbeddedEndpointList.prototype['osRelease'] = undefined;

/**
 * @member {module:model/AnyType} syncResourceId
 */
InlineResponse2007EmbeddedEndpointList.prototype['syncResourceId'] = undefined;

/**
 * @member {String} zitiId
 */
InlineResponse2007EmbeddedEndpointList.prototype['zitiId'] = undefined;

/**
 * @member {module:model/AnyType} appVersion
 */
InlineResponse2007EmbeddedEndpointList.prototype['appVersion'] = undefined;

/**
 * @member {module:model/AnyType} branch
 */
InlineResponse2007EmbeddedEndpointList.prototype['branch'] = undefined;

/**
 * @member {module:model/AnyType} os
 */
InlineResponse2007EmbeddedEndpointList.prototype['os'] = undefined;

/**
 * @member {String} ownerIdentityId
 */
InlineResponse2007EmbeddedEndpointList.prototype['ownerIdentityId'] = undefined;

/**
 * @member {Boolean} hasEdgeRouterConnection
 */
InlineResponse2007EmbeddedEndpointList.prototype['hasEdgeRouterConnection'] = undefined;

/**
 * @member {Array.<String>} attributes
 */
InlineResponse2007EmbeddedEndpointList.prototype['attributes'] = undefined;

/**
 * @member {Boolean} hasApiSession
 */
InlineResponse2007EmbeddedEndpointList.prototype['hasApiSession'] = undefined;

/**
 * @member {module:model/AnyType} revision
 */
InlineResponse2007EmbeddedEndpointList.prototype['revision'] = undefined;

/**
 * @member {module:model/AnyType} version
 */
InlineResponse2007EmbeddedEndpointList.prototype['version'] = undefined;

/**
 * @member {module:model/AnyType} jwt
 */
InlineResponse2007EmbeddedEndpointList.prototype['jwt'] = undefined;

/**
 * @member {String} id
 */
InlineResponse2007EmbeddedEndpointList.prototype['id'] = undefined;

/**
 * @member {Boolean} sessionActive
 */
InlineResponse2007EmbeddedEndpointList.prototype['sessionActive'] = undefined;

/**
 * @member {module:model/AnyType} jwtExpiresAt
 */
InlineResponse2007EmbeddedEndpointList.prototype['jwtExpiresAt'] = undefined;

/**
 * @member {String} createdAt
 */
InlineResponse2007EmbeddedEndpointList.prototype['createdAt'] = undefined;

/**
 * @member {module:model/AnyType} arch
 */
InlineResponse2007EmbeddedEndpointList.prototype['arch'] = undefined;

/**
 * @member {String} createdBy
 */
InlineResponse2007EmbeddedEndpointList.prototype['createdBy'] = undefined;

/**
 * @member {module:model/AnyType} deletedBy
 */
InlineResponse2007EmbeddedEndpointList.prototype['deletedBy'] = undefined;

/**
 * @member {module:model/AnyType} type
 */
InlineResponse2007EmbeddedEndpointList.prototype['type'] = undefined;

/**
 * @member {module:model/AnyType} osVersion
 */
InlineResponse2007EmbeddedEndpointList.prototype['osVersion'] = undefined;

/**
 * @member {module:model/AnyType} appId
 */
InlineResponse2007EmbeddedEndpointList.prototype['appId'] = undefined;

/**
 * @member {module:model/InlineResponse200Links} _links
 */
InlineResponse2007EmbeddedEndpointList.prototype['_links'] = undefined;






export default InlineResponse2007EmbeddedEndpointList;

