(ns untitled-api.specs.inline-response-200-3-embedded-model-client-ingress
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [untitled-api.specs.inline-response-200-3-embedded-model-client-ingress-ports :refer :all]
            )
  (:import (java.io File)))


(def inline-response-200-3-embedded-model-client-ingress-data
  {
   (ds/opt :protocols) (s/coll-of string?)
   (ds/opt :host) string?
   (ds/opt :ports) (s/coll-of inline-response-200-3-embedded-model-client-ingress-ports-spec)
   (ds/opt :port) float?
   (ds/opt :addresses) (s/coll-of string?)
   })

(def inline-response-200-3-embedded-model-client-ingress-spec
  (ds/spec
    {:name ::inline-response-200-3-embedded-model-client-ingress
     :spec inline-response-200-3-embedded-model-client-ingress-data}))
