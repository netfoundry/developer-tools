export * from './coreV2EndpointsEnrollmentMethod';
export * from './coreV2ServicesModel';
export * from './coreV2ServicesModelClientIngress';
export * from './coreV2ServicesModelClientIngressPorts';
export * from './coreV2ServicesModelEdgeRouterHosts';
export * from './coreV2ServicesModelServerEgress';
export * from './coreV2ServicesServiceIdModel';
export * from './coreV2ServicesServiceIdModelClientIngress';
export * from './coreV2ServicesServiceIdModelServerEgress';
export * from './inlineObject';
export * from './inlineObject1';
export * from './inlineObject2';
export * from './inlineObject3';
export * from './inlineObject4';
export * from './inlineObject5';
export * from './inlineObject6';
export * from './inlineResponse200';
export * from './inlineResponse2001';
export * from './inlineResponse20010';
export * from './inlineResponse20011';
export * from './inlineResponse20011Links';
export * from './inlineResponse20012';
export * from './inlineResponse20013';
export * from './inlineResponse20014';
export * from './inlineResponse20014IdentityProviders';
export * from './inlineResponse20014UpdatedAt';
export * from './inlineResponse20015';
export * from './inlineResponse20015Embedded';
export * from './inlineResponse20015EmbeddedNetworkConfigMetadataList';
export * from './inlineResponse20016';
export * from './inlineResponse20017';
export * from './inlineResponse20017Embedded';
export * from './inlineResponse20017EmbeddedOrganizations';
export * from './inlineResponse20017Links';
export * from './inlineResponse20018';
export * from './inlineResponse20018Embedded';
export * from './inlineResponse20019';
export * from './inlineResponse20019710';
export * from './inlineResponse200197316';
export * from './inlineResponse20019734';
export * from './inlineResponse2001Embedded';
export * from './inlineResponse2001EmbeddedLinks';
export * from './inlineResponse2001EmbeddedNetworkList';
export * from './inlineResponse2001Links';
export * from './inlineResponse2001LinksSelf';
export * from './inlineResponse2001Page';
export * from './inlineResponse2002';
export * from './inlineResponse2002Embedded';
export * from './inlineResponse2002EmbeddedDataCenters';
export * from './inlineResponse2002EmbeddedLinks';
export * from './inlineResponse2003';
export * from './inlineResponse2003Embedded';
export * from './inlineResponse2003EmbeddedConfigIdByConfigTypeId';
export * from './inlineResponse2003EmbeddedModel';
export * from './inlineResponse2003EmbeddedModelClientIngress';
export * from './inlineResponse2003EmbeddedModelClientIngressPorts';
export * from './inlineResponse2003EmbeddedModelEdgeRouterHosts';
export * from './inlineResponse2003EmbeddedModelServerEgress';
export * from './inlineResponse2003EmbeddedModelServerEgress1';
export * from './inlineResponse2003EmbeddedServiceList';
export * from './inlineResponse2004';
export * from './inlineResponse2004Embedded';
export * from './inlineResponse2004EmbeddedEdgeRouterPolicyList';
export * from './inlineResponse2005';
export * from './inlineResponse2005ConfigIdByConfigTypeId';
export * from './inlineResponse2006';
export * from './inlineResponse2006Embedded';
export * from './inlineResponse2007';
export * from './inlineResponse2007Embedded';
export * from './inlineResponse2007EmbeddedEndpointList';
export * from './inlineResponse2008';
export * from './inlineResponse2009';
export * from './inlineResponse200Links';
export * from './inlineResponse200LinksNetwork';
export * from './inlineResponse200LinksSelf';
export * from './inlineResponse202';
export * from './inlineResponse2021';
export * from './inlineResponse2021ConfigIdByConfigTypeId';
export * from './inlineResponse2021Links';
export * from './inlineResponse2022';
export * from './inlineResponse2022ConfigIdByConfigTypeId';
export * from './inlineResponse2023';
export * from './inlineResponse2023ConfigIdByConfigTypeId';
export * from './inlineResponse2023Model';
export * from './inlineResponse2023ModelClientIngress';
export * from './inlineResponse2024';
export * from './inlineResponse2024Links';
export * from './inlineResponse2024NetworkController';
export * from './inlineResponse2025';
export * from './inlineResponse202Links';
export * from './inlineResponse500';
export * from './inlineResponse5001';
export * from './inlineResponse5001Status';

