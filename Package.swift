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
            url: "https://github.com/kalinjul/OpenIdConnectClient/raw/0.5.1/OpenIdConnectClient.zip",
            checksum: "e83cfebf0a262fff1fc891360a6d5ee514cdfc02d9e7dc475dcd79f6bf6e6f95"
        ),
    ]
)
