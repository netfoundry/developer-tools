(ns untitled-api.specs.inline-response-200-2-embedded-data-centers
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
            [untitled-api.specs.inline-response-200-2-embedded-links :refer :all]
            )
  (:import (java.io File)))


(def inline-response-200-2-embedded-data-centers-data
  {
   (ds/req :city) any-type-spec
   (ds/req :continentCode) any-type-spec
   (ds/req :stateCode) any-type-spec
   (ds/req :lng) float?
   (ds/req :provider) string?
   (ds/req :stateName) any-type-spec
   (ds/req :continentName) any-type-spec
   (ds/req :isp) any-type-spec
   (ds/req :locationCode) string?
   (ds/req :countryName) any-type-spec
   (ds/req :id) string?
   (ds/req :countryCode) any-type-spec
   (ds/req :address) any-type-spec
   (ds/req :locationName) string?
   (ds/req :lat) float?
   (ds/req :_links) inline-response-200-2-embedded-links-spec
   })

(def inline-response-200-2-embedded-data-centers-spec
  (ds/spec
    {:name ::inline-response-200-2-embedded-data-centers
     :spec inline-response-200-2-embedded-data-centers-data}))
