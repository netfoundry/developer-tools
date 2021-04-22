(ns untitled-api.specs.inline-response-200-4-embedded
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [untitled-api.specs.inline-response-200-4-embedded-edge-router-policy-list :refer :all]
            )
  (:import (java.io File)))


(def inline-response-200-4-embedded-data
  {
   (ds/req :edgeRouterPolicyList) (s/coll-of inline-response-200-4-embedded-edge-router-policy-list-spec)
   })

(def inline-response-200-4-embedded-spec
  (ds/spec
    {:name ::inline-response-200-4-embedded
     :spec inline-response-200-4-embedded-data}))
