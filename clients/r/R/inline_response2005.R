# untitled API
#
# No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
#
# The version of the OpenAPI document: 5229
# 
# Generated by: https://openapi-generator.tech

#' @docType class
#' @title InlineResponse2005
#' @description InlineResponse2005 Class
#' @format An \code{R6Class} generator object
#' @field deletedAt  \link{AnyType} 
#'
#' @field networkId  character 
#'
#' @field name  character 
#'
#' @field updatedAt  character 
#'
#' @field model  \link{InlineResponse2003EmbeddedModel} 
#'
#' @field zitiId  character 
#'
#' @field ownerIdentityId  character 
#'
#' @field attributes  list( character ) 
#'
#' @field modelType  character 
#'
#' @field id  character 
#'
#' @field configIdByConfigTypeId  \link{InlineResponse2005ConfigIdByConfigTypeId} 
#'
#' @field createdAt  character 
#'
#' @field createdBy  character 
#'
#' @field deletedBy  \link{AnyType} 
#'
#' @field encryptionRequired  character 
#'
#' @field authority  \link{AnyType} 
#'
#' @field _links  \link{InlineResponse200Links} 
#'
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
InlineResponse2005 <- R6::R6Class(
  'InlineResponse2005',
  public = list(
    `deletedAt` = NULL,
    `networkId` = NULL,
    `name` = NULL,
    `updatedAt` = NULL,
    `model` = NULL,
    `zitiId` = NULL,
    `ownerIdentityId` = NULL,
    `attributes` = NULL,
    `modelType` = NULL,
    `id` = NULL,
    `configIdByConfigTypeId` = NULL,
    `createdAt` = NULL,
    `createdBy` = NULL,
    `deletedBy` = NULL,
    `encryptionRequired` = NULL,
    `authority` = NULL,
    `_links` = NULL,
    initialize = function(`deletedAt`, `networkId`, `name`, `updatedAt`, `model`, `zitiId`, `ownerIdentityId`, `attributes`, `modelType`, `id`, `configIdByConfigTypeId`, `createdAt`, `createdBy`, `deletedBy`, `encryptionRequired`, `authority`, `_links`, ...){
      local.optional.var <- list(...)
      if (!missing(`deletedAt`)) {
        stopifnot(R6::is.R6(`deletedAt`))
        self$`deletedAt` <- `deletedAt`
      }
      if (!missing(`networkId`)) {
        stopifnot(is.character(`networkId`), length(`networkId`) == 1)
        self$`networkId` <- `networkId`
      }
      if (!missing(`name`)) {
        stopifnot(is.character(`name`), length(`name`) == 1)
        self$`name` <- `name`
      }
      if (!missing(`updatedAt`)) {
        stopifnot(is.character(`updatedAt`), length(`updatedAt`) == 1)
        self$`updatedAt` <- `updatedAt`
      }
      if (!missing(`model`)) {
        stopifnot(R6::is.R6(`model`))
        self$`model` <- `model`
      }
      if (!missing(`zitiId`)) {
        stopifnot(is.character(`zitiId`), length(`zitiId`) == 1)
        self$`zitiId` <- `zitiId`
      }
      if (!missing(`ownerIdentityId`)) {
        stopifnot(is.character(`ownerIdentityId`), length(`ownerIdentityId`) == 1)
        self$`ownerIdentityId` <- `ownerIdentityId`
      }
      if (!missing(`attributes`)) {
        stopifnot(is.vector(`attributes`), length(`attributes`) != 0)
        sapply(`attributes`, function(x) stopifnot(is.character(x)))
        self$`attributes` <- `attributes`
      }
      if (!missing(`modelType`)) {
        stopifnot(is.character(`modelType`), length(`modelType`) == 1)
        self$`modelType` <- `modelType`
      }
      if (!missing(`id`)) {
        stopifnot(is.character(`id`), length(`id`) == 1)
        self$`id` <- `id`
      }
      if (!missing(`configIdByConfigTypeId`)) {
        stopifnot(R6::is.R6(`configIdByConfigTypeId`))
        self$`configIdByConfigTypeId` <- `configIdByConfigTypeId`
      }
      if (!missing(`createdAt`)) {
        stopifnot(is.character(`createdAt`), length(`createdAt`) == 1)
        self$`createdAt` <- `createdAt`
      }
      if (!missing(`createdBy`)) {
        stopifnot(is.character(`createdBy`), length(`createdBy`) == 1)
        self$`createdBy` <- `createdBy`
      }
      if (!missing(`deletedBy`)) {
        stopifnot(R6::is.R6(`deletedBy`))
        self$`deletedBy` <- `deletedBy`
      }
      if (!missing(`encryptionRequired`)) {
        self$`encryptionRequired` <- `encryptionRequired`
      }
      if (!missing(`authority`)) {
        stopifnot(R6::is.R6(`authority`))
        self$`authority` <- `authority`
      }
      if (!missing(`_links`)) {
        stopifnot(R6::is.R6(`_links`))
        self$`_links` <- `_links`
      }
    },
    toJSON = function() {
      InlineResponse2005Object <- list()
      if (!is.null(self$`deletedAt`)) {
        InlineResponse2005Object[['deletedAt']] <-
          self$`deletedAt`$toJSON()
      }
      if (!is.null(self$`networkId`)) {
        InlineResponse2005Object[['networkId']] <-
          self$`networkId`
      }
      if (!is.null(self$`name`)) {
        InlineResponse2005Object[['name']] <-
          self$`name`
      }
      if (!is.null(self$`updatedAt`)) {
        InlineResponse2005Object[['updatedAt']] <-
          self$`updatedAt`
      }
      if (!is.null(self$`model`)) {
        InlineResponse2005Object[['model']] <-
          self$`model`$toJSON()
      }
      if (!is.null(self$`zitiId`)) {
        InlineResponse2005Object[['zitiId']] <-
          self$`zitiId`
      }
      if (!is.null(self$`ownerIdentityId`)) {
        InlineResponse2005Object[['ownerIdentityId']] <-
          self$`ownerIdentityId`
      }
      if (!is.null(self$`attributes`)) {
        InlineResponse2005Object[['attributes']] <-
          self$`attributes`
      }
      if (!is.null(self$`modelType`)) {
        InlineResponse2005Object[['modelType']] <-
          self$`modelType`
      }
      if (!is.null(self$`id`)) {
        InlineResponse2005Object[['id']] <-
          self$`id`
      }
      if (!is.null(self$`configIdByConfigTypeId`)) {
        InlineResponse2005Object[['configIdByConfigTypeId']] <-
          self$`configIdByConfigTypeId`$toJSON()
      }
      if (!is.null(self$`createdAt`)) {
        InlineResponse2005Object[['createdAt']] <-
          self$`createdAt`
      }
      if (!is.null(self$`createdBy`)) {
        InlineResponse2005Object[['createdBy']] <-
          self$`createdBy`
      }
      if (!is.null(self$`deletedBy`)) {
        InlineResponse2005Object[['deletedBy']] <-
          self$`deletedBy`$toJSON()
      }
      if (!is.null(self$`encryptionRequired`)) {
        InlineResponse2005Object[['encryptionRequired']] <-
          self$`encryptionRequired`
      }
      if (!is.null(self$`authority`)) {
        InlineResponse2005Object[['authority']] <-
          self$`authority`$toJSON()
      }
      if (!is.null(self$`_links`)) {
        InlineResponse2005Object[['_links']] <-
          self$`_links`$toJSON()
      }

      InlineResponse2005Object
    },
    fromJSON = function(InlineResponse2005Json) {
      InlineResponse2005Object <- jsonlite::fromJSON(InlineResponse2005Json)
      if (!is.null(InlineResponse2005Object$`deletedAt`)) {
        deletedAtObject <- AnyType$new()
        deletedAtObject$fromJSON(jsonlite::toJSON(InlineResponse2005Object$deletedAt, auto_unbox = TRUE, digits = NA))
        self$`deletedAt` <- deletedAtObject
      }
      if (!is.null(InlineResponse2005Object$`networkId`)) {
        self$`networkId` <- InlineResponse2005Object$`networkId`
      }
      if (!is.null(InlineResponse2005Object$`name`)) {
        self$`name` <- InlineResponse2005Object$`name`
      }
      if (!is.null(InlineResponse2005Object$`updatedAt`)) {
        self$`updatedAt` <- InlineResponse2005Object$`updatedAt`
      }
      if (!is.null(InlineResponse2005Object$`model`)) {
        modelObject <- InlineResponse2003EmbeddedModel$new()
        modelObject$fromJSON(jsonlite::toJSON(InlineResponse2005Object$model, auto_unbox = TRUE, digits = NA))
        self$`model` <- modelObject
      }
      if (!is.null(InlineResponse2005Object$`zitiId`)) {
        self$`zitiId` <- InlineResponse2005Object$`zitiId`
      }
      if (!is.null(InlineResponse2005Object$`ownerIdentityId`)) {
        self$`ownerIdentityId` <- InlineResponse2005Object$`ownerIdentityId`
      }
      if (!is.null(InlineResponse2005Object$`attributes`)) {
        self$`attributes` <- ApiClient$new()$deserializeObj(InlineResponse2005Object$`attributes`, "array[character]", loadNamespace("openapi"))
      }
      if (!is.null(InlineResponse2005Object$`modelType`)) {
        self$`modelType` <- InlineResponse2005Object$`modelType`
      }
      if (!is.null(InlineResponse2005Object$`id`)) {
        self$`id` <- InlineResponse2005Object$`id`
      }
      if (!is.null(InlineResponse2005Object$`configIdByConfigTypeId`)) {
        configIdByConfigTypeIdObject <- InlineResponse2005ConfigIdByConfigTypeId$new()
        configIdByConfigTypeIdObject$fromJSON(jsonlite::toJSON(InlineResponse2005Object$configIdByConfigTypeId, auto_unbox = TRUE, digits = NA))
        self$`configIdByConfigTypeId` <- configIdByConfigTypeIdObject
      }
      if (!is.null(InlineResponse2005Object$`createdAt`)) {
        self$`createdAt` <- InlineResponse2005Object$`createdAt`
      }
      if (!is.null(InlineResponse2005Object$`createdBy`)) {
        self$`createdBy` <- InlineResponse2005Object$`createdBy`
      }
      if (!is.null(InlineResponse2005Object$`deletedBy`)) {
        deletedByObject <- AnyType$new()
        deletedByObject$fromJSON(jsonlite::toJSON(InlineResponse2005Object$deletedBy, auto_unbox = TRUE, digits = NA))
        self$`deletedBy` <- deletedByObject
      }
      if (!is.null(InlineResponse2005Object$`encryptionRequired`)) {
        self$`encryptionRequired` <- InlineResponse2005Object$`encryptionRequired`
      }
      if (!is.null(InlineResponse2005Object$`authority`)) {
        authorityObject <- AnyType$new()
        authorityObject$fromJSON(jsonlite::toJSON(InlineResponse2005Object$authority, auto_unbox = TRUE, digits = NA))
        self$`authority` <- authorityObject
      }
      if (!is.null(InlineResponse2005Object$`_links`)) {
        _linksObject <- InlineResponse200Links$new()
        _linksObject$fromJSON(jsonlite::toJSON(InlineResponse2005Object$_links, auto_unbox = TRUE, digits = NA))
        self$`_links` <- _linksObject
      }
    },
    toJSONString = function() {
      jsoncontent <- c(
        if (!is.null(self$`deletedAt`)) {
        sprintf(
        '"deletedAt":
        %s
        ',
        jsonlite::toJSON(self$`deletedAt`$toJSON(), auto_unbox=TRUE, digits = NA)
        )},
        if (!is.null(self$`networkId`)) {
        sprintf(
        '"networkId":
          "%s"
                ',
        self$`networkId`
        )},
        if (!is.null(self$`name`)) {
        sprintf(
        '"name":
          "%s"
                ',
        self$`name`
        )},
        if (!is.null(self$`updatedAt`)) {
        sprintf(
        '"updatedAt":
          "%s"
                ',
        self$`updatedAt`
        )},
        if (!is.null(self$`model`)) {
        sprintf(
        '"model":
        %s
        ',
        jsonlite::toJSON(self$`model`$toJSON(), auto_unbox=TRUE, digits = NA)
        )},
        if (!is.null(self$`zitiId`)) {
        sprintf(
        '"zitiId":
          "%s"
                ',
        self$`zitiId`
        )},
        if (!is.null(self$`ownerIdentityId`)) {
        sprintf(
        '"ownerIdentityId":
          "%s"
                ',
        self$`ownerIdentityId`
        )},
        if (!is.null(self$`attributes`)) {
        sprintf(
        '"attributes":
           [%s]
        ',
        paste(unlist(lapply(self$`attributes`, function(x) paste0('"', x, '"'))), collapse=",")
        )},
        if (!is.null(self$`modelType`)) {
        sprintf(
        '"modelType":
          "%s"
                ',
        self$`modelType`
        )},
        if (!is.null(self$`id`)) {
        sprintf(
        '"id":
          "%s"
                ',
        self$`id`
        )},
        if (!is.null(self$`configIdByConfigTypeId`)) {
        sprintf(
        '"configIdByConfigTypeId":
        %s
        ',
        jsonlite::toJSON(self$`configIdByConfigTypeId`$toJSON(), auto_unbox=TRUE, digits = NA)
        )},
        if (!is.null(self$`createdAt`)) {
        sprintf(
        '"createdAt":
          "%s"
                ',
        self$`createdAt`
        )},
        if (!is.null(self$`createdBy`)) {
        sprintf(
        '"createdBy":
          "%s"
                ',
        self$`createdBy`
        )},
        if (!is.null(self$`deletedBy`)) {
        sprintf(
        '"deletedBy":
        %s
        ',
        jsonlite::toJSON(self$`deletedBy`$toJSON(), auto_unbox=TRUE, digits = NA)
        )},
        if (!is.null(self$`encryptionRequired`)) {
        sprintf(
        '"encryptionRequired":
          "%s"
                ',
        self$`encryptionRequired`
        )},
        if (!is.null(self$`authority`)) {
        sprintf(
        '"authority":
        %s
        ',
        jsonlite::toJSON(self$`authority`$toJSON(), auto_unbox=TRUE, digits = NA)
        )},
        if (!is.null(self$`_links`)) {
        sprintf(
        '"_links":
        %s
        ',
        jsonlite::toJSON(self$`_links`$toJSON(), auto_unbox=TRUE, digits = NA)
        )}
      )
      jsoncontent <- paste(jsoncontent, collapse = ",")
      paste('{', jsoncontent, '}', sep = "")
    },
    fromJSONString = function(InlineResponse2005Json) {
      InlineResponse2005Object <- jsonlite::fromJSON(InlineResponse2005Json)
      self$`deletedAt` <- AnyType$new()$fromJSON(jsonlite::toJSON(InlineResponse2005Object$deletedAt, auto_unbox = TRUE, digits = NA))
      self$`networkId` <- InlineResponse2005Object$`networkId`
      self$`name` <- InlineResponse2005Object$`name`
      self$`updatedAt` <- InlineResponse2005Object$`updatedAt`
      self$`model` <- InlineResponse2003EmbeddedModel$new()$fromJSON(jsonlite::toJSON(InlineResponse2005Object$model, auto_unbox = TRUE, digits = NA))
      self$`zitiId` <- InlineResponse2005Object$`zitiId`
      self$`ownerIdentityId` <- InlineResponse2005Object$`ownerIdentityId`
      self$`attributes` <- ApiClient$new()$deserializeObj(InlineResponse2005Object$`attributes`, "array[character]", loadNamespace("openapi"))
      self$`modelType` <- InlineResponse2005Object$`modelType`
      self$`id` <- InlineResponse2005Object$`id`
      self$`configIdByConfigTypeId` <- InlineResponse2005ConfigIdByConfigTypeId$new()$fromJSON(jsonlite::toJSON(InlineResponse2005Object$configIdByConfigTypeId, auto_unbox = TRUE, digits = NA))
      self$`createdAt` <- InlineResponse2005Object$`createdAt`
      self$`createdBy` <- InlineResponse2005Object$`createdBy`
      self$`deletedBy` <- AnyType$new()$fromJSON(jsonlite::toJSON(InlineResponse2005Object$deletedBy, auto_unbox = TRUE, digits = NA))
      self$`encryptionRequired` <- InlineResponse2005Object$`encryptionRequired`
      self$`authority` <- AnyType$new()$fromJSON(jsonlite::toJSON(InlineResponse2005Object$authority, auto_unbox = TRUE, digits = NA))
      self$`_links` <- InlineResponse200Links$new()$fromJSON(jsonlite::toJSON(InlineResponse2005Object$_links, auto_unbox = TRUE, digits = NA))
      self
    }
  )
)
