(ns untitled-api.specs.inline-response-200-19-7-1-0
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def inline-response-200-19-7-1-0-data
  {
   (ds/req :zitiCliLinuxBinarysha-1) string?
   (ds/req :zitiTunnelLinuxBinary) string?
   (ds/req :zitiTunnelLinuxBinarysha-1) string?
   (ds/req :zitiControllerBinary) string?
   (ds/req :zitiCliLinuxBinarymd5) string?
   (ds/req :zitiRouterLinuxBinarysha-1) string?
   (ds/req :zitiRouterLinuxBinarysha-256) string?
   (ds/req :zitiRouterLinuxBinarymd5) string?
   (ds/req :zitiWindowsDesktopEdge) string?
   (ds/req :zitiMacDesktopEdge) string?
   (ds/req :zitiControllerBinarysha-1) string?
   (ds/req :zitiControllerBinarymd5) string?
   (ds/req :zitiControllerBinarysha-256) string?
   (ds/req :zitiIosEdge) string?
   (ds/req :zitiCliLinuxBinary) string?
   (ds/req :zitiVersion) string?
   (ds/req :zitiRouterLinuxBinary) string?
   (ds/req :zitiTunnelLinuxBinarysha-256) string?
   (ds/req :zitiAndroidEdge) string?
   (ds/req :zitiTunnelLinuxBinarymd5) string?
   (ds/req :zitiCliLinuxBinarysha-256) string?
   (ds/req :active) boolean?
   })

(def inline-response-200-19-7-1-0-spec
  (ds/spec
    {:name ::inline-response-200-19-7-1-0
     :spec inline-response-200-19-7-1-0-data}))
