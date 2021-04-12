(ns untitled-api.specs.inline-response-200-7-embedded
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [untitled-api.specs.inline-response-200-7-embedded-endpoint-list :refer :all]
            )
  (:import (java.io File)))


(def inline-response-200-7-embedded-data
  {
   (ds/req :endpointList) (s/coll-of inline-response-200-7-embedded-endpoint-list-spec)
   })

(def inline-response-200-7-embedded-spec
  (ds/spec
    {:name ::inline-response-200-7-embedded
     :spec inline-response-200-7-embedded-data}))
