(ns untitled-api.specs.inline-response-202-5
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
            [untitled-api.specs. :refer :all]
            [untitled-api.specs.inline-response-202-1-links :refer :all]
            )
  (:import (java.io File)))


(def inline-response-202-5-data
  {
   (ds/req :deletedAt) any-type-spec
   (ds/req :networkId) string?
   (ds/req :name) string?
   (ds/req :updatedAt) string?
   (ds/req :provider) any-type-spec
   (ds/req :online) boolean?
   (ds/req :zitiId) any-type-spec
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
   (ds/req :_links) inline-response-202-1-links-spec
   })

(def inline-response-202-5-spec
  (ds/spec
    {:name ::inline-response-202-5
     :spec inline-response-202-5-data}))
