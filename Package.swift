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
            url: "https://github.com/kalinjul/OpenIdConnectClient/releases/download/0.12.1/OpenIdConnectClient.zip",
            checksum: "0e8358e8a48d65ed2502821e8bdd5520c0b4aab36d1c8bffc73d569ee515c935"
        ),
    ]
)
