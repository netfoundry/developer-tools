(ns untitled-api.specs.inline-response-200-5-config-id-by-config-type-id
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def inline-response-200-5-config-id-by-config-type-id-data
  {
   (ds/opt :d75e27f0-ebab-4567-8440-c24f02f2eca5) string?
   (ds/opt :cf3962b1-a98e-4ade-ae25-cdc388e7feb3) string?
   (ds/opt :2c1998a1-32e2-4084-b20a-b580570f4fbf) string?
   (ds/opt :4c42c4db-f039-4a57-8264-5f57af512614) string?
   (ds/opt :7cafedc5-17b8-4c1e-8b6f-0d9bc1b4b7bc) string?
   (ds/opt :714a918a-7935-4b4f-82c3-afbadcd9e59b) string?
   (ds/opt :b1582680-ab7b-45d0-ac36-b00f82df8e79) string?
   (ds/opt :e7f6ef8d-da57-444c-b677-f03974f5d8be) string?
   (ds/opt :6fa5c2bc-b7f7-47f8-9229-e927722adb27) string?
   (ds/opt :64a39300-b672-413b-9d8c-42175f7e84dd) string?
   (ds/opt :ea6e632b-d8e1-420f-bd8f-ad50b067bad6) string?
   (ds/opt :7491e52d-97e8-4759-8a63-c8ea8a75f822) string?
   })

(def inline-response-200-5-config-id-by-config-type-id-spec
  (ds/spec
    {:name ::inline-response-200-5-config-id-by-config-type-id
     :spec inline-response-200-5-config-id-by-config-type-id-data}))
