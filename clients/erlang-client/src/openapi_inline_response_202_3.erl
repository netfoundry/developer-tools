-module(openapi_inline_response_202_3).

-export([encode/1]).

-export_type([openapi_inline_response_202_3/0]).

-type openapi_inline_response_202_3() ::
    #{ 'deletedAt' := openapi_any_type:openapi_any_type(),
       'networkId' := binary(),
       'name' := binary(),
       'updatedAt' := binary(),
       'model' := openapi_inline_response_202_3_model:openapi_inline_response_202_3_model(),
       'zitiId' := binary(),
       'ownerIdentityId' := binary(),
       'attributes' := list(),
       'modelType' := binary(),
       'id' := binary(),
       'configIdByConfigTypeId' := openapi_inline_response_202_3_config_id_by_config_type_id:openapi_inline_response_202_3_config_id_by_config_type_id(),
       'createdAt' := binary(),
       'createdBy' := binary(),
       'deletedBy' := openapi_any_type:openapi_any_type(),
       'encryptionRequired' := boolean(),
       'authority' := openapi_any_type:openapi_any_type(),
       '_links' := openapi_inline_response_202_1__links:openapi_inline_response_202_1__links()
     }.

encode(#{ 'deletedAt' := DeletedAt,
          'networkId' := NetworkId,
          'name' := Name,
          'updatedAt' := UpdatedAt,
          'model' := Model,
          'zitiId' := ZitiId,
          'ownerIdentityId' := OwnerIdentityId,
          'attributes' := Attributes,
          'modelType' := ModelType,
          'id' := Id,
          'configIdByConfigTypeId' := ConfigIdByConfigTypeId,
          'createdAt' := CreatedAt,
          'createdBy' := CreatedBy,
          'deletedBy' := DeletedBy,
          'encryptionRequired' := EncryptionRequired,
          'authority' := Authority,
          '_links' := Links
        }) ->
    #{ 'deletedAt' => DeletedAt,
       'networkId' => NetworkId,
       'name' => Name,
       'updatedAt' => UpdatedAt,
       'model' => Model,
       'zitiId' => ZitiId,
       'ownerIdentityId' => OwnerIdentityId,
       'attributes' => Attributes,
       'modelType' => ModelType,
       'id' => Id,
       'configIdByConfigTypeId' => ConfigIdByConfigTypeId,
       'createdAt' => CreatedAt,
       'createdBy' => CreatedBy,
       'deletedBy' => DeletedBy,
       'encryptionRequired' => EncryptionRequired,
       'authority' => Authority,
       '_links' => Links
     }.
