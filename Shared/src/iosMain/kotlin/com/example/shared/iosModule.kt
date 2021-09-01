package com.example.shared

import org.koin.dsl.module

val iosModule = module {
    single {
        SharedComponents(
            get(),
            // More and more components as we implement more with KMM.
        )
    }
}

class SharedComponents(
    val thing: String,
)

fun iOSInit() = initialize(iosModule).koin.get<SharedComponents>()
