(ns untitled-api.specs.-core-v2-services-service-id-model
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [untitled-api.specs.-core-v2-services-service-id-model-client-ingress :refer :all]
            [untitled-api.specs.-core-v2-services-service-id-model-server-egress :refer :all]
            )
  (:import (java.io File)))


(def -core-v2-services-service-id-model-data
  {
   (ds/req :bindEndpointAttributes) (s/coll-of string?)
   (ds/req :clientIngress) -core-v2-services-service-id-model-client-ingress-spec
   (ds/req :edgeRouterAttributes) (s/coll-of string?)
   (ds/req :serverEgress) -core-v2-services-service-id-model-server-egress-spec
   })

(def -core-v2-services-service-id-model-spec
  (ds/spec
    {:name ::-core-v2-services-service-id-model
     :spec -core-v2-services-service-id-model-data}))
