-module(openapi_inline_response_200_14_identity_providers).

-export([encode/1]).

-export_type([openapi_inline_response_200_14_identity_providers/0]).

-type openapi_inline_response_200_14_identity_providers() ::
    #{ 'deletedAt' := openapi_any_type:openapi_any_type(),
       'name' := binary(),
       'updatedAt' := openapi_any_type:openapi_any_type(),
       'auth0ConnectionType' := binary(),
       'auth0ConnectionId' := binary(),
       'id' := binary(),
       'createdAt' := openapi_inline_response_200_14_updated_at:openapi_inline_response_200_14_updated_at(),
       'organizationId' := binary(),
       'active' := boolean()
     }.

encode(#{ 'deletedAt' := DeletedAt,
          'name' := Name,
          'updatedAt' := UpdatedAt,
          'auth0ConnectionType' := Auth0ConnectionType,
          'auth0ConnectionId' := Auth0ConnectionId,
          'id' := Id,
          'createdAt' := CreatedAt,
          'organizationId' := OrganizationId,
          'active' := Active
        }) ->
    #{ 'deletedAt' => DeletedAt,
       'name' => Name,
       'updatedAt' => UpdatedAt,
       'auth0ConnectionType' => Auth0ConnectionType,
       'auth0ConnectionId' => Auth0ConnectionId,
       'id' => Id,
       'createdAt' => CreatedAt,
       'organizationId' => OrganizationId,
       'active' => Active
     }.
