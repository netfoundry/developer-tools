(ns untitled-api.specs.inline-object-5
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [untitled-api.specs.-core-v2-endpoints-enrollment-method :refer :all]
            )
  (:import (java.io File)))


(def inline-object-5-data
  {
   (ds/req :attributes) (s/coll-of string?)
   (ds/req :enrollmentMethod) -core-v2-endpoints-enrollment-method-spec
   (ds/req :name) string?
   (ds/req :networkId) string?
   })

(def inline-object-5-spec
  (ds/spec
    {:name ::inline-object-5
     :spec inline-object-5-data}))
