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
 */

import { RequestFile } from '../api';

export class InlineResponse20014UpdatedAt {
    'epochSecond': number;
    'nano': number;

    static discriminator: string | undefined = undefined;

    static attributeTypeMap: Array<{name: string, baseName: string, type: string}> = [
        {
            "name": "epochSecond",
            "baseName": "epochSecond",
            "type": "number"
        },
        {
            "name": "nano",
            "baseName": "nano",
            "type": "number"
        }    ];

    static getAttributeTypeMap() {
        return InlineResponse20014UpdatedAt.attributeTypeMap;
    }
}

