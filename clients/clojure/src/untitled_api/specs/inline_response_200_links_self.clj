(ns untitled-api.specs.inline-response-200-links-self
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def inline-response-200-links-self-data
  {
   (ds/req :href) string?
   })

(def inline-response-200-links-self-spec
  (ds/spec
    {:name ::inline-response-200-links-self
     :spec inline-response-200-links-self-data}))
