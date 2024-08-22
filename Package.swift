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
            url: "https://github.com/kalinjul/OpenIdConnectClient/releases/download/0.10.1/OpenIdConnectClient.zip",
            checksum: "7bba3ec54c53ac5861a15cb010c0332e8eb8fed9b13ec7787d597b5c6bd1e1c4"
        ),
    ]
)
