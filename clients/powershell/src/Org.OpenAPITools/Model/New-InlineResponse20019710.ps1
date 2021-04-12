function New-InlineResponse20019710 {
    [CmdletBinding()]
    Param (
        [Parameter(Position = 0, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [String]
        ${zitiCliLinuxBinaryPeriodshaMinus1},
        [Parameter(Position = 1, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [String]
        ${zitiTunnelLinuxBinary},
        [Parameter(Position = 2, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [String]
        ${zitiTunnelLinuxBinaryPeriodshaMinus1},
        [Parameter(Position = 3, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [String]
        ${zitiControllerBinary},
        [Parameter(Position = 4, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [String]
        ${zitiCliLinuxBinaryPeriodmd5},
        [Parameter(Position = 5, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [String]
        ${zitiRouterLinuxBinaryPeriodshaMinus1},
        [Parameter(Position = 6, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [String]
        ${zitiRouterLinuxBinaryPeriodshaMinus256},
        [Parameter(Position = 7, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [String]
        ${zitiRouterLinuxBinaryPeriodmd5},
        [Parameter(Position = 8, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [String]
        ${zitiWindowsDesktopEdge},
        [Parameter(Position = 9, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [String]
        ${zitiMacDesktopEdge},
        [Parameter(Position = 10, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [String]
        ${zitiControllerBinaryPeriodshaMinus1},
        [Parameter(Position = 11, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [String]
        ${zitiControllerBinaryPeriodmd5},
        [Parameter(Position = 12, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [String]
        ${zitiControllerBinaryPeriodshaMinus256},
        [Parameter(Position = 13, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [String]
        ${zitiIosEdge},
        [Parameter(Position = 14, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [String]
        ${zitiCliLinuxBinary},
        [Parameter(Position = 15, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [String]
        ${zitiVersion},
        [Parameter(Position = 16, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [String]
        ${zitiRouterLinuxBinary},
        [Parameter(Position = 17, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [String]
        ${zitiTunnelLinuxBinaryPeriodshaMinus256},
        [Parameter(Position = 18, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [String]
        ${zitiAndroidEdge},
        [Parameter(Position = 19, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [String]
        ${zitiTunnelLinuxBinaryPeriodmd5},
        [Parameter(Position = 20, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [String]
        ${zitiCliLinuxBinaryPeriodshaMinus256},
        [Parameter(Position = 21, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [Boolean]
        ${active}
    )

    Process {
        'Creating object: Org.OpenAPITools.Model.InlineResponse20019710' | Write-Verbose
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        New-Object -TypeName Org.OpenAPITools.Model.InlineResponse20019710 -ArgumentList @(
            ${zitiCliLinuxBinaryPeriodshaMinus1},
            ${zitiTunnelLinuxBinary},
            ${zitiTunnelLinuxBinaryPeriodshaMinus1},
            ${zitiControllerBinary},
            ${zitiCliLinuxBinaryPeriodmd5},
            ${zitiRouterLinuxBinaryPeriodshaMinus1},
            ${zitiRouterLinuxBinaryPeriodshaMinus256},
            ${zitiRouterLinuxBinaryPeriodmd5},
            ${zitiWindowsDesktopEdge},
            ${zitiMacDesktopEdge},
            ${zitiControllerBinaryPeriodshaMinus1},
            ${zitiControllerBinaryPeriodmd5},
            ${zitiControllerBinaryPeriodshaMinus256},
            ${zitiIosEdge},
            ${zitiCliLinuxBinary},
            ${zitiVersion},
            ${zitiRouterLinuxBinary},
            ${zitiTunnelLinuxBinaryPeriodshaMinus256},
            ${zitiAndroidEdge},
            ${zitiTunnelLinuxBinaryPeriodmd5},
            ${zitiCliLinuxBinaryPeriodshaMinus256},
            ${active}
        )
    }
}
