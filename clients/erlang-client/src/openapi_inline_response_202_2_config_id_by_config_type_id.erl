-module(openapi_inline_response_202_2_config_id_by_config_type_id).

-export([encode/1]).

-export_type([openapi_inline_response_202_2_config_id_by_config_type_id/0]).

-type openapi_inline_response_202_2_config_id_by_config_type_id() ::
    #{ 'aca7f705_9f00_4ff6_8b86_63a4d44bde8a' => binary(),
       '6cd51ae0_cfe4_499d_88d8_d02a9e18b25f' => binary(),
       'd28725c0_9771_47d7_a9da_e408bd0adf4e' => binary(),
       '888d6565_4359_4d91_b38d_0a24124e4456' => binary(),
       'feb075cd_dd2b_47c5_922c_86ef3b06fb16' => binary()
     }.

encode(#{ 'aca7f705_9f00_4ff6_8b86_63a4d44bde8a' := Aca7f7059f004ff68b8663a4d44bde8a,
          '6cd51ae0_cfe4_499d_88d8_d02a9e18b25f' := 6cd51ae0Cfe4499d88d8D02a9e18b25f,
          'd28725c0_9771_47d7_a9da_e408bd0adf4e' := D28725c0977147d7A9daE408bd0adf4e,
          '888d6565_4359_4d91_b38d_0a24124e4456' := 888d656543594d91B38d0a24124e4456,
          'feb075cd_dd2b_47c5_922c_86ef3b06fb16' := Feb075cdDd2b47c5922c86ef3b06fb16
        }) ->
    #{ 'aca7f705-9f00-4ff6-8b86-63a4d44bde8a' => Aca7f7059f004ff68b8663a4d44bde8a,
       '6cd51ae0-cfe4-499d-88d8-d02a9e18b25f' => 6cd51ae0Cfe4499d88d8D02a9e18b25f,
       'd28725c0-9771-47d7-a9da-e408bd0adf4e' => D28725c0977147d7A9daE408bd0adf4e,
       '888d6565-4359-4d91-b38d-0a24124e4456' => 888d656543594d91B38d0a24124e4456,
       'feb075cd-dd2b-47c5-922c-86ef3b06fb16' => Feb075cdDd2b47c5922c86ef3b06fb16
     }.
