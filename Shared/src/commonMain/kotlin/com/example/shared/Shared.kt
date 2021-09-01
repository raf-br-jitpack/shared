package com.example.shared

import org.koin.core.KoinApplication
import org.koin.core.context.startKoin
import org.koin.core.module.Module

fun initialize(vararg modules: Module, init: (KoinApplication.() -> Unit)? = null) = startKoin {
    modules(*modules, commonModule)
    init?.invoke(this)
}
