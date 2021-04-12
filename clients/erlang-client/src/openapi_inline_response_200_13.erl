-module(openapi_inline_response_200_13).

-export([encode/1]).

-export_type([openapi_inline_response_200_13/0]).

-type openapi_inline_response_200_13() ::
    #{ 'deletedAt' := openapi_any_type:openapi_any_type(),
       'name' := binary(),
       'updatedAt' := binary(),
       'size' := binary(),
       'locationCode' => binary(),
       'ownerIdentityId' := binary(),
       'productVersion' := binary(),
       'networkGroupId' := binary(),
       'id' := binary(),
       'status' := binary(),
       'sdsPassword' => binary(),
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
          'locationCode' := LocationCode,
          'ownerIdentityId' := OwnerIdentityId,
          'productVersion' := ProductVersion,
          'networkGroupId' := NetworkGroupId,
          'id' := Id,
          'status' := Status,
          'sdsPassword' := SdsPassword,
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
       'locationCode' => LocationCode,
       'ownerIdentityId' => OwnerIdentityId,
       'productVersion' => ProductVersion,
       'networkGroupId' => NetworkGroupId,
       'id' => Id,
       'status' => Status,
       'sdsPassword' => SdsPassword,
       'createdAt' => CreatedAt,
       'createdBy' => CreatedBy,
       'deletedBy' => DeletedBy,
       'networkController' => NetworkController,
       'o365BreakoutCategory' => O365BreakoutCategory,
       '_links' => Links
     }.
