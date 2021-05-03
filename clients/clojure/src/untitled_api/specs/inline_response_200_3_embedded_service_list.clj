(ns untitled-api.specs.inline-response-200-3-embedded-service-list
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [untitled-api.specs. :refer :all]
            [untitled-api.specs.inline-response-200-3-embedded-model :refer :all]
            [untitled-api.specs. :refer :all]
            [untitled-api.specs.inline-response-200-3-embedded-config-id-by-config-type-id :refer :all]
            [untitled-api.specs. :refer :all]
            [untitled-api.specs. :refer :all]
            [untitled-api.specs.inline-response-200-links :refer :all]
            )
  (:import (java.io File)))


(def inline-response-200-3-embedded-service-list-data
  {
   (ds/req :deletedAt) any-type-spec
   (ds/req :networkId) string?
   (ds/req :name) string?
   (ds/req :updatedAt) string?
   (ds/req :model) inline-response-200-3-embedded-model-spec
   (ds/req :zitiId) any-type-spec
   (ds/req :ownerIdentityId) string?
   (ds/req :attributes) (s/coll-of string?)
   (ds/req :modelType) string?
   (ds/req :id) string?
   (ds/req :configIdByConfigTypeId) inline-response-200-3-embedded-config-id-by-config-type-id-spec
   (ds/req :createdAt) string?
   (ds/req :createdBy) string?
   (ds/req :deletedBy) any-type-spec
   (ds/req :encryptionRequired) boolean?
   (ds/req :authority) any-type-spec
   (ds/req :_links) inline-response-200-links-spec
   })

(def inline-response-200-3-embedded-service-list-spec
  (ds/spec
    {:name ::inline-response-200-3-embedded-service-list
     :spec inline-response-200-3-embedded-service-list-data}))