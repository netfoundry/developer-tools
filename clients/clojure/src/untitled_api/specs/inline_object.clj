(ns untitled-api.specs.inline-object
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def inline-object-data
  {
   (ds/req :name) string?
   (ds/req :size) string?
   (ds/req :locationCode) string?
   (ds/req :productVersion) string?
   (ds/req :networkGroupId) string?
   })

(def inline-object-spec
  (ds/spec
    {:name ::inline-object
     :spec inline-object-data}))
