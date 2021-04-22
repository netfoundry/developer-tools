(ns untitled-api.api.default
  (:require [untitled-api.core :refer [call-api check-required-params with-collection-format *api-context*]]
            [clojure.spec.alpha :as s]
            [spec-tools.core :as st]
            [orchestra.core :refer [defn-spec]]
            [untitled-api.specs.inline-response-200-1-links :refer :all]
            [untitled-api.specs.inline-response-200-19-7-3-4 :refer :all]
            [untitled-api.specs.inline-response-202-4-network-controller :refer :all]
            [untitled-api.specs.inline-response-200-3-embedded-model :refer :all]
            [untitled-api.specs.inline-response-200-7-embedded :refer :all]
            [untitled-api.specs.inline-response-200-4-embedded :refer :all]
            [untitled-api.specs.-core-v2-services-service-id-model-server-egress :refer :all]
            [untitled-api.specs.inline-response-200-7-embedded-endpoint-list :refer :all]
            [untitled-api.specs.inline-response-500 :refer :all]
            [untitled-api.specs.inline-response-202-4-links :refer :all]
            [untitled-api.specs.inline-response-200-17-links :refer :all]
            [untitled-api.specs.inline-response-200-1-page :refer :all]
            [untitled-api.specs.inline-response-200-4-embedded-edge-router-policy-list :refer :all]
            [untitled-api.specs.inline-response-200-1-embedded :refer :all]
            [untitled-api.specs.inline-response-202-3-model :refer :all]
            [untitled-api.specs.inline-response-200-14-updated-at :refer :all]
            [untitled-api.specs.inline-response-200-17-embedded-organizations :refer :all]
            [untitled-api.specs.inline-response-200-18-embedded :refer :all]
            [untitled-api.specs.-core-v2-services-service-id-model-client-ingress :refer :all]
            [untitled-api.specs.-core-v2-services-model-client-ingress :refer :all]
            [untitled-api.specs.-core-v2-services-model :refer :all]
            [untitled-api.specs.inline-object :refer :all]
            [untitled-api.specs.inline-response-200-15-embedded-network-config-metadata-list :refer :all]
            [untitled-api.specs.-core-v2-services-model-server-egress :refer :all]
            [untitled-api.specs.inline-response-202-1-links :refer :all]
            [untitled-api.specs.-core-v2-services-service-id-model :refer :all]
            [untitled-api.specs.inline-response-200-5-config-id-by-config-type-id :refer :all]
            [untitled-api.specs.inline-response-200-3-embedded-config-id-by-config-type-id :refer :all]
            [untitled-api.specs.inline-response-200-1-links-self :refer :all]
            [untitled-api.specs.inline-response-200-19-7-1-0 :refer :all]
            [untitled-api.specs.inline-response-202-links :refer :all]
            [untitled-api.specs.inline-response-200-links-network :refer :all]
            [untitled-api.specs.inline-response-200-2-embedded-links :refer :all]
            [untitled-api.specs.inline-response-200-19-7-3-16 :refer :all]
            [untitled-api.specs.-core-v2-services-model-client-ingress-ports :refer :all]
            [untitled-api.specs.inline-response-200-3-embedded-model-server-egress :refer :all]
            [untitled-api.specs.inline-response-200-links-self :refer :all]
            [untitled-api.specs.inline-response-200-3-embedded-model-client-ingress :refer :all]
            [untitled-api.specs.inline-response-200-15-embedded :refer :all]
            [untitled-api.specs.inline-response-200-2 :refer :all]
            [untitled-api.specs.inline-response-200-3-embedded-model-server-egress-1 :refer :all]
            [untitled-api.specs.inline-response-200-1 :refer :all]
            [untitled-api.specs.inline-response-202-2-config-id-by-config-type-id :refer :all]
            [untitled-api.specs.inline-response-200-3-embedded :refer :all]
            [untitled-api.specs.inline-response-200-1-embedded-links :refer :all]
            [untitled-api.specs.-core-v2-services-model-edge-router-hosts :refer :all]
            [untitled-api.specs.inline-object-3 :refer :all]
            [untitled-api.specs.inline-object-2 :refer :all]
            [untitled-api.specs.inline-response-200-9 :refer :all]
            [untitled-api.specs.inline-object-5 :refer :all]
            [untitled-api.specs.inline-response-200-8 :refer :all]
            [untitled-api.specs.inline-object-4 :refer :all]
            [untitled-api.specs.inline-response-200-7 :refer :all]
            [untitled-api.specs.inline-response-202-5 :refer :all]
            [untitled-api.specs.inline-response-200-6 :refer :all]
            [untitled-api.specs.inline-response-202-4 :refer :all]
            [untitled-api.specs.inline-response-200-5 :refer :all]
            [untitled-api.specs.inline-response-202-3 :refer :all]
            [untitled-api.specs.inline-object-6 :refer :all]
            [untitled-api.specs.inline-response-200-4 :refer :all]
            [untitled-api.specs.inline-response-202-2 :refer :all]
            [untitled-api.specs.inline-response-200-3 :refer :all]
            [untitled-api.specs.inline-response-202-1 :refer :all]
            [untitled-api.specs.inline-response-202 :refer :all]
            [untitled-api.specs.inline-response-200-2-embedded-data-centers :refer :all]
            [untitled-api.specs.inline-response-202-3-config-id-by-config-type-id :refer :all]
            [untitled-api.specs.inline-object-1 :refer :all]
            [untitled-api.specs.inline-response-200 :refer :all]
            [untitled-api.specs.inline-response-200-19 :refer :all]
            [untitled-api.specs.inline-response-200-18 :refer :all]
            [untitled-api.specs.inline-response-200-11-links :refer :all]
            [untitled-api.specs.inline-response-200-17 :refer :all]
            [untitled-api.specs.inline-response-200-16 :refer :all]
            [untitled-api.specs.inline-response-200-links :refer :all]
            [untitled-api.specs.inline-response-200-2-embedded :refer :all]
            [untitled-api.specs.inline-response-200-15 :refer :all]
            [untitled-api.specs.inline-response-200-14 :refer :all]
            [untitled-api.specs.inline-response-200-13 :refer :all]
            [untitled-api.specs.inline-response-200-12 :refer :all]
            [untitled-api.specs.inline-response-500-1-status :refer :all]
            [untitled-api.specs.inline-response-200-14-identity-providers :refer :all]
            [untitled-api.specs.inline-response-200-11 :refer :all]
            [untitled-api.specs.inline-response-200-10 :refer :all]
            [untitled-api.specs.inline-response-200-3-embedded-model-client-ingress-ports :refer :all]
            [untitled-api.specs.inline-response-200-3-embedded-model-edge-router-hosts :refer :all]
            [untitled-api.specs.inline-response-202-1-config-id-by-config-type-id :refer :all]
            [untitled-api.specs.inline-response-200-1-embedded-network-list :refer :all]
            [untitled-api.specs.inline-response-200-3-embedded-service-list :refer :all]
            [untitled-api.specs.inline-response-200-6-embedded :refer :all]
            [untitled-api.specs.inline-response-500-1 :refer :all]
            [untitled-api.specs.-core-v2-endpoints-enrollment-method :refer :all]
            [untitled-api.specs.inline-response-200-17-embedded :refer :all]
            [untitled-api.specs.inline-response-202-3-model-client-ingress :refer :all]
            )
  (:import (java.io File)))


