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
            checksum: "189bcfa593d1a2ad75b8502c81f9bbc991068d64dcaaf67d2961e527727e1d73"
        ),
    ]
)
