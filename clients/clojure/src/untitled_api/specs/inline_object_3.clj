(ns untitled-api.specs.inline-object-3
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [untitled-api.specs.-core-v2-services-service-id-model :refer :all]
            )
  (:import (java.io File)))


(def inline-object-3-data
  {
   (ds/req :model) -core-v2-services-service-id-model-spec
   (ds/req :modelType) string?
   (ds/req :name) string?
   })

(def inline-object-3-spec
  (ds/spec
    {:name ::inline-object-3
     :spec inline-object-3-data}))
