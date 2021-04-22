(ns untitled-api.specs.inline-response-200-11
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [untitled-api.specs. :refer :all]
            [untitled-api.specs. :refer :all]
            [untitled-api.specs. :refer :all]
            [untitled-api.specs.inline-response-200-11-links :refer :all]
            )
  (:import (java.io File)))


(def inline-response-200-11-data
  {
   (ds/req :organizationShortName) string?
   (ds/req :name) string?
   (ds/req :updatedAt) string?
   (ds/req :zitiEnabled) boolean?
   (ds/req :defaultAzureVirtualWanId) any-type-spec
   (ds/req :ownerIdentityId) any-type-spec
   (ds/req :billingAccountId) any-type-spec
   (ds/req :id) string?
   (ds/req :awsAutoScalingGatewayEnabled) boolean?
   (ds/req :createdAt) string?
   (ds/req :mfaRequired) boolean?
   (ds/req :deleted) boolean?
   (ds/req :_links) inline-response-200-11-links-spec
   })

(def inline-response-200-11-spec
  (ds/spec
    {:name ::inline-response-200-11
     :spec inline-response-200-11-data}))
