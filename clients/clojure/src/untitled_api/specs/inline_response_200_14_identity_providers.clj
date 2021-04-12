(ns untitled-api.specs.inline-response-200-14-identity-providers
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [untitled-api.specs. :refer :all]
            [untitled-api.specs. :refer :all]
            [untitled-api.specs.inline-response-200-14-updated-at :refer :all]
            )
  (:import (java.io File)))


(def inline-response-200-14-identity-providers-data
  {
   (ds/req :deletedAt) any-type-spec
   (ds/req :name) string?
   (ds/req :updatedAt) any-type-spec
   (ds/req :auth0ConnectionType) string?
   (ds/req :auth0ConnectionId) string?
   (ds/req :id) string?
   (ds/req :createdAt) inline-response-200-14-updated-at-spec
   (ds/req :organizationId) string?
   (ds/req :active) boolean?
   })

(def inline-response-200-14-identity-providers-spec
  (ds/spec
    {:name ::inline-response-200-14-identity-providers
     :spec inline-response-200-14-identity-providers-data}))
