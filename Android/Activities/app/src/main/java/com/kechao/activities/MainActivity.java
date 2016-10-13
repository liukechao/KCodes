package com.kechao.activities;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.util.Log;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        Log.d("Kechao: ", "onCreate called.");
    }

    @Override
    protected void onStart() {
        super.onStart();
        Log.d("Kechao: ", "onStart called.");
    }

    @Override
    protected void onResume() {
        super.onResume();
        Log.d("Kechao: ", "onResume called.");
    }

    @Override
    protected void onPause() {
        super.onPause();
        Log.d("Kechao: ", "onPause called.");
    }

    @Override
    protected void onStop() {
        super.onStop();
        Log.d("Kechao: ", "onStop called.");
    }

    @Override
    protected void onDestroy() {
        super.onDestroy();
        Log.d("Kechao: ", "onDestroy called.");
    }
}
