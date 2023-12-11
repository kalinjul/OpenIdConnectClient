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
            url: "https://github.com/kalinjul/OpenIdConnectClient/releases/download/0.6.4/OpenIdConnectClient.zip",
            checksum: "6f85f5b4ac2997fde1df25e4276989290cfc5e482358be7d5cb3ea6a09ccf26f"
        ),
    ]
)
