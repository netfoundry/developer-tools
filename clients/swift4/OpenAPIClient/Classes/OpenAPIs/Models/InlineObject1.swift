//
// InlineObject1.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


public struct InlineObject1: Codable { 


    public var networkId: String
    public var name: String
    public var model: CoreV2ServicesModel
    public var attributes: [String]
    public var modelType: String
    public var encryptionRequired: Bool

    public init(networkId: String, name: String, model: CoreV2ServicesModel, attributes: [String], modelType: String, encryptionRequired: Bool) {
        self.networkId = networkId
        self.name = name
        self.model = model
        self.attributes = attributes
        self.modelType = modelType
        self.encryptionRequired = encryptionRequired
    }

}