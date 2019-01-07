//
// Created by Administrator on 2019/1/3.
//

#include <jni.h>

JNIEXPORT jstring JNICALL Java_com_pvetec_jnidemo_JNIUtils_sayHello
        (JNIEnv* env,jobject obj){
    char* cstr = "hello form c";
    jstring jstr2 = (*env) -> NewStringUTF(env, cstr);
    return jstr2;
}