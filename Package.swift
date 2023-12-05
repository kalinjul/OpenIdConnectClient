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
            url: "https://raw.githubusercontent.com/kalinjul/OpenIdConnectClient/0.3.0/OpenIdConnectClient.zip",
            checksum: "0801a0cfe5ec140f8abfd47213543b4614111e48e462ee18bf6f8cbacdc014e2"
        ),
    ]
)
