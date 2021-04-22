(ns untitled-api.specs.inline-response-200-18-embedded
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [untitled-api.specs.inline-response-200-12 :refer :all]
            )
  (:import (java.io File)))


(def inline-response-200-18-embedded-data
  {
   (ds/req :edgeRouterList) (s/coll-of inline-response-200-12-spec)
   })

(def inline-response-200-18-embedded-spec
  (ds/spec
    {:name ::inline-response-200-18-embedded
     :spec inline-response-200-18-embedded-data}))
