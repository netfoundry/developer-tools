(ns untitled-api.specs.inline-response-202-2
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [untitled-api.specs. :refer :all]
            [untitled-api.specs. :refer :all]
            [untitled-api.specs. :refer :all]
            [untitled-api.specs.inline-response-202-2-config-id-by-config-type-id :refer :all]
            [untitled-api.specs. :refer :all]
            [untitled-api.specs.inline-response-202-1-links :refer :all]
            )
  (:import (java.io File)))


(def inline-response-202-2-data
  {
   (ds/req :deletedAt) string?
   (ds/req :networkId) string?
   (ds/req :name) string?
   (ds/req :updatedAt) string?
   (ds/req :model) any-type-spec
   (ds/req :zitiId) any-type-spec
   (ds/req :ownerIdentityId) string?
   (ds/req :attributes) any-type-spec
   (ds/req :modelType) string?
   (ds/req :id) string?
   (ds/req :configIdByConfigTypeId) inline-response-202-2-config-id-by-config-type-id-spec
   (ds/req :createdAt) string?
   (ds/req :createdBy) string?
   (ds/req :deletedBy) string?
   (ds/req :encryptionRequired) boolean?
   (ds/req :authority) any-type-spec
   (ds/req :_links) inline-response-202-1-links-spec
   })

(def inline-response-202-2-spec
  (ds/spec
    {:name ::inline-response-202-2
     :spec inline-response-202-2-data}))
