(ns untitled-api.specs.inline-response-200-3-embedded-model-server-egress-1
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def inline-response-200-3-embedded-model-server-egress-1-data
  {
   (ds/req :host) string?
   (ds/req :port) float?
   (ds/req :protocol) string?
   })

(def inline-response-200-3-embedded-model-server-egress-1-spec
  (ds/spec
    {:name ::inline-response-200-3-embedded-model-server-egress-1
     :spec inline-response-200-3-embedded-model-server-egress-1-data}))
