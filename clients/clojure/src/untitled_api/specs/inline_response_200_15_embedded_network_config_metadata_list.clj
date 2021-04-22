(ns untitled-api.specs.inline-response-200-15-embedded-network-config-metadata-list
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [untitled-api.specs.inline-response-200-2-embedded-links :refer :all]
            )
  (:import (java.io File)))


(def inline-response-200-15-embedded-network-config-metadata-list-data
  {
   (ds/req :networkControllerVolumeSize) float?
   (ds/req :gatewayVolumeSize) float?
   (ds/req :name) string?
   (ds/req :gcpTransferNodeSize) string?
   (ds/req :awsNetworkControllerSize) string?
   (ds/req :transferNodeVolumeSize) float?
   (ds/req :awsGatewaySize) string?
   (ds/req :ocpTransferNodeSize) string?
   (ds/req :awsTransferNodeSize) string?
   (ds/req :id) string?
   (ds/req :azureTransferNodeSize) string?
   (ds/req :alicloudTransferNodeSize) string?
   (ds/req :_links) inline-response-200-2-embedded-links-spec
   })

(def inline-response-200-15-embedded-network-config-metadata-list-spec
  (ds/spec
    {:name ::inline-response-200-15-embedded-network-config-metadata-list
     :spec inline-response-200-15-embedded-network-config-metadata-list-data}))
