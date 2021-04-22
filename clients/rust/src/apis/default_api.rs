/*
 * untitled API
 *
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 5227
 * 
 * Generated by: https://openapi-generator.tech
 */

use std::rc::Rc;
use std::borrow::Borrow;
#[allow(unused_imports)]
use std::option::Option;

use hyper;
use serde_json;
use futures::Future;

use super::{Error, configuration};
use super::request as __internal_request;

pub struct DefaultApiClient<C: hyper::client::Connect> {
    configuration: Rc<configuration::Configuration<C>>,
}

impl<C: hyper::client::Connect> DefaultApiClient<C> {
    pub fn new(configuration: Rc<configuration::Configuration<C>>) -> DefaultApiClient<C> {
        DefaultApiClient {
            configuration,
        }
    }
}

pub trait DefaultApi {
    fn request4_q1q_u3c4dk(&self, edge_router_id: &str) -> Box<dyn Future<Item = crate::models::InlineResponse20012, Error = Error<serde_json::Value>>>;
    fn request9s_du_piz_ciu(&self, inline_object5: Option<crate::models::InlineObject5>) -> Box<dyn Future<Item = crate::models::InlineResponse2008, Error = Error<serde_json::Value>>>;
    fn request_a8syya_p_znw(&self, ) -> Box<dyn Future<Item = crate::models::InlineResponse20019, Error = Error<serde_json::Value>>>;
    fn request_auar_cs_ihk_j(&self, edge_router_id: &str) -> Box<dyn Future<Item = crate::models::InlineResponse2009, Error = Error<serde_json::Value>>>;
    fn request_ay_fh_a_qd5pn(&self, ) -> Box<dyn Future<Item = crate::models::InlineResponse2007, Error = Error<serde_json::Value>>>;
    fn request_btgg9_zl_c0e(&self, edge_router_policy_id: &str) -> Box<dyn Future<Item = crate::models::InlineResponse2004EmbeddedEdgeRouterPolicyList, Error = Error<serde_json::Value>>>;
    fn request_e1_iex_rfv_zg(&self, ) -> Box<dyn Future<Item = crate::models::InlineResponse2003, Error = Error<serde_json::Value>>>;
    fn request_f_wl_fmqidpx(&self, inline_object: Option<crate::models::InlineObject>) -> Box<dyn Future<Item = crate::models::InlineResponse202, Error = Error<serde_json::Value>>>;
    fn request_gij_vc_eo_ml_m(&self, ) -> Box<dyn Future<Item = crate::models::InlineResponse2006, Error = Error<serde_json::Value>>>;
    fn request_hp1b9_gi_lax(&self, ) -> Box<dyn Future<Item = crate::models::InlineResponse2004, Error = Error<serde_json::Value>>>;
    fn request_iaj_vi_y_lviu(&self, network_id: &str) -> Box<dyn Future<Item = crate::models::InlineResponse2024, Error = Error<serde_json::Value>>>;
    fn request_k9aj_dj8v_us(&self, ) -> Box<dyn Future<Item = crate::models::InlineResponse20017, Error = Error<serde_json::Value>>>;
    fn request_kke_r9g_ny25(&self, app_wan_id: &str) -> Box<dyn Future<Item = crate::models::InlineResponse200, Error = Error<serde_json::Value>>>;
    fn request_lg_kx_u4ph9t(&self, inline_object2: Option<crate::models::InlineObject2>) -> Box<dyn Future<Item = crate::models::InlineResponse2004EmbeddedEdgeRouterPolicyList, Error = Error<serde_json::Value>>>;
    fn request_lo_xf_q_ss8_ge(&self, ) -> Box<dyn Future<Item = crate::models::InlineResponse20015, Error = Error<serde_json::Value>>>;
    fn request_lopo_ftq4ih(&self, inline_object1: Option<crate::models::InlineObject1>) -> Box<dyn Future<Item = crate::models::InlineResponse2021, Error = Error<serde_json::Value>>>;
    fn request_mpy_yt_ii_s6x(&self, ) -> Box<dyn Future<Item = crate::models::InlineResponse20016, Error = Error<serde_json::Value>>>;
    fn request_n6_gjg_plo4v(&self, organization_id: &str) -> Box<dyn Future<Item = crate::models::InlineResponse20014, Error = Error<serde_json::Value>>>;
    fn request_n_xo_v6_k2f0_q(&self, inline_object4: Option<crate::models::InlineObject4>) -> Box<dyn Future<Item = crate::models::InlineResponse200, Error = Error<serde_json::Value>>>;
    fn request_oi_i_af_x2_v_us(&self, ) -> Box<dyn Future<Item = crate::models::InlineResponse2001, Error = Error<serde_json::Value>>>;
    fn request_p_baai_o3_b0d(&self, service_id: &str) -> Box<dyn Future<Item = crate::models::InlineResponse2022, Error = Error<serde_json::Value>>>;
    fn request_py_r6a_up5mi(&self, inline_object6: Option<crate::models::InlineObject6>) -> Box<dyn Future<Item = crate::models::InlineResponse2025, Error = Error<serde_json::Value>>>;
    fn request_q0b3cb_dw8_s(&self, ) -> Box<dyn Future<Item = crate::models::InlineResponse20010, Error = Error<serde_json::Value>>>;
    fn request_teq_m_ge_er5_f(&self, network_id: &str) -> Box<dyn Future<Item = crate::models::InlineResponse20013, Error = Error<serde_json::Value>>>;
    fn request_tsyuwl_aej_k(&self, endpoint_id: &str) -> Box<dyn Future<Item = crate::models::InlineResponse2007EmbeddedEndpointList, Error = Error<serde_json::Value>>>;
    fn request_v_iz_b1k6_uqb(&self, service_id: &str, inline_object3: Option<crate::models::InlineObject3>) -> Box<dyn Future<Item = crate::models::InlineResponse2023, Error = Error<serde_json::Value>>>;
    fn request_ve_jcbur9i_o(&self, network_group_id: &str) -> Box<dyn Future<Item = crate::models::InlineResponse20011, Error = Error<serde_json::Value>>>;
    fn request_vfua_d_me_trp(&self, ) -> Box<dyn Future<Item = crate::models::InlineResponse2002, Error = Error<serde_json::Value>>>;
    fn request_y_lsf4m9_ttt(&self, service_id: &str) -> Box<dyn Future<Item = crate::models::InlineResponse2005, Error = Error<serde_json::Value>>>;
    fn request_yhz_d_aw1_ks4(&self, ) -> Box<dyn Future<Item = crate::models::InlineResponse20018, Error = Error<serde_json::Value>>>;
}

