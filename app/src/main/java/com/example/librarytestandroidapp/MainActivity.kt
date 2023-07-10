package com.example.librarytestandroidapp

import android.os.Bundle
import androidx.appcompat.app.AppCompatActivity
import com.example.librarytestandroidapp.databinding.ActivityMainBinding
import java.nio.ByteBuffer


class MainActivity : AppCompatActivity() {

    private lateinit var binding: ActivityMainBinding

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)

    }

    external fun stringFromJNI(): String

    private external fun startCThread(sharedBuffer: ByteBuffer): Boolean
    private external fun signalCThread()
    private external fun waitForCThread(time: Int): Boolean


}