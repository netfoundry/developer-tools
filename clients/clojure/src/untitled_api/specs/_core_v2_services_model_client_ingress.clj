(ns untitled-api.specs.-core-v2-services-model-client-ingress
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [untitled-api.specs.-core-v2-services-model-client-ingress-ports :refer :all]
            [untitled-api.specs. :refer :all]
            )
  (:import (java.io File)))


(def -core-v2-services-model-client-ingress-data
  {
   (ds/opt :protocols) (s/coll-of string?)
   (ds/opt :host) string?
   (ds/opt :ports) (s/coll-of -core-v2-services-model-client-ingress-ports-spec)
   (ds/opt :port) any-type-spec
   (ds/opt :addresses) (s/coll-of string?)
   })

(def -core-v2-services-model-client-ingress-spec
  (ds/spec
    {:name ::-core-v2-services-model-client-ingress
     :spec -core-v2-services-model-client-ingress-data}))
