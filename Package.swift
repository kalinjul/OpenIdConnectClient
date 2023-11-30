// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "oidc-appsupport-ios",
    platforms: [
        .iOS(.v15)
    ],
    products: [
        .library(
            name: "oidc-appsupport-ios",
            targets: ["oidc-appsupport-ios"]
        ),
    ],
    targets: [
        .binaryTarget(
            name: "oidc-appsupport-ios",
            path: "./oidc-appsupport-ios.xcframework"
        ),
    ]
)
