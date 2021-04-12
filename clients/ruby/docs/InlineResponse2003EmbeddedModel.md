# OpenapiClient::InlineResponse2003EmbeddedModel

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**edge_router_attributes** | **Array&lt;String&gt;** |  | 
**server_egress** | [**InlineResponse2003EmbeddedModelServerEgress**](InlineResponse2003EmbeddedModelServerEgress.md) |  | [optional] 
**bind_endpoint_attributes** | **Array&lt;String&gt;** |  | [optional] 
**client_ingress** | [**InlineResponse2003EmbeddedModelClientIngress**](InlineResponse2003EmbeddedModelClientIngress.md) |  | 
**edge_router_hosts** | [**Array&lt;InlineResponse2003EmbeddedModelEdgeRouterHosts&gt;**](InlineResponse2003EmbeddedModelEdgeRouterHosts.md) |  | [optional] 

## Code Sample

```ruby
require 'OpenapiClient'

instance = OpenapiClient::InlineResponse2003EmbeddedModel.new(edge_router_attributes: null,
                                 server_egress: null,
                                 bind_endpoint_attributes: null,
                                 client_ingress: null,
                                 edge_router_hosts: null)
```


