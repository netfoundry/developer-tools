(ns untitled-api.specs.inline-response-202-3-model-client-ingress
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [untitled-api.specs.inline-response-200-3-embedded-model-client-ingress-ports :refer :all]
            )
  (:import (java.io File)))


(def inline-response-202-3-model-client-ingress-data
  {
   (ds/req :addresses) (s/coll-of string?)
   (ds/req :ports) (s/coll-of inline-response-200-3-embedded-model-client-ingress-ports-spec)
   (ds/req :protocols) (s/coll-of string?)
   })

(def inline-response-202-3-model-client-ingress-spec
  (ds/spec
    {:name ::inline-response-202-3-model-client-ingress
     :spec inline-response-202-3-model-client-ingress-data}))
