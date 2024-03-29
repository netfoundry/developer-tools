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
import InlineResponse20012 from './InlineResponse20012';

/**
 * The InlineResponse20018Embedded model module.
 * @module model/InlineResponse20018Embedded
 * @version 5229
 */
class InlineResponse20018Embedded {
    /**
     * Constructs a new <code>InlineResponse20018Embedded</code>.
     * @alias module:model/InlineResponse20018Embedded
     * @param edgeRouterList {Array.<module:model/InlineResponse20012>} 
     */
    constructor(edgeRouterList) { 
        
        InlineResponse20018Embedded.initialize(this, edgeRouterList);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj, edgeRouterList) { 
        obj['edgeRouterList'] = edgeRouterList;
    }

    /**
     * Constructs a <code>InlineResponse20018Embedded</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/InlineResponse20018Embedded} obj Optional instance to populate.
     * @return {module:model/InlineResponse20018Embedded} The populated <code>InlineResponse20018Embedded</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new InlineResponse20018Embedded();

            if (data.hasOwnProperty('edgeRouterList')) {
                obj['edgeRouterList'] = ApiClient.convertToType(data['edgeRouterList'], [InlineResponse20012]);
            }
        }
        return obj;
    }


}

/**
 * @member {Array.<module:model/InlineResponse20012>} edgeRouterList
 */
InlineResponse20018Embedded.prototype['edgeRouterList'] = undefined;






export default InlineResponse20018Embedded;

