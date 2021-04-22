-module(openapi_inline_response_202_1_config_id_by_config_type_id).

-export([encode/1]).

-export_type([openapi_inline_response_202_1_config_id_by_config_type_id/0]).

-type openapi_inline_response_202_1_config_id_by_config_type_id() ::
    #{ '6fa5c2bc_b7f7_47f8_9229_e927722adb27' => binary(),
       '7491e52d_97e8_4759_8a63_c8ea8a75f822' => binary(),
       'b1582680_ab7b_45d0_ac36_b00f82df8e79' => binary(),
       'e7f6ef8d_da57_444c_b677_f03974f5d8be' := binary()
     }.

encode(#{ '6fa5c2bc_b7f7_47f8_9229_e927722adb27' := 6fa5c2bcB7f747f89229E927722adb27,
          '7491e52d_97e8_4759_8a63_c8ea8a75f822' := 7491e52d97e847598a63C8ea8a75f822,
          'b1582680_ab7b_45d0_ac36_b00f82df8e79' := B1582680Ab7b45d0Ac36B00f82df8e79,
          'e7f6ef8d_da57_444c_b677_f03974f5d8be' := E7f6ef8dDa57444cB677F03974f5d8be
        }) ->
    #{ '6fa5c2bc-b7f7-47f8-9229-e927722adb27' => 6fa5c2bcB7f747f89229E927722adb27,
       '7491e52d-97e8-4759-8a63-c8ea8a75f822' => 7491e52d97e847598a63C8ea8a75f822,
       'b1582680-ab7b-45d0-ac36-b00f82df8e79' => B1582680Ab7b45d0Ac36B00f82df8e79,
       'e7f6ef8d-da57-444c-b677-f03974f5d8be' => E7f6ef8dDa57444cB677F03974f5d8be
     }.
