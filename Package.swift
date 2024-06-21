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
            url: "https://github.com/kalinjul/OpenIdConnectClient/releases/download/0.10.0/OpenIdConnectClient.zip",
            checksum: "3036cb7b27eafaf1e3dac966f52378da7598a740f890287d6759904f89106919"
        ),
    ]
)
