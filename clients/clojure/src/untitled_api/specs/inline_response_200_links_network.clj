(ns untitled-api.specs.inline-response-200-links-network
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def inline-response-200-links-network-data
  {
   (ds/req :href) string?
   (ds/req :profile) string?
   })

(def inline-response-200-links-network-spec
  (ds/spec
    {:name ::inline-response-200-links-network
     :spec inline-response-200-links-network-data}))
