-module(openapi_inline_object_1).

-export([encode/1]).

-export_type([openapi_inline_object_1/0]).

-type openapi_inline_object_1() ::
    #{ 'networkId' := binary(),
       'name' := binary(),
       'model' := openapi__core_v2_services_model:openapi__core_v2_services_model(),
       'attributes' := list(),
       'modelType' := binary(),
       'encryptionRequired' := boolean()
     }.

encode(#{ 'networkId' := NetworkId,
          'name' := Name,
          'model' := Model,
          'attributes' := Attributes,
          'modelType' := ModelType,
          'encryptionRequired' := EncryptionRequired
        }) ->
    #{ 'networkId' => NetworkId,
       'name' => Name,
       'model' => Model,
       'attributes' => Attributes,
       'modelType' => ModelType,
       'encryptionRequired' => EncryptionRequired
     }.
