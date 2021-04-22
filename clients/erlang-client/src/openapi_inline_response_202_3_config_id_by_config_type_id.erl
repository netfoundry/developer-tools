-module(openapi_inline_response_202_3_config_id_by_config_type_id).

-export([encode/1]).

-export_type([openapi_inline_response_202_3_config_id_by_config_type_id/0]).

-type openapi_inline_response_202_3_config_id_by_config_type_id() ::
    #{ 'd75e27f0_ebab_4567_8440_c24f02f2eca5' => binary(),
       'cf3962b1_a98e_4ade_ae25_cdc388e7feb3' := binary(),
       '7cafedc5_17b8_4c1e_8b6f_0d9bc1b4b7bc' => binary(),
       '714a918a_7935_4b4f_82c3_afbadcd9e59b' => binary(),
       '64a39300_b672_413b_9d8c_42175f7e84dd' := binary(),
       'ea6e632b_d8e1_420f_bd8f_ad50b067bad6' => binary()
     }.

encode(#{ 'd75e27f0_ebab_4567_8440_c24f02f2eca5' := D75e27f0Ebab45678440C24f02f2eca5,
          'cf3962b1_a98e_4ade_ae25_cdc388e7feb3' := Cf3962b1A98e4adeAe25Cdc388e7feb3,
          '7cafedc5_17b8_4c1e_8b6f_0d9bc1b4b7bc' := 7cafedc517b84c1e8b6f0d9bc1b4b7bc,
          '714a918a_7935_4b4f_82c3_afbadcd9e59b' := 714a918a79354b4f82c3Afbadcd9e59b,
          '64a39300_b672_413b_9d8c_42175f7e84dd' := 64a39300B672413b9d8c42175f7e84dd,
          'ea6e632b_d8e1_420f_bd8f_ad50b067bad6' := Ea6e632bD8e1420fBd8fAd50b067bad6
        }) ->
    #{ 'd75e27f0-ebab-4567-8440-c24f02f2eca5' => D75e27f0Ebab45678440C24f02f2eca5,
       'cf3962b1-a98e-4ade-ae25-cdc388e7feb3' => Cf3962b1A98e4adeAe25Cdc388e7feb3,
       '7cafedc5-17b8-4c1e-8b6f-0d9bc1b4b7bc' => 7cafedc517b84c1e8b6f0d9bc1b4b7bc,
       '714a918a-7935-4b4f-82c3-afbadcd9e59b' => 714a918a79354b4f82c3Afbadcd9e59b,
       '64a39300-b672-413b-9d8c-42175f7e84dd' => 64a39300B672413b9d8c42175f7e84dd,
       'ea6e632b-d8e1-420f-bd8f-ad50b067bad6' => Ea6e632bD8e1420fBd8fAd50b067bad6
     }.
