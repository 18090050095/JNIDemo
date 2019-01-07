//
// Created by Administrator on 2019/1/3.
//
#include <com_pvetec_demo2_JNIUtils.h>
#include <jni.h>

JNIEXPORT jstring JNICALL Java_com_pvetec_demo2_JNIUtils_getPassWord
        (JNIEnv * env, jobject obj){
    char* cstr = "hello form c2";
    jstring jstr2 = (*env) -> NewStringUTF(env, cstr);
    return jstr2;
}
