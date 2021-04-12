(ns untitled-api.specs.-core-v2-services-model-edge-router-hosts
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [untitled-api.specs.-core-v2-services-model-server-egress :refer :all]
            )
  (:import (java.io File)))


(def -core-v2-services-model-edge-router-hosts-data
  {
   (ds/req :edgeRouterId) string?
   (ds/req :serverEgress) -core-v2-services-model-server-egress-spec
   })

(def -core-v2-services-model-edge-router-hosts-spec
  (ds/spec
    {:name ::-core-v2-services-model-edge-router-hosts
     :spec -core-v2-services-model-edge-router-hosts-data}))
