(ns untitled-api.specs.inline-response-202-3-config-id-by-config-type-id
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def inline-response-202-3-config-id-by-config-type-id-data
  {
   (ds/opt :d75e27f0-ebab-4567-8440-c24f02f2eca5) string?
   (ds/req :cf3962b1-a98e-4ade-ae25-cdc388e7feb3) string?
   (ds/opt :7cafedc5-17b8-4c1e-8b6f-0d9bc1b4b7bc) string?
   (ds/opt :714a918a-7935-4b4f-82c3-afbadcd9e59b) string?
   (ds/req :64a39300-b672-413b-9d8c-42175f7e84dd) string?
   (ds/opt :ea6e632b-d8e1-420f-bd8f-ad50b067bad6) string?
   })

(def inline-response-202-3-config-id-by-config-type-id-spec
  (ds/spec
    {:name ::inline-response-202-3-config-id-by-config-type-id
     :spec inline-response-202-3-config-id-by-config-type-id-data}))
