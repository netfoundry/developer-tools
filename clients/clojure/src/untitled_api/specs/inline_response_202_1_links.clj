(ns untitled-api.specs.inline-response-202-1-links
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [untitled-api.specs.inline-response-200-links-network :refer :all]
            [untitled-api.specs.inline-response-200-links-network :refer :all]
            [untitled-api.specs.inline-response-200-links-self :refer :all]
            )
  (:import (java.io File)))


(def inline-response-202-1-links-data
  {
   (ds/req :network) inline-response-200-links-network-spec
   (ds/req :process) inline-response-200-links-network-spec
   (ds/req :self) inline-response-200-links-self-spec
   })

(def inline-response-202-1-links-spec
  (ds/spec
    {:name ::inline-response-202-1-links
     :spec inline-response-202-1-links-data}))
