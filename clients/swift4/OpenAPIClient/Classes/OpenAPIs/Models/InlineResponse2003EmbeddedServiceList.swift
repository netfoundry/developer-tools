//
// InlineResponse2003EmbeddedServiceList.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


public struct InlineResponse2003EmbeddedServiceList: Codable { 


    public var deletedAt: AnyType
    public var networkId: String
    public var name: String
    public var updatedAt: String
    public var model: InlineResponse2003EmbeddedModel
    public var zitiId: AnyType
    public var ownerIdentityId: String
    public var attributes: [String]
    public var modelType: String
    public var id: String
    public var configIdByConfigTypeId: InlineResponse2003EmbeddedConfigIdByConfigTypeId
    public var createdAt: String
    public var createdBy: String
    public var deletedBy: AnyType
    public var encryptionRequired: Bool
    public var authority: AnyType
    public var links: InlineResponse200Links

    public init(deletedAt: AnyType, networkId: String, name: String, updatedAt: String, model: InlineResponse2003EmbeddedModel, zitiId: AnyType, ownerIdentityId: String, attributes: [String], modelType: String, id: String, configIdByConfigTypeId: InlineResponse2003EmbeddedConfigIdByConfigTypeId, createdAt: String, createdBy: String, deletedBy: AnyType, encryptionRequired: Bool, authority: AnyType, links: InlineResponse200Links) {
        self.deletedAt = deletedAt
        self.networkId = networkId
        self.name = name
        self.updatedAt = updatedAt
        self.model = model
        self.zitiId = zitiId
        self.ownerIdentityId = ownerIdentityId
        self.attributes = attributes
        self.modelType = modelType
        self.id = id
        self.configIdByConfigTypeId = configIdByConfigTypeId
        self.createdAt = createdAt
        self.createdBy = createdBy
        self.deletedBy = deletedBy
        self.encryptionRequired = encryptionRequired
        self.authority = authority
        self.links = links
    }

    public enum CodingKeys: String, CodingKey { 
        case deletedAt
        case networkId
        case name
        case updatedAt
        case model
        case zitiId
        case ownerIdentityId
        case attributes
        case modelType
        case id
        case configIdByConfigTypeId
        case createdAt
        case createdBy
        case deletedBy
        case encryptionRequired
        case authority
        case links = "_links"
    }

}
