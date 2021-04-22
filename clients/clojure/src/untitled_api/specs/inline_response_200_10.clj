(ns untitled-api.specs.inline-response-200-10
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [untitled-api.specs.inline-response-200-2-embedded-links :refer :all]
            [untitled-api.specs.inline-response-200-1-page :refer :all]
            )
  (:import (java.io File)))


(def inline-response-200-10-data
  {
   (ds/req :_links) inline-response-200-2-embedded-links-spec
   (ds/req :page) inline-response-200-1-page-spec
   })

(def inline-response-200-10-spec
  (ds/spec
    {:name ::inline-response-200-10
     :spec inline-response-200-10-data}))
