//
// InlineResponse20017Links.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


public struct InlineResponse20017Links: Codable { 


    public var first: InlineResponse200LinksSelf
    public var last: InlineResponse200LinksSelf

    public init(first: InlineResponse200LinksSelf, last: InlineResponse200LinksSelf) {
        self.first = first
        self.last = last
    }

}
