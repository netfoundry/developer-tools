(ns untitled-api.specs.inline-response-202-3-model
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [untitled-api.specs.inline-response-202-3-model-client-ingress :refer :all]
            [untitled-api.specs.-core-v2-services-service-id-model-server-egress :refer :all]
            )
  (:import (java.io File)))


(def inline-response-202-3-model-data
  {
   (ds/req :bindEndpointAttributes) (s/coll-of string?)
   (ds/req :clientIngress) inline-response-202-3-model-client-ingress-spec
   (ds/req :edgeRouterAttributes) (s/coll-of string?)
   (ds/req :serverEgress) -core-v2-services-service-id-model-server-egress-spec
   })

(def inline-response-202-3-model-spec
  (ds/spec
    {:name ::inline-response-202-3-model
     :spec inline-response-202-3-model-data}))
