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
import { CoreV2EndpointsEnrollmentMethod } from './coreV2EndpointsEnrollmentMethod';

export class InlineObject5 {
    'attributes': Array<string>;
    'enrollmentMethod': CoreV2EndpointsEnrollmentMethod;
    'name': string;
    'networkId': string;

    static discriminator: string | undefined = undefined;

    static attributeTypeMap: Array<{name: string, baseName: string, type: string}> = [
        {
            "name": "attributes",
            "baseName": "attributes",
            "type": "Array<string>"
        },
        {
            "name": "enrollmentMethod",
            "baseName": "enrollmentMethod",
            "type": "CoreV2EndpointsEnrollmentMethod"
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
        return InlineObject5.attributeTypeMap;
    }
}

