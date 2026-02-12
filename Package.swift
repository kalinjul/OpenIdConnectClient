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
            url: "https://github.com/kalinjul/OpenIdConnectClient/releases/download/0.16.5/OpenIdConnectClient.zip",
            checksum: "b4bf4d6fdfcb271bbe2a1cc6664de5cc5df9bd383ab057be675d71efebaa9e34"
        ),
    ]
)
