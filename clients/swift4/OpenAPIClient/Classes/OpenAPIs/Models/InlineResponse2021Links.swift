//
// InlineResponse2021Links.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


public struct InlineResponse2021Links: Codable { 


    public var network: InlineResponse200LinksNetwork
    public var process: InlineResponse200LinksNetwork
    public var _self: InlineResponse200LinksSelf

    public init(network: InlineResponse200LinksNetwork, process: InlineResponse200LinksNetwork, _self: InlineResponse200LinksSelf) {
        self.network = network
        self.process = process
        self._self = _self
    }

    public enum CodingKeys: String, CodingKey { 
        case network
        case process
        case _self = "self"
    }

}
