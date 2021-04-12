-module(openapi_inline_response_200_16).

-export([encode/1]).

-export_type([openapi_inline_response_200_16/0]).

-type openapi_inline_response_200_16() ::
    #{ 'deletedAt' := openapi_any_type:openapi_any_type(),
       'name' := binary(),
       'updatedAt' := openapi_any_type:openapi_any_type(),
       'email' := binary(),
       'description' := binary(),
       'awsCognitoClientId' := binary(),
       'auth0ClientId' := openapi_any_type:openapi_any_type(),
       'id' := binary(),
       'contactEmail' := binary(),
       'createdAt' := openapi_inline_response_200_14_updated_at:openapi_inline_response_200_14_updated_at(),
       'organizationId' := binary(),
       'tenantId' := binary(),
       'type' := binary(),
       'authenticationUrl' := binary(),
       'active' := boolean()
     }.

encode(#{ 'deletedAt' := DeletedAt,
          'name' := Name,
          'updatedAt' := UpdatedAt,
          'email' := Email,
          'description' := Description,
          'awsCognitoClientId' := AwsCognitoClientId,
          'auth0ClientId' := Auth0ClientId,
          'id' := Id,
          'contactEmail' := ContactEmail,
          'createdAt' := CreatedAt,
          'organizationId' := OrganizationId,
          'tenantId' := TenantId,
          'type' := Type,
          'authenticationUrl' := AuthenticationUrl,
          'active' := Active
        }) ->
    #{ 'deletedAt' => DeletedAt,
       'name' => Name,
       'updatedAt' => UpdatedAt,
       'email' => Email,
       'description' => Description,
       'awsCognitoClientId' => AwsCognitoClientId,
       'auth0ClientId' => Auth0ClientId,
       'id' => Id,
       'contactEmail' => ContactEmail,
       'createdAt' => CreatedAt,
       'organizationId' => OrganizationId,
       'tenantId' => TenantId,
       'type' => Type,
       'authenticationUrl' => AuthenticationUrl,
       'active' => Active
     }.
