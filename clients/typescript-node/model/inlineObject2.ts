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
 */

import { RequestFile } from '../api';

export class InlineObject2 {
    'edgeRouterAttributes': Array<string>;
    'endpointAttributes': Array<string>;
    'name': string;
    'networkId': string;

    static discriminator: string | undefined = undefined;

    static attributeTypeMap: Array<{name: string, baseName: string, type: string}> = [
        {
            "name": "edgeRouterAttributes",
            "baseName": "edgeRouterAttributes",
            "type": "Array<string>"
        },
        {
            "name": "endpointAttributes",
            "baseName": "endpointAttributes",
            "type": "Array<string>"
        },
        {
            "name": "name",
            "baseName": "name",
            "type": "string"
        },
        {
            "name": "networkId",
            "baseName": "networkId",
            "type": "string"
        }    ];

    static getAttributeTypeMap() {
        return InlineObject2.attributeTypeMap;
    }
}

