//
// InlineResponse2004.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


public struct InlineResponse2004: Codable { 


    public var embedded: InlineResponse2004Embedded?
    public var links: InlineResponse2002EmbeddedLinks
    public var page: InlineResponse2001Page

    public init(embedded: InlineResponse2004Embedded?, links: InlineResponse2002EmbeddedLinks, page: InlineResponse2001Page) {
        self.embedded = embedded
        self.links = links
        self.page = page
    }

    public enum CodingKeys: String, CodingKey { 
        case embedded = "_embedded"
        case links = "_links"
        case page
    }

}
