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
import { InlineResponse2001EmbeddedLinks } from './inlineResponse2001EmbeddedLinks';

export class InlineResponse20013 {
    'deletedAt': AnyType;
    'name': string;
    'updatedAt': string;
    'size': string;
    'locationCode'?: string;
    'ownerIdentityId': string;
    'productVersion': string;
    'networkGroupId': string;
    'id': string;
    'status': string;
    'sdsPassword'?: string;
    'createdAt': string;
    'createdBy': string;
    'deletedBy': AnyType;
    'networkController'?: AnyType;
    'o365BreakoutCategory': string;
    'links': InlineResponse2001EmbeddedLinks;

    static discriminator: string | undefined = undefined;

    static attributeTypeMap: Array<{name: string, baseName: string, type: string}> = [
        {
            "name": "deletedAt",
            "baseName": "deletedAt",
            "type": "AnyType"
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
            "name": "size",
            "baseName": "size",
            "type": "string"
        },
        {
            "name": "locationCode",
            "baseName": "locationCode",
            "type": "string"
        },
        {
            "name": "ownerIdentityId",
            "baseName": "ownerIdentityId",
            "type": "string"
        },
        {
            "name": "productVersion",
            "baseName": "productVersion",
            "type": "string"
        },
        {
            "name": "networkGroupId",
            "baseName": "networkGroupId",
            "type": "string"
        },
        {
            "name": "id",
            "baseName": "id",
            "type": "string"
        },
        {
            "name": "status",
            "baseName": "status",
            "type": "string"
        },
        {
            "name": "sdsPassword",
            "baseName": "sdsPassword",
            "type": "string"
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
            "name": "networkController",
            "baseName": "networkController",
            "type": "AnyType"
        },
        {
            "name": "o365BreakoutCategory",
            "baseName": "o365BreakoutCategory",
            "type": "string"
        },
        {
            "name": "links",
            "baseName": "_links",
            "type": "InlineResponse2001EmbeddedLinks"
        }    ];

    static getAttributeTypeMap() {
        return InlineResponse20013.attributeTypeMap;
    }
}

