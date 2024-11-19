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
            url: "https://github.com/kalinjul/OpenIdConnectClient/releases/download/0.12.0/OpenIdConnectClient.zip",
            checksum: "ecd92b8afba9eedfa879d16d50a2f41d62156924d7c8b68852ed7c49f6cb1f5d"
        ),
    ]
)
