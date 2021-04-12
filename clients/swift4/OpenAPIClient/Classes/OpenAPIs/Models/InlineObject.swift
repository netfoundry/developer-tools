//
// InlineObject.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


public struct InlineObject: Codable { 


    public var name: String
    public var size: String
    public var locationCode: String
    public var productVersion: String
    public var networkGroupId: String

    public init(name: String, size: String, locationCode: String, productVersion: String, networkGroupId: String) {
        self.name = name
        self.size = size
        self.locationCode = locationCode
        self.productVersion = productVersion
        self.networkGroupId = networkGroupId
    }

}
