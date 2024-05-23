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
            url: "https://github.com/kalinjul/OpenIdConnectClient/releases/download/0.9.4/OpenIdConnectClient.zip",
            checksum: "d0770a76abc7476314b3dc23b0a8b7b5039a1d64d3c8c75599a2bbd886f2a123"
        ),
    ]
)
