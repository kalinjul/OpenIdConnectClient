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
            url: "https://github.com/kalinjul/OpenIdConnectClient/raw/0.5.2/OpenIdConnectClient.zip",
            checksum: "aa5894ccd3a9320aefbf0011a99801e2e18a487ee5a10b27afb7afecb7b38a5f"
        ),
    ]
)
