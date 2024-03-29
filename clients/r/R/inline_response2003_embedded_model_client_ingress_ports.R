# untitled API
#
# No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
#
# The version of the OpenAPI document: 5229
# 
# Generated by: https://openapi-generator.tech

#' @docType class
#' @title InlineResponse2003EmbeddedModelClientIngressPorts
#' @description InlineResponse2003EmbeddedModelClientIngressPorts Class
#' @format An \code{R6Class} generator object
#' @field high  numeric 
#'
#' @field low  numeric 
#'
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
InlineResponse2003EmbeddedModelClientIngressPorts <- R6::R6Class(
  'InlineResponse2003EmbeddedModelClientIngressPorts',
  public = list(
    `high` = NULL,
    `low` = NULL,
    initialize = function(`high`, `low`, ...){
      local.optional.var <- list(...)
      if (!missing(`high`)) {
        self$`high` <- `high`
      }
      if (!missing(`low`)) {
        self$`low` <- `low`
      }
    },
    toJSON = function() {
      InlineResponse2003EmbeddedModelClientIngressPortsObject <- list()
      if (!is.null(self$`high`)) {
        InlineResponse2003EmbeddedModelClientIngressPortsObject[['high']] <-
          self$`high`
      }
      if (!is.null(self$`low`)) {
        InlineResponse2003EmbeddedModelClientIngressPortsObject[['low']] <-
          self$`low`
      }

      InlineResponse2003EmbeddedModelClientIngressPortsObject
    },
    fromJSON = function(InlineResponse2003EmbeddedModelClientIngressPortsJson) {
      InlineResponse2003EmbeddedModelClientIngressPortsObject <- jsonlite::fromJSON(InlineResponse2003EmbeddedModelClientIngressPortsJson)
      if (!is.null(InlineResponse2003EmbeddedModelClientIngressPortsObject$`high`)) {
        self$`high` <- InlineResponse2003EmbeddedModelClientIngressPortsObject$`high`
      }
      if (!is.null(InlineResponse2003EmbeddedModelClientIngressPortsObject$`low`)) {
        self$`low` <- InlineResponse2003EmbeddedModelClientIngressPortsObject$`low`
      }
    },
    toJSONString = function() {
      jsoncontent <- c(
        if (!is.null(self$`high`)) {
        sprintf(
        '"high":
          %d
                ',
        self$`high`
        )},
        if (!is.null(self$`low`)) {
        sprintf(
        '"low":
          %d
                ',
        self$`low`
        )}
      )
      jsoncontent <- paste(jsoncontent, collapse = ",")
      paste('{', jsoncontent, '}', sep = "")
    },
    fromJSONString = function(InlineResponse2003EmbeddedModelClientIngressPortsJson) {
      InlineResponse2003EmbeddedModelClientIngressPortsObject <- jsonlite::fromJSON(InlineResponse2003EmbeddedModelClientIngressPortsJson)
      self$`high` <- InlineResponse2003EmbeddedModelClientIngressPortsObject$`high`
      self$`low` <- InlineResponse2003EmbeddedModelClientIngressPortsObject$`low`
      self
    }
  )
)
