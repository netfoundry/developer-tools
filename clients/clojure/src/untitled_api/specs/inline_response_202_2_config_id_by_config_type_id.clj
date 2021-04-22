(ns untitled-api.specs.inline-response-202-2-config-id-by-config-type-id
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def inline-response-202-2-config-id-by-config-type-id-data
  {
   (ds/opt :aca7f705-9f00-4ff6-8b86-63a4d44bde8a) string?
   (ds/opt :6cd51ae0-cfe4-499d-88d8-d02a9e18b25f) string?
   (ds/opt :d28725c0-9771-47d7-a9da-e408bd0adf4e) string?
   (ds/opt :888d6565-4359-4d91-b38d-0a24124e4456) string?
   (ds/opt :feb075cd-dd2b-47c5-922c-86ef3b06fb16) string?
   })

(def inline-response-202-2-config-id-by-config-type-id-spec
  (ds/spec
    {:name ::inline-response-202-2-config-id-by-config-type-id
     :spec inline-response-202-2-config-id-by-config-type-id-data}))
