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
import { InlineResponse2003EmbeddedModelClientIngressPorts } from './inlineResponse2003EmbeddedModelClientIngressPorts';

export class InlineResponse2023ModelClientIngress {
    'addresses': Array<string>;
    'ports': Array<InlineResponse2003EmbeddedModelClientIngressPorts>;
    'protocols': Array<string>;

    static discriminator: string | undefined = undefined;

    static attributeTypeMap: Array<{name: string, baseName: string, type: string}> = [
        {
            "name": "addresses",
            "baseName": "addresses",
            "type": "Array<string>"
        },
        {
            "name": "ports",
            "baseName": "ports",
            "type": "Array<InlineResponse2003EmbeddedModelClientIngressPorts>"
        },
        {
            "name": "protocols",
            "baseName": "protocols",
            "type": "Array<string>"
        }    ];

    static getAttributeTypeMap() {
        return InlineResponse2023ModelClientIngress.attributeTypeMap;
    }
}

