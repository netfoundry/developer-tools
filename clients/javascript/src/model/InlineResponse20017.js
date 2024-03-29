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
import InlineResponse20017Embedded from './InlineResponse20017Embedded';
import InlineResponse20017Links from './InlineResponse20017Links';
import InlineResponse2001Page from './InlineResponse2001Page';

/**
 * The InlineResponse20017 model module.
 * @module model/InlineResponse20017
 * @version 5229
 */
class InlineResponse20017 {
    /**
     * Constructs a new <code>InlineResponse20017</code>.
     * @alias module:model/InlineResponse20017
     * @param embedded {module:model/InlineResponse20017Embedded} 
     * @param links {module:model/InlineResponse20017Links} 
     * @param page {module:model/InlineResponse2001Page} 
     */
    constructor(embedded, links, page) { 
        
        InlineResponse20017.initialize(this, embedded, links, page);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj, embedded, links, page) { 
        obj['_embedded'] = embedded;
        obj['_links'] = links;
        obj['page'] = page;
    }

    /**
     * Constructs a <code>InlineResponse20017</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/InlineResponse20017} obj Optional instance to populate.
     * @return {module:model/InlineResponse20017} The populated <code>InlineResponse20017</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new InlineResponse20017();

            if (data.hasOwnProperty('_embedded')) {
                obj['_embedded'] = InlineResponse20017Embedded.constructFromObject(data['_embedded']);
            }
            if (data.hasOwnProperty('_links')) {
                obj['_links'] = InlineResponse20017Links.constructFromObject(data['_links']);
            }
            if (data.hasOwnProperty('page')) {
                obj['page'] = InlineResponse2001Page.constructFromObject(data['page']);
            }
        }
        return obj;
    }


}

/**
 * @member {module:model/InlineResponse20017Embedded} _embedded
 */
InlineResponse20017.prototype['_embedded'] = undefined;

/**
 * @member {module:model/InlineResponse20017Links} _links
 */
InlineResponse20017.prototype['_links'] = undefined;

/**
 * @member {module:model/InlineResponse2001Page} page
 */
InlineResponse20017.prototype['page'] = undefined;






export default InlineResponse20017;

