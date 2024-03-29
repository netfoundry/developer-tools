# untitled API
#
# No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
#
# The version of the OpenAPI document: 5229
# 
# Generated by: https://openapi-generator.tech

#' @docType class
#' @title InlineResponse2006Embedded
#' @description InlineResponse2006Embedded Class
#' @format An \code{R6Class} generator object
#' @field appWanList  list( \link{InlineResponse200} ) 
#'
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
InlineResponse2006Embedded <- R6::R6Class(
  'InlineResponse2006Embedded',
  public = list(
    `appWanList` = NULL,
    initialize = function(`appWanList`, ...){
      local.optional.var <- list(...)
      if (!missing(`appWanList`)) {
        stopifnot(is.vector(`appWanList`), length(`appWanList`) != 0)
        sapply(`appWanList`, function(x) stopifnot(R6::is.R6(x)))
        self$`appWanList` <- `appWanList`
      }
    },
    toJSON = function() {
      InlineResponse2006EmbeddedObject <- list()
      if (!is.null(self$`appWanList`)) {
        InlineResponse2006EmbeddedObject[['appWanList']] <-
          lapply(self$`appWanList`, function(x) x$toJSON())
      }

      InlineResponse2006EmbeddedObject
    },
    fromJSON = function(InlineResponse2006EmbeddedJson) {
      InlineResponse2006EmbeddedObject <- jsonlite::fromJSON(InlineResponse2006EmbeddedJson)
      if (!is.null(InlineResponse2006EmbeddedObject$`appWanList`)) {
        self$`appWanList` <- ApiClient$new()$deserializeObj(InlineResponse2006EmbeddedObject$`appWanList`, "array[InlineResponse200]", loadNamespace("openapi"))
      }
    },
    toJSONString = function() {
      jsoncontent <- c(
        if (!is.null(self$`appWanList`)) {
        sprintf(
        '"appWanList":
        [%s]
',
        paste(sapply(self$`appWanList`, function(x) jsonlite::toJSON(x$toJSON(), auto_unbox=TRUE, digits = NA)), collapse=",")
        )}
      )
      jsoncontent <- paste(jsoncontent, collapse = ",")
      paste('{', jsoncontent, '}', sep = "")
    },
    fromJSONString = function(InlineResponse2006EmbeddedJson) {
      InlineResponse2006EmbeddedObject <- jsonlite::fromJSON(InlineResponse2006EmbeddedJson)
      self$`appWanList` <- ApiClient$new()$deserializeObj(InlineResponse2006EmbeddedObject$`appWanList`, "array[InlineResponse200]", loadNamespace("openapi"))
      self
    }
  )
)