(defn-spec request-a8syya-p-znw-with-http-info any?
  "Get the list of Network product versions"
  []
  (call-api "/product-metadata/v2/download-urls.json" :get
            {:path-params   {}
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    []}))

(defn-spec request-a8syya-p-znw inline-response-200-19-spec
  "Get the list of Network product versions"
  []
  (let [res (:data (request-a8syya-p-znw-with-http-info))]
    (if (:decode-models *api-context*)
       (st/decode inline-response-200-19-spec res st/string-transformer)
       res)))


(defn-spec request-auar-cs-ihk-j-with-http-info any?
  "Get the registration information for an Edge Router"
  [edgeRouterId string?]
  (check-required-params edgeRouterId)
  (call-api "/core/v2/edge-routers/{edgeRouterId}/registration-key" :post
            {:path-params   {"edgeRouterId" edgeRouterId }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/hal+json"]
             :auth-names    []}))

(defn-spec request-auar-cs-ihk-j inline-response-200-9-spec
  "Get the registration information for an Edge Router"
  [edgeRouterId string?]
  (let [res (:data (request-auar-cs-ihk-j-with-http-info edgeRouterId))]
    (if (:decode-models *api-context*)
       (st/decode inline-response-200-9-spec res st/string-transformer)
       res)))


(defn-spec request-ay-fh-a-qd5pn-with-http-info any?
  "Get an Endpoint"
  []
  (call-api "/core/v2/endpoints" :get
            {:path-params   {}
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/hal+json"]
             :auth-names    []}))

