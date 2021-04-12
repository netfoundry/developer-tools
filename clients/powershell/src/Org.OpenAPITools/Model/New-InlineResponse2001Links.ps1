function New-InlineResponse2001Links {
    [CmdletBinding()]
    Param (
        [Parameter(Position = 0, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [Org.OpenAPITools.Model.InlineResponse2001LinksSelf]
        ${self}
    )

    Process {
        'Creating object: Org.OpenAPITools.Model.InlineResponse2001Links' | Write-Verbose
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        New-Object -TypeName Org.OpenAPITools.Model.InlineResponse2001Links -ArgumentList @(
            ${self}
        )
    }
}
