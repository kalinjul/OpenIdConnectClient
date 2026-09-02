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
            url: "https://github.com/kalinjul/OpenIdConnectClient/releases/download/0.18.2/OpenIdConnectClient.zip",
            checksum: "ead80b4285123c6c6c0a9c44b2dce2ad73bac5916d30395555a4eaf87c271c9e"
        ),
    ]
)
