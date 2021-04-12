-module(openapi_inline_response_202_1_config_id_by_config_type_id).

-export([encode/1]).

-export_type([openapi_inline_response_202_1_config_id_by_config_type_id/0]).

-type openapi_inline_response_202_1_config_id_by_config_type_id() ::
    #{ '6fa5c2bc_b7f7_47f8_9229_e927722adb27' => binary(),
       'b1582680_ab7b_45d0_ac36_b00f82df8e79' => binary()
     }.

encode(#{ '6fa5c2bc_b7f7_47f8_9229_e927722adb27' := 6fa5c2bcB7f747f89229E927722adb27,
          'b1582680_ab7b_45d0_ac36_b00f82df8e79' := B1582680Ab7b45d0Ac36B00f82df8e79
        }) ->
    #{ '6fa5c2bc-b7f7-47f8-9229-e927722adb27' => 6fa5c2bcB7f747f89229E927722adb27,
       'b1582680-ab7b-45d0-ac36-b00f82df8e79' => B1582680Ab7b45d0Ac36B00f82df8e79
     }.
