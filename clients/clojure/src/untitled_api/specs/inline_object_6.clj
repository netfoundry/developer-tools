(ns untitled-api.specs.inline-object-6
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def inline-object-6-data
  {
   (ds/req :networkId) string?
   (ds/req :name) string?
   (ds/req :attributes) (s/coll-of string?)
   (ds/req :linkListener) boolean?
   (ds/opt :dataCenterId) string?
   })

(def inline-object-6-spec
  (ds/spec
    {:name ::inline-object-6
     :spec inline-object-6-data}))