(defn-spec request-ay-fh-a-qd5pn inline-response-200-7-spec
  "Get an Endpoint"
  []
  (let [res (:data (request-ay-fh-a-qd5pn-with-http-info))]
    (if (:decode-models *api-context*)
       (st/decode inline-response-200-7-spec res st/string-transformer)
       res)))


(defn-spec request-btgg9-zl-c0e-with-http-info any?
  "Get an Edge Router Policy"
  [edgeRouterPolicyId string?]
  (check-required-params edgeRouterPolicyId)
  (call-api "/core/v2/edge-router-policies/{edgeRouterPolicyId}" :get
            {:path-params   {"edgeRouterPolicyId" edgeRouterPolicyId }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/hal+json"]
             :auth-names    []}))

(defn-spec request-btgg9-zl-c0e inline-response-200-4-embedded-edge-router-policy-list-spec
  "Get an Edge Router Policy"
  [edgeRouterPolicyId string?]
  (let [res (:data (request-btgg9-zl-c0e-with-http-info edgeRouterPolicyId))]
    (if (:decode-models *api-context*)
       (st/decode inline-response-200-4-embedded-edge-router-policy-list-spec res st/string-transformer)
       res)))


(defn-spec request-e1-iex-rfv-zg-with-http-info any?
  "Get the list of Services"
  []
  (call-api "/core/v2/services" :get
            {:path-params   {}
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/hal+json"]
             :auth-names    []}))

(defn-spec request-e1-iex-rfv-zg inline-response-200-3-spec
  "Get the list of Services"
  []
  (let [res (:data (request-e1-iex-rfv-zg-with-http-info))]
    (if (:decode-models *api-context*)
       (st/decode inline-response-200-3-spec res st/string-transformer)
       res)))


(defn-spec request-f-wl-fmqidpx-with-http-info any?
  "Create a Network"
  ([] (request-f-wl-fmqidpx-with-http-info nil))
  ([{:keys [inline-object]} (s/map-of keyword? any?)]
   (call-api "/core/v2/networks" :post
             {:path-params   {}
              :header-params {}
              :query-params  {}
              :form-params   {}
              :body-param    inline-object
              :content-types ["application/json"]
              :accepts       ["application/hal+json"]
              :auth-names    []})))

(defn-spec request-f-wl-fmqidpx inline-response-202-spec
  "Create a Network"
  ([] (request-f-wl-fmqidpx nil))
  ([optional-params any?]
   (let [res (:data (request-f-wl-fmqidpx-with-http-info optional-params))]
     (if (:decode-models *api-context*)
        (st/decode inline-response-202-spec res st/string-transformer)
        res))))


(defn-spec request-gij-vc-eo-ml-m-with-http-info any?
  "Get the list of AppWANs"
  []
  (call-api "/core/v2/app-wans" :get
            {:path-params   {}
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/hal+json"]
             :auth-names    []}))

(defn-spec request-gij-vc-eo-ml-m inline-response-200-6-spec
  "Get the list of AppWANs"
  []
  (let [res (:data (request-gij-vc-eo-ml-m-with-http-info))]
    (if (:decode-models *api-context*)
       (st/decode inline-response-200-6-spec res st/string-transformer)
       res)))


