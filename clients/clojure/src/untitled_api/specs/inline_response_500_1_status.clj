(ns untitled-api.specs.inline-response-500-1-status
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def inline-response-500-1-status-data
  {
   (ds/req :code) float?
   (ds/req :label) string?
   })

(def inline-response-500-1-status-spec
  (ds/spec
    {:name ::inline-response-500-1-status
     :spec inline-response-500-1-status-data}))
