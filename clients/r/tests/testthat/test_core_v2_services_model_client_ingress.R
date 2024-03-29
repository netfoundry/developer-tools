# Automatically generated by openapi-generator (https://openapi-generator.tech)
# Please update as you see appropriate

context("Test CoreV2ServicesModelClientIngress")

model.instance <- CoreV2ServicesModelClientIngress$new()

test_that("protocols", {
  # tests for the property `protocols` (array[character])

  # uncomment below to test the property 
  #expect_equal(model.instance$`protocols`, "EXPECTED_RESULT")
})

test_that("host", {
  # tests for the property `host` (character)

  # uncomment below to test the property 
  #expect_equal(model.instance$`host`, "EXPECTED_RESULT")
})

test_that("ports", {
  # tests for the property `ports` (array[CoreV2ServicesModelClientIngressPorts])

  # uncomment below to test the property 
  #expect_equal(model.instance$`ports`, "EXPECTED_RESULT")
})

test_that("port", {
  # tests for the property `port` (AnyType)

  # uncomment below to test the property 
  #expect_equal(model.instance$`port`, "EXPECTED_RESULT")
})

test_that("addresses", {
  # tests for the property `addresses` (array[character])

  # uncomment below to test the property 
  #expect_equal(model.instance$`addresses`, "EXPECTED_RESULT")
})

