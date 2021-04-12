(ns untitled-api.specs.inline-response-202-4-network-controller
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [untitled-api.specs. :refer :all]
            [untitled-api.specs. :refer :all]
            [untitled-api.specs. :refer :all]
            [untitled-api.specs. :refer :all]
            )
  (:import (java.io File)))


(def inline-response-202-4-network-controller-data
  {
   (ds/req :deletedAt) any-type-spec
   (ds/req :networkId) string?
   (ds/req :name) string?
   (ds/req :updatedAt) string?
   (ds/req :provider) string?
   (ds/req :userData) any-type-spec
   (ds/req :ownerIdentityId) any-type-spec
   (ds/req :domainName) string?
   (ds/req :providerId) string?
   (ds/req :id) string?
   (ds/req :port) float?
   (ds/req :ipAddress) string?
   (ds/req :status) string?
   (ds/req :hostId) string?
   (ds/req :createdAt) string?
   (ds/req :deletedBy) any-type-spec
   (ds/req :locationMetadataId) string?
   (ds/req :dataCenterId) string?
   })

(def inline-response-202-4-network-controller-spec
  (ds/spec
    {:name ::inline-response-202-4-network-controller
     :spec inline-response-202-4-network-controller-data}))
