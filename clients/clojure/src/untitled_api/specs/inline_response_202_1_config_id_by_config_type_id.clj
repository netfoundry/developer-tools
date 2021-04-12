(ns untitled-api.specs.inline-response-202-1-config-id-by-config-type-id
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def inline-response-202-1-config-id-by-config-type-id-data
  {
   (ds/opt :6fa5c2bc-b7f7-47f8-9229-e927722adb27) string?
   (ds/opt :b1582680-ab7b-45d0-ac36-b00f82df8e79) string?
   })

(def inline-response-202-1-config-id-by-config-type-id-spec
  (ds/spec
    {:name ::inline-response-202-1-config-id-by-config-type-id
     :spec inline-response-202-1-config-id-by-config-type-id-data}))
