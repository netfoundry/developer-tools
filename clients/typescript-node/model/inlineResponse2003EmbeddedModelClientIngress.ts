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

export class InlineResponse2003EmbeddedModelClientIngress {
    'protocols'?: Array<string>;
    'host'?: string;
    'ports'?: Array<InlineResponse2003EmbeddedModelClientIngressPorts>;
    'port'?: number;
    'addresses'?: Array<string>;

    static discriminator: string | undefined = undefined;

    static attributeTypeMap: Array<{name: string, baseName: string, type: string}> = [
        {
            "name": "protocols",
            "baseName": "protocols",
            "type": "Array<string>"
        },
        {
            "name": "host",
            "baseName": "host",
            "type": "string"
        },
        {
            "name": "ports",
            "baseName": "ports",
            "type": "Array<InlineResponse2003EmbeddedModelClientIngressPorts>"
        },
        {
            "name": "port",
            "baseName": "port",
            "type": "number"
        },
        {
            "name": "addresses",
            "baseName": "addresses",
            "type": "Array<string>"
        }    ];

    static getAttributeTypeMap() {
        return InlineResponse2003EmbeddedModelClientIngress.attributeTypeMap;
    }
}

