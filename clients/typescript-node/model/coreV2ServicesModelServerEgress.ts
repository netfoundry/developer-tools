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
 */

import { RequestFile } from '../api';
import { AnyType } from './anyType';

export class CoreV2ServicesModelServerEgress {
    'host': string;
    'port': AnyType;
    'protocol': string;

    static discriminator: string | undefined = undefined;

    static attributeTypeMap: Array<{name: string, baseName: string, type: string}> = [
        {
            "name": "host",
            "baseName": "host",
            "type": "string"
        },
        {
            "name": "port",
            "baseName": "port",
            "type": "AnyType"
        },
        {
            "name": "protocol",
            "baseName": "protocol",
            "type": "string"
        }    ];

    static getAttributeTypeMap() {
        return CoreV2ServicesModelServerEgress.attributeTypeMap;
    }
}

