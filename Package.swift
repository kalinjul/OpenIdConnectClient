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
            url: "https://github.com/kalinjul/OpenIdConnectClient/releases/download/0.16.3/OpenIdConnectClient.zip",
            checksum: "54cec8b423370d12ab2f9e0f1d94c301e3f0383729cd7ffbc36330b7683d39f6"
        ),
    ]
)
