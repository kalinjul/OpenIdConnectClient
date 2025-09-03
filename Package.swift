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
            url: "https://github.com/kalinjul/OpenIdConnectClient/releases/download/0.15.1/OpenIdConnectClient.zip",
            checksum: "abff8faac0d73a66d6bb63bb4b4c470b7f1be702cad7f6bf6057a1b33bf66e90"
        ),
    ]
)
