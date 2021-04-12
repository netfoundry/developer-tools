(ns untitled-api.specs.inline-response-200-12
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [untitled-api.specs. :refer :all]
            [untitled-api.specs. :refer :all]
            [untitled-api.specs. :refer :all]
            [untitled-api.specs. :refer :all]
            [untitled-api.specs. :refer :all]
            [untitled-api.specs. :refer :all]
            [untitled-api.specs. :refer :all]
            [untitled-api.specs. :refer :all]
            [untitled-api.specs. :refer :all]
            [untitled-api.specs. :refer :all]
            [untitled-api.specs.inline-response-200-links :refer :all]
            )
  (:import (java.io File)))


(def inline-response-200-12-data
  {
   (ds/req :deletedAt) any-type-spec
   (ds/req :networkId) string?
   (ds/req :name) string?
   (ds/req :updatedAt) string?
   (ds/req :provider) any-type-spec
   (ds/req :online) boolean?
   (ds/req :zitiId) string?
   (ds/req :userData) any-type-spec
   (ds/req :ownerIdentityId) string?
   (ds/req :attributes) (s/coll-of string?)
   (ds/req :providerId) any-type-spec
   (ds/req :jwt) any-type-spec
   (ds/req :id) string?
   (ds/req :ipAddress) any-type-spec
   (ds/req :status) string?
   (ds/req :hostId) any-type-spec
   (ds/req :createdAt) string?
   (ds/req :createdBy) string?
   (ds/req :deletedBy) any-type-spec
   (ds/req :locationMetadataId) any-type-spec
   (ds/req :linkListener) boolean?
   (ds/req :dataCenterId) any-type-spec
   (ds/req :verified) boolean?
   (ds/req :_links) inline-response-200-links-spec
   })

(def inline-response-200-12-spec
  (ds/spec
    {:name ::inline-response-200-12
     :spec inline-response-200-12-data}))
