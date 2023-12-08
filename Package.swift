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
            url: "https://github.com/kalinjul/OpenIdConnectClient/raw/0.5.0/OpenIdConnectClient.zip",
            checksum: "5536114e8e5868dcc2af846173452a85b4971340f7db29c3780e76e19f2a1a15"
        ),
    ]
)