import localVarRequest = require('request');

import { CoreV2EndpointsEnrollmentMethod } from './coreV2EndpointsEnrollmentMethod';
import { CoreV2ServicesModel } from './coreV2ServicesModel';
import { CoreV2ServicesModelClientIngress } from './coreV2ServicesModelClientIngress';
import { CoreV2ServicesModelClientIngressPorts } from './coreV2ServicesModelClientIngressPorts';
import { CoreV2ServicesModelEdgeRouterHosts } from './coreV2ServicesModelEdgeRouterHosts';
import { CoreV2ServicesModelServerEgress } from './coreV2ServicesModelServerEgress';
import { CoreV2ServicesServiceIdModel } from './coreV2ServicesServiceIdModel';
import { CoreV2ServicesServiceIdModelClientIngress } from './coreV2ServicesServiceIdModelClientIngress';
import { CoreV2ServicesServiceIdModelServerEgress } from './coreV2ServicesServiceIdModelServerEgress';
import { InlineObject } from './inlineObject';
import { InlineObject1 } from './inlineObject1';
import { InlineObject2 } from './inlineObject2';
import { InlineObject3 } from './inlineObject3';
import { InlineObject4 } from './inlineObject4';
import { InlineObject5 } from './inlineObject5';
import { InlineObject6 } from './inlineObject6';
import { InlineResponse200 } from './inlineResponse200';
import { InlineResponse2001 } from './inlineResponse2001';
import { InlineResponse20010 } from './inlineResponse20010';
import { InlineResponse20011 } from './inlineResponse20011';
import { InlineResponse20011Links } from './inlineResponse20011Links';
import { InlineResponse20012 } from './inlineResponse20012';
import { InlineResponse20013 } from './inlineResponse20013';
import { InlineResponse20014 } from './inlineResponse20014';
import { InlineResponse20014IdentityProviders } from './inlineResponse20014IdentityProviders';
import { InlineResponse20014UpdatedAt } from './inlineResponse20014UpdatedAt';
import { InlineResponse20015 } from './inlineResponse20015';
import { InlineResponse20015Embedded } from './inlineResponse20015Embedded';
import { InlineResponse20015EmbeddedNetworkConfigMetadataList } from './inlineResponse20015EmbeddedNetworkConfigMetadataList';
import { InlineResponse20016 } from './inlineResponse20016';
import { InlineResponse20017 } from './inlineResponse20017';
import { InlineResponse20017Embedded } from './inlineResponse20017Embedded';
import { InlineResponse20017EmbeddedOrganizations } from './inlineResponse20017EmbeddedOrganizations';
import { InlineResponse20017Links } from './inlineResponse20017Links';
import { InlineResponse20018 } from './inlineResponse20018';
import { InlineResponse20018Embedded } from './inlineResponse20018Embedded';
import { InlineResponse20019 } from './inlineResponse20019';
import { InlineResponse20019710 } from './inlineResponse20019710';
import { InlineResponse200197316 } from './inlineResponse200197316';
import { InlineResponse20019734 } from './inlineResponse20019734';
import { InlineResponse2001Embedded } from './inlineResponse2001Embedded';
import { InlineResponse2001EmbeddedLinks } from './inlineResponse2001EmbeddedLinks';
import { InlineResponse2001EmbeddedNetworkList } from './inlineResponse2001EmbeddedNetworkList';
import { InlineResponse2001Links } from './inlineResponse2001Links';
import { InlineResponse2001LinksSelf } from './inlineResponse2001LinksSelf';
import { InlineResponse2001Page } from './inlineResponse2001Page';
import { InlineResponse2002 } from './inlineResponse2002';
import { InlineResponse2002Embedded } from './inlineResponse2002Embedded';
import { InlineResponse2002EmbeddedDataCenters } from './inlineResponse2002EmbeddedDataCenters';
import { InlineResponse2002EmbeddedLinks } from './inlineResponse2002EmbeddedLinks';
import { InlineResponse2003 } from './inlineResponse2003';
import { InlineResponse2003Embedded } from './inlineResponse2003Embedded';
import { InlineResponse2003EmbeddedConfigIdByConfigTypeId } from './inlineResponse2003EmbeddedConfigIdByConfigTypeId';
import { InlineResponse2003EmbeddedModel } from './inlineResponse2003EmbeddedModel';
import { InlineResponse2003EmbeddedModelClientIngress } from './inlineResponse2003EmbeddedModelClientIngress';
import { InlineResponse2003EmbeddedModelClientIngressPorts } from './inlineResponse2003EmbeddedModelClientIngressPorts';
import { InlineResponse2003EmbeddedModelEdgeRouterHosts } from './inlineResponse2003EmbeddedModelEdgeRouterHosts';
import { InlineResponse2003EmbeddedModelServerEgress } from './inlineResponse2003EmbeddedModelServerEgress';
import { InlineResponse2003EmbeddedModelServerEgress1 } from './inlineResponse2003EmbeddedModelServerEgress1';
import { InlineResponse2003EmbeddedServiceList } from './inlineResponse2003EmbeddedServiceList';
import { InlineResponse2004 } from './inlineResponse2004';
import { InlineResponse2004Embedded } from './inlineResponse2004Embedded';
import { InlineResponse2004EmbeddedEdgeRouterPolicyList } from './inlineResponse2004EmbeddedEdgeRouterPolicyList';
import { InlineResponse2005 } from './inlineResponse2005';
import { InlineResponse2005ConfigIdByConfigTypeId } from './inlineResponse2005ConfigIdByConfigTypeId';
import { InlineResponse2006 } from './inlineResponse2006';
import { InlineResponse2006Embedded } from './inlineResponse2006Embedded';
import { InlineResponse2007 } from './inlineResponse2007';
import { InlineResponse2007Embedded } from './inlineResponse2007Embedded';
import { InlineResponse2007EmbeddedEndpointList } from './inlineResponse2007EmbeddedEndpointList';
import { InlineResponse2008 } from './inlineResponse2008';
import { InlineResponse2009 } from './inlineResponse2009';
import { InlineResponse200Links } from './inlineResponse200Links';
import { InlineResponse200LinksNetwork } from './inlineResponse200LinksNetwork';
import { InlineResponse200LinksSelf } from './inlineResponse200LinksSelf';
import { InlineResponse202 } from './inlineResponse202';
import { InlineResponse2021 } from './inlineResponse2021';
import { InlineResponse2021ConfigIdByConfigTypeId } from './inlineResponse2021ConfigIdByConfigTypeId';
import { InlineResponse2021Links } from './inlineResponse2021Links';
import { InlineResponse2022 } from './inlineResponse2022';
import { InlineResponse2022ConfigIdByConfigTypeId } from './inlineResponse2022ConfigIdByConfigTypeId';
import { InlineResponse2023 } from './inlineResponse2023';
import { InlineResponse2023ConfigIdByConfigTypeId } from './inlineResponse2023ConfigIdByConfigTypeId';
import { InlineResponse2023Model } from './inlineResponse2023Model';
import { InlineResponse2023ModelClientIngress } from './inlineResponse2023ModelClientIngress';
import { InlineResponse2024 } from './inlineResponse2024';
import { InlineResponse2024Links } from './inlineResponse2024Links';
import { InlineResponse2024NetworkController } from './inlineResponse2024NetworkController';
import { InlineResponse2025 } from './inlineResponse2025';
import { InlineResponse202Links } from './inlineResponse202Links';
import { InlineResponse500 } from './inlineResponse500';
import { InlineResponse5001 } from './inlineResponse5001';
import { InlineResponse5001Status } from './inlineResponse5001Status';

