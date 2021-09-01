package com.example.shared

import org.koin.dsl.module

val commonModule = module {
    single { "World" }
}
