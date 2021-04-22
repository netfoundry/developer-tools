-module(openapi_inline_response_200_17__embedded_organizations).

-export([encode/1]).

-export_type([openapi_inline_response_200_17__embedded_organizations/0]).

-type openapi_inline_response_200_17__embedded_organizations() ::
    #{ 'organizationShortName' := binary(),
       'name' := binary(),
       'updatedAt' := binary(),
       'zitiEnabled' := boolean(),
       'defaultAzureVirtualWanId' := openapi_any_type:openapi_any_type(),
       'ownerIdentityId' := openapi_any_type:openapi_any_type(),
       'billingAccountId' := binary(),
       'id' := binary(),
       'awsAutoScalingGatewayEnabled' := boolean(),
       'createdAt' := binary(),
       'mfaRequired' := boolean(),
       'deleted' := boolean(),
       '_links' := openapi_inline_response_200_11__links:openapi_inline_response_200_11__links()
     }.

encode(#{ 'organizationShortName' := OrganizationShortName,
          'name' := Name,
          'updatedAt' := UpdatedAt,
          'zitiEnabled' := ZitiEnabled,
          'defaultAzureVirtualWanId' := DefaultAzureVirtualWanId,
          'ownerIdentityId' := OwnerIdentityId,
          'billingAccountId' := BillingAccountId,
          'id' := Id,
          'awsAutoScalingGatewayEnabled' := AwsAutoScalingGatewayEnabled,
          'createdAt' := CreatedAt,
          'mfaRequired' := MfaRequired,
          'deleted' := Deleted,
          '_links' := Links
        }) ->
    #{ 'organizationShortName' => OrganizationShortName,
       'name' => Name,
       'updatedAt' => UpdatedAt,
       'zitiEnabled' => ZitiEnabled,
       'defaultAzureVirtualWanId' => DefaultAzureVirtualWanId,
       'ownerIdentityId' => OwnerIdentityId,
       'billingAccountId' => BillingAccountId,
       'id' => Id,
       'awsAutoScalingGatewayEnabled' => AwsAutoScalingGatewayEnabled,
       'createdAt' => CreatedAt,
       'mfaRequired' => MfaRequired,
       'deleted' => Deleted,
       '_links' => Links
     }.
