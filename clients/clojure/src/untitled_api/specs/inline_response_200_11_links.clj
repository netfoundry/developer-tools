(ns untitled-api.specs.inline-response-200-11-links
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [untitled-api.specs.inline-response-200-links-self :refer :all]
            [untitled-api.specs.inline-response-200-links-self :refer :all]
            [untitled-api.specs.inline-response-200-links-self :refer :all]
            )
  (:import (java.io File)))


(def inline-response-200-11-links-data
  {
   (ds/req :azureSubscription) inline-response-200-links-self-spec
   (ds/req :networks) inline-response-200-links-self-spec
   (ds/req :self) inline-response-200-links-self-spec
   })

(def inline-response-200-11-links-spec
  (ds/spec
    {:name ::inline-response-200-11-links
     :spec inline-response-200-11-links-data}))
