function New-InlineResponse2022ConfigIdByConfigTypeId {
    [CmdletBinding()]
    Param (
        [Parameter(Position = 0, ValueFromPipelineByPropertyName = $true)]
        [String]
        ${aca7f705Minus9f00Minus4ff6Minus8b86Minus63a4d44bde8a},
        [Parameter(Position = 1, ValueFromPipelineByPropertyName = $true)]
        [String]
        ${6cd51ae0Minuscfe4Minus499dMinus88d8Minusd02a9e18b25f},
        [Parameter(Position = 2, ValueFromPipelineByPropertyName = $true)]
        [String]
        ${d28725c0Minus9771Minus47d7Minusa9daMinuse408bd0adf4e},
        [Parameter(Position = 3, ValueFromPipelineByPropertyName = $true)]
        [String]
        ${888d6565Minus4359Minus4d91Minusb38dMinus0a24124e4456},
        [Parameter(Position = 4, ValueFromPipelineByPropertyName = $true)]
        [String]
        ${feb075cdMinusdd2bMinus47c5Minus922cMinus86ef3b06fb16}
    )

    Process {
        'Creating object: Org.OpenAPITools.Model.InlineResponse2022ConfigIdByConfigTypeId' | Write-Verbose
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        New-Object -TypeName Org.OpenAPITools.Model.InlineResponse2022ConfigIdByConfigTypeId -ArgumentList @(
            ${aca7f705Minus9f00Minus4ff6Minus8b86Minus63a4d44bde8a},
            ${6cd51ae0Minuscfe4Minus499dMinus88d8Minusd02a9e18b25f},
            ${d28725c0Minus9771Minus47d7Minusa9daMinuse408bd0adf4e},
            ${888d6565Minus4359Minus4d91Minusb38dMinus0a24124e4456},
            ${feb075cdMinusdd2bMinus47c5Minus922cMinus86ef3b06fb16}
        )
    }
}
