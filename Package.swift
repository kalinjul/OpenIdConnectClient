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
            url: "https://github.com/kalinjul/OpenIdConnectClient/releases/download/0.6.5/OpenIdConnectClient.zip",
            checksum: "80b4c75c1773b5f8f1dce1b050c95b6e099a82df1c88a2675f82bfce55f839fc"
        ),
    ]
)
