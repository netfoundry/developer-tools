(ns untitled-api.specs.inline-response-200-16
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [untitled-api.specs. :refer :all]
            [untitled-api.specs. :refer :all]
            [untitled-api.specs. :refer :all]
            [untitled-api.specs.inline-response-200-14-updated-at :refer :all]
            )
  (:import (java.io File)))


(def inline-response-200-16-data
  {
   (ds/req :deletedAt) any-type-spec
   (ds/req :name) string?
   (ds/req :updatedAt) any-type-spec
   (ds/req :email) string?
   (ds/req :description) string?
   (ds/req :awsCognitoClientId) string?
   (ds/req :auth0ClientId) any-type-spec
   (ds/req :id) string?
   (ds/req :contactEmail) string?
   (ds/req :createdAt) inline-response-200-14-updated-at-spec
   (ds/req :organizationId) string?
   (ds/req :tenantId) string?
   (ds/req :type) string?
   (ds/req :authenticationUrl) string?
   (ds/req :active) boolean?
   })

(def inline-response-200-16-spec
  (ds/spec
    {:name ::inline-response-200-16
     :spec inline-response-200-16-data}))
