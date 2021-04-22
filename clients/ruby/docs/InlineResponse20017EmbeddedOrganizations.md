# OpenapiClient::InlineResponse20017EmbeddedOrganizations

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**organization_short_name** | **String** |  | 
**name** | **String** |  | 
**updated_at** | **String** |  | 
**ziti_enabled** | **Boolean** |  | 
**default_azure_virtual_wan_id** | [**AnyType**](.md) |  | 
**owner_identity_id** | [**AnyType**](.md) |  | 
**billing_account_id** | **String** |  | 
**id** | **String** |  | 
**aws_auto_scaling_gateway_enabled** | **Boolean** |  | 
**created_at** | **String** |  | 
**mfa_required** | **Boolean** |  | 
**deleted** | **Boolean** |  | 
**_links** | [**InlineResponse20011Links**](InlineResponse20011Links.md) |  | 

## Code Sample

```ruby
require 'OpenapiClient'

instance = OpenapiClient::InlineResponse20017EmbeddedOrganizations.new(organization_short_name: null,
                                 name: null,
                                 updated_at: null,
                                 ziti_enabled: null,
                                 default_azure_virtual_wan_id: null,
                                 owner_identity_id: null,
                                 billing_account_id: null,
                                 id: null,
                                 aws_auto_scaling_gateway_enabled: null,
                                 created_at: null,
                                 mfa_required: null,
                                 deleted: null,
                                 _links: null)
```


