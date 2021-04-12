(ns untitled-api.specs.inline-response-500
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def inline-response-500-data
  {
   (ds/req :error) string?
   (ds/req :message) string?
   (ds/req :status) float?
   (ds/req :timestamp) string?
   })

(def inline-response-500-spec
  (ds/spec
    {:name ::inline-response-500
     :spec inline-response-500-data}))
