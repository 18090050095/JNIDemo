package com.pvetec.demo2;

/**
 * Created by Administrator on 2019/1/3.
 */

public class JNIUtils {
    public native String getPassWord();
    static {
        System.loadLibrary("demo2");
    }
}
