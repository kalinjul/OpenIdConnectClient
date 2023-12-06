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
            url: "https://github.com/kalinjul/OpenIdConnectClient/raw/0.4.0/OpenIdConnectClient.zip",
            checksum: "5d3109ec1848c3d5177c81137235b14f31f4836e157b28b7af9e26118ccbf046"
        ),
    ]
)
