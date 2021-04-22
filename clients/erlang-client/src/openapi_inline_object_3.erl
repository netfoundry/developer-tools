-module(openapi_inline_object_3).

-export([encode/1]).

-export_type([openapi_inline_object_3/0]).

-type openapi_inline_object_3() ::
    #{ 'model' := openapi__core_v2_services__service_id__model:openapi__core_v2_services__service_id__model(),
       'modelType' := binary(),
       'name' := binary()
     }.

encode(#{ 'model' := Model,
          'modelType' := ModelType,
          'name' := Name
        }) ->
    #{ 'model' => Model,
       'modelType' => ModelType,
       'name' => Name
     }.