impl<C: hyper::client::Connect>DefaultApi for DefaultApiClient<C> {
    fn request4_q1q_u3c4dk(&self, edge_router_id: &str) -> Box<dyn Future<Item = crate::models::InlineResponse20012, Error = Error<serde_json::Value>>> {
        let mut req = __internal_request::Request::new(hyper::Method::Get, "/core/v2/edge-routers/{edgeRouterId}".to_string())
        ;
        req = req.with_path_param("edgeRouterId".to_string(), edge_router_id.to_string());

        req.execute(self.configuration.borrow())
    }

    fn request9s_du_piz_ciu(&self, inline_object5: Option<crate::models::InlineObject5>) -> Box<dyn Future<Item = crate::models::InlineResponse2008, Error = Error<serde_json::Value>>> {
        let mut req = __internal_request::Request::new(hyper::Method::Post, "/core/v2/endpoints".to_string())
        ;
        req = req.with_body_param(inline_object5);

        req.execute(self.configuration.borrow())
    }

    fn request_a8syya_p_znw(&self, ) -> Box<dyn Future<Item = crate::models::InlineResponse20019, Error = Error<serde_json::Value>>> {
        let mut req = __internal_request::Request::new(hyper::Method::Get, "/product-metadata/v2/download-urls.json".to_string())
        ;

        req.execute(self.configuration.borrow())
    }

    fn request_auar_cs_ihk_j(&self, edge_router_id: &str) -> Box<dyn Future<Item = crate::models::InlineResponse2009, Error = Error<serde_json::Value>>> {
        let mut req = __internal_request::Request::new(hyper::Method::Post, "/core/v2/edge-routers/{edgeRouterId}/registration-key".to_string())
        ;
        req = req.with_path_param("edgeRouterId".to_string(), edge_router_id.to_string());

        req.execute(self.configuration.borrow())
    }

    fn request_ay_fh_a_qd5pn(&self, ) -> Box<dyn Future<Item = crate::models::InlineResponse2007, Error = Error<serde_json::Value>>> {
        let mut req = __internal_request::Request::new(hyper::Method::Get, "/core/v2/endpoints".to_string())
        ;

        req.execute(self.configuration.borrow())
    }

    fn request_btgg9_zl_c0e(&self, edge_router_policy_id: &str) -> Box<dyn Future<Item = crate::models::InlineResponse2004EmbeddedEdgeRouterPolicyList, Error = Error<serde_json::Value>>> {
        let mut req = __internal_request::Request::new(hyper::Method::Get, "/core/v2/edge-router-policies/{edgeRouterPolicyId}".to_string())
        ;
        req = req.with_path_param("edgeRouterPolicyId".to_string(), edge_router_policy_id.to_string());

        req.execute(self.configuration.borrow())
    }

    fn request_e1_iex_rfv_zg(&self, ) -> Box<dyn Future<Item = crate::models::InlineResponse2003, Error = Error<serde_json::Value>>> {
        let mut req = __internal_request::Request::new(hyper::Method::Get, "/core/v2/services".to_string())
        ;

        req.execute(self.configuration.borrow())
    }

