(ns untitled-api.specs.inline-response-200
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [untitled-api.specs. :refer :all]
            [untitled-api.specs.any-type :refer :all]
            [untitled-api.specs. :refer :all]
            [untitled-api.specs.inline-response-200-links :refer :all]
            )
  (:import (java.io File)))


(def inline-response-200-data
  {
   (ds/req :serviceAttributes) (s/coll-of string?)
   (ds/req :deletedAt) any-type-spec
   (ds/req :networkId) string?
   (ds/req :name) string?
   (ds/req :updatedAt) string?
   (ds/req :postureCheckAttributes) (s/coll-of any-type-spec)
   (ds/req :zitiId) string?
   (ds/req :ownerIdentityId) string?
   (ds/req :id) string?
   (ds/req :createdAt) string?
   (ds/req :createdBy) string?
   (ds/req :deletedBy) any-type-spec
   (ds/req :endpointAttributes) (s/coll-of string?)
   (ds/req :_links) inline-response-200-links-spec
   })

(def inline-response-200-spec
  (ds/spec
    {:name ::inline-response-200
     :spec inline-response-200-data}))