(defn-spec request-hp1b9-gi-lax-with-http-info any?
  "Get an Edge Router Policy"
  []
  (call-api "/core/v2/edge-router-policies" :get
            {:path-params   {}
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/hal+json"]
             :auth-names    []}))

(defn-spec request-hp1b9-gi-lax inline-response-200-4-spec
  "Get an Edge Router Policy"
  []
  (let [res (:data (request-hp1b9-gi-lax-with-http-info))]
    (if (:decode-models *api-context*)
       (st/decode inline-response-200-4-spec res st/string-transformer)
       res)))


(defn-spec request-iaj-vi-y-lviu-with-http-info any?
  "Delete a Network"
  [networkId string?]
  (check-required-params networkId)
  (call-api "/core/v2/networks/{networkId}" :delete
            {:path-params   {"networkId" networkId }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/hal+json"]
             :auth-names    []}))

(defn-spec request-iaj-vi-y-lviu inline-response-202-4-spec
  "Delete a Network"
  [networkId string?]
  (let [res (:data (request-iaj-vi-y-lviu-with-http-info networkId))]
    (if (:decode-models *api-context*)
       (st/decode inline-response-202-4-spec res st/string-transformer)
       res)))


(defn-spec request-k9aj-dj8v-us-with-http-info any?
  "Get the list of Network Groups"
  []
  (call-api "/rest/v1/network-groups" :get
            {:path-params   {}
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    []}))

(defn-spec request-k9aj-dj8v-us inline-response-200-17-spec
  "Get the list of Network Groups"
  []
  (let [res (:data (request-k9aj-dj8v-us-with-http-info))]
    (if (:decode-models *api-context*)
       (st/decode inline-response-200-17-spec res st/string-transformer)
       res)))


(defn-spec request-kke-r9g-ny25-with-http-info any?
  "Get an AppWAN"
  [appWanId string?]
  (check-required-params appWanId)
  (call-api "/core/v2/app-wans/{appWanId}" :get
            {:path-params   {"appWanId" appWanId }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/hal+json"]
             :auth-names    []}))

(defn-spec request-kke-r9g-ny25 inline-response-200-spec
  "Get an AppWAN"
  [appWanId string?]
  (let [res (:data (request-kke-r9g-ny25-with-http-info appWanId))]
    (if (:decode-models *api-context*)
       (st/decode inline-response-200-spec res st/string-transformer)
       res)))


(defn-spec request-lg-kx-u4ph9t-with-http-info any?
  "Create an Edge Router Policy"
  ([] (request-lg-kx-u4ph9t-with-http-info nil))
  ([{:keys [inline-object-2]} (s/map-of keyword? any?)]
   (call-api "/core/v2/edge-router-policies" :post
             {:path-params   {}
              :header-params {}
              :query-params  {}
              :form-params   {}
              :body-param    inline-object-2
              :content-types ["application/json"]
              :accepts       ["application/hal+json"]
              :auth-names    []})))

(defn-spec request-lg-kx-u4ph9t inline-response-200-4-embedded-edge-router-policy-list-spec
  "Create an Edge Router Policy"
  ([] (request-lg-kx-u4ph9t nil))
  ([optional-params any?]
   (let [res (:data (request-lg-kx-u4ph9t-with-http-info optional-params))]
     (if (:decode-models *api-context*)
        (st/decode inline-response-200-4-embedded-edge-router-policy-list-spec res st/string-transformer)
        res))))


(defn-spec request-lo-xf-q-ss8-ge-with-http-info any?
  "Get a Network Configuration profile
  e.g. small, medium, large"
  []
  (call-api "/core/v2/network-configs" :get
            {:path-params   {}
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/hal+json"]
             :auth-names    []}))

(defn-spec request-lo-xf-q-ss8-ge inline-response-200-15-spec
  "Get a Network Configuration profile
  e.g. small, medium, large"
  []
  (let [res (:data (request-lo-xf-q-ss8-ge-with-http-info))]
    (if (:decode-models *api-context*)
       (st/decode inline-response-200-15-spec res st/string-transformer)
       res)))


