(ns untitled-api.specs.inline-response-200-17
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [untitled-api.specs.inline-response-200-17-embedded :refer :all]
            [untitled-api.specs.inline-response-200-17-links :refer :all]
            [untitled-api.specs.inline-response-200-1-page :refer :all]
            )
  (:import (java.io File)))


(def inline-response-200-17-data
  {
   (ds/req :_embedded) inline-response-200-17-embedded-spec
   (ds/req :_links) inline-response-200-17-links-spec
   (ds/req :page) inline-response-200-1-page-spec
   })

(def inline-response-200-17-spec
  (ds/spec
    {:name ::inline-response-200-17
     :spec inline-response-200-17-data}))