/* tslint:disable:no-unused-variable */
let primitives = [
                    "string",
                    "boolean",
                    "double",
                    "integer",
                    "long",
                    "float",
                    "number",
                    "any"
                 ];

let enumsMap: {[index: string]: any} = {
}

let typeMap: {[index: string]: any} = {
    "CoreV2EndpointsEnrollmentMethod": CoreV2EndpointsEnrollmentMethod,
    "CoreV2ServicesModel": CoreV2ServicesModel,
    "CoreV2ServicesModelClientIngress": CoreV2ServicesModelClientIngress,
    "CoreV2ServicesModelClientIngressPorts": CoreV2ServicesModelClientIngressPorts,
    "CoreV2ServicesModelEdgeRouterHosts": CoreV2ServicesModelEdgeRouterHosts,
    "CoreV2ServicesModelServerEgress": CoreV2ServicesModelServerEgress,
    "CoreV2ServicesServiceIdModel": CoreV2ServicesServiceIdModel,
    "CoreV2ServicesServiceIdModelClientIngress": CoreV2ServicesServiceIdModelClientIngress,
    "CoreV2ServicesServiceIdModelServerEgress": CoreV2ServicesServiceIdModelServerEgress,
    "InlineObject": InlineObject,
    "InlineObject1": InlineObject1,
    "InlineObject2": InlineObject2,
    "InlineObject3": InlineObject3,
    "InlineObject4": InlineObject4,
    "InlineObject5": InlineObject5,
    "InlineObject6": InlineObject6,
    "InlineResponse200": InlineResponse200,
    "InlineResponse2001": InlineResponse2001,
    "InlineResponse20010": InlineResponse20010,
    "InlineResponse20011": InlineResponse20011,
    "InlineResponse20011Links": InlineResponse20011Links,
    "InlineResponse20012": InlineResponse20012,
    "InlineResponse20013": InlineResponse20013,
    "InlineResponse20014": InlineResponse20014,
    "InlineResponse20014IdentityProviders": InlineResponse20014IdentityProviders,
    "InlineResponse20014UpdatedAt": InlineResponse20014UpdatedAt,
    "InlineResponse20015": InlineResponse20015,
    "InlineResponse20015Embedded": InlineResponse20015Embedded,
    "InlineResponse20015EmbeddedNetworkConfigMetadataList": InlineResponse20015EmbeddedNetworkConfigMetadataList,
    "InlineResponse20016": InlineResponse20016,
    "InlineResponse20017": InlineResponse20017,
    "InlineResponse20017Embedded": InlineResponse20017Embedded,
    "InlineResponse20017EmbeddedOrganizations": InlineResponse20017EmbeddedOrganizations,
    "InlineResponse20017Links": InlineResponse20017Links,
    "InlineResponse20018": InlineResponse20018,
    "InlineResponse20018Embedded": InlineResponse20018Embedded,
    "InlineResponse20019": InlineResponse20019,
    "InlineResponse20019710": InlineResponse20019710,
    "InlineResponse200197316": InlineResponse200197316,
    "InlineResponse20019734": InlineResponse20019734,
    "InlineResponse2001Embedded": InlineResponse2001Embedded,
    "InlineResponse2001EmbeddedLinks": InlineResponse2001EmbeddedLinks,
    "InlineResponse2001EmbeddedNetworkList": InlineResponse2001EmbeddedNetworkList,
    "InlineResponse2001Links": InlineResponse2001Links,
    "InlineResponse2001LinksSelf": InlineResponse2001LinksSelf,
    "InlineResponse2001Page": InlineResponse2001Page,
    "InlineResponse2002": InlineResponse2002,
    "InlineResponse2002Embedded": InlineResponse2002Embedded,
    "InlineResponse2002EmbeddedDataCenters": InlineResponse2002EmbeddedDataCenters,
    "InlineResponse2002EmbeddedLinks": InlineResponse2002EmbeddedLinks,
    "InlineResponse2003": InlineResponse2003,
    "InlineResponse2003Embedded": InlineResponse2003Embedded,
    "InlineResponse2003EmbeddedConfigIdByConfigTypeId": InlineResponse2003EmbeddedConfigIdByConfigTypeId,
    "InlineResponse2003EmbeddedModel": InlineResponse2003EmbeddedModel,
    "InlineResponse2003EmbeddedModelClientIngress": InlineResponse2003EmbeddedModelClientIngress,
    "InlineResponse2003EmbeddedModelClientIngressPorts": InlineResponse2003EmbeddedModelClientIngressPorts,
    "InlineResponse2003EmbeddedModelEdgeRouterHosts": InlineResponse2003EmbeddedModelEdgeRouterHosts,
    "InlineResponse2003EmbeddedModelServerEgress": InlineResponse2003EmbeddedModelServerEgress,
    "InlineResponse2003EmbeddedModelServerEgress1": InlineResponse2003EmbeddedModelServerEgress1,
    "InlineResponse2003EmbeddedServiceList": InlineResponse2003EmbeddedServiceList,
    "InlineResponse2004": InlineResponse2004,
    "InlineResponse2004Embedded": InlineResponse2004Embedded,
    "InlineResponse2004EmbeddedEdgeRouterPolicyList": InlineResponse2004EmbeddedEdgeRouterPolicyList,
    "InlineResponse2005": InlineResponse2005,
    "InlineResponse2005ConfigIdByConfigTypeId": InlineResponse2005ConfigIdByConfigTypeId,
    "InlineResponse2006": InlineResponse2006,
    "InlineResponse2006Embedded": InlineResponse2006Embedded,
    "InlineResponse2007": InlineResponse2007,
    "InlineResponse2007Embedded": InlineResponse2007Embedded,
    "InlineResponse2007EmbeddedEndpointList": InlineResponse2007EmbeddedEndpointList,
    "InlineResponse2008": InlineResponse2008,
    "InlineResponse2009": InlineResponse2009,
    "InlineResponse200Links": InlineResponse200Links,
    "InlineResponse200LinksNetwork": InlineResponse200LinksNetwork,
    "InlineResponse200LinksSelf": InlineResponse200LinksSelf,
    "InlineResponse202": InlineResponse202,
    "InlineResponse2021": InlineResponse2021,
    "InlineResponse2021ConfigIdByConfigTypeId": InlineResponse2021ConfigIdByConfigTypeId,
    "InlineResponse2021Links": InlineResponse2021Links,
    "InlineResponse2022": InlineResponse2022,
    "InlineResponse2022ConfigIdByConfigTypeId": InlineResponse2022ConfigIdByConfigTypeId,
    "InlineResponse2023": InlineResponse2023,
    "InlineResponse2023ConfigIdByConfigTypeId": InlineResponse2023ConfigIdByConfigTypeId,
    "InlineResponse2023Model": InlineResponse2023Model,
    "InlineResponse2023ModelClientIngress": InlineResponse2023ModelClientIngress,
    "InlineResponse2024": InlineResponse2024,
    "InlineResponse2024Links": InlineResponse2024Links,
    "InlineResponse2024NetworkController": InlineResponse2024NetworkController,
    "InlineResponse2025": InlineResponse2025,
    "InlineResponse202Links": InlineResponse202Links,
    "InlineResponse500": InlineResponse500,
    "InlineResponse5001": InlineResponse5001,
    "InlineResponse5001Status": InlineResponse5001Status,
}

