# untitled API
#
# No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
#
# The version of the OpenAPI document: 5229
# 
# Generated by: https://openapi-generator.tech

#' @docType class
#' @title InlineResponse200LinksSelf
#' @description InlineResponse200LinksSelf Class
#' @format An \code{R6Class} generator object
#' @field href  character 
#'
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
InlineResponse200LinksSelf <- R6::R6Class(
  'InlineResponse200LinksSelf',
  public = list(
    `href` = NULL,
    initialize = function(`href`, ...){
      local.optional.var <- list(...)
      if (!missing(`href`)) {
        stopifnot(is.character(`href`), length(`href`) == 1)
        self$`href` <- `href`
      }
    },
    toJSON = function() {
      InlineResponse200LinksSelfObject <- list()
      if (!is.null(self$`href`)) {
        InlineResponse200LinksSelfObject[['href']] <-
          self$`href`
      }

      InlineResponse200LinksSelfObject
    },
    fromJSON = function(InlineResponse200LinksSelfJson) {
      InlineResponse200LinksSelfObject <- jsonlite::fromJSON(InlineResponse200LinksSelfJson)
      if (!is.null(InlineResponse200LinksSelfObject$`href`)) {
        self$`href` <- InlineResponse200LinksSelfObject$`href`
      }
    },
    toJSONString = function() {
      jsoncontent <- c(
        if (!is.null(self$`href`)) {
        sprintf(
        '"href":
          "%s"
                ',
        self$`href`
        )}
      )
      jsoncontent <- paste(jsoncontent, collapse = ",")
      paste('{', jsoncontent, '}', sep = "")
    },
    fromJSONString = function(InlineResponse200LinksSelfJson) {
      InlineResponse200LinksSelfObject <- jsonlite::fromJSON(InlineResponse200LinksSelfJson)
      self$`href` <- InlineResponse200LinksSelfObject$`href`
      self
    }
  )
)
