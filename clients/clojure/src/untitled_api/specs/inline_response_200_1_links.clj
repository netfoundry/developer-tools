(ns untitled-api.specs.inline-response-200-1-links
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [untitled-api.specs.inline-response-200-1-links-self :refer :all]
            )
  (:import (java.io File)))


(def inline-response-200-1-links-data
  {
   (ds/req :self) inline-response-200-1-links-self-spec
   })

(def inline-response-200-1-links-spec
  (ds/spec
    {:name ::inline-response-200-1-links
     :spec inline-response-200-1-links-data}))
