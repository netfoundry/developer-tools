function New-InlineResponse2001Page {
    [CmdletBinding()]
    Param (
        [Parameter(Position = 0, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [Decimal]
        ${number},
        [Parameter(Position = 1, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [Decimal]
        ${size},
        [Parameter(Position = 2, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [Decimal]
        ${totalElements},
        [Parameter(Position = 3, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [Decimal]
        ${totalPages}
    )

    Process {
        'Creating object: Org.OpenAPITools.Model.InlineResponse2001Page' | Write-Verbose
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        New-Object -TypeName Org.OpenAPITools.Model.InlineResponse2001Page -ArgumentList @(
            ${number},
            ${size},
            ${totalElements},
            ${totalPages}
        )
    }
}
