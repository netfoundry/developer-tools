(ns untitled-api.specs.inline-response-200-9
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def inline-response-200-9-data
  {
   (ds/req :expiresAt) string?
   (ds/req :registrationKey) string?
   })

(def inline-response-200-9-spec
  (ds/spec
    {:name ::inline-response-200-9
     :spec inline-response-200-9-data}))
