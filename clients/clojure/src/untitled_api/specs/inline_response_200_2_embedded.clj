(ns untitled-api.specs.inline-response-200-2-embedded
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [untitled-api.specs.inline-response-200-2-embedded-data-centers :refer :all]
            )
  (:import (java.io File)))


(def inline-response-200-2-embedded-data
  {
   (ds/req :dataCenters) (s/coll-of inline-response-200-2-embedded-data-centers-spec)
   })

(def inline-response-200-2-embedded-spec
  (ds/spec
    {:name ::inline-response-200-2-embedded
     :spec inline-response-200-2-embedded-data}))
