(ns untitled-api.specs.inline-object-1
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [untitled-api.specs.-core-v2-services-model :refer :all]
            )
  (:import (java.io File)))


(def inline-object-1-data
  {
   (ds/req :networkId) string?
   (ds/req :name) string?
   (ds/req :model) -core-v2-services-model-spec
   (ds/req :attributes) (s/coll-of string?)
   (ds/req :modelType) string?
   (ds/req :encryptionRequired) boolean?
   })

(def inline-object-1-spec
  (ds/spec
    {:name ::inline-object-1
     :spec inline-object-1-data}))
