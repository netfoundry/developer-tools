(ns untitled-api.specs.-core-v2-services-service-id-model-server-egress
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [untitled-api.specs. :refer :all]
            [untitled-api.specs. :refer :all]
            [untitled-api.specs. :refer :all]
            )
  (:import (java.io File)))


(def -core-v2-services-service-id-model-server-egress-data
  {
   (ds/req :dialInterceptAddress) any-type-spec
   (ds/req :dialInterceptPort) any-type-spec
   (ds/req :port) float?
   (ds/req :dialInterceptProtocol) boolean?
   (ds/req :address) string?
   (ds/req :protocol) any-type-spec
   })

(def -core-v2-services-service-id-model-server-egress-spec
  (ds/spec
    {:name ::-core-v2-services-service-id-model-server-egress
     :spec -core-v2-services-service-id-model-server-egress-data}))
