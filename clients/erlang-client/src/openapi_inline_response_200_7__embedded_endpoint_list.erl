-module(openapi_inline_response_200_7__embedded_endpoint_list).

-export([encode/1]).

-export_type([openapi_inline_response_200_7__embedded_endpoint_list/0]).

-type openapi_inline_response_200_7__embedded_endpoint_list() ::
    #{ 'mfaEnabled' := boolean(),
       'deletedAt' := openapi_any_type:openapi_any_type(),
       'networkId' := binary(),
       'name' := binary(),
       'updatedAt' := binary(),
       'syncId' := openapi_any_type:openapi_any_type(),
       'sessionIdentityId' := openapi_any_type:openapi_any_type(),
       'osRelease' := openapi_any_type:openapi_any_type(),
       'syncResourceId' := openapi_any_type:openapi_any_type(),
       'zitiId' := binary(),
       'appVersion' := openapi_any_type:openapi_any_type(),
       'branch' := openapi_any_type:openapi_any_type(),
       'os' := openapi_any_type:openapi_any_type(),
       'ownerIdentityId' := binary(),
       'hasEdgeRouterConnection' := boolean(),
       'attributes' := list(),
       'hasApiSession' := boolean(),
       'revision' := openapi_any_type:openapi_any_type(),
       'version' := openapi_any_type:openapi_any_type(),
       'jwt' := openapi_any_type:openapi_any_type(),
       'id' := binary(),
       'sessionActive' := boolean(),
       'jwtExpiresAt' := openapi_any_type:openapi_any_type(),
       'createdAt' := binary(),
       'arch' := openapi_any_type:openapi_any_type(),
       'createdBy' := binary(),
       'deletedBy' := openapi_any_type:openapi_any_type(),
       'type' := openapi_any_type:openapi_any_type(),
       'osVersion' := openapi_any_type:openapi_any_type(),
       'appId' := openapi_any_type:openapi_any_type(),
       '_links' := openapi_inline_response_200__links:openapi_inline_response_200__links()
     }.

encode(#{ 'mfaEnabled' := MfaEnabled,
          'deletedAt' := DeletedAt,
          'networkId' := NetworkId,
          'name' := Name,
          'updatedAt' := UpdatedAt,
          'syncId' := SyncId,
          'sessionIdentityId' := SessionIdentityId,
          'osRelease' := OsRelease,
          'syncResourceId' := SyncResourceId,
          'zitiId' := ZitiId,
          'appVersion' := AppVersion,
          'branch' := Branch,
          'os' := Os,
          'ownerIdentityId' := OwnerIdentityId,
          'hasEdgeRouterConnection' := HasEdgeRouterConnection,
          'attributes' := Attributes,
          'hasApiSession' := HasApiSession,
          'revision' := Revision,
          'version' := Version,
          'jwt' := Jwt,
          'id' := Id,
          'sessionActive' := SessionActive,
          'jwtExpiresAt' := JwtExpiresAt,
          'createdAt' := CreatedAt,
          'arch' := Arch,
          'createdBy' := CreatedBy,
          'deletedBy' := DeletedBy,
          'type' := Type,
          'osVersion' := OsVersion,
          'appId' := AppId,
          '_links' := Links
        }) ->
    #{ 'mfaEnabled' => MfaEnabled,
       'deletedAt' => DeletedAt,
       'networkId' => NetworkId,
       'name' => Name,
       'updatedAt' => UpdatedAt,
       'syncId' => SyncId,
       'sessionIdentityId' => SessionIdentityId,
       'osRelease' => OsRelease,
       'syncResourceId' => SyncResourceId,
       'zitiId' => ZitiId,
       'appVersion' => AppVersion,
       'branch' => Branch,
       'os' => Os,
       'ownerIdentityId' => OwnerIdentityId,
       'hasEdgeRouterConnection' => HasEdgeRouterConnection,
       'attributes' => Attributes,
       'hasApiSession' => HasApiSession,
       'revision' => Revision,
       'version' => Version,
       'jwt' => Jwt,
       'id' => Id,
       'sessionActive' => SessionActive,
       'jwtExpiresAt' => JwtExpiresAt,
       'createdAt' => CreatedAt,
       'arch' => Arch,
       'createdBy' => CreatedBy,
       'deletedBy' => DeletedBy,
       'type' => Type,
       'osVersion' => OsVersion,
       'appId' => AppId,
       '_links' => Links
     }.
