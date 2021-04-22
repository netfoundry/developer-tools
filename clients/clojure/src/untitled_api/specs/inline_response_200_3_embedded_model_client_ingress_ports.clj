(ns untitled-api.specs.inline-response-200-3-embedded-model-client-ingress-ports
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def inline-response-200-3-embedded-model-client-ingress-ports-data
  {
   (ds/req :high) float?
   (ds/req :low) float?
   })

(def inline-response-200-3-embedded-model-client-ingress-ports-spec
  (ds/spec
    {:name ::inline-response-200-3-embedded-model-client-ingress-ports
     :spec inline-response-200-3-embedded-model-client-ingress-ports-data}))
