function New-InlineResponse2003EmbeddedModelServerEgress {
    [CmdletBinding()]
    Param (
        [Parameter(Position = 0, ValueFromPipelineByPropertyName = $true)]
        [String]
        ${host},
        [Parameter(Position = 1, ValueFromPipelineByPropertyName = $true)]
        [Org.OpenAPITools.Model.AnyType]
        ${dialInterceptAddress},
        [Parameter(Position = 2, ValueFromPipelineByPropertyName = $true)]
        [Org.OpenAPITools.Model.AnyType]
        ${dialInterceptPort},
        [Parameter(Position = 3, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [Decimal]
        ${port},
        [Parameter(Position = 4, ValueFromPipelineByPropertyName = $true)]
        [System.Nullable[Boolean]]
        ${dialInterceptProtocol},
        [Parameter(Position = 5, ValueFromPipelineByPropertyName = $true)]
        [String]
        ${address},
        [Parameter(Position = 6, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [Org.OpenAPITools.Model.AnyType]
        ${protocol}
    )

    Process {
        'Creating object: Org.OpenAPITools.Model.InlineResponse2003EmbeddedModelServerEgress' | Write-Verbose
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        New-Object -TypeName Org.OpenAPITools.Model.InlineResponse2003EmbeddedModelServerEgress -ArgumentList @(
            ${host},
            ${dialInterceptAddress},
            ${dialInterceptPort},
            ${port},
            ${dialInterceptProtocol},
            ${address},
            ${protocol}
        )
    }
}
