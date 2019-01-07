package com.pvetec.jnidemo;

/**
 * Created by Administrator on 2019/1/3.
 */

public class JNIUtils {
    public native String sayHello();
    static {
        System.loadLibrary("jnidemo");
    }
}
