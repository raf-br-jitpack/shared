package com.example.android

import android.content.Context
import com.example.shared.androidModule
import com.example.shared.initialize
import org.koin.android.ext.koin.androidContext
import org.koin.android.ext.koin.androidFileProperties
import org.koin.dsl.module

fun initialize(context: Context) = initialize(
    androidModule,
    appModule,
) {
    androidContext(context)
    androidFileProperties()
}

private val appModule = module {
}
