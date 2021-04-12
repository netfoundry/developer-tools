(ns untitled-api.specs.inline-object-4
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [untitled-api.specs.any-type :refer :all]
            )
  (:import (java.io File)))


(def inline-object-4-data
  {
   (ds/req :serviceAttributes) (s/coll-of string?)
   (ds/req :networkId) string?
   (ds/req :name) string?
   (ds/req :postureCheckAttributes) (s/coll-of any-type-spec)
   (ds/req :endpointAttributes) (s/coll-of string?)
   })

(def inline-object-4-spec
  (ds/spec
    {:name ::inline-object-4
     :spec inline-object-4-data}))
