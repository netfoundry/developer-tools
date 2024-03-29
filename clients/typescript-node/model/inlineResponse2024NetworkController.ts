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

export class InlineResponse2024NetworkController {
    'deletedAt': AnyType;
    'networkId': string;
    'name': string;
    'updatedAt': string;
    'provider': string;
    'userData': AnyType;
    'ownerIdentityId': AnyType;
    'domainName': string;
    'providerId': string;
    'id': string;
    'port': number;
    'ipAddress': string;
    'status': string;
    'hostId': string;
    'createdAt': string;
    'deletedBy': AnyType;
    'locationMetadataId': string;
    'dataCenterId': string;

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
            "name": "provider",
            "baseName": "provider",
            "type": "string"
        },
        {
            "name": "userData",
            "baseName": "userData",
            "type": "AnyType"
        },
        {
            "name": "ownerIdentityId",
            "baseName": "ownerIdentityId",
            "type": "AnyType"
        },
        {
            "name": "domainName",
            "baseName": "domainName",
            "type": "string"
        },
        {
            "name": "providerId",
            "baseName": "providerId",
            "type": "string"
        },
        {
            "name": "id",
            "baseName": "id",
            "type": "string"
        },
        {
            "name": "port",
            "baseName": "port",
            "type": "number"
        },
        {
            "name": "ipAddress",
            "baseName": "ipAddress",
            "type": "string"
        },
        {
            "name": "status",
            "baseName": "status",
            "type": "string"
        },
        {
            "name": "hostId",
            "baseName": "hostId",
            "type": "string"
        },
        {
            "name": "createdAt",
            "baseName": "createdAt",
            "type": "string"
        },
        {
            "name": "deletedBy",
            "baseName": "deletedBy",
            "type": "AnyType"
        },
        {
            "name": "locationMetadataId",
            "baseName": "locationMetadataId",
            "type": "string"
        },
        {
            "name": "dataCenterId",
            "baseName": "dataCenterId",
            "type": "string"
        }    ];

    static getAttributeTypeMap() {
        return InlineResponse2024NetworkController.attributeTypeMap;
    }
}

