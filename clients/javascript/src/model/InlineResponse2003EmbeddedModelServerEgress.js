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

/**
 * The InlineResponse2003EmbeddedModelServerEgress model module.
 * @module model/InlineResponse2003EmbeddedModelServerEgress
 * @version 5227
 */
class InlineResponse2003EmbeddedModelServerEgress {
    /**
     * Constructs a new <code>InlineResponse2003EmbeddedModelServerEgress</code>.
     * @alias module:model/InlineResponse2003EmbeddedModelServerEgress
     * @param port {Number} 
     * @param protocol {module:model/AnyType} 
     */
    constructor(port, protocol) { 
        
        InlineResponse2003EmbeddedModelServerEgress.initialize(this, port, protocol);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj, port, protocol) { 
        obj['port'] = port;
        obj['protocol'] = protocol;
    }

    /**
     * Constructs a <code>InlineResponse2003EmbeddedModelServerEgress</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/InlineResponse2003EmbeddedModelServerEgress} obj Optional instance to populate.
     * @return {module:model/InlineResponse2003EmbeddedModelServerEgress} The populated <code>InlineResponse2003EmbeddedModelServerEgress</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new InlineResponse2003EmbeddedModelServerEgress();

            if (data.hasOwnProperty('host')) {
                obj['host'] = ApiClient.convertToType(data['host'], 'String');
            }
            if (data.hasOwnProperty('dialInterceptAddress')) {
                obj['dialInterceptAddress'] = ApiClient.convertToType(data['dialInterceptAddress'], AnyType);
            }
            if (data.hasOwnProperty('dialInterceptPort')) {
                obj['dialInterceptPort'] = ApiClient.convertToType(data['dialInterceptPort'], AnyType);
            }
            if (data.hasOwnProperty('port')) {
                obj['port'] = ApiClient.convertToType(data['port'], 'Number');
            }
            if (data.hasOwnProperty('dialInterceptProtocol')) {
                obj['dialInterceptProtocol'] = ApiClient.convertToType(data['dialInterceptProtocol'], 'Boolean');
            }
            if (data.hasOwnProperty('address')) {
                obj['address'] = ApiClient.convertToType(data['address'], 'String');
            }
            if (data.hasOwnProperty('protocol')) {
                obj['protocol'] = ApiClient.convertToType(data['protocol'], AnyType);
            }
        }
        return obj;
    }


}

/**
 * @member {String} host
 */
InlineResponse2003EmbeddedModelServerEgress.prototype['host'] = undefined;

/**
 * @member {module:model/AnyType} dialInterceptAddress
 */
InlineResponse2003EmbeddedModelServerEgress.prototype['dialInterceptAddress'] = undefined;

/**
 * @member {module:model/AnyType} dialInterceptPort
 */
InlineResponse2003EmbeddedModelServerEgress.prototype['dialInterceptPort'] = undefined;

/**
 * @member {Number} port
 */
InlineResponse2003EmbeddedModelServerEgress.prototype['port'] = undefined;

/**
 * @member {Boolean} dialInterceptProtocol
 */
InlineResponse2003EmbeddedModelServerEgress.prototype['dialInterceptProtocol'] = undefined;

/**
 * @member {String} address
 */
InlineResponse2003EmbeddedModelServerEgress.prototype['address'] = undefined;

/**
 * @member {module:model/AnyType} protocol
 */
InlineResponse2003EmbeddedModelServerEgress.prototype['protocol'] = undefined;






export default InlineResponse2003EmbeddedModelServerEgress;

