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

/**
 * The InlineResponse2003EmbeddedModelClientIngressPorts model module.
 * @module model/InlineResponse2003EmbeddedModelClientIngressPorts
 * @version 5170
 */
class InlineResponse2003EmbeddedModelClientIngressPorts {
    /**
     * Constructs a new <code>InlineResponse2003EmbeddedModelClientIngressPorts</code>.
     * @alias module:model/InlineResponse2003EmbeddedModelClientIngressPorts
     * @param high {Number} 
     * @param low {Number} 
     */
    constructor(high, low) { 
        
        InlineResponse2003EmbeddedModelClientIngressPorts.initialize(this, high, low);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj, high, low) { 
        obj['high'] = high;
        obj['low'] = low;
    }

    /**
     * Constructs a <code>InlineResponse2003EmbeddedModelClientIngressPorts</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/InlineResponse2003EmbeddedModelClientIngressPorts} obj Optional instance to populate.
     * @return {module:model/InlineResponse2003EmbeddedModelClientIngressPorts} The populated <code>InlineResponse2003EmbeddedModelClientIngressPorts</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new InlineResponse2003EmbeddedModelClientIngressPorts();

            if (data.hasOwnProperty('high')) {
                obj['high'] = ApiClient.convertToType(data['high'], 'Number');
            }
            if (data.hasOwnProperty('low')) {
                obj['low'] = ApiClient.convertToType(data['low'], 'Number');
            }
        }
        return obj;
    }


}

/**
 * @member {Number} high
 */
InlineResponse2003EmbeddedModelClientIngressPorts.prototype['high'] = undefined;

/**
 * @member {Number} low
 */
InlineResponse2003EmbeddedModelClientIngressPorts.prototype['low'] = undefined;






export default InlineResponse2003EmbeddedModelClientIngressPorts;

