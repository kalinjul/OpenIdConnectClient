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
            url: "https://github.com/kalinjul/OpenIdConnectClient/releases/download/0.6.6/OpenIdConnectClient.zip",
            checksum: "c41fc207ef175e42f3c90d6f8e50485fc8a64a3124b8ac2a9a25cfc3bd3418a4"
        ),
    ]
)
