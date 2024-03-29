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
import InlineResponse2002EmbeddedLinks from './InlineResponse2002EmbeddedLinks';

/**
 * The InlineResponse2002EmbeddedDataCenters model module.
 * @module model/InlineResponse2002EmbeddedDataCenters
 * @version 5229
 */
class InlineResponse2002EmbeddedDataCenters {
    /**
     * Constructs a new <code>InlineResponse2002EmbeddedDataCenters</code>.
     * @alias module:model/InlineResponse2002EmbeddedDataCenters
     * @param city {module:model/AnyType} 
     * @param continentCode {module:model/AnyType} 
     * @param stateCode {module:model/AnyType} 
     * @param lng {Number} 
     * @param provider {String} 
     * @param stateName {module:model/AnyType} 
     * @param continentName {module:model/AnyType} 
     * @param isp {module:model/AnyType} 
     * @param locationCode {String} 
     * @param countryName {module:model/AnyType} 
     * @param id {String} 
     * @param countryCode {module:model/AnyType} 
     * @param address {module:model/AnyType} 
     * @param locationName {String} 
     * @param lat {Number} 
     * @param links {module:model/InlineResponse2002EmbeddedLinks} 
     */
    constructor(city, continentCode, stateCode, lng, provider, stateName, continentName, isp, locationCode, countryName, id, countryCode, address, locationName, lat, links) { 
        
        InlineResponse2002EmbeddedDataCenters.initialize(this, city, continentCode, stateCode, lng, provider, stateName, continentName, isp, locationCode, countryName, id, countryCode, address, locationName, lat, links);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj, city, continentCode, stateCode, lng, provider, stateName, continentName, isp, locationCode, countryName, id, countryCode, address, locationName, lat, links) { 
        obj['city'] = city;
        obj['continentCode'] = continentCode;
        obj['stateCode'] = stateCode;
        obj['lng'] = lng;
        obj['provider'] = provider;
        obj['stateName'] = stateName;
        obj['continentName'] = continentName;
        obj['isp'] = isp;
        obj['locationCode'] = locationCode;
        obj['countryName'] = countryName;
        obj['id'] = id;
        obj['countryCode'] = countryCode;
        obj['address'] = address;
        obj['locationName'] = locationName;
        obj['lat'] = lat;
        obj['_links'] = links;
    }

    /**
     * Constructs a <code>InlineResponse2002EmbeddedDataCenters</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/InlineResponse2002EmbeddedDataCenters} obj Optional instance to populate.
     * @return {module:model/InlineResponse2002EmbeddedDataCenters} The populated <code>InlineResponse2002EmbeddedDataCenters</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new InlineResponse2002EmbeddedDataCenters();

            if (data.hasOwnProperty('city')) {
                obj['city'] = ApiClient.convertToType(data['city'], AnyType);
            }
            if (data.hasOwnProperty('continentCode')) {
                obj['continentCode'] = ApiClient.convertToType(data['continentCode'], AnyType);
            }
            if (data.hasOwnProperty('stateCode')) {
                obj['stateCode'] = ApiClient.convertToType(data['stateCode'], AnyType);
            }
            if (data.hasOwnProperty('lng')) {
                obj['lng'] = ApiClient.convertToType(data['lng'], 'Number');
            }
            if (data.hasOwnProperty('provider')) {
                obj['provider'] = ApiClient.convertToType(data['provider'], 'String');
            }
            if (data.hasOwnProperty('stateName')) {
                obj['stateName'] = ApiClient.convertToType(data['stateName'], AnyType);
            }
            if (data.hasOwnProperty('continentName')) {
                obj['continentName'] = ApiClient.convertToType(data['continentName'], AnyType);
            }
            if (data.hasOwnProperty('isp')) {
                obj['isp'] = ApiClient.convertToType(data['isp'], AnyType);
            }
            if (data.hasOwnProperty('locationCode')) {
                obj['locationCode'] = ApiClient.convertToType(data['locationCode'], 'String');
            }
            if (data.hasOwnProperty('countryName')) {
                obj['countryName'] = ApiClient.convertToType(data['countryName'], AnyType);
            }
            if (data.hasOwnProperty('id')) {
                obj['id'] = ApiClient.convertToType(data['id'], 'String');
            }
            if (data.hasOwnProperty('countryCode')) {
                obj['countryCode'] = ApiClient.convertToType(data['countryCode'], AnyType);
            }
            if (data.hasOwnProperty('address')) {
                obj['address'] = ApiClient.convertToType(data['address'], AnyType);
            }
            if (data.hasOwnProperty('locationName')) {
                obj['locationName'] = ApiClient.convertToType(data['locationName'], 'String');
            }
            if (data.hasOwnProperty('lat')) {
                obj['lat'] = ApiClient.convertToType(data['lat'], 'Number');
            }
            if (data.hasOwnProperty('_links')) {
                obj['_links'] = InlineResponse2002EmbeddedLinks.constructFromObject(data['_links']);
            }
        }
        return obj;
    }


}

/**
 * @member {module:model/AnyType} city
 */
InlineResponse2002EmbeddedDataCenters.prototype['city'] = undefined;

/**
 * @member {module:model/AnyType} continentCode
 */
InlineResponse2002EmbeddedDataCenters.prototype['continentCode'] = undefined;

/**
 * @member {module:model/AnyType} stateCode
 */
InlineResponse2002EmbeddedDataCenters.prototype['stateCode'] = undefined;

/**
 * @member {Number} lng
 */
InlineResponse2002EmbeddedDataCenters.prototype['lng'] = undefined;

/**
 * @member {String} provider
 */
InlineResponse2002EmbeddedDataCenters.prototype['provider'] = undefined;

/**
 * @member {module:model/AnyType} stateName
 */
InlineResponse2002EmbeddedDataCenters.prototype['stateName'] = undefined;

/**
 * @member {module:model/AnyType} continentName
 */
InlineResponse2002EmbeddedDataCenters.prototype['continentName'] = undefined;

/**
 * @member {module:model/AnyType} isp
 */
InlineResponse2002EmbeddedDataCenters.prototype['isp'] = undefined;

/**
 * @member {String} locationCode
 */
InlineResponse2002EmbeddedDataCenters.prototype['locationCode'] = undefined;

/**
 * @member {module:model/AnyType} countryName
 */
InlineResponse2002EmbeddedDataCenters.prototype['countryName'] = undefined;

/**
 * @member {String} id
 */
InlineResponse2002EmbeddedDataCenters.prototype['id'] = undefined;

/**
 * @member {module:model/AnyType} countryCode
 */
InlineResponse2002EmbeddedDataCenters.prototype['countryCode'] = undefined;

/**
 * @member {module:model/AnyType} address
 */
InlineResponse2002EmbeddedDataCenters.prototype['address'] = undefined;

/**
 * @member {String} locationName
 */
InlineResponse2002EmbeddedDataCenters.prototype['locationName'] = undefined;

/**
 * @member {Number} lat
 */
InlineResponse2002EmbeddedDataCenters.prototype['lat'] = undefined;

/**
 * @member {module:model/InlineResponse2002EmbeddedLinks} _links
 */
InlineResponse2002EmbeddedDataCenters.prototype['_links'] = undefined;






export default InlineResponse2002EmbeddedDataCenters;

