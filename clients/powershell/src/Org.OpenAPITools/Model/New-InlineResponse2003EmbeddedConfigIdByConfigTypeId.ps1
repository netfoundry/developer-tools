function New-InlineResponse2003EmbeddedConfigIdByConfigTypeId {
    [CmdletBinding()]
    Param (
        [Parameter(Position = 0, ValueFromPipelineByPropertyName = $true)]
        [String]
        ${d75e27f0MinusebabMinus4567Minus8440Minusc24f02f2eca5},
        [Parameter(Position = 1, ValueFromPipelineByPropertyName = $true)]
        [String]
        ${2c1998a1Minus32e2Minus4084Minusb20aMinusb580570f4fbf},
        [Parameter(Position = 2, ValueFromPipelineByPropertyName = $true)]
        [String]
        ${4c42c4dbMinusf039Minus4a57Minus8264Minus5f57af512614},
        [Parameter(Position = 3, ValueFromPipelineByPropertyName = $true)]
        [String]
        ${7cafedc5Minus17b8Minus4c1eMinus8b6fMinus0d9bc1b4b7bc},
        [Parameter(Position = 4, ValueFromPipelineByPropertyName = $true)]
        [String]
        ${714a918aMinus7935Minus4b4fMinus82c3Minusafbadcd9e59b},
        [Parameter(Position = 5, ValueFromPipelineByPropertyName = $true)]
        [String]
        ${b1582680Minusab7bMinus45d0Minusac36Minusb00f82df8e79},
        [Parameter(Position = 6, ValueFromPipelineByPropertyName = $true)]
        [String]
        ${6fa5c2bcMinusb7f7Minus47f8Minus9229Minuse927722adb27},
        [Parameter(Position = 7, ValueFromPipelineByPropertyName = $true)]
        [String]
        ${170c6b9bMinusf010Minus46a1Minusa2eeMinuscd6729e1f5dc},
        [Parameter(Position = 8, ValueFromPipelineByPropertyName = $true)]
        [String]
        ${ea6e632bMinusd8e1Minus420fMinusbd8fMinusad50b067bad6}
    )

    Process {
        'Creating object: Org.OpenAPITools.Model.InlineResponse2003EmbeddedConfigIdByConfigTypeId' | Write-Verbose
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        New-Object -TypeName Org.OpenAPITools.Model.InlineResponse2003EmbeddedConfigIdByConfigTypeId -ArgumentList @(
            ${d75e27f0MinusebabMinus4567Minus8440Minusc24f02f2eca5},
            ${2c1998a1Minus32e2Minus4084Minusb20aMinusb580570f4fbf},
            ${4c42c4dbMinusf039Minus4a57Minus8264Minus5f57af512614},
            ${7cafedc5Minus17b8Minus4c1eMinus8b6fMinus0d9bc1b4b7bc},
            ${714a918aMinus7935Minus4b4fMinus82c3Minusafbadcd9e59b},
            ${b1582680Minusab7bMinus45d0Minusac36Minusb00f82df8e79},
            ${6fa5c2bcMinusb7f7Minus47f8Minus9229Minuse927722adb27},
            ${170c6b9bMinusf010Minus46a1Minusa2eeMinuscd6729e1f5dc},
            ${ea6e632bMinusd8e1Minus420fMinusbd8fMinusad50b067bad6}
        )
    }
}
