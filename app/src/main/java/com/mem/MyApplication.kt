package com.mem

import android.app.Application
import android.util.Log
import android.widget.Toast
import com.himem.HiMemNative
import java.io.File
import kotlin.concurrent.thread

class MyApplication : Application() {

    override fun onCreate() {
        super.onCreate()
//        MemTest.initNative()

        val file: File? = externalCacheDir
        val root = File(file!!.absolutePath, "HiMem/")
        Toast.makeText(this, "HiMem 日志存放在 " + root.absolutePath + " 目录下", Toast.LENGTH_LONG).show()
        root.mkdirs()
        HiMemNative.initAndStart(root.absolutePath, 0, 8 * 1024)
    }
}