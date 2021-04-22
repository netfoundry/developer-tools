//
// CoreV2ServicesModelClientIngress.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


public struct CoreV2ServicesModelClientIngress: Codable { 


    public var protocols: [String]?
    public var host: String?
    public var ports: [CoreV2ServicesModelClientIngressPorts]?
    public var port: AnyType?
    public var addresses: [String]?

    public init(protocols: [String]?, host: String?, ports: [CoreV2ServicesModelClientIngressPorts]?, port: AnyType?, addresses: [String]?) {
        self.protocols = protocols
        self.host = host
        self.ports = ports
        self.port = port
        self.addresses = addresses
    }

}
