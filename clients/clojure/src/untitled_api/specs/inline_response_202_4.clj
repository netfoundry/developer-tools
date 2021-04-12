(ns untitled-api.specs.inline-response-202-4
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [untitled-api.specs. :refer :all]
            [untitled-api.specs. :refer :all]
            [untitled-api.specs.inline-response-202-4-network-controller :refer :all]
            [untitled-api.specs.inline-response-202-4-links :refer :all]
            )
  (:import (java.io File)))


(def inline-response-202-4-data
  {
   (ds/req :deletedAt) any-type-spec
   (ds/req :name) string?
   (ds/req :updatedAt) string?
   (ds/req :size) string?
   (ds/req :ownerIdentityId) string?
   (ds/req :productVersion) string?
   (ds/req :networkGroupId) string?
   (ds/req :id) string?
   (ds/req :status) string?
   (ds/req :createdAt) string?
   (ds/req :createdBy) string?
   (ds/req :deletedBy) any-type-spec
   (ds/req :networkController) inline-response-202-4-network-controller-spec
   (ds/req :o365BreakoutCategory) string?
   (ds/req :_links) inline-response-202-4-links-spec
   })

(def inline-response-202-4-spec
  (ds/spec
    {:name ::inline-response-202-4
     :spec inline-response-202-4-data}))
