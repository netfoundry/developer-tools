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
import { InlineResponse2021Links } from './inlineResponse2021Links';
import { InlineResponse2023ConfigIdByConfigTypeId } from './inlineResponse2023ConfigIdByConfigTypeId';
import { InlineResponse2023Model } from './inlineResponse2023Model';

export class InlineResponse2023 {
    'deletedAt': AnyType;
    'networkId': string;
    'name': string;
    'updatedAt': string;
    'model': InlineResponse2023Model;
    'zitiId': string;
    'ownerIdentityId': string;
    'attributes': Array<string>;
    'modelType': string;
    'id': string;
    'configIdByConfigTypeId': InlineResponse2023ConfigIdByConfigTypeId;
    'createdAt': string;
    'createdBy': string;
    'deletedBy': AnyType;
    'encryptionRequired': boolean;
    'authority': AnyType;
    'links': InlineResponse2021Links;

    static discriminator: string | undefined = undefined;

    static attributeTypeMap: Array<{name: string, baseName: string, type: string}> = [
        {
            "name": "deletedAt",
            "baseName": "deletedAt",
            "type": "AnyType"
        },
        {
            "name": "networkId",
            "baseName": "networkId",
            "type": "string"
        },
        {
            "name": "name",
            "baseName": "name",
            "type": "string"
        },
        {
            "name": "updatedAt",
            "baseName": "updatedAt",
            "type": "string"
        },
        {
            "name": "model",
            "baseName": "model",
            "type": "InlineResponse2023Model"
        },
        {
            "name": "zitiId",
            "baseName": "zitiId",
            "type": "string"
        },
        {
            "name": "ownerIdentityId",
            "baseName": "ownerIdentityId",
            "type": "string"
        },
        {
            "name": "attributes",
            "baseName": "attributes",
            "type": "Array<string>"
        },
        {
            "name": "modelType",
            "baseName": "modelType",
            "type": "string"
        },
        {
            "name": "id",
            "baseName": "id",
            "type": "string"
        },
        {
            "name": "configIdByConfigTypeId",
            "baseName": "configIdByConfigTypeId",
            "type": "InlineResponse2023ConfigIdByConfigTypeId"
        },
        {
            "name": "createdAt",
            "baseName": "createdAt",
            "type": "string"
        },
        {
            "name": "createdBy",
            "baseName": "createdBy",
            "type": "string"
        },
        {
            "name": "deletedBy",
            "baseName": "deletedBy",
            "type": "AnyType"
        },
        {
            "name": "encryptionRequired",
            "baseName": "encryptionRequired",
            "type": "boolean"
        },
        {
            "name": "authority",
            "baseName": "authority",
            "type": "AnyType"
        },
        {
            "name": "links",
            "baseName": "_links",
            "type": "InlineResponse2021Links"
        }    ];

    static getAttributeTypeMap() {
        return InlineResponse2023.attributeTypeMap;
    }
}

