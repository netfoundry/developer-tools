-module(openapi_default_api).

-export([request4_q1q_u3c4dk/2, request4_q1q_u3c4dk/3,
         request9s_du_piz_ciu/2, request9s_du_piz_ciu/3,
         request_a8syya_p_znw/1, request_a8syya_p_znw/2,
         request_auar_cs_ihk_j/2, request_auar_cs_ihk_j/3,
         request_ay_fh_a_qd5pn/1, request_ay_fh_a_qd5pn/2,
         request_btgg9_zl_c0e/2, request_btgg9_zl_c0e/3,
         request_e1_iex_rfv_zg/1, request_e1_iex_rfv_zg/2,
         request_f_wl_fmqidpx/2, request_f_wl_fmqidpx/3,
         request_gij_vc_eo_ml_m/1, request_gij_vc_eo_ml_m/2,
         request_hp1b9_gi_lax/1, request_hp1b9_gi_lax/2,
         request_iaj_vi_y_lviu/2, request_iaj_vi_y_lviu/3,
         request_k9aj_dj8v_us/1, request_k9aj_dj8v_us/2,
         request_kke_r9g_ny25/2, request_kke_r9g_ny25/3,
         request_lg_kx_u4ph9t/2, request_lg_kx_u4ph9t/3,
         request_lo_xf_q_ss8_ge/1, request_lo_xf_q_ss8_ge/2,
         request_lopo_ftq4ih/2, request_lopo_ftq4ih/3,
         request_mpy_yt_ii_s6x/1, request_mpy_yt_ii_s6x/2,
         request_n6_gjg_plo4v/2, request_n6_gjg_plo4v/3,
         request_n_xo_v6_k2f0_q/2, request_n_xo_v6_k2f0_q/3,
         request_oi_i_af_x2_v_us/1, request_oi_i_af_x2_v_us/2,
         request_p_baai_o3_b0d/2, request_p_baai_o3_b0d/3,
         request_py_r6a_up5mi/2, request_py_r6a_up5mi/3,
         request_q0b3cb_dw8_s/1, request_q0b3cb_dw8_s/2,
         request_teq_m_ge_er5_f/2, request_teq_m_ge_er5_f/3,
         request_tsyuwl_aej_k/2, request_tsyuwl_aej_k/3,
         request_v_iz_b1k6_uqb/3, request_v_iz_b1k6_uqb/4,
         request_ve_jcbur9i_o/2, request_ve_jcbur9i_o/3,
         request_vfua_d_me_trp/1, request_vfua_d_me_trp/2,
         request_y_lsf4m9_ttt/2, request_y_lsf4m9_ttt/3,
         request_yhz_d_aw1_ks4/1, request_yhz_d_aw1_ks4/2]).

-define(BASE_URL, "").

