(ns untitled-api.specs.inline-response-200-3
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [untitled-api.specs.inline-response-200-3-embedded :refer :all]
            [untitled-api.specs.inline-response-200-2-embedded-links :refer :all]
            [untitled-api.specs.inline-response-200-1-page :refer :all]
            )
  (:import (java.io File)))


(def inline-response-200-3-data
  {
   (ds/opt :_embedded) inline-response-200-3-embedded-spec
   (ds/req :_links) inline-response-200-2-embedded-links-spec
   (ds/req :page) inline-response-200-1-page-spec
   })

(def inline-response-200-3-spec
  (ds/spec
    {:name ::inline-response-200-3
     :spec inline-response-200-3-data}))
