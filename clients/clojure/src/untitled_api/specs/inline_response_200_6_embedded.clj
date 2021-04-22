(ns untitled-api.specs.inline-response-200-6-embedded
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [untitled-api.specs.inline-response-200 :refer :all]
            )
  (:import (java.io File)))


(def inline-response-200-6-embedded-data
  {
   (ds/req :appWanList) (s/coll-of inline-response-200-spec)
   })

(def inline-response-200-6-embedded-spec
  (ds/spec
    {:name ::inline-response-200-6-embedded
     :spec inline-response-200-6-embedded-data}))
