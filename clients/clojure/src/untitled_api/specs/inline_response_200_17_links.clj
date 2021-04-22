(ns untitled-api.specs.inline-response-200-17-links
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [untitled-api.specs.inline-response-200-links-self :refer :all]
            [untitled-api.specs.inline-response-200-links-self :refer :all]
            )
  (:import (java.io File)))


(def inline-response-200-17-links-data
  {
   (ds/req :first) inline-response-200-links-self-spec
   (ds/req :last) inline-response-200-links-self-spec
   })

(def inline-response-200-17-links-spec
  (ds/spec
    {:name ::inline-response-200-17-links
     :spec inline-response-200-17-links-data}))
