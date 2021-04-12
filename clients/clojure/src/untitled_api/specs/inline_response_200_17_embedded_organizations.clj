(ns untitled-api.specs.inline-response-200-17-embedded-organizations
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [untitled-api.specs. :refer :all]
            [untitled-api.specs. :refer :all]
            [untitled-api.specs.inline-response-200-11-links :refer :all]
            )
  (:import (java.io File)))


(def inline-response-200-17-embedded-organizations-data
  {
   (ds/req :organizationShortName) string?
   (ds/req :name) string?
   (ds/req :updatedAt) string?
   (ds/req :zitiEnabled) boolean?
   (ds/req :defaultAzureVirtualWanId) any-type-spec
   (ds/req :ownerIdentityId) any-type-spec
   (ds/req :billingAccountId) string?
   (ds/req :id) string?
   (ds/req :awsAutoScalingGatewayEnabled) boolean?
   (ds/req :createdAt) string?
   (ds/req :mfaRequired) boolean?
   (ds/req :deleted) boolean?
   (ds/req :_links) inline-response-200-11-links-spec
   })

(def inline-response-200-17-embedded-organizations-spec
  (ds/spec
    {:name ::inline-response-200-17-embedded-organizations
     :spec inline-response-200-17-embedded-organizations-data}))
