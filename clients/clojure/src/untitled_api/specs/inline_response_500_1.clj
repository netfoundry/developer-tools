(ns untitled-api.specs.inline-response-500-1
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [untitled-api.specs.inline-response-500-1-status :refer :all]
            )
  (:import (java.io File)))


(def inline-response-500-1-data
  {
   (ds/req :errors) (s/coll-of string?)
   (ds/req :status) inline-response-500-1-status-spec
   (ds/req :traceId) string?
   })

(def inline-response-500-1-spec
  (ds/spec
    {:name ::inline-response-500-1
     :spec inline-response-500-1-data}))
