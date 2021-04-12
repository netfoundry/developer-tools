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
import CoreV2ServicesServiceIdModelServerEgress from './CoreV2ServicesServiceIdModelServerEgress';
import InlineResponse2023ModelClientIngress from './InlineResponse2023ModelClientIngress';

/**
 * The InlineResponse2023Model model module.
 * @module model/InlineResponse2023Model
 * @version 5170
 */
class InlineResponse2023Model {
    /**
     * Constructs a new <code>InlineResponse2023Model</code>.
     * @alias module:model/InlineResponse2023Model
     * @param bindEndpointAttributes {Array.<String>} 
     * @param clientIngress {module:model/InlineResponse2023ModelClientIngress} 
     * @param edgeRouterAttributes {Array.<String>} 
     * @param serverEgress {module:model/CoreV2ServicesServiceIdModelServerEgress} 
     */
    constructor(bindEndpointAttributes, clientIngress, edgeRouterAttributes, serverEgress) { 
        
        InlineResponse2023Model.initialize(this, bindEndpointAttributes, clientIngress, edgeRouterAttributes, serverEgress);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj, bindEndpointAttributes, clientIngress, edgeRouterAttributes, serverEgress) { 
        obj['bindEndpointAttributes'] = bindEndpointAttributes;
        obj['clientIngress'] = clientIngress;
        obj['edgeRouterAttributes'] = edgeRouterAttributes;
        obj['serverEgress'] = serverEgress;
    }

    /**
     * Constructs a <code>InlineResponse2023Model</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/InlineResponse2023Model} obj Optional instance to populate.
     * @return {module:model/InlineResponse2023Model} The populated <code>InlineResponse2023Model</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new InlineResponse2023Model();

            if (data.hasOwnProperty('bindEndpointAttributes')) {
                obj['bindEndpointAttributes'] = ApiClient.convertToType(data['bindEndpointAttributes'], ['String']);
            }
            if (data.hasOwnProperty('clientIngress')) {
                obj['clientIngress'] = InlineResponse2023ModelClientIngress.constructFromObject(data['clientIngress']);
            }
            if (data.hasOwnProperty('edgeRouterAttributes')) {
                obj['edgeRouterAttributes'] = ApiClient.convertToType(data['edgeRouterAttributes'], ['String']);
            }
            if (data.hasOwnProperty('serverEgress')) {
                obj['serverEgress'] = CoreV2ServicesServiceIdModelServerEgress.constructFromObject(data['serverEgress']);
            }
        }
        return obj;
    }


}

/**
 * @member {Array.<String>} bindEndpointAttributes
 */
InlineResponse2023Model.prototype['bindEndpointAttributes'] = undefined;

/**
 * @member {module:model/InlineResponse2023ModelClientIngress} clientIngress
 */
InlineResponse2023Model.prototype['clientIngress'] = undefined;

/**
 * @member {Array.<String>} edgeRouterAttributes
 */
InlineResponse2023Model.prototype['edgeRouterAttributes'] = undefined;

/**
 * @member {module:model/CoreV2ServicesServiceIdModelServerEgress} serverEgress
 */
InlineResponse2023Model.prototype['serverEgress'] = undefined;






export default InlineResponse2023Model;