(defn-spec request-lopo-ftq4ih-with-http-info any?
  "Create a Service"
  ([] (request-lopo-ftq4ih-with-http-info nil))
  ([{:keys [inline-object-1]} (s/map-of keyword? any?)]
   (call-api "/core/v2/services" :post
             {:path-params   {}
              :header-params {}
              :query-params  {}
              :form-params   {}
              :body-param    inline-object-1
              :content-types ["application/json"]
              :accepts       ["application/hal+json"]
              :auth-names    []})))

(defn-spec request-lopo-ftq4ih inline-response-202-1-spec
  "Create a Service"
  ([] (request-lopo-ftq4ih nil))
  ([optional-params any?]
   (let [res (:data (request-lopo-ftq4ih-with-http-info optional-params))]
     (if (:decode-models *api-context*)
        (st/decode inline-response-202-1-spec res st/string-transformer)
        res))))


(defn-spec request-mpy-yt-ii-s6x-with-http-info any?
  "Get the identity of the caller's API account"
  []
  (call-api "/identity/v1/api-account-identities/self" :get
            {:path-params   {}
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    []}))

(defn-spec request-mpy-yt-ii-s6x inline-response-200-16-spec
  "Get the identity of the caller's API account"
  []
  (let [res (:data (request-mpy-yt-ii-s6x-with-http-info))]
    (if (:decode-models *api-context*)
       (st/decode inline-response-200-16-spec res st/string-transformer)
       res)))


(defn-spec request-n-xo-v6-k2f0-q-with-http-info any?
  "Create an AppWAN"
  ([] (request-n-xo-v6-k2f0-q-with-http-info nil))
  ([{:keys [inline-object-4]} (s/map-of keyword? any?)]
   (call-api "/core/v2/app-wans" :post
             {:path-params   {}
              :header-params {}
              :query-params  {}
              :form-params   {}
              :body-param    inline-object-4
              :content-types ["application/json"]
              :accepts       ["application/hal+json"]
              :auth-names    []})))

(defn-spec request-n-xo-v6-k2f0-q inline-response-200-spec
  "Create an AppWAN"
  ([] (request-n-xo-v6-k2f0-q nil))
  ([optional-params any?]
   (let [res (:data (request-n-xo-v6-k2f0-q-with-http-info optional-params))]
     (if (:decode-models *api-context*)
        (st/decode inline-response-200-spec res st/string-transformer)
        res))))


(defn-spec request-n6-gjg-plo4v-with-http-info any?
  "Get an Organization"
  [organizationId string?]
  (check-required-params organizationId)
  (call-api "/identity/v1/organizations/{organizationId}" :get
            {:path-params   {"organizationId" organizationId }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    []}))

(defn-spec request-n6-gjg-plo4v inline-response-200-14-spec
  "Get an Organization"
  [organizationId string?]
  (let [res (:data (request-n6-gjg-plo4v-with-http-info organizationId))]
    (if (:decode-models *api-context*)
       (st/decode inline-response-200-14-spec res st/string-transformer)
       res)))


(defn-spec request-oi-i-af-x2-v-us-with-http-info any?
  "Get the list of Networks"
  []
  (call-api "/core/v2/networks" :get
            {:path-params   {}
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/hal+json"]
             :auth-names    []}))

(defn-spec request-oi-i-af-x2-v-us inline-response-200-1-spec
  "Get the list of Networks"
  []
  (let [res (:data (request-oi-i-af-x2-v-us-with-http-info))]
    (if (:decode-models *api-context*)
       (st/decode inline-response-200-1-spec res st/string-transformer)
       res)))


(defn-spec request-p-baai-o3-b0d-with-http-info any?
  "Delete a Service"
  [serviceId string?]
  (check-required-params serviceId)
  (call-api "/core/v2/services/{serviceId}" :delete
            {:path-params   {"serviceId" serviceId }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/hal+json" "application/json"]
             :auth-names    []}))

(defn-spec request-p-baai-o3-b0d inline-response-202-2-spec
  "Delete a Service"
  [serviceId string?]
  (let [res (:data (request-p-baai-o3-b0d-with-http-info serviceId))]
    (if (:decode-models *api-context*)
       (st/decode inline-response-202-2-spec res st/string-transformer)
       res)))


