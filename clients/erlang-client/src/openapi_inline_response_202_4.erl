-module(openapi_inline_response_202_4).

-export([encode/1]).

-export_type([openapi_inline_response_202_4/0]).

-type openapi_inline_response_202_4() ::
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
       'networkController' := openapi_inline_response_202_4_network_controller:openapi_inline_response_202_4_network_controller(),
       'o365BreakoutCategory' := binary(),
       '_links' := openapi_inline_response_202_4__links:openapi_inline_response_202_4__links()
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
