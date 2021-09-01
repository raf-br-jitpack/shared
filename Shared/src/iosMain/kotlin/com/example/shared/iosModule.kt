package com.example.shared

import com.example.model.Thing
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
    val thing: Thing,
)

fun iOSInit() = initialize(iosModule).koin.get<SharedComponents>()
