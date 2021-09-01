plugins {
    id("com.android.application")
    kotlin("android")
}

dependencies {
    implementation(project(":Shared"))
    implementation("com.google.android.material:material:1.3.0")
    implementation("androidx.appcompat:appcompat:1.2.0")
    implementation("androidx.constraintlayout:constraintlayout:2.0.4")
    implementation("androidx.lifecycle:lifecycle-runtime-ktx:2.2.0")
    implementation("io.insert-koin:koin-android:3.0.2")
    implementation("org.jetbrains.kotlinx:kotlinx-coroutines-android:1.3.9")
}

android {
    compileSdk = 30
    defaultConfig {
        applicationId = "com.example.android"
        minSdk = 23
        targetSdk = 30
        versionCode = 1
        versionName = "1.0"
    }
    buildTypes {
        getByName("release") {
            isMinifyEnabled = false
        }
    }
}
