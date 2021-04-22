(ns untitled-api.specs.inline-response-200-3-embedded-model
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [untitled-api.specs.inline-response-200-3-embedded-model-server-egress :refer :all]
            [untitled-api.specs.inline-response-200-3-embedded-model-client-ingress :refer :all]
            [untitled-api.specs.inline-response-200-3-embedded-model-edge-router-hosts :refer :all]
            )
  (:import (java.io File)))


(def inline-response-200-3-embedded-model-data
  {
   (ds/req :edgeRouterAttributes) (s/coll-of string?)
   (ds/opt :serverEgress) inline-response-200-3-embedded-model-server-egress-spec
   (ds/opt :bindEndpointAttributes) (s/coll-of string?)
   (ds/req :clientIngress) inline-response-200-3-embedded-model-client-ingress-spec
   (ds/opt :edgeRouterHosts) (s/coll-of inline-response-200-3-embedded-model-edge-router-hosts-spec)
   })

(def inline-response-200-3-embedded-model-spec
  (ds/spec
    {:name ::inline-response-200-3-embedded-model
     :spec inline-response-200-3-embedded-model-data}))
