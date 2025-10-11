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
            url: "https://github.com/kalinjul/OpenIdConnectClient/releases/download/0.15.3/OpenIdConnectClient.zip",
            checksum: "32ceb1792dc2f9d76bfa645cc16666a682b368de5d52b14b25fb09e85e1708b0"
        ),
    ]
)
