function New-CoreV2ServicesServiceIdModelServerEgress {
    [CmdletBinding()]
    Param (
        [Parameter(Position = 0, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [Org.OpenAPITools.Model.AnyType]
        ${dialInterceptAddress},
        [Parameter(Position = 1, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [Org.OpenAPITools.Model.AnyType]
        ${dialInterceptPort},
        [Parameter(Position = 2, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [Decimal]
        ${port},
        [Parameter(Position = 3, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [Boolean]
        ${dialInterceptProtocol},
        [Parameter(Position = 4, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [String]
        ${address},
        [Parameter(Position = 5, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [Org.OpenAPITools.Model.AnyType]
        ${protocol}
    )

    Process {
        'Creating object: Org.OpenAPITools.Model.CoreV2ServicesServiceIdModelServerEgress' | Write-Verbose
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        New-Object -TypeName Org.OpenAPITools.Model.CoreV2ServicesServiceIdModelServerEgress -ArgumentList @(
            ${dialInterceptAddress},
            ${dialInterceptPort},
            ${port},
            ${dialInterceptProtocol},
            ${address},
            ${protocol}
        )
    }
}
