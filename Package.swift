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
            url: "https://github.com/kalinjul/OpenIdConnectClient/releases/download/0.18.4/OpenIdConnectClient.zip",
            checksum: "fc9c61dcf3c85aa5ca31fd03ecf34ea0ea98b18a0003143220ba0795ccd4cd7e"
        ),
    ]
)
