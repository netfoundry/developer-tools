//
// CoreV2ServicesServiceIdModelServerEgress.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


public struct CoreV2ServicesServiceIdModelServerEgress: Codable { 


    public var dialInterceptAddress: AnyType
    public var dialInterceptPort: AnyType
    public var port: Double
    public var dialInterceptProtocol: Bool
    public var address: String
    public var _protocol: AnyType

    public init(dialInterceptAddress: AnyType, dialInterceptPort: AnyType, port: Double, dialInterceptProtocol: Bool, address: String, _protocol: AnyType) {
        self.dialInterceptAddress = dialInterceptAddress
        self.dialInterceptPort = dialInterceptPort
        self.port = port
        self.dialInterceptProtocol = dialInterceptProtocol
        self.address = address
        self._protocol = _protocol
    }

    public enum CodingKeys: String, CodingKey { 
        case dialInterceptAddress
        case dialInterceptPort
        case port
        case dialInterceptProtocol
        case address
        case _protocol = "protocol"
    }

}