(defn-spec request-py-r6a-up5mi-with-http-info any?
  "Create an Edge Router"
  ([] (request-py-r6a-up5mi-with-http-info nil))
  ([{:keys [inline-object-6]} (s/map-of keyword? any?)]
   (call-api "/core/v2/edge-routers" :post
             {:path-params   {}
              :header-params {}
              :query-params  {}
              :form-params   {}
              :body-param    inline-object-6
              :content-types ["application/json"]
              :accepts       ["application/hal+json"]
              :auth-names    []})))

(defn-spec request-py-r6a-up5mi inline-response-202-5-spec
  "Create an Edge Router"
  ([] (request-py-r6a-up5mi nil))
  ([optional-params any?]
   (let [res (:data (request-py-r6a-up5mi-with-http-info optional-params))]
     (if (:decode-models *api-context*)
        (st/decode inline-response-202-5-spec res st/string-transformer)
        res))))


(defn-spec request-q0b3cb-dw8-s-with-http-info any?
  "Get the list of Posture Checks"
  []
  (call-api "/core/v2/posture-checks" :get
            {:path-params   {}
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/hal+json"]
             :auth-names    []}))

(defn-spec request-q0b3cb-dw8-s inline-response-200-10-spec
  "Get the list of Posture Checks"
  []
  (let [res (:data (request-q0b3cb-dw8-s-with-http-info))]
    (if (:decode-models *api-context*)
       (st/decode inline-response-200-10-spec res st/string-transformer)
       res)))


(defn-spec request-teq-m-ge-er5-f-with-http-info any?
  "Get a Network"
  [networkId string?]
  (check-required-params networkId)
  (call-api "/core/v2/networks/{networkId}" :get
            {:path-params   {"networkId" networkId }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/hal+json"]
             :auth-names    []}))

(defn-spec request-teq-m-ge-er5-f inline-response-200-13-spec
  "Get a Network"
  [networkId string?]
  (let [res (:data (request-teq-m-ge-er5-f-with-http-info networkId))]
    (if (:decode-models *api-context*)
       (st/decode inline-response-200-13-spec res st/string-transformer)
       res)))


(defn-spec request-tsyuwl-aej-k-with-http-info any?
  "Get an Endpoint"
  [endpointId string?]
  (check-required-params endpointId)
  (call-api "/core/v2/endpoints/{endpointId}" :get
            {:path-params   {"endpointId" endpointId }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/hal+json"]
             :auth-names    []}))

(defn-spec request-tsyuwl-aej-k inline-response-200-7-embedded-endpoint-list-spec
  "Get an Endpoint"
  [endpointId string?]
  (let [res (:data (request-tsyuwl-aej-k-with-http-info endpointId))]
    (if (:decode-models *api-context*)
       (st/decode inline-response-200-7-embedded-endpoint-list-spec res st/string-transformer)
       res)))


(defn-spec request-v-iz-b1k6-uqb-with-http-info any?
  "Change some properties of a Service"
  ([serviceId string?, ] (request-v-iz-b1k6-uqb-with-http-info serviceId nil))
  ([serviceId string?, {:keys [inline-object-3]} (s/map-of keyword? any?)]
   (check-required-params serviceId)
   (call-api "/core/v2/services/{serviceId}" :patch
             {:path-params   {"serviceId" serviceId }
              :header-params {}
              :query-params  {}
              :form-params   {}
              :body-param    inline-object-3
              :content-types ["application/json"]
              :accepts       ["application/hal+json"]
              :auth-names    []})))

(defn-spec request-v-iz-b1k6-uqb inline-response-202-3-spec
  "Change some properties of a Service"
  ([serviceId string?, ] (request-v-iz-b1k6-uqb serviceId nil))
  ([serviceId string?, optional-params any?]
   (let [res (:data (request-v-iz-b1k6-uqb-with-http-info serviceId optional-params))]
     (if (:decode-models *api-context*)
        (st/decode inline-response-202-3-spec res st/string-transformer)
        res))))


