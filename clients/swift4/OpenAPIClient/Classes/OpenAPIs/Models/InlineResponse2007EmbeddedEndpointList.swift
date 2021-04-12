//
// InlineResponse2007EmbeddedEndpointList.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


public struct InlineResponse2007EmbeddedEndpointList: Codable { 


    public var mfaEnabled: Bool
    public var deletedAt: AnyType
    public var networkId: String
    public var name: String
    public var updatedAt: String
    public var syncId: AnyType
    public var sessionIdentityId: AnyType
    public var osRelease: AnyType
    public var syncResourceId: AnyType
    public var zitiId: String
    public var appVersion: AnyType
    public var branch: AnyType
    public var os: AnyType
    public var ownerIdentityId: String
    public var hasEdgeRouterConnection: Bool
    public var attributes: [String]
    public var hasApiSession: Bool
    public var revision: AnyType
    public var version: AnyType
    public var jwt: AnyType
    public var id: String
    public var sessionActive: Bool
    public var jwtExpiresAt: AnyType
    public var createdAt: String
    public var arch: AnyType
    public var createdBy: String
    public var deletedBy: AnyType
    public var type: AnyType
    public var osVersion: AnyType
    public var appId: AnyType
    public var links: InlineResponse200Links

    public init(mfaEnabled: Bool, deletedAt: AnyType, networkId: String, name: String, updatedAt: String, syncId: AnyType, sessionIdentityId: AnyType, osRelease: AnyType, syncResourceId: AnyType, zitiId: String, appVersion: AnyType, branch: AnyType, os: AnyType, ownerIdentityId: String, hasEdgeRouterConnection: Bool, attributes: [String], hasApiSession: Bool, revision: AnyType, version: AnyType, jwt: AnyType, id: String, sessionActive: Bool, jwtExpiresAt: AnyType, createdAt: String, arch: AnyType, createdBy: String, deletedBy: AnyType, type: AnyType, osVersion: AnyType, appId: AnyType, links: InlineResponse200Links) {
        self.mfaEnabled = mfaEnabled
        self.deletedAt = deletedAt
        self.networkId = networkId
        self.name = name
        self.updatedAt = updatedAt
        self.syncId = syncId
        self.sessionIdentityId = sessionIdentityId
        self.osRelease = osRelease
        self.syncResourceId = syncResourceId
        self.zitiId = zitiId
        self.appVersion = appVersion
        self.branch = branch
        self.os = os
        self.ownerIdentityId = ownerIdentityId
        self.hasEdgeRouterConnection = hasEdgeRouterConnection
        self.attributes = attributes
        self.hasApiSession = hasApiSession
        self.revision = revision
        self.version = version
        self.jwt = jwt
        self.id = id
        self.sessionActive = sessionActive
        self.jwtExpiresAt = jwtExpiresAt
        self.createdAt = createdAt
        self.arch = arch
        self.createdBy = createdBy
        self.deletedBy = deletedBy
        self.type = type
        self.osVersion = osVersion
        self.appId = appId
        self.links = links
    }

    public enum CodingKeys: String, CodingKey { 
        case mfaEnabled
        case deletedAt
        case networkId
        case name
        case updatedAt
        case syncId
        case sessionIdentityId
        case osRelease
        case syncResourceId
        case zitiId
        case appVersion
        case branch
        case os
        case ownerIdentityId
        case hasEdgeRouterConnection
        case attributes
        case hasApiSession
        case revision
        case version
        case jwt
        case id
        case sessionActive
        case jwtExpiresAt
        case createdAt
        case arch
        case createdBy
        case deletedBy
        case type
        case osVersion
        case appId
        case links = "_links"
    }

}
