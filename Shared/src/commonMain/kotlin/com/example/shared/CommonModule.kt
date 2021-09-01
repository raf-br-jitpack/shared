package com.example.shared

import com.example.model.Thing
import org.koin.dsl.module

val commonModule = module {
    single { Thing("World") }
}
