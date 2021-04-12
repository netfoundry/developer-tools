(ns untitled-api.specs.inline-response-202
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [untitled-api.specs. :refer :all]
            [untitled-api.specs. :refer :all]
            [untitled-api.specs. :refer :all]
            [untitled-api.specs.inline-response-202-links :refer :all]
            )
  (:import (java.io File)))


(def inline-response-202-data
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
   (ds/req :networkController) any-type-spec
   (ds/req :o365BreakoutCategory) string?
   (ds/req :_links) inline-response-202-links-spec
   })

(def inline-response-202-spec
  (ds/spec
    {:name ::inline-response-202
     :spec inline-response-202-data}))
