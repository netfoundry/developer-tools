(ns untitled-api.specs.inline-response-200-3-embedded-model-server-egress
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [untitled-api.specs. :refer :all]
            [untitled-api.specs. :refer :all]
            [untitled-api.specs. :refer :all]
            )
  (:import (java.io File)))


(def inline-response-200-3-embedded-model-server-egress-data
  {
   (ds/opt :host) string?
   (ds/opt :dialInterceptAddress) any-type-spec
   (ds/opt :dialInterceptPort) any-type-spec
   (ds/req :port) float?
   (ds/opt :dialInterceptProtocol) boolean?
   (ds/opt :address) string?
   (ds/req :protocol) any-type-spec
   })

(def inline-response-200-3-embedded-model-server-egress-spec
  (ds/spec
    {:name ::inline-response-200-3-embedded-model-server-egress
     :spec inline-response-200-3-embedded-model-server-egress-data}))
