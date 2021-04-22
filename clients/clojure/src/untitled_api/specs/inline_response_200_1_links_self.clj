(ns untitled-api.specs.inline-response-200-1-links-self
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def inline-response-200-1-links-self-data
  {
   (ds/req :href) string?
   (ds/req :templated) boolean?
   })

(def inline-response-200-1-links-self-spec
  (ds/spec
    {:name ::inline-response-200-1-links-self
     :spec inline-response-200-1-links-self-data}))
