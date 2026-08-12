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
            url: "https://github.com/kalinjul/OpenIdConnectClient/releases/download/main/OpenIdConnectClient.zip",
            checksum: "1024de3de11500acc84fa45dcdfc6a4ce6c55f452068e2fa219a4abe38b6fee0"
        ),
    ]
)
