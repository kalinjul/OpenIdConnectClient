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
            checksum: "960a536c94bef2ce7e917117654eeee65b65937f7f3a9a2e6f6d2ef804a9f98c"
        ),
    ]
)
