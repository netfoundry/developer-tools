-module(openapi_inline_response_202).

-export([encode/1]).

-export_type([openapi_inline_response_202/0]).

-type openapi_inline_response_202() ::
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
       'networkController' := openapi_any_type:openapi_any_type(),
       'o365BreakoutCategory' := binary(),
       '_links' := openapi_inline_response_202__links:openapi_inline_response_202__links()
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