export class ObjectSerializer {
    public static findCorrectType(data: any, expectedType: string) {
        if (data == undefined) {
            return expectedType;
        } else if (primitives.indexOf(expectedType.toLowerCase()) !== -1) {
            return expectedType;
        } else if (expectedType === "Date") {
            return expectedType;
        } else {
            if (enumsMap[expectedType]) {
                return expectedType;
            }

            if (!typeMap[expectedType]) {
                return expectedType; // w/e we don't know the type
            }

            // Check the discriminator
            let discriminatorProperty = typeMap[expectedType].discriminator;
            if (discriminatorProperty == null) {
                return expectedType; // the type does not have a discriminator. use it.
            } else {
                if (data[discriminatorProperty]) {
                    var discriminatorType = data[discriminatorProperty];
                    if(typeMap[discriminatorType]){
                        return discriminatorType; // use the type given in the discriminator
                    } else {
                        return expectedType; // discriminator did not map to a type
                    }
                } else {
                    return expectedType; // discriminator was not present (or an empty string)
                }
            }
        }
    }

    public static serialize(data: any, type: string) {
        if (data == undefined) {
            return data;
        } else if (primitives.indexOf(type.toLowerCase()) !== -1) {
            return data;
        } else if (type.lastIndexOf("Array<", 0) === 0) { // string.startsWith pre es6
            let subType: string = type.replace("Array<", ""); // Array<Type> => Type>
            subType = subType.substring(0, subType.length - 1); // Type> => Type
            let transformedData: any[] = [];
            for (let index in data) {
                let date = data[index];
                transformedData.push(ObjectSerializer.serialize(date, subType));
            }
            return transformedData;
        } else if (type === "Date") {
            return data.toISOString();
        } else {
            if (enumsMap[type]) {
                return data;
            }
            if (!typeMap[type]) { // in case we dont know the type
                return data;
            }

            // Get the actual type of this object
            type = this.findCorrectType(data, type);

            // get the map for the correct type.
            let attributeTypes = typeMap[type].getAttributeTypeMap();
            let instance: {[index: string]: any} = {};
            for (let index in attributeTypes) {
                let attributeType = attributeTypes[index];
                instance[attributeType.baseName] = ObjectSerializer.serialize(data[attributeType.name], attributeType.type);
            }
            return instance;
        }
    }

