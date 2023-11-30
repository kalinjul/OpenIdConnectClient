// swift-tools-version:5.6
import PackageDescription

let package = Package(
    name: "oidc-appsupport",
    platforms: [
        .iOS(.v15)
    ],
    products: [
        .library(
            name: "oidc-appsupport",
            targets: ["oidc-appsupport"]
        ),
    ],
    targets: [
        .binaryTarget(
            name: "oidc-appsupport",
            path: "./oidc-appsupport.xcframework"
        ),
    ]
)