%% @doc Get an Edge Router
%% 
-spec request4_q1q_u3c4dk(ctx:ctx(), binary()) -> {ok, openapi_inline_response_200_12:openapi_inline_response_200_12(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
request4_q1q_u3c4dk(Ctx, EdgeRouterId) ->
    request4_q1q_u3c4dk(Ctx, EdgeRouterId, #{}).

-spec request4_q1q_u3c4dk(ctx:ctx(), binary(), maps:map()) -> {ok, openapi_inline_response_200_12:openapi_inline_response_200_12(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
request4_q1q_u3c4dk(Ctx, EdgeRouterId, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(kuberl, config, #{})),

    Method = get,
    Path = ["/core/v2/edge-routers/", EdgeRouterId, ""],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, [?BASE_URL, Path], QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Create an Endpoint
%% 
-spec request9s_du_piz_ciu(ctx:ctx()) -> {ok, openapi_inline_response_200_8:openapi_inline_response_200_8(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
request9s_du_piz_ciu(Ctx) ->
    request9s_du_piz_ciu(Ctx, #{}).

-spec request9s_du_piz_ciu(ctx:ctx(), maps:map()) -> {ok, openapi_inline_response_200_8:openapi_inline_response_200_8(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
request9s_du_piz_ciu(Ctx, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(kuberl, config, #{})),

    Method = post,
    Path = ["/core/v2/endpoints"],
    QS = [],
    Headers = [],
    Body1 = OpenapiInlineObject5,
    ContentTypeHeader = openapi_utils:select_header_content_type([<<"application/json">>]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, [?BASE_URL, Path], QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Get the list of Network product versions
%% 
-spec request_a8syya_p_znw(ctx:ctx()) -> {ok, openapi_inline_response_200_19:openapi_inline_response_200_19(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
request_a8syya_p_znw(Ctx) ->
    request_a8syya_p_znw(Ctx, #{}).

-spec request_a8syya_p_znw(ctx:ctx(), maps:map()) -> {ok, openapi_inline_response_200_19:openapi_inline_response_200_19(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
request_a8syya_p_znw(Ctx, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(kuberl, config, #{})),

    Method = get,
    Path = ["/product-metadata/v2/download-urls.json"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, [?BASE_URL, Path], QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Get the registration information for an Edge Router
%% 
-spec request_auar_cs_ihk_j(ctx:ctx(), binary()) -> {ok, openapi_inline_response_200_9:openapi_inline_response_200_9(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
request_auar_cs_ihk_j(Ctx, EdgeRouterId) ->
    request_auar_cs_ihk_j(Ctx, EdgeRouterId, #{}).

-spec request_auar_cs_ihk_j(ctx:ctx(), binary(), maps:map()) -> {ok, openapi_inline_response_200_9:openapi_inline_response_200_9(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
request_auar_cs_ihk_j(Ctx, EdgeRouterId, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(kuberl, config, #{})),

    Method = post,
    Path = ["/core/v2/edge-routers/", EdgeRouterId, "/registration-key"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, [?BASE_URL, Path], QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Get an Endpoint
%% 
-spec request_ay_fh_a_qd5pn(ctx:ctx()) -> {ok, openapi_inline_response_200_7:openapi_inline_response_200_7(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
request_ay_fh_a_qd5pn(Ctx) ->
    request_ay_fh_a_qd5pn(Ctx, #{}).

-spec request_ay_fh_a_qd5pn(ctx:ctx(), maps:map()) -> {ok, openapi_inline_response_200_7:openapi_inline_response_200_7(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
request_ay_fh_a_qd5pn(Ctx, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(kuberl, config, #{})),

    Method = get,
    Path = ["/core/v2/endpoints"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, [?BASE_URL, Path], QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Get an Edge Router Policy
%% 
-spec request_btgg9_zl_c0e(ctx:ctx(), binary()) -> {ok, openapi_inline_response_200_4__embedded_edge_router_policy_list:openapi_inline_response_200_4__embedded_edge_router_policy_list(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
request_btgg9_zl_c0e(Ctx, EdgeRouterPolicyId) ->
    request_btgg9_zl_c0e(Ctx, EdgeRouterPolicyId, #{}).

-spec request_btgg9_zl_c0e(ctx:ctx(), binary(), maps:map()) -> {ok, openapi_inline_response_200_4__embedded_edge_router_policy_list:openapi_inline_response_200_4__embedded_edge_router_policy_list(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
request_btgg9_zl_c0e(Ctx, EdgeRouterPolicyId, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(kuberl, config, #{})),

    Method = get,
    Path = ["/core/v2/edge-router-policies/", EdgeRouterPolicyId, ""],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, [?BASE_URL, Path], QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Get the list of Services
%% 
-spec request_e1_iex_rfv_zg(ctx:ctx()) -> {ok, openapi_inline_response_200_3:openapi_inline_response_200_3(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
request_e1_iex_rfv_zg(Ctx) ->
    request_e1_iex_rfv_zg(Ctx, #{}).

-spec request_e1_iex_rfv_zg(ctx:ctx(), maps:map()) -> {ok, openapi_inline_response_200_3:openapi_inline_response_200_3(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
request_e1_iex_rfv_zg(Ctx, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(kuberl, config, #{})),

    Method = get,
    Path = ["/core/v2/services"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, [?BASE_URL, Path], QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Create a Network
%% 
-spec request_f_wl_fmqidpx(ctx:ctx()) -> {ok, openapi_inline_response_202:openapi_inline_response_202(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
request_f_wl_fmqidpx(Ctx) ->
    request_f_wl_fmqidpx(Ctx, #{}).

-spec request_f_wl_fmqidpx(ctx:ctx(), maps:map()) -> {ok, openapi_inline_response_202:openapi_inline_response_202(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
request_f_wl_fmqidpx(Ctx, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(kuberl, config, #{})),

    Method = post,
    Path = ["/core/v2/networks"],
    QS = [],
    Headers = [],
    Body1 = OpenapiInlineObject,
    ContentTypeHeader = openapi_utils:select_header_content_type([<<"application/json">>]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, [?BASE_URL, Path], QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Get the list of AppWANs
%% 
-spec request_gij_vc_eo_ml_m(ctx:ctx()) -> {ok, openapi_inline_response_200_6:openapi_inline_response_200_6(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
request_gij_vc_eo_ml_m(Ctx) ->
    request_gij_vc_eo_ml_m(Ctx, #{}).

-spec request_gij_vc_eo_ml_m(ctx:ctx(), maps:map()) -> {ok, openapi_inline_response_200_6:openapi_inline_response_200_6(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
request_gij_vc_eo_ml_m(Ctx, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(kuberl, config, #{})),

    Method = get,
    Path = ["/core/v2/app-wans"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, [?BASE_URL, Path], QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Get an Edge Router Policy
%% 
-spec request_hp1b9_gi_lax(ctx:ctx()) -> {ok, openapi_inline_response_200_4:openapi_inline_response_200_4(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
request_hp1b9_gi_lax(Ctx) ->
    request_hp1b9_gi_lax(Ctx, #{}).

-spec request_hp1b9_gi_lax(ctx:ctx(), maps:map()) -> {ok, openapi_inline_response_200_4:openapi_inline_response_200_4(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
request_hp1b9_gi_lax(Ctx, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(kuberl, config, #{})),

    Method = get,
    Path = ["/core/v2/edge-router-policies"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, [?BASE_URL, Path], QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Delete a Network
%% 
-spec request_iaj_vi_y_lviu(ctx:ctx(), binary()) -> {ok, openapi_inline_response_202_4:openapi_inline_response_202_4(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
request_iaj_vi_y_lviu(Ctx, NetworkId) ->
    request_iaj_vi_y_lviu(Ctx, NetworkId, #{}).

-spec request_iaj_vi_y_lviu(ctx:ctx(), binary(), maps:map()) -> {ok, openapi_inline_response_202_4:openapi_inline_response_202_4(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
request_iaj_vi_y_lviu(Ctx, NetworkId, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(kuberl, config, #{})),

    Method = delete,
    Path = ["/core/v2/networks/", NetworkId, ""],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, [?BASE_URL, Path], QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Get the list of Network Groups
%% 
-spec request_k9aj_dj8v_us(ctx:ctx()) -> {ok, openapi_inline_response_200_17:openapi_inline_response_200_17(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
request_k9aj_dj8v_us(Ctx) ->
    request_k9aj_dj8v_us(Ctx, #{}).

-spec request_k9aj_dj8v_us(ctx:ctx(), maps:map()) -> {ok, openapi_inline_response_200_17:openapi_inline_response_200_17(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
request_k9aj_dj8v_us(Ctx, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(kuberl, config, #{})),

    Method = get,
    Path = ["/rest/v1/network-groups"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, [?BASE_URL, Path], QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Get an AppWAN
%% 
-spec request_kke_r9g_ny25(ctx:ctx(), binary()) -> {ok, openapi_inline_response_200:openapi_inline_response_200(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
request_kke_r9g_ny25(Ctx, AppWanId) ->
    request_kke_r9g_ny25(Ctx, AppWanId, #{}).

-spec request_kke_r9g_ny25(ctx:ctx(), binary(), maps:map()) -> {ok, openapi_inline_response_200:openapi_inline_response_200(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
request_kke_r9g_ny25(Ctx, AppWanId, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(kuberl, config, #{})),

    Method = get,
    Path = ["/core/v2/app-wans/", AppWanId, ""],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, [?BASE_URL, Path], QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Create an Edge Router Policy
%% 
-spec request_lg_kx_u4ph9t(ctx:ctx()) -> {ok, openapi_inline_response_200_4__embedded_edge_router_policy_list:openapi_inline_response_200_4__embedded_edge_router_policy_list(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
request_lg_kx_u4ph9t(Ctx) ->
    request_lg_kx_u4ph9t(Ctx, #{}).

-spec request_lg_kx_u4ph9t(ctx:ctx(), maps:map()) -> {ok, openapi_inline_response_200_4__embedded_edge_router_policy_list:openapi_inline_response_200_4__embedded_edge_router_policy_list(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
request_lg_kx_u4ph9t(Ctx, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(kuberl, config, #{})),

    Method = post,
    Path = ["/core/v2/edge-router-policies"],
    QS = [],
    Headers = [],
    Body1 = OpenapiInlineObject2,
    ContentTypeHeader = openapi_utils:select_header_content_type([<<"application/json">>]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, [?BASE_URL, Path], QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Get a Network Configuration profile
%% e.g. small, medium, large
-spec request_lo_xf_q_ss8_ge(ctx:ctx()) -> {ok, openapi_inline_response_200_15:openapi_inline_response_200_15(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
request_lo_xf_q_ss8_ge(Ctx) ->
    request_lo_xf_q_ss8_ge(Ctx, #{}).

-spec request_lo_xf_q_ss8_ge(ctx:ctx(), maps:map()) -> {ok, openapi_inline_response_200_15:openapi_inline_response_200_15(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
request_lo_xf_q_ss8_ge(Ctx, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(kuberl, config, #{})),

    Method = get,
    Path = ["/core/v2/network-configs"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, [?BASE_URL, Path], QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Create a Service
%% 
-spec request_lopo_ftq4ih(ctx:ctx()) -> {ok, openapi_inline_response_202_1:openapi_inline_response_202_1(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
request_lopo_ftq4ih(Ctx) ->
    request_lopo_ftq4ih(Ctx, #{}).

-spec request_lopo_ftq4ih(ctx:ctx(), maps:map()) -> {ok, openapi_inline_response_202_1:openapi_inline_response_202_1(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
request_lopo_ftq4ih(Ctx, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(kuberl, config, #{})),

    Method = post,
    Path = ["/core/v2/services"],
    QS = [],
    Headers = [],
    Body1 = OpenapiInlineObject1,
    ContentTypeHeader = openapi_utils:select_header_content_type([<<"application/json">>]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, [?BASE_URL, Path], QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Get the identity of the caller's API account
%% 
-spec request_mpy_yt_ii_s6x(ctx:ctx()) -> {ok, openapi_inline_response_200_16:openapi_inline_response_200_16(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
request_mpy_yt_ii_s6x(Ctx) ->
    request_mpy_yt_ii_s6x(Ctx, #{}).

-spec request_mpy_yt_ii_s6x(ctx:ctx(), maps:map()) -> {ok, openapi_inline_response_200_16:openapi_inline_response_200_16(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
request_mpy_yt_ii_s6x(Ctx, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(kuberl, config, #{})),

    Method = get,
    Path = ["/identity/v1/api-account-identities/self"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, [?BASE_URL, Path], QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Get an Organization
%% 
-spec request_n6_gjg_plo4v(ctx:ctx(), binary()) -> {ok, openapi_inline_response_200_14:openapi_inline_response_200_14(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
request_n6_gjg_plo4v(Ctx, OrganizationId) ->
    request_n6_gjg_plo4v(Ctx, OrganizationId, #{}).

-spec request_n6_gjg_plo4v(ctx:ctx(), binary(), maps:map()) -> {ok, openapi_inline_response_200_14:openapi_inline_response_200_14(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
request_n6_gjg_plo4v(Ctx, OrganizationId, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(kuberl, config, #{})),

    Method = get,
    Path = ["/identity/v1/organizations/", OrganizationId, ""],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, [?BASE_URL, Path], QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Create an AppWAN
%% 
-spec request_n_xo_v6_k2f0_q(ctx:ctx()) -> {ok, openapi_inline_response_200:openapi_inline_response_200(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
request_n_xo_v6_k2f0_q(Ctx) ->
    request_n_xo_v6_k2f0_q(Ctx, #{}).

-spec request_n_xo_v6_k2f0_q(ctx:ctx(), maps:map()) -> {ok, openapi_inline_response_200:openapi_inline_response_200(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
request_n_xo_v6_k2f0_q(Ctx, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(kuberl, config, #{})),

    Method = post,
    Path = ["/core/v2/app-wans"],
    QS = [],
    Headers = [],
    Body1 = OpenapiInlineObject4,
    ContentTypeHeader = openapi_utils:select_header_content_type([<<"application/json">>]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, [?BASE_URL, Path], QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Get the list of Networks
%% 
-spec request_oi_i_af_x2_v_us(ctx:ctx()) -> {ok, openapi_inline_response_200_1:openapi_inline_response_200_1(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
request_oi_i_af_x2_v_us(Ctx) ->
    request_oi_i_af_x2_v_us(Ctx, #{}).

-spec request_oi_i_af_x2_v_us(ctx:ctx(), maps:map()) -> {ok, openapi_inline_response_200_1:openapi_inline_response_200_1(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
request_oi_i_af_x2_v_us(Ctx, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(kuberl, config, #{})),

    Method = get,
    Path = ["/core/v2/networks"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, [?BASE_URL, Path], QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Delete a Service
%% 
-spec request_p_baai_o3_b0d(ctx:ctx(), binary()) -> {ok, openapi_inline_response_202_2:openapi_inline_response_202_2(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
request_p_baai_o3_b0d(Ctx, ServiceId) ->
    request_p_baai_o3_b0d(Ctx, ServiceId, #{}).

-spec request_p_baai_o3_b0d(ctx:ctx(), binary(), maps:map()) -> {ok, openapi_inline_response_202_2:openapi_inline_response_202_2(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
request_p_baai_o3_b0d(Ctx, ServiceId, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(kuberl, config, #{})),

    Method = delete,
    Path = ["/core/v2/services/", ServiceId, ""],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, [?BASE_URL, Path], QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Create an Edge Router
%% 
-spec request_py_r6a_up5mi(ctx:ctx()) -> {ok, openapi_inline_response_202_5:openapi_inline_response_202_5(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
request_py_r6a_up5mi(Ctx) ->
    request_py_r6a_up5mi(Ctx, #{}).

-spec request_py_r6a_up5mi(ctx:ctx(), maps:map()) -> {ok, openapi_inline_response_202_5:openapi_inline_response_202_5(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
request_py_r6a_up5mi(Ctx, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(kuberl, config, #{})),

    Method = post,
    Path = ["/core/v2/edge-routers"],
    QS = [],
    Headers = [],
    Body1 = OpenapiInlineObject6,
    ContentTypeHeader = openapi_utils:select_header_content_type([<<"application/json">>]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, [?BASE_URL, Path], QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Get the list of Posture Checks
%% 
-spec request_q0b3cb_dw8_s(ctx:ctx()) -> {ok, openapi_inline_response_200_10:openapi_inline_response_200_10(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
request_q0b3cb_dw8_s(Ctx) ->
    request_q0b3cb_dw8_s(Ctx, #{}).

-spec request_q0b3cb_dw8_s(ctx:ctx(), maps:map()) -> {ok, openapi_inline_response_200_10:openapi_inline_response_200_10(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
request_q0b3cb_dw8_s(Ctx, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(kuberl, config, #{})),

    Method = get,
    Path = ["/core/v2/posture-checks"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, [?BASE_URL, Path], QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Get a Network
%% 
-spec request_teq_m_ge_er5_f(ctx:ctx(), binary()) -> {ok, openapi_inline_response_200_13:openapi_inline_response_200_13(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
request_teq_m_ge_er5_f(Ctx, NetworkId) ->
    request_teq_m_ge_er5_f(Ctx, NetworkId, #{}).

-spec request_teq_m_ge_er5_f(ctx:ctx(), binary(), maps:map()) -> {ok, openapi_inline_response_200_13:openapi_inline_response_200_13(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
request_teq_m_ge_er5_f(Ctx, NetworkId, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(kuberl, config, #{})),

    Method = get,
    Path = ["/core/v2/networks/", NetworkId, ""],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, [?BASE_URL, Path], QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Get an Endpoint
%% 
-spec request_tsyuwl_aej_k(ctx:ctx(), binary()) -> {ok, openapi_inline_response_200_7__embedded_endpoint_list:openapi_inline_response_200_7__embedded_endpoint_list(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
request_tsyuwl_aej_k(Ctx, EndpointId) ->
    request_tsyuwl_aej_k(Ctx, EndpointId, #{}).

-spec request_tsyuwl_aej_k(ctx:ctx(), binary(), maps:map()) -> {ok, openapi_inline_response_200_7__embedded_endpoint_list:openapi_inline_response_200_7__embedded_endpoint_list(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
request_tsyuwl_aej_k(Ctx, EndpointId, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(kuberl, config, #{})),

    Method = get,
    Path = ["/core/v2/endpoints/", EndpointId, ""],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, [?BASE_URL, Path], QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Change some properties of a Service
%% 
-spec request_v_iz_b1k6_uqb(ctx:ctx(), binary()) -> {ok, openapi_inline_response_202_3:openapi_inline_response_202_3(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
request_v_iz_b1k6_uqb(Ctx, ServiceId) ->
    request_v_iz_b1k6_uqb(Ctx, ServiceId, #{}).

-spec request_v_iz_b1k6_uqb(ctx:ctx(), binary(), maps:map()) -> {ok, openapi_inline_response_202_3:openapi_inline_response_202_3(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
request_v_iz_b1k6_uqb(Ctx, ServiceId, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(kuberl, config, #{})),

    Method = patch,
    Path = ["/core/v2/services/", ServiceId, ""],
    QS = [],
    Headers = [],
    Body1 = OpenapiInlineObject3,
    ContentTypeHeader = openapi_utils:select_header_content_type([<<"application/json">>]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, [?BASE_URL, Path], QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Get a Network Group
%% 
-spec request_ve_jcbur9i_o(ctx:ctx(), binary()) -> {ok, openapi_inline_response_200_11:openapi_inline_response_200_11(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
request_ve_jcbur9i_o(Ctx, NetworkGroupId) ->
    request_ve_jcbur9i_o(Ctx, NetworkGroupId, #{}).

-spec request_ve_jcbur9i_o(ctx:ctx(), binary(), maps:map()) -> {ok, openapi_inline_response_200_11:openapi_inline_response_200_11(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
request_ve_jcbur9i_o(Ctx, NetworkGroupId, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(kuberl, config, #{})),

    Method = get,
    Path = ["/rest/v1/network-groups/", NetworkGroupId, ""],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, [?BASE_URL, Path], QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Get the list of data centers
%% 
-spec request_vfua_d_me_trp(ctx:ctx()) -> {ok, openapi_inline_response_200_2:openapi_inline_response_200_2(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
request_vfua_d_me_trp(Ctx) ->
    request_vfua_d_me_trp(Ctx, #{}).

-spec request_vfua_d_me_trp(ctx:ctx(), maps:map()) -> {ok, openapi_inline_response_200_2:openapi_inline_response_200_2(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
request_vfua_d_me_trp(Ctx, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(kuberl, config, #{})),

    Method = get,
    Path = ["/core/v2/data-centers"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, [?BASE_URL, Path], QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Get a Service
%% 
-spec request_y_lsf4m9_ttt(ctx:ctx(), binary()) -> {ok, openapi_inline_response_200_5:openapi_inline_response_200_5(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
request_y_lsf4m9_ttt(Ctx, ServiceId) ->
    request_y_lsf4m9_ttt(Ctx, ServiceId, #{}).

-spec request_y_lsf4m9_ttt(ctx:ctx(), binary(), maps:map()) -> {ok, openapi_inline_response_200_5:openapi_inline_response_200_5(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
request_y_lsf4m9_ttt(Ctx, ServiceId, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(kuberl, config, #{})),

    Method = get,
    Path = ["/core/v2/services/", ServiceId, ""],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, [?BASE_URL, Path], QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Get an Edge Router
%% 
-spec request_yhz_d_aw1_ks4(ctx:ctx()) -> {ok, openapi_inline_response_200_18:openapi_inline_response_200_18(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
request_yhz_d_aw1_ks4(Ctx) ->
    request_yhz_d_aw1_ks4(Ctx, #{}).

-spec request_yhz_d_aw1_ks4(ctx:ctx(), maps:map()) -> {ok, openapi_inline_response_200_18:openapi_inline_response_200_18(), openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
request_yhz_d_aw1_ks4(Ctx, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(kuberl, config, #{})),

    Method = get,
    Path = ["/core/v2/edge-routers"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, [?BASE_URL, Path], QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).