    public static deserialize(data: any, type: string) {
        // polymorphism may change the actual type.
        type = ObjectSerializer.findCorrectType(data, type);
        if (data == undefined) {
            return data;
        } else if (primitives.indexOf(type.toLowerCase()) !== -1) {
            return data;
        } else if (type.lastIndexOf("Array<", 0) === 0) { // string.startsWith pre es6
            let subType: string = type.replace("Array<", ""); // Array<Type> => Type>
            subType = subType.substring(0, subType.length - 1); // Type> => Type
            let transformedData: any[] = [];
            for (let index in data) {
                let date = data[index];
                transformedData.push(ObjectSerializer.deserialize(date, subType));
            }
            return transformedData;
        } else if (type === "Date") {
            return new Date(data);
        } else {
            if (enumsMap[type]) {// is Enum
                return data;
            }

            if (!typeMap[type]) { // dont know the type
                return data;
            }
            let instance = new typeMap[type]();
            let attributeTypes = typeMap[type].getAttributeTypeMap();
            for (let index in attributeTypes) {
                let attributeType = attributeTypes[index];
                instance[attributeType.name] = ObjectSerializer.deserialize(data[attributeType.baseName], attributeType.type);
            }
            return instance;
        }
    }
}

export interface Authentication {
    /**
    * Apply authentication settings to header and query params.
    */
    applyToRequest(requestOptions: localVarRequest.Options): Promise<void> | void;
}

