package com.example.android

import android.app.Application

class AndroidApplication : Application() {
    override fun onCreate() {
        super.onCreate()

        initialize(this)
    }
}
