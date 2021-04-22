(ns untitled-api.specs.-core-v2-services-service-id-model-client-ingress
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [untitled-api.specs.-core-v2-services-model-client-ingress-ports :refer :all]
            )
  (:import (java.io File)))


(def -core-v2-services-service-id-model-client-ingress-data
  {
   (ds/req :addresses) (s/coll-of string?)
   (ds/req :ports) (s/coll-of -core-v2-services-model-client-ingress-ports-spec)
   (ds/req :protocols) (s/coll-of string?)
   })

(def -core-v2-services-service-id-model-client-ingress-spec
  (ds/spec
    {:name ::-core-v2-services-service-id-model-client-ingress
     :spec -core-v2-services-service-id-model-client-ingress-data}))
