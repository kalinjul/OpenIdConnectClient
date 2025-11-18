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
            url: "https://github.com/kalinjul/OpenIdConnectClient/releases/download/0.16.0/OpenIdConnectClient.zip",
            checksum: "f27c65d754c9a040722db13c9cd9f03c951fe4c3ee66d9e7587901c64c0705b7"
        ),
    ]
)
