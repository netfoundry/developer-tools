(ns untitled-api.specs.inline-response-200-14-updated-at
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def inline-response-200-14-updated-at-data
  {
   (ds/req :epochSecond) float?
   (ds/req :nano) float?
   })

(def inline-response-200-14-updated-at-spec
  (ds/spec
    {:name ::inline-response-200-14-updated-at
     :spec inline-response-200-14-updated-at-data}))
