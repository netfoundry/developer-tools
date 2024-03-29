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
import InlineResponse2001Page from './InlineResponse2001Page';
import InlineResponse2002EmbeddedLinks from './InlineResponse2002EmbeddedLinks';
import InlineResponse2003Embedded from './InlineResponse2003Embedded';

/**
 * The InlineResponse2003 model module.
 * @module model/InlineResponse2003
 * @version 5229
 */
class InlineResponse2003 {
    /**
     * Constructs a new <code>InlineResponse2003</code>.
     * @alias module:model/InlineResponse2003
     * @param links {module:model/InlineResponse2002EmbeddedLinks} 
     * @param page {module:model/InlineResponse2001Page} 
     */
    constructor(links, page) { 
        
        InlineResponse2003.initialize(this, links, page);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj, links, page) { 
        obj['_links'] = links;
        obj['page'] = page;
    }

    /**
     * Constructs a <code>InlineResponse2003</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/InlineResponse2003} obj Optional instance to populate.
     * @return {module:model/InlineResponse2003} The populated <code>InlineResponse2003</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new InlineResponse2003();

            if (data.hasOwnProperty('_embedded')) {
                obj['_embedded'] = InlineResponse2003Embedded.constructFromObject(data['_embedded']);
            }
            if (data.hasOwnProperty('_links')) {
                obj['_links'] = InlineResponse2002EmbeddedLinks.constructFromObject(data['_links']);
            }
            if (data.hasOwnProperty('page')) {
                obj['page'] = InlineResponse2001Page.constructFromObject(data['page']);
            }
        }
        return obj;
    }


}

/**
 * @member {module:model/InlineResponse2003Embedded} _embedded
 */
InlineResponse2003.prototype['_embedded'] = undefined;

/**
 * @member {module:model/InlineResponse2002EmbeddedLinks} _links
 */
InlineResponse2003.prototype['_links'] = undefined;

/**
 * @member {module:model/InlineResponse2001Page} page
 */
InlineResponse2003.prototype['page'] = undefined;






export default InlineResponse2003;

