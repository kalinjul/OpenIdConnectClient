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
            url: "https://github.com/kalinjul/OpenIdConnectClient/raw/0.4.1/OpenIdConnectClient.zip",
            checksum: "055a8ccf3ee6318e940f75e0c85104d0a310d89758c59c8d5c2a40ae00da4663"
        ),
    ]
)
