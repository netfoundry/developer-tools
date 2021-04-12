(ns untitled-api.specs.inline-response-200-17-embedded
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [untitled-api.specs.inline-response-200-17-embedded-organizations :refer :all]
            )
  (:import (java.io File)))


(def inline-response-200-17-embedded-data
  {
   (ds/req :organizations) (s/coll-of inline-response-200-17-embedded-organizations-spec)
   })

(def inline-response-200-17-embedded-spec
  (ds/spec
    {:name ::inline-response-200-17-embedded
     :spec inline-response-200-17-embedded-data}))
