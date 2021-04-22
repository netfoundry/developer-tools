-module(openapi_inline_response_200_1__embedded_network_list).

-export([encode/1]).

-export_type([openapi_inline_response_200_1__embedded_network_list/0]).

-type openapi_inline_response_200_1__embedded_network_list() ::
    #{ 'deletedAt' := openapi_any_type:openapi_any_type(),
       'name' := binary(),
       'updatedAt' := binary(),
       'size' := binary(),
       'ownerIdentityId' := binary(),
       'productVersion' := binary(),
       'networkGroupId' := binary(),
       'id' := binary(),
       'status' := binary(),
       'createdAt' := binary(),
       'createdBy' := binary(),
       'deletedBy' := openapi_any_type:openapi_any_type(),
       'networkController' => openapi_any_type:openapi_any_type(),
       'o365BreakoutCategory' := binary(),
       '_links' := openapi_inline_response_200_1__embedded__links:openapi_inline_response_200_1__embedded__links()
     }.

encode(#{ 'deletedAt' := DeletedAt,
          'name' := Name,
          'updatedAt' := UpdatedAt,
          'size' := Size,
          'ownerIdentityId' := OwnerIdentityId,
          'productVersion' := ProductVersion,
          'networkGroupId' := NetworkGroupId,
          'id' := Id,
          'status' := Status,
          'createdAt' := CreatedAt,
          'createdBy' := CreatedBy,
          'deletedBy' := DeletedBy,
          'networkController' := NetworkController,
          'o365BreakoutCategory' := O365BreakoutCategory,
          '_links' := Links
        }) ->
    #{ 'deletedAt' => DeletedAt,
       'name' => Name,
       'updatedAt' => UpdatedAt,
       'size' => Size,
       'ownerIdentityId' => OwnerIdentityId,
       'productVersion' => ProductVersion,
       'networkGroupId' => NetworkGroupId,
       'id' => Id,
       'status' => Status,
       'createdAt' => CreatedAt,
       'createdBy' => CreatedBy,
       'deletedBy' => DeletedBy,
       'networkController' => NetworkController,
       'o365BreakoutCategory' => O365BreakoutCategory,
       '_links' => Links
     }.
