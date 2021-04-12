(ns untitled-api.specs.inline-response-200-3-embedded
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [untitled-api.specs.inline-response-200-3-embedded-service-list :refer :all]
            )
  (:import (java.io File)))


(def inline-response-200-3-embedded-data
  {
   (ds/req :serviceList) (s/coll-of inline-response-200-3-embedded-service-list-spec)
   })

(def inline-response-200-3-embedded-spec
  (ds/spec
    {:name ::inline-response-200-3-embedded
     :spec inline-response-200-3-embedded-data}))
