(ns untitled-api.specs.inline-response-200-19-7-3-4
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def inline-response-200-19-7-3-4-data
  {
   (ds/req :zitiCliLinuxBinarysha-1) string?
   (ds/req :zitiTunnelLinuxBinary) string?
   (ds/req :zitiTunnelLinuxBinarysha-1) string?
   (ds/req :zitiControllerBinary) string?
   (ds/req :zitiCliLinuxBinarymd5) string?
   (ds/req :zitiRouterLinuxBinarysha-1) string?
   (ds/req :zitiRouterLinuxArmBinarymd5) string?
   (ds/req :zitiRouterLinuxBinarysha-256) string?
   (ds/req :zitiCliLinuxArmBinary) string?
   (ds/req :zitiRouterLinuxBinarymd5) string?
   (ds/req :zitiWindowsDesktopEdge) string?
   (ds/req :zitiRouterLinuxArmBinarysha-256) string?
   (ds/req :zitiMacDesktopEdge) string?
   (ds/req :zitiControllerBinarysha-1) string?
   (ds/req :zitiControllerBinarymd5) string?
   (ds/req :zitiControllerBinarysha-256) string?
   (ds/req :zitiIosEdge) string?
   (ds/req :zitiCliLinuxBinary) string?
   (ds/req :zitiRouterLinuxArmBinarysha-1) string?
   (ds/req :zitiVersion) string?
   (ds/req :zitiCliLinuxArmBinarysha-1) string?
   (ds/req :zitiTunnelLinuxArmBinarysha-1) string?
   (ds/req :zitiTunnelLinuxArmBinary) string?
   (ds/req :zitiCliLinuxArmBinarysha-256) string?
   (ds/req :zitiRouterLinuxBinary) string?
   (ds/req :zitiTunnelLinuxBinarysha-256) string?
   (ds/req :zitiAndroidEdge) string?
   (ds/req :zitiTunnelLinuxArmBinarymd5) string?
   (ds/req :zitiTunnelLinuxBinarymd5) string?
   (ds/req :zitiRouterLinuxArmBinary) string?
   (ds/req :zitiCliLinuxArmBinarymd5) string?
   (ds/req :zitiTunnelLinuxArmBinarysha-256) string?
   (ds/req :zitiCliLinuxBinarysha-256) string?
   (ds/req :active) boolean?
   })

(def inline-response-200-19-7-3-4-spec
  (ds/spec
    {:name ::inline-response-200-19-7-3-4
     :spec inline-response-200-19-7-3-4-data}))
