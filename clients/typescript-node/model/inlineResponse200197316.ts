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

export class InlineResponse200197316 {
    'zitiCliLinuxBinarySha1': string;
    'zitiTunnelLinuxBinary': string;
    'zitiTunnelLinuxBinarySha1': string;
    'zitiControllerBinary': string;
    'zitiCliLinuxBinaryMd5': string;
    'zitiRouterLinuxBinarySha1': string;
    'zitiRouterLinuxArmBinaryMd5': string;
    'zitiRouterLinuxBinarySha256': string;
    'zitiCliLinuxArmBinary': string;
    'zitiRouterLinuxBinaryMd5': string;
    'zitiWindowsDesktopEdge': string;
    'zitiRouterLinuxArmBinarySha256': string;
    'zitiMacDesktopEdge': string;
    'zitiControllerBinarySha1': string;
    'zitiControllerBinaryMd5': string;
    'zitiControllerBinarySha256': string;
    'zitiIosEdge': string;
    'zitiCliLinuxBinary': string;
    'zitiRouterLinuxArmBinarySha1': string;
    'zitiVersion': string;
    'zitiFabricBinary': string;
    'zitiCliLinuxArmBinarySha1': string;
    'zitiTunnelLinuxArmBinarySha1': string;
    'zitiTunnelLinuxArmBinary': string;
    'zitiCliLinuxArmBinarySha256': string;
    'zitiFabricBinarySha256': string;
    'zitiRouterLinuxBinary': string;
    'zitiTunnelLinuxBinarySha256': string;
    'zitiAndroidEdge': string;
    'zitiTunnelLinuxArmBinaryMd5': string;
    'zitiFabricBinaryMd5': string;
    'zitiTunnelLinuxBinaryMd5': string;
    'zitiRouterLinuxArmBinary': string;
    'zitiFabricBinarySha1': string;
    'zitiCliLinuxArmBinaryMd5': string;
    'zitiTunnelLinuxArmBinarySha256': string;
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
            "name": "zitiRouterLinuxArmBinaryMd5",
            "baseName": "zitiRouterLinuxArmBinary.md5",
            "type": "string"
        },
        {
            "name": "zitiRouterLinuxBinarySha256",
            "baseName": "zitiRouterLinuxBinary.sha-256",
            "type": "string"
        },
        {
            "name": "zitiCliLinuxArmBinary",
            "baseName": "zitiCliLinuxArmBinary",
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
            "name": "zitiRouterLinuxArmBinarySha256",
            "baseName": "zitiRouterLinuxArmBinary.sha-256",
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
            "name": "zitiRouterLinuxArmBinarySha1",
            "baseName": "zitiRouterLinuxArmBinary.sha-1",
            "type": "string"
        },
        {
            "name": "zitiVersion",
            "baseName": "zitiVersion",
            "type": "string"
        },
        {
            "name": "zitiFabricBinary",
            "baseName": "zitiFabricBinary",
            "type": "string"
        },
        {
            "name": "zitiCliLinuxArmBinarySha1",
            "baseName": "zitiCliLinuxArmBinary.sha-1",
            "type": "string"
        },
        {
            "name": "zitiTunnelLinuxArmBinarySha1",
            "baseName": "zitiTunnelLinuxArmBinary.sha-1",
            "type": "string"
        },
        {
            "name": "zitiTunnelLinuxArmBinary",
            "baseName": "zitiTunnelLinuxArmBinary",
            "type": "string"
        },
        {
            "name": "zitiCliLinuxArmBinarySha256",
            "baseName": "zitiCliLinuxArmBinary.sha-256",
            "type": "string"
        },
        {
            "name": "zitiFabricBinarySha256",
            "baseName": "zitiFabricBinary.sha-256",
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
            "name": "zitiTunnelLinuxArmBinaryMd5",
            "baseName": "zitiTunnelLinuxArmBinary.md5",
            "type": "string"
        },
        {
            "name": "zitiFabricBinaryMd5",
            "baseName": "zitiFabricBinary.md5",
            "type": "string"
        },
        {
            "name": "zitiTunnelLinuxBinaryMd5",
            "baseName": "zitiTunnelLinuxBinary.md5",
            "type": "string"
        },
        {
            "name": "zitiRouterLinuxArmBinary",
            "baseName": "zitiRouterLinuxArmBinary",
            "type": "string"
        },
        {
            "name": "zitiFabricBinarySha1",
            "baseName": "zitiFabricBinary.sha-1",
            "type": "string"
        },
        {
            "name": "zitiCliLinuxArmBinaryMd5",
            "baseName": "zitiCliLinuxArmBinary.md5",
            "type": "string"
        },
        {
            "name": "zitiTunnelLinuxArmBinarySha256",
            "baseName": "zitiTunnelLinuxArmBinary.sha-256",
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
        return InlineResponse200197316.attributeTypeMap;
    }
}

