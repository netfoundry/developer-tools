(ns untitled-api.specs.inline-response-200-2-embedded-links
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [untitled-api.specs.inline-response-200-links-self :refer :all]
            )
  (:import (java.io File)))


(def inline-response-200-2-embedded-links-data
  {
   (ds/req :self) inline-response-200-links-self-spec
   })

(def inline-response-200-2-embedded-links-spec
  (ds/spec
    {:name ::inline-response-200-2-embedded-links
     :spec inline-response-200-2-embedded-links-data}))
