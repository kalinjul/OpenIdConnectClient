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
            url: "https://github.com/kalinjul/OpenIdConnectClient/releases/download/0.18.3/OpenIdConnectClient.zip",
            checksum: "fff9d9bb040fd66e75b5b2f6f7b9e06ccb527549189e1da3a4bb5ade7a33632b"
        ),
    ]
)