(defn-spec request-ve-jcbur9i-o-with-http-info any?
  "Get a Network Group"
  [networkGroupId string?]
  (check-required-params networkGroupId)
  (call-api "/rest/v1/network-groups/{networkGroupId}" :get
            {:path-params   {"networkGroupId" networkGroupId }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/json"]
             :auth-names    []}))

(defn-spec request-ve-jcbur9i-o inline-response-200-11-spec
  "Get a Network Group"
  [networkGroupId string?]
  (let [res (:data (request-ve-jcbur9i-o-with-http-info networkGroupId))]
    (if (:decode-models *api-context*)
       (st/decode inline-response-200-11-spec res st/string-transformer)
       res)))


(defn-spec request-vfua-d-me-trp-with-http-info any?
  "Get the list of data centers"
  []
  (call-api "/core/v2/data-centers" :get
            {:path-params   {}
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/hal+json"]
             :auth-names    []}))

(defn-spec request-vfua-d-me-trp inline-response-200-2-spec
  "Get the list of data centers"
  []
  (let [res (:data (request-vfua-d-me-trp-with-http-info))]
    (if (:decode-models *api-context*)
       (st/decode inline-response-200-2-spec res st/string-transformer)
       res)))


(defn-spec request-y-lsf4m9-ttt-with-http-info any?
  "Get a Service"
  [serviceId string?]
  (check-required-params serviceId)
  (call-api "/core/v2/services/{serviceId}" :get
            {:path-params   {"serviceId" serviceId }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/hal+json"]
             :auth-names    []}))

(defn-spec request-y-lsf4m9-ttt inline-response-200-5-spec
  "Get a Service"
  [serviceId string?]
  (let [res (:data (request-y-lsf4m9-ttt-with-http-info serviceId))]
    (if (:decode-models *api-context*)
       (st/decode inline-response-200-5-spec res st/string-transformer)
       res)))


(defn-spec request-yhz-d-aw1-ks4-with-http-info any?
  "Get an Edge Router"
  []
  (call-api "/core/v2/edge-routers" :get
            {:path-params   {}
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/hal+json"]
             :auth-names    []}))

(defn-spec request-yhz-d-aw1-ks4 inline-response-200-18-spec
  "Get an Edge Router"
  []
  (let [res (:data (request-yhz-d-aw1-ks4-with-http-info))]
    (if (:decode-models *api-context*)
       (st/decode inline-response-200-18-spec res st/string-transformer)
       res)))


(defn-spec request4-q1q-u3c4dk-with-http-info any?
  "Get an Edge Router"
  [edgeRouterId string?]
  (check-required-params edgeRouterId)
  (call-api "/core/v2/edge-routers/{edgeRouterId}" :get
            {:path-params   {"edgeRouterId" edgeRouterId }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["application/hal+json"]
             :auth-names    []}))

(defn-spec request4-q1q-u3c4dk inline-response-200-12-spec
  "Get an Edge Router"
  [edgeRouterId string?]
  (let [res (:data (request4-q1q-u3c4dk-with-http-info edgeRouterId))]
    (if (:decode-models *api-context*)
       (st/decode inline-response-200-12-spec res st/string-transformer)
       res)))


(defn-spec request9s-du-piz-ciu-with-http-info any?
  "Create an Endpoint"
  ([] (request9s-du-piz-ciu-with-http-info nil))
  ([{:keys [inline-object-5]} (s/map-of keyword? any?)]
   (call-api "/core/v2/endpoints" :post
             {:path-params   {}
              :header-params {}
              :query-params  {}
              :form-params   {}
              :body-param    inline-object-5
              :content-types ["application/json"]
              :accepts       ["application/hal+json"]
              :auth-names    []})))

(defn-spec request9s-du-piz-ciu inline-response-200-8-spec
  "Create an Endpoint"
  ([] (request9s-du-piz-ciu nil))
  ([optional-params any?]
   (let [res (:data (request9s-du-piz-ciu-with-http-info optional-params))]
     (if (:decode-models *api-context*)
        (st/decode inline-response-200-8-spec res st/string-transformer)
        res))))


