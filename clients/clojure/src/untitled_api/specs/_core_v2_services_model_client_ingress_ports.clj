(ns untitled-api.specs.-core-v2-services-model-client-ingress-ports
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def -core-v2-services-model-client-ingress-ports-data
  {
   (ds/req :high) string?
   (ds/req :low) string?
   })

(def -core-v2-services-model-client-ingress-ports-spec
  (ds/spec
    {:name ::-core-v2-services-model-client-ingress-ports
     :spec -core-v2-services-model-client-ingress-ports-data}))
