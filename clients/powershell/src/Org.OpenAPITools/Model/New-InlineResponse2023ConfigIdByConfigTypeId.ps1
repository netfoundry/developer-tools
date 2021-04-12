function New-InlineResponse2023ConfigIdByConfigTypeId {
    [CmdletBinding()]
    Param (
        [Parameter(Position = 0, ValueFromPipelineByPropertyName = $true)]
        [String]
        ${714a918aMinus7935Minus4b4fMinus82c3Minusafbadcd9e59b},
        [Parameter(Position = 1, ValueFromPipelineByPropertyName = $true)]
        [String]
        ${7cafedc5Minus17b8Minus4c1eMinus8b6fMinus0d9bc1b4b7bc},
        [Parameter(Position = 2, ValueFromPipelineByPropertyName = $true)]
        [String]
        ${d75e27f0MinusebabMinus4567Minus8440Minusc24f02f2eca5},
        [Parameter(Position = 3, ValueFromPipelineByPropertyName = $true)]
        [String]
        ${ea6e632bMinusd8e1Minus420fMinusbd8fMinusad50b067bad6}
    )

    Process {
        'Creating object: Org.OpenAPITools.Model.InlineResponse2023ConfigIdByConfigTypeId' | Write-Verbose
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        New-Object -TypeName Org.OpenAPITools.Model.InlineResponse2023ConfigIdByConfigTypeId -ArgumentList @(
            ${714a918aMinus7935Minus4b4fMinus82c3Minusafbadcd9e59b},
            ${7cafedc5Minus17b8Minus4c1eMinus8b6fMinus0d9bc1b4b7bc},
            ${d75e27f0MinusebabMinus4567Minus8440Minusc24f02f2eca5},
            ${ea6e632bMinusd8e1Minus420fMinusbd8fMinusad50b067bad6}
        )
    }
}
