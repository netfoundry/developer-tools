# OpenapiClient::CoreV2ServicesModel

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**edge_router_attributes** | **Array&lt;String&gt;** |  | 
**server_egress** | [**InlineResponse2003EmbeddedModelServerEgress**](InlineResponse2003EmbeddedModelServerEgress.md) |  | [optional] 
**bind_endpoint_attributes** | **Array&lt;String&gt;** |  | [optional] 
**client_ingress** | [**CoreV2ServicesModelClientIngress**](CoreV2ServicesModelClientIngress.md) |  | 
**edge_router_hosts** | [**Array&lt;CoreV2ServicesModelEdgeRouterHosts&gt;**](CoreV2ServicesModelEdgeRouterHosts.md) |  | [optional] 

## Code Sample

```ruby
require 'OpenapiClient'

instance = OpenapiClient::CoreV2ServicesModel.new(edge_router_attributes: null,
                                 server_egress: null,
                                 bind_endpoint_attributes: null,
                                 client_ingress: null,
                                 edge_router_hosts: null)
```


