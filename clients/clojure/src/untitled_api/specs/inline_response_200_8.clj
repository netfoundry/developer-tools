(ns untitled-api.specs.inline-response-200-8
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
            [untitled-api.specs. :refer :all]
            [untitled-api.specs. :refer :all]
            [untitled-api.specs. :refer :all]
            [untitled-api.specs. :refer :all]
            [untitled-api.specs.inline-response-200-links :refer :all]
            )
  (:import (java.io File)))


(def inline-response-200-8-data
  {
   (ds/req :mfaEnabled) boolean?
   (ds/req :deletedAt) any-type-spec
   (ds/req :networkId) string?
   (ds/req :name) string?
   (ds/req :updatedAt) string?
   (ds/req :syncId) any-type-spec
   (ds/req :sessionIdentityId) any-type-spec
   (ds/req :osRelease) any-type-spec
   (ds/req :syncResourceId) any-type-spec
   (ds/req :zitiId) string?
   (ds/req :appVersion) any-type-spec
   (ds/req :branch) any-type-spec
   (ds/req :os) any-type-spec
   (ds/req :ownerIdentityId) string?
   (ds/req :hasEdgeRouterConnection) boolean?
   (ds/req :attributes) (s/coll-of string?)
   (ds/req :hasApiSession) boolean?
   (ds/req :revision) any-type-spec
   (ds/req :version) any-type-spec
   (ds/req :jwt) string?
   (ds/req :id) string?
   (ds/req :sessionActive) boolean?
   (ds/req :jwtExpiresAt) string?
   (ds/req :createdAt) string?
   (ds/req :arch) any-type-spec
   (ds/req :createdBy) string?
   (ds/req :deletedBy) any-type-spec
   (ds/req :type) any-type-spec
   (ds/req :osVersion) any-type-spec
   (ds/req :appId) any-type-spec
   (ds/req :_links) inline-response-200-links-spec
   })

(def inline-response-200-8-spec
  (ds/spec
    {:name ::inline-response-200-8
     :spec inline-response-200-8-data}))
