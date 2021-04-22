(ns untitled-api.specs.-core-v2-services-model
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [untitled-api.specs.inline-response-200-3-embedded-model-server-egress :refer :all]
            [untitled-api.specs.-core-v2-services-model-client-ingress :refer :all]
            [untitled-api.specs.-core-v2-services-model-edge-router-hosts :refer :all]
            )
  (:import (java.io File)))


(def -core-v2-services-model-data
  {
   (ds/req :edgeRouterAttributes) (s/coll-of string?)
   (ds/opt :serverEgress) inline-response-200-3-embedded-model-server-egress-spec
   (ds/opt :bindEndpointAttributes) (s/coll-of string?)
   (ds/req :clientIngress) -core-v2-services-model-client-ingress-spec
   (ds/opt :edgeRouterHosts) (s/coll-of -core-v2-services-model-edge-router-hosts-spec)
   })

(def -core-v2-services-model-spec
  (ds/spec
    {:name ::-core-v2-services-model
     :spec -core-v2-services-model-data}))
