(ns untitled-api.specs.inline-response-202-links
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [untitled-api.specs.inline-response-200-links-self :refer :all]
            [untitled-api.specs.inline-response-200-links-network :refer :all]
            [untitled-api.specs.inline-response-200-links-self :refer :all]
            [untitled-api.specs.inline-response-200-links-network :refer :all]
            [untitled-api.specs.inline-response-200-links-self :refer :all]
            [untitled-api.specs.inline-response-200-links-self :refer :all]
            [untitled-api.specs.inline-response-200-links-self :refer :all]
            [untitled-api.specs.inline-response-200-links-network :refer :all]
            [untitled-api.specs.inline-response-200-links-self :refer :all]
            [untitled-api.specs.inline-response-200-links-self :refer :all]
            [untitled-api.specs.inline-response-200-links-self :refer :all]
            [untitled-api.specs.inline-response-200-links-self :refer :all]
            )
  (:import (java.io File)))


(def inline-response-202-links-data
  {
   (ds/req :services) inline-response-200-links-self-spec
   (ds/req :networks) inline-response-200-links-network-spec
   (ds/req :app-wans) inline-response-200-links-self-spec
   (ds/req :process) inline-response-200-links-network-spec
   (ds/req :endpoints) inline-response-200-links-self-spec
   (ds/req :certificate-authorities) inline-response-200-links-self-spec
   (ds/req :self) inline-response-200-links-self-spec
   (ds/req :process-executions) inline-response-200-links-network-spec
   (ds/req :network-controllers) inline-response-200-links-self-spec
   (ds/req :posture-checks) inline-response-200-links-self-spec
   (ds/req :edge-routers) inline-response-200-links-self-spec
   (ds/req :edge-router-policies) inline-response-200-links-self-spec
   })

(def inline-response-202-links-spec
  (ds/spec
    {:name ::inline-response-202-links
     :spec inline-response-202-links-data}))
