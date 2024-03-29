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
import { InlineResponse2003EmbeddedModel } from './inlineResponse2003EmbeddedModel';
import { InlineResponse2021ConfigIdByConfigTypeId } from './inlineResponse2021ConfigIdByConfigTypeId';
import { InlineResponse2021Links } from './inlineResponse2021Links';

export class InlineResponse2021 {
    'deletedAt': AnyType;
    'networkId': string;
    'name': string;
    'updatedAt': string;
    'model': InlineResponse2003EmbeddedModel;
    'zitiId': AnyType;
    'ownerIdentityId': string;
    'attributes': Array<string>;
    'modelType': string;
    'id': string;
    'configIdByConfigTypeId': InlineResponse2021ConfigIdByConfigTypeId;
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
            "type": "InlineResponse2003EmbeddedModel"
        },
        {
            "name": "zitiId",
            "baseName": "zitiId",
            "type": "AnyType"
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
            "type": "InlineResponse2021ConfigIdByConfigTypeId"
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
        return InlineResponse2021.attributeTypeMap;
    }
}

