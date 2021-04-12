-module(openapi_inline_response_202_2).

-export([encode/1]).

-export_type([openapi_inline_response_202_2/0]).

-type openapi_inline_response_202_2() ::
    #{ 'deletedAt' := binary(),
       'networkId' := binary(),
       'name' := binary(),
       'updatedAt' := binary(),
       'model' := openapi_any_type:openapi_any_type(),
       'zitiId' := openapi_any_type:openapi_any_type(),
       'ownerIdentityId' := binary(),
       'attributes' := openapi_any_type:openapi_any_type(),
       'modelType' := binary(),
       'id' := binary(),
       'configIdByConfigTypeId' := openapi_inline_response_202_2_config_id_by_config_type_id:openapi_inline_response_202_2_config_id_by_config_type_id(),
       'createdAt' := binary(),
       'createdBy' := binary(),
       'deletedBy' := binary(),
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
