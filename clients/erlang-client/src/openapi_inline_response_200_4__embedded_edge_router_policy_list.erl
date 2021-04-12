-module(openapi_inline_response_200_4__embedded_edge_router_policy_list).

-export([encode/1]).

-export_type([openapi_inline_response_200_4__embedded_edge_router_policy_list/0]).

-type openapi_inline_response_200_4__embedded_edge_router_policy_list() ::
    #{ 'deletedAt' := openapi_any_type:openapi_any_type(),
       'networkId' := binary(),
       'name' := binary(),
       'edgeRouterAttributes' := list(),
       'updatedAt' := binary(),
       'zitiId' := binary(),
       'ownerIdentityId' := binary(),
       'id' := binary(),
       'createdAt' := binary(),
       'createdBy' := binary(),
       'deletedBy' := openapi_any_type:openapi_any_type(),
       'endpointAttributes' := list(),
       '_links' := openapi_inline_response_200__links:openapi_inline_response_200__links()
     }.

encode(#{ 'deletedAt' := DeletedAt,
          'networkId' := NetworkId,
          'name' := Name,
          'edgeRouterAttributes' := EdgeRouterAttributes,
          'updatedAt' := UpdatedAt,
          'zitiId' := ZitiId,
          'ownerIdentityId' := OwnerIdentityId,
          'id' := Id,
          'createdAt' := CreatedAt,
          'createdBy' := CreatedBy,
          'deletedBy' := DeletedBy,
          'endpointAttributes' := EndpointAttributes,
          '_links' := Links
        }) ->
    #{ 'deletedAt' => DeletedAt,
       'networkId' => NetworkId,
       'name' => Name,
       'edgeRouterAttributes' => EdgeRouterAttributes,
       'updatedAt' => UpdatedAt,
       'zitiId' => ZitiId,
       'ownerIdentityId' => OwnerIdentityId,
       'id' => Id,
       'createdAt' => CreatedAt,
       'createdBy' => CreatedBy,
       'deletedBy' => DeletedBy,
       'endpointAttributes' => EndpointAttributes,
       '_links' => Links
     }.
