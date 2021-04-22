(ns untitled-api.specs.-core-v2-endpoints-enrollment-method
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def -core-v2-endpoints-enrollment-method-data
  {
   (ds/req :ott) boolean?
   })

(def -core-v2-endpoints-enrollment-method-spec
  (ds/spec
    {:name ::-core-v2-endpoints-enrollment-method
     :spec -core-v2-endpoints-enrollment-method-data}))
