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
            url: "https://github.com/kalinjul/OpenIdConnectClient/raw/0.3.1/OpenIdConnectClient.zip",
            checksum: "c84eae5084a226c4e1b3e1cfbddbf12856b14c49d9c6e9e9bb5b6202b83d5214"
        ),
    ]
)