export class HttpBasicAuth implements Authentication {
    public username: string = '';
    public password: string = '';

    applyToRequest(requestOptions: localVarRequest.Options): void {
        requestOptions.auth = {
            username: this.username, password: this.password
        }
    }
}

export class HttpBearerAuth implements Authentication {
    public accessToken: string | (() => string) = '';

    applyToRequest(requestOptions: localVarRequest.Options): void {
        if (requestOptions && requestOptions.headers) {
            const accessToken = typeof this.accessToken === 'function'
                            ? this.accessToken()
                            : this.accessToken;
            requestOptions.headers["Authorization"] = "Bearer " + accessToken;
        }
    }
}

export class ApiKeyAuth implements Authentication {
    public apiKey: string = '';

    constructor(private location: string, private paramName: string) {
    }

    applyToRequest(requestOptions: localVarRequest.Options): void {
        if (this.location == "query") {
            (<any>requestOptions.qs)[this.paramName] = this.apiKey;
        } else if (this.location == "header" && requestOptions && requestOptions.headers) {
            requestOptions.headers[this.paramName] = this.apiKey;
        } else if (this.location == 'cookie' && requestOptions && requestOptions.headers) {
            if (requestOptions.headers['Cookie']) {
                requestOptions.headers['Cookie'] += '; ' + this.paramName + '=' + encodeURIComponent(this.apiKey);
            }
            else {
                requestOptions.headers['Cookie'] = this.paramName + '=' + encodeURIComponent(this.apiKey);
            }
        }
    }
}

export class OAuth implements Authentication {
    public accessToken: string = '';

    applyToRequest(requestOptions: localVarRequest.Options): void {
        if (requestOptions && requestOptions.headers) {
            requestOptions.headers["Authorization"] = "Bearer " + this.accessToken;
        }
    }
}

export class VoidAuth implements Authentication {
    public username: string = '';
    public password: string = '';

    applyToRequest(_: localVarRequest.Options): void {
        // Do nothing
    }
}

export type Interceptor = (requestOptions: localVarRequest.Options) => (Promise<void> | void);
