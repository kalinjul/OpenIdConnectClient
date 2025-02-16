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
            url: "https://github.com/kalinjul/OpenIdConnectClient/releases/download/0.12.2/OpenIdConnectClient.zip",
            checksum: "d3d5368a9c37c8b02c10dd1d372559dce6975203fab92d5699e904d47ebcc487"
        ),
    ]
)
