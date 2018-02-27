package com.lwcd.keylibrary;

/**
 * Created by linwei on 2018/2/26.
 */

public class KeyHelper {

    static {
        System.loadLibrary("keylib");
    }


    public native String stringKey();
}
