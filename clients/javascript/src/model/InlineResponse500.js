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
 * The InlineResponse500 model module.
 * @module model/InlineResponse500
 * @version 5170
 */
class InlineResponse500 {
    /**
     * Constructs a new <code>InlineResponse500</code>.
     * @alias module:model/InlineResponse500
     * @param error {String} 
     * @param message {String} 
     * @param status {Number} 
     * @param timestamp {String} 
     */
    constructor(error, message, status, timestamp) { 
        
        InlineResponse500.initialize(this, error, message, status, timestamp);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj, error, message, status, timestamp) { 
        obj['error'] = error;
        obj['message'] = message;
        obj['status'] = status;
        obj['timestamp'] = timestamp;
    }

    /**
     * Constructs a <code>InlineResponse500</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/InlineResponse500} obj Optional instance to populate.
     * @return {module:model/InlineResponse500} The populated <code>InlineResponse500</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new InlineResponse500();

            if (data.hasOwnProperty('error')) {
                obj['error'] = ApiClient.convertToType(data['error'], 'String');
            }
            if (data.hasOwnProperty('message')) {
                obj['message'] = ApiClient.convertToType(data['message'], 'String');
            }
            if (data.hasOwnProperty('status')) {
                obj['status'] = ApiClient.convertToType(data['status'], 'Number');
            }
            if (data.hasOwnProperty('timestamp')) {
                obj['timestamp'] = ApiClient.convertToType(data['timestamp'], 'String');
            }
        }
        return obj;
    }


}

/**
 * @member {String} error
 */
InlineResponse500.prototype['error'] = undefined;

/**
 * @member {String} message
 */
InlineResponse500.prototype['message'] = undefined;

/**
 * @member {Number} status
 */
InlineResponse500.prototype['status'] = undefined;

/**
 * @member {String} timestamp
 */
InlineResponse500.prototype['timestamp'] = undefined;






export default InlineResponse500;

