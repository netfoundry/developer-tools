(ns untitled-api.specs.inline-response-200-1-embedded
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [untitled-api.specs.inline-response-200-1-embedded-network-list :refer :all]
            )
  (:import (java.io File)))


(def inline-response-200-1-embedded-data
  {
   (ds/req :networkList) (s/coll-of inline-response-200-1-embedded-network-list-spec)
   })

(def inline-response-200-1-embedded-spec
  (ds/spec
    {:name ::inline-response-200-1-embedded
     :spec inline-response-200-1-embedded-data}))
