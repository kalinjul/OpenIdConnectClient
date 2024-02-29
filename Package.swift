// swift-tools-version:5.6
import PackageDescription

let package = Package(
    name: "OpenIdConnectClient",
    platforms: [
        .iOS(.v15)
    ],
    products: [
        .library(
            name: "OpenIdConnectClient",
            targets: ["OpenIdConnectClient"]
        ),
    ],
    targets: [
        .binaryTarget(
            name: "OpenIdConnectClient",
            url: "https://github.com/kalinjul/OpenIdConnectClient/raw/develop/OpenIdConnectClient.zip",
            checksum: "7f73748bf7cf27d4dbc1a089787df9c42b56b2f7228b5addb9b5ad846dcdd85a"
        ),
    ]
)
