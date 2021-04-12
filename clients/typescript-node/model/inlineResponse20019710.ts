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

export class InlineResponse20019710 {
    'zitiCliLinuxBinarySha1': string;
    'zitiTunnelLinuxBinary': string;
    'zitiTunnelLinuxBinarySha1': string;
    'zitiControllerBinary': string;
    'zitiCliLinuxBinaryMd5': string;
    'zitiRouterLinuxBinarySha1': string;
    'zitiRouterLinuxBinarySha256': string;
    'zitiRouterLinuxBinaryMd5': string;
    'zitiWindowsDesktopEdge': string;
    'zitiMacDesktopEdge': string;
    'zitiControllerBinarySha1': string;
    'zitiControllerBinaryMd5': string;
    'zitiControllerBinarySha256': string;
    'zitiIosEdge': string;
    'zitiCliLinuxBinary': string;
    'zitiVersion': string;
    'zitiRouterLinuxBinary': string;
    'zitiTunnelLinuxBinarySha256': string;
    'zitiAndroidEdge': string;
    'zitiTunnelLinuxBinaryMd5': string;
    'zitiCliLinuxBinarySha256': string;
    'active': boolean;

    static discriminator: string | undefined = undefined;

    static attributeTypeMap: Array<{name: string, baseName: string, type: string}> = [
        {
            "name": "zitiCliLinuxBinarySha1",
            "baseName": "zitiCliLinuxBinary.sha-1",
            "type": "string"
        },
        {
            "name": "zitiTunnelLinuxBinary",
            "baseName": "zitiTunnelLinuxBinary",
            "type": "string"
        },
        {
            "name": "zitiTunnelLinuxBinarySha1",
            "baseName": "zitiTunnelLinuxBinary.sha-1",
            "type": "string"
        },
        {
            "name": "zitiControllerBinary",
            "baseName": "zitiControllerBinary",
            "type": "string"
        },
        {
            "name": "zitiCliLinuxBinaryMd5",
            "baseName": "zitiCliLinuxBinary.md5",
            "type": "string"
        },
        {
            "name": "zitiRouterLinuxBinarySha1",
            "baseName": "zitiRouterLinuxBinary.sha-1",
            "type": "string"
        },
        {
            "name": "zitiRouterLinuxBinarySha256",
            "baseName": "zitiRouterLinuxBinary.sha-256",
            "type": "string"
        },
        {
            "name": "zitiRouterLinuxBinaryMd5",
            "baseName": "zitiRouterLinuxBinary.md5",
            "type": "string"
        },
        {
            "name": "zitiWindowsDesktopEdge",
            "baseName": "zitiWindowsDesktopEdge",
            "type": "string"
        },
        {
            "name": "zitiMacDesktopEdge",
            "baseName": "zitiMacDesktopEdge",
            "type": "string"
        },
        {
            "name": "zitiControllerBinarySha1",
            "baseName": "zitiControllerBinary.sha-1",
            "type": "string"
        },
        {
            "name": "zitiControllerBinaryMd5",
            "baseName": "zitiControllerBinary.md5",
            "type": "string"
        },
        {
            "name": "zitiControllerBinarySha256",
            "baseName": "zitiControllerBinary.sha-256",
            "type": "string"
        },
        {
            "name": "zitiIosEdge",
            "baseName": "zitiIosEdge",
            "type": "string"
        },
        {
            "name": "zitiCliLinuxBinary",
            "baseName": "zitiCliLinuxBinary",
            "type": "string"
        },
        {
            "name": "zitiVersion",
            "baseName": "zitiVersion",
            "type": "string"
        },
        {
            "name": "zitiRouterLinuxBinary",
            "baseName": "zitiRouterLinuxBinary",
            "type": "string"
        },
        {
            "name": "zitiTunnelLinuxBinarySha256",
            "baseName": "zitiTunnelLinuxBinary.sha-256",
            "type": "string"
        },
        {
            "name": "zitiAndroidEdge",
            "baseName": "zitiAndroidEdge",
            "type": "string"
        },
        {
            "name": "zitiTunnelLinuxBinaryMd5",
            "baseName": "zitiTunnelLinuxBinary.md5",
            "type": "string"
        },
        {
            "name": "zitiCliLinuxBinarySha256",
            "baseName": "zitiCliLinuxBinary.sha-256",
            "type": "string"
        },
        {
            "name": "active",
            "baseName": "active",
            "type": "boolean"
        }    ];

    static getAttributeTypeMap() {
        return InlineResponse20019710.attributeTypeMap;
    }
}