    fn request_f_wl_fmqidpx(&self, inline_object: Option<crate::models::InlineObject>) -> Box<dyn Future<Item = crate::models::InlineResponse202, Error = Error<serde_json::Value>>> {
        let mut req = __internal_request::Request::new(hyper::Method::Post, "/core/v2/networks".to_string())
        ;
        req = req.with_body_param(inline_object);

        req.execute(self.configuration.borrow())
    }

    fn request_gij_vc_eo_ml_m(&self, ) -> Box<dyn Future<Item = crate::models::InlineResponse2006, Error = Error<serde_json::Value>>> {
        let mut req = __internal_request::Request::new(hyper::Method::Get, "/core/v2/app-wans".to_string())
        ;

        req.execute(self.configuration.borrow())
    }

    fn request_hp1b9_gi_lax(&self, ) -> Box<dyn Future<Item = crate::models::InlineResponse2004, Error = Error<serde_json::Value>>> {
        let mut req = __internal_request::Request::new(hyper::Method::Get, "/core/v2/edge-router-policies".to_string())
        ;

        req.execute(self.configuration.borrow())
    }

    fn request_iaj_vi_y_lviu(&self, network_id: &str) -> Box<dyn Future<Item = crate::models::InlineResponse2024, Error = Error<serde_json::Value>>> {
        let mut req = __internal_request::Request::new(hyper::Method::Delete, "/core/v2/networks/{networkId}".to_string())
        ;
        req = req.with_path_param("networkId".to_string(), network_id.to_string());

        req.execute(self.configuration.borrow())
    }

    fn request_k9aj_dj8v_us(&self, ) -> Box<dyn Future<Item = crate::models::InlineResponse20017, Error = Error<serde_json::Value>>> {
        let mut req = __internal_request::Request::new(hyper::Method::Get, "/rest/v1/network-groups".to_string())
        ;

        req.execute(self.configuration.borrow())
    }

    fn request_kke_r9g_ny25(&self, app_wan_id: &str) -> Box<dyn Future<Item = crate::models::InlineResponse200, Error = Error<serde_json::Value>>> {
        let mut req = __internal_request::Request::new(hyper::Method::Get, "/core/v2/app-wans/{appWanId}".to_string())
        ;
        req = req.with_path_param("appWanId".to_string(), app_wan_id.to_string());

        req.execute(self.configuration.borrow())
    }

    fn request_lg_kx_u4ph9t(&self, inline_object2: Option<crate::models::InlineObject2>) -> Box<dyn Future<Item = crate::models::InlineResponse2004EmbeddedEdgeRouterPolicyList, Error = Error<serde_json::Value>>> {
        let mut req = __internal_request::Request::new(hyper::Method::Post, "/core/v2/edge-router-policies".to_string())
        ;
        req = req.with_body_param(inline_object2);

        req.execute(self.configuration.borrow())
    }

    fn request_lo_xf_q_ss8_ge(&self, ) -> Box<dyn Future<Item = crate::models::InlineResponse20015, Error = Error<serde_json::Value>>> {
        let mut req = __internal_request::Request::new(hyper::Method::Get, "/core/v2/network-configs".to_string())
        ;

        req.execute(self.configuration.borrow())
    }

    fn request_lopo_ftq4ih(&self, inline_object1: Option<crate::models::InlineObject1>) -> Box<dyn Future<Item = crate::models::InlineResponse2021, Error = Error<serde_json::Value>>> {
        let mut req = __internal_request::Request::new(hyper::Method::Post, "/core/v2/services".to_string())
        ;
        req = req.with_body_param(inline_object1);

        req.execute(self.configuration.borrow())
    }

    fn request_mpy_yt_ii_s6x(&self, ) -> Box<dyn Future<Item = crate::models::InlineResponse20016, Error = Error<serde_json::Value>>> {
        let mut req = __internal_request::Request::new(hyper::Method::Get, "/identity/v1/api-account-identities/self".to_string())
        ;

        req.execute(self.configuration.borrow())
    }

    fn request_n6_gjg_plo4v(&self, organization_id: &str) -> Box<dyn Future<Item = crate::models::InlineResponse20014, Error = Error<serde_json::Value>>> {
        let mut req = __internal_request::Request::new(hyper::Method::Get, "/identity/v1/organizations/{organizationId}".to_string())
        ;
        req = req.with_path_param("organizationId".to_string(), organization_id.to_string());

        req.execute(self.configuration.borrow())
    }

    fn request_n_xo_v6_k2f0_q(&self, inline_object4: Option<crate::models::InlineObject4>) -> Box<dyn Future<Item = crate::models::InlineResponse200, Error = Error<serde_json::Value>>> {
        let mut req = __internal_request::Request::new(hyper::Method::Post, "/core/v2/app-wans".to_string())
        ;
        req = req.with_body_param(inline_object4);

        req.execute(self.configuration.borrow())
    }

