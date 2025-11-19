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
            url: "https://github.com/kalinjul/OpenIdConnectClient/releases/download/0.16.2/OpenIdConnectClient.zip",
            checksum: "e97913d4d2fe9d9aa745eba379bff5a077e826cc0fded8fc2358c11553ad7e8d"
        ),
    ]
)
