-module(openapi_inline_response_200).

-export([encode/1]).

-export_type([openapi_inline_response_200/0]).

-type openapi_inline_response_200() ::
    #{ 'serviceAttributes' := list(),
       'deletedAt' := openapi_any_type:openapi_any_type(),
       'networkId' := binary(),
       'name' := binary(),
       'updatedAt' := binary(),
       'postureCheckAttributes' := list(),
       'zitiId' := binary(),
       'ownerIdentityId' := binary(),
       'id' := binary(),
       'createdAt' := binary(),
       'createdBy' := binary(),
       'deletedBy' := openapi_any_type:openapi_any_type(),
       'endpointAttributes' := list(),
       '_links' := openapi_inline_response_200__links:openapi_inline_response_200__links()
     }.

encode(#{ 'serviceAttributes' := ServiceAttributes,
          'deletedAt' := DeletedAt,
          'networkId' := NetworkId,
          'name' := Name,
          'updatedAt' := UpdatedAt,
          'postureCheckAttributes' := PostureCheckAttributes,
          'zitiId' := ZitiId,
          'ownerIdentityId' := OwnerIdentityId,
          'id' := Id,
          'createdAt' := CreatedAt,
          'createdBy' := CreatedBy,
          'deletedBy' := DeletedBy,
          'endpointAttributes' := EndpointAttributes,
          '_links' := Links
        }) ->
    #{ 'serviceAttributes' => ServiceAttributes,
       'deletedAt' => DeletedAt,
       'networkId' => NetworkId,
       'name' => Name,
       'updatedAt' => UpdatedAt,
       'postureCheckAttributes' => PostureCheckAttributes,
       'zitiId' => ZitiId,
       'ownerIdentityId' => OwnerIdentityId,
       'id' => Id,
       'createdAt' => CreatedAt,
       'createdBy' => CreatedBy,
       'deletedBy' => DeletedBy,
       'endpointAttributes' => EndpointAttributes,
       '_links' => Links
     }.
