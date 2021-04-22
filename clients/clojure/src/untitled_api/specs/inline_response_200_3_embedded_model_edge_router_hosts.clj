(ns untitled-api.specs.inline-response-200-3-embedded-model-edge-router-hosts
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [untitled-api.specs.inline-response-200-3-embedded-model-server-egress-1 :refer :all]
            )
  (:import (java.io File)))


(def inline-response-200-3-embedded-model-edge-router-hosts-data
  {
   (ds/req :edgeRouterId) string?
   (ds/req :serverEgress) inline-response-200-3-embedded-model-server-egress-1-spec
   })

(def inline-response-200-3-embedded-model-edge-router-hosts-spec
  (ds/spec
    {:name ::inline-response-200-3-embedded-model-edge-router-hosts
     :spec inline-response-200-3-embedded-model-edge-router-hosts-data}))
