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
            url: "https://github.com/kalinjul/OpenIdConnectClient/releases/download/0.7.0/OpenIdConnectClient.zip",
            checksum: "2567ebf61ab2cccde73ba21cdab4fc5cff38d2c951acc06e9dc4adc665e5b3d5"
        ),
    ]
)