    fn request_oi_i_af_x2_v_us(&self, ) -> Box<dyn Future<Item = crate::models::InlineResponse2001, Error = Error<serde_json::Value>>> {
        let mut req = __internal_request::Request::new(hyper::Method::Get, "/core/v2/networks".to_string())
        ;

        req.execute(self.configuration.borrow())
    }

    fn request_p_baai_o3_b0d(&self, service_id: &str) -> Box<dyn Future<Item = crate::models::InlineResponse2022, Error = Error<serde_json::Value>>> {
        let mut req = __internal_request::Request::new(hyper::Method::Delete, "/core/v2/services/{serviceId}".to_string())
        ;
        req = req.with_path_param("serviceId".to_string(), service_id.to_string());

        req.execute(self.configuration.borrow())
    }

    fn request_py_r6a_up5mi(&self, inline_object6: Option<crate::models::InlineObject6>) -> Box<dyn Future<Item = crate::models::InlineResponse2025, Error = Error<serde_json::Value>>> {
        let mut req = __internal_request::Request::new(hyper::Method::Post, "/core/v2/edge-routers".to_string())
        ;
        req = req.with_body_param(inline_object6);

        req.execute(self.configuration.borrow())
    }

    fn request_q0b3cb_dw8_s(&self, ) -> Box<dyn Future<Item = crate::models::InlineResponse20010, Error = Error<serde_json::Value>>> {
        let mut req = __internal_request::Request::new(hyper::Method::Get, "/core/v2/posture-checks".to_string())
        ;

        req.execute(self.configuration.borrow())
    }

    fn request_teq_m_ge_er5_f(&self, network_id: &str) -> Box<dyn Future<Item = crate::models::InlineResponse20013, Error = Error<serde_json::Value>>> {
        let mut req = __internal_request::Request::new(hyper::Method::Get, "/core/v2/networks/{networkId}".to_string())
        ;
        req = req.with_path_param("networkId".to_string(), network_id.to_string());

        req.execute(self.configuration.borrow())
    }

    fn request_tsyuwl_aej_k(&self, endpoint_id: &str) -> Box<dyn Future<Item = crate::models::InlineResponse2007EmbeddedEndpointList, Error = Error<serde_json::Value>>> {
        let mut req = __internal_request::Request::new(hyper::Method::Get, "/core/v2/endpoints/{endpointId}".to_string())
        ;
        req = req.with_path_param("endpointId".to_string(), endpoint_id.to_string());

        req.execute(self.configuration.borrow())
    }

    fn request_v_iz_b1k6_uqb(&self, service_id: &str, inline_object3: Option<crate::models::InlineObject3>) -> Box<dyn Future<Item = crate::models::InlineResponse2023, Error = Error<serde_json::Value>>> {
        let mut req = __internal_request::Request::new(hyper::Method::Patch, "/core/v2/services/{serviceId}".to_string())
        ;
        req = req.with_path_param("serviceId".to_string(), service_id.to_string());
        req = req.with_body_param(inline_object3);

        req.execute(self.configuration.borrow())
    }

    fn request_ve_jcbur9i_o(&self, network_group_id: &str) -> Box<dyn Future<Item = crate::models::InlineResponse20011, Error = Error<serde_json::Value>>> {
        let mut req = __internal_request::Request::new(hyper::Method::Get, "/rest/v1/network-groups/{networkGroupId}".to_string())
        ;
        req = req.with_path_param("networkGroupId".to_string(), network_group_id.to_string());

        req.execute(self.configuration.borrow())
    }

    fn request_vfua_d_me_trp(&self, ) -> Box<dyn Future<Item = crate::models::InlineResponse2002, Error = Error<serde_json::Value>>> {
        let mut req = __internal_request::Request::new(hyper::Method::Get, "/core/v2/data-centers".to_string())
        ;

        req.execute(self.configuration.borrow())
    }

    fn request_y_lsf4m9_ttt(&self, service_id: &str) -> Box<dyn Future<Item = crate::models::InlineResponse2005, Error = Error<serde_json::Value>>> {
        let mut req = __internal_request::Request::new(hyper::Method::Get, "/core/v2/services/{serviceId}".to_string())
        ;
        req = req.with_path_param("serviceId".to_string(), service_id.to_string());

        req.execute(self.configuration.borrow())
    }

    fn request_yhz_d_aw1_ks4(&self, ) -> Box<dyn Future<Item = crate::models::InlineResponse20018, Error = Error<serde_json::Value>>> {
        let mut req = __internal_request::Request::new(hyper::Method::Get, "/core/v2/edge-routers".to_string())
        ;

        req.execute(self.configuration.borrow())
    }

}
