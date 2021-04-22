//
// InlineResponse20017EmbeddedOrganizations.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


public struct InlineResponse20017EmbeddedOrganizations: Codable { 


    public var organizationShortName: String
    public var name: String
    public var updatedAt: String
    public var zitiEnabled: Bool
    public var defaultAzureVirtualWanId: AnyType
    public var ownerIdentityId: AnyType
    public var billingAccountId: String
    public var id: String
    public var awsAutoScalingGatewayEnabled: Bool
    public var createdAt: String
    public var mfaRequired: Bool
    public var deleted: Bool
    public var links: InlineResponse20011Links

    public init(organizationShortName: String, name: String, updatedAt: String, zitiEnabled: Bool, defaultAzureVirtualWanId: AnyType, ownerIdentityId: AnyType, billingAccountId: String, id: String, awsAutoScalingGatewayEnabled: Bool, createdAt: String, mfaRequired: Bool, deleted: Bool, links: InlineResponse20011Links) {
        self.organizationShortName = organizationShortName
        self.name = name
        self.updatedAt = updatedAt
        self.zitiEnabled = zitiEnabled
        self.defaultAzureVirtualWanId = defaultAzureVirtualWanId
        self.ownerIdentityId = ownerIdentityId
        self.billingAccountId = billingAccountId
        self.id = id
        self.awsAutoScalingGatewayEnabled = awsAutoScalingGatewayEnabled
        self.createdAt = createdAt
        self.mfaRequired = mfaRequired
        self.deleted = deleted
        self.links = links
    }

    public enum CodingKeys: String, CodingKey { 
        case organizationShortName
        case name
        case updatedAt
        case zitiEnabled
        case defaultAzureVirtualWanId
        case ownerIdentityId
        case billingAccountId
        case id
        case awsAutoScalingGatewayEnabled
        case createdAt
        case mfaRequired
        case deleted
        case links = "_links"
    }

}
