(ns untitled-api.specs.-core-v2-services-model-server-egress
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [untitled-api.specs. :refer :all]
            )
  (:import (java.io File)))


(def -core-v2-services-model-server-egress-data
  {
   (ds/req :host) string?
   (ds/req :port) any-type-spec
   (ds/req :protocol) string?
   })

(def -core-v2-services-model-server-egress-spec
  (ds/spec
    {:name ::-core-v2-services-model-server-egress
     :spec -core-v2-services-model-server-egress-data}))
