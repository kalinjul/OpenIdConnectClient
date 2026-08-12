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
            url: "https://github.com/kalinjul/OpenIdConnectClient/releases/download/0.18.0/OpenIdConnectClient.zip",
            checksum: "68e8ecc2fc737f30667c796a18cc9e1aa843b74a2bb41a80036acf583b5c6c1b"
        ),
    ]
)
