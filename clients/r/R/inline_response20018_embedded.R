# untitled API
#
# No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
#
# The version of the OpenAPI document: 5229
# 
# Generated by: https://openapi-generator.tech

#' @docType class
#' @title InlineResponse20018Embedded
#' @description InlineResponse20018Embedded Class
#' @format An \code{R6Class} generator object
#' @field edgeRouterList  list( \link{InlineResponse20012} ) 
#'
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
InlineResponse20018Embedded <- R6::R6Class(
  'InlineResponse20018Embedded',
  public = list(
    `edgeRouterList` = NULL,
    initialize = function(`edgeRouterList`, ...){
      local.optional.var <- list(...)
      if (!missing(`edgeRouterList`)) {
        stopifnot(is.vector(`edgeRouterList`), length(`edgeRouterList`) != 0)
        sapply(`edgeRouterList`, function(x) stopifnot(R6::is.R6(x)))
        self$`edgeRouterList` <- `edgeRouterList`
      }
    },
    toJSON = function() {
      InlineResponse20018EmbeddedObject <- list()
      if (!is.null(self$`edgeRouterList`)) {
        InlineResponse20018EmbeddedObject[['edgeRouterList']] <-
          lapply(self$`edgeRouterList`, function(x) x$toJSON())
      }

      InlineResponse20018EmbeddedObject
    },
    fromJSON = function(InlineResponse20018EmbeddedJson) {
      InlineResponse20018EmbeddedObject <- jsonlite::fromJSON(InlineResponse20018EmbeddedJson)
      if (!is.null(InlineResponse20018EmbeddedObject$`edgeRouterList`)) {
        self$`edgeRouterList` <- ApiClient$new()$deserializeObj(InlineResponse20018EmbeddedObject$`edgeRouterList`, "array[InlineResponse20012]", loadNamespace("openapi"))
      }
    },
    toJSONString = function() {
      jsoncontent <- c(
        if (!is.null(self$`edgeRouterList`)) {
        sprintf(
        '"edgeRouterList":
        [%s]
',
        paste(sapply(self$`edgeRouterList`, function(x) jsonlite::toJSON(x$toJSON(), auto_unbox=TRUE, digits = NA)), collapse=",")
        )}
      )
      jsoncontent <- paste(jsoncontent, collapse = ",")
      paste('{', jsoncontent, '}', sep = "")
    },
    fromJSONString = function(InlineResponse20018EmbeddedJson) {
      InlineResponse20018EmbeddedObject <- jsonlite::fromJSON(InlineResponse20018EmbeddedJson)
      self$`edgeRouterList` <- ApiClient$new()$deserializeObj(InlineResponse20018EmbeddedObject$`edgeRouterList`, "array[InlineResponse20012]", loadNamespace("openapi"))
      self
    }
  )
)
