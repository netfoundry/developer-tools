-module(openapi_inline_response_200_14).

-export([encode/1]).

-export_type([openapi_inline_response_200_14/0]).

-type openapi_inline_response_200_14() ::
    #{ 'deletedAt' := openapi_any_type:openapi_any_type(),
       'name' := binary(),
       'updatedAt' := openapi_inline_response_200_14_updated_at:openapi_inline_response_200_14_updated_at(),
       'label' := binary(),
       'id' := binary(),
       'mfaProvider' := binary(),
       'createdAt' := openapi_inline_response_200_14_updated_at:openapi_inline_response_200_14_updated_at(),
       'identityProviders' := list(),
       'deleted' := boolean(),
       'active' := boolean()
     }.

encode(#{ 'deletedAt' := DeletedAt,
          'name' := Name,
          'updatedAt' := UpdatedAt,
          'label' := Label,
          'id' := Id,
          'mfaProvider' := MfaProvider,
          'createdAt' := CreatedAt,
          'identityProviders' := IdentityProviders,
          'deleted' := Deleted,
          'active' := Active
        }) ->
    #{ 'deletedAt' => DeletedAt,
       'name' => Name,
       'updatedAt' => UpdatedAt,
       'label' => Label,
       'id' => Id,
       'mfaProvider' => MfaProvider,
       'createdAt' => CreatedAt,
       'identityProviders' => IdentityProviders,
       'deleted' => Deleted,
       'active' => Active
     }.
