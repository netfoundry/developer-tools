(ns untitled-api.specs.inline-response-200-14
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [untitled-api.specs. :refer :all]
            [untitled-api.specs.inline-response-200-14-updated-at :refer :all]
            [untitled-api.specs.inline-response-200-14-updated-at :refer :all]
            [untitled-api.specs.inline-response-200-14-identity-providers :refer :all]
            )
  (:import (java.io File)))


(def inline-response-200-14-data
  {
   (ds/req :deletedAt) any-type-spec
   (ds/req :name) string?
   (ds/req :updatedAt) inline-response-200-14-updated-at-spec
   (ds/req :label) string?
   (ds/req :id) string?
   (ds/req :mfaProvider) string?
   (ds/req :createdAt) inline-response-200-14-updated-at-spec
   (ds/req :identityProviders) (s/coll-of inline-response-200-14-identity-providers-spec)
   (ds/req :deleted) boolean?
   (ds/req :active) boolean?
   })

(def inline-response-200-14-spec
  (ds/spec
    {:name ::inline-response-200-14
     :spec inline-response-200-14-data}))
