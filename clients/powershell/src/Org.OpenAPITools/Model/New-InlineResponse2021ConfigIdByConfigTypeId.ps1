function New-InlineResponse2021ConfigIdByConfigTypeId {
    [CmdletBinding()]
    Param (
        [Parameter(Position = 0, ValueFromPipelineByPropertyName = $true)]
        [String]
        ${6fa5c2bcMinusb7f7Minus47f8Minus9229Minuse927722adb27},
        [Parameter(Position = 1, ValueFromPipelineByPropertyName = $true)]
        [String]
        ${7491e52dMinus97e8Minus4759Minus8a63Minusc8ea8a75f822},
        [Parameter(Position = 2, ValueFromPipelineByPropertyName = $true)]
        [String]
        ${b1582680Minusab7bMinus45d0Minusac36Minusb00f82df8e79},
        [Parameter(Position = 3, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [String]
        ${e7f6ef8dMinusda57Minus444cMinusb677Minusf03974f5d8be}
    )

    Process {
        'Creating object: Org.OpenAPITools.Model.InlineResponse2021ConfigIdByConfigTypeId' | Write-Verbose
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        New-Object -TypeName Org.OpenAPITools.Model.InlineResponse2021ConfigIdByConfigTypeId -ArgumentList @(
            ${6fa5c2bcMinusb7f7Minus47f8Minus9229Minuse927722adb27},
            ${7491e52dMinus97e8Minus4759Minus8a63Minusc8ea8a75f822},
            ${b1582680Minusab7bMinus45d0Minusac36Minusb00f82df8e79},
            ${e7f6ef8dMinusda57Minus444cMinusb677Minusf03974f5d8be}
        )
    }
}
