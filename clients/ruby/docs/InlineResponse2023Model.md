# OpenapiClient::InlineResponse2023Model

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**bind_endpoint_attributes** | **Array&lt;String&gt;** |  | 
**client_ingress** | [**InlineResponse2023ModelClientIngress**](InlineResponse2023ModelClientIngress.md) |  | 
**edge_router_attributes** | **Array&lt;String&gt;** |  | 
**server_egress** | [**CoreV2ServicesServiceIdModelServerEgress**](CoreV2ServicesServiceIdModelServerEgress.md) |  | 

## Code Sample

```ruby
require 'OpenapiClient'

instance = OpenapiClient::InlineResponse2023Model.new(bind_endpoint_attributes: null,
                                 client_ingress: null,
                                 edge_router_attributes: null,
                                 server_egress: null)
```


