(ns untitled-api.specs.inline-response-200-1-page
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def inline-response-200-1-page-data
  {
   (ds/req :number) float?
   (ds/req :size) float?
   (ds/req :totalElements) float?
   (ds/req :totalPages) float?
   })

(def inline-response-200-1-page-spec
  (ds/spec
    {:name ::inline-response-200-1-page
     :spec inline-response-200-1-page-data}))
