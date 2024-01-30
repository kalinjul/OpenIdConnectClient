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
            url: "https://github.com/kalinjul/OpenIdConnectClient/releases/download/0.8.0/OpenIdConnectClient.zip",
            checksum: "4c4289467dcb2fc84814464676ea047c20282cdcb06d315007554568f629f9af"
        ),
    ]
)
