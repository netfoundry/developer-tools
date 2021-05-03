//
// CoreV2ServicesModelEdgeRouterHosts.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


public struct CoreV2ServicesModelEdgeRouterHosts: Codable { 


    public var edgeRouterId: String
    public var serverEgress: CoreV2ServicesModelServerEgress

    public init(edgeRouterId: String, serverEgress: CoreV2ServicesModelServerEgress) {
        self.edgeRouterId = edgeRouterId
        self.serverEgress = serverEgress
    }

}