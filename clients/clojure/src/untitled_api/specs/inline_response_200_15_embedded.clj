(ns untitled-api.specs.inline-response-200-15-embedded
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [untitled-api.specs.inline-response-200-15-embedded-network-config-metadata-list :refer :all]
            )
  (:import (java.io File)))


(def inline-response-200-15-embedded-data
  {
   (ds/req :networkConfigMetadataList) (s/coll-of inline-response-200-15-embedded-network-config-metadata-list-spec)
   })

(def inline-response-200-15-embedded-spec
  (ds/spec
    {:name ::inline-response-200-15-embedded
     :spec inline-response-200-15-embedded-data}))
