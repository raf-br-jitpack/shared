import org.gradle.api.internal.artifacts.dependencies.DefaultExternalModuleDependency
import org.jetbrains.kotlin.gradle.plugin.mpp.KotlinNativeTarget

plugins {
    kotlin("multiplatform")
    id("com.android.library")
    kotlin("kapt")
    id("com.chromaticnoise.multiplatform-swiftpackage") version "2.0.3"
    kotlin("plugin.serialization") version "1.5.20"
}



version = "1.0"

val ktor_version = extra["ktor_version"].toString()
val koru_version = extra["koru_version"].toString()
val coroutine_version = extra["coroutine_version"].toString()
val koin_version = extra["koin_version"].toString()

kotlin {
    android()
    // We don't actually compile for the JVM but we use the 'jvmTest' source set to write
    // nice JUnit 5 + MockK + Kluent test for the 'commonMain' source set ('commonTest' can
    // only use K/N-enabled libraries, and not even JUnit is).
    jvm()

    val iosTarget: (String, KotlinNativeTarget.() -> Unit) -> KotlinNativeTarget =
        if (System.getenv("SDK_NAME")?.startsWith("iphoneos") == true)
            ::iosArm64
        else
            ::iosX64

    iosTarget("ios") {
        binaries {
            framework {
                baseName = "Shared"
            }
        }
    }

    sourceSets {
        val commonMain by getting {
            dependencies {
                implementation("io.insert-koin:koin-core:$koin_version")

                implementation("org.jetbrains.kotlinx:kotlinx-coroutines-core:$coroutine_version") {
                    version { strictly(coroutine_version) }
                }
                implementation("com.futuremind:koru:$koru_version")
                configurations.get("kapt").dependencies.add(
                    DefaultExternalModuleDependency(
                        "com.futuremind", "koru-processor", "$koru_version"
                    )
                )
                implementation("io.ktor:ktor-client-core:$ktor_version")
                implementation("io.ktor:ktor-client-serialization:$ktor_version")
                implementation("io.ktor:ktor-client-logging:$ktor_version")
                implementation("org.jetbrains.kotlinx:kotlinx-datetime:0.2.1")
                implementation("com.benasher44:uuid:0.3.0")

                "1.1.9-a1-hmpp".let { version ->
                    implementation("co.touchlab:stately-common:$version")
                    implementation("co.touchlab:stately-concurrency:$version")
                    implementation("co.touchlab:stately-iso-collections:$version")
                }
            }
        }
        val commonTest by getting {
            dependencies {
                implementation(kotlin("test-common"))
                implementation(kotlin("test-annotations-common"))
            }
        }
        val jvmTest by getting {
            dependencies {
                implementation("org.junit.jupiter:junit-jupiter:5.7.2")
                implementation("io.mockk:mockk:1.12.0")
                implementation("org.amshove.kluent:kluent:1.68")
            }
        }
        val androidMain by getting {
            dependencies {
                implementation("io.ktor:ktor-client-android:$ktor_version")
                implementation("io.ktor:ktor-client-okhttp:$ktor_version")
            }
        }
        val androidTest by getting {
            dependencies {
                implementation(kotlin("test-junit"))
                implementation("junit:junit:4.13.2")
            }
        }
        val iosMain by getting {
            dependencies {
                implementation("io.ktor:ktor-client-ios:$ktor_version")
            }
            kotlin.srcDir("${buildDir.absolutePath}/generated/source/kaptKotlin/")
        }
        val iosTest by getting
    }

    multiplatformSwiftPackage {
        swiftToolsVersion("5.3")
        targetPlatforms {
            iOS { v("13") }
        }
    }
}

android {
    compileSdk = 30
    sourceSets["main"].manifest.srcFile("src/androidMain/AndroidManifest.xml")
    defaultConfig {
        minSdk = 23
        targetSdk = 30
    }
}

tasks.withType<Test> {
    useJUnitPlatform()
}

afterEvaluate {
    tasks.getByName("createXCFramework").doLast {
        copy {
            from("swiftpackage")
            into("../iosApp/Modules")
        }
    }
}
