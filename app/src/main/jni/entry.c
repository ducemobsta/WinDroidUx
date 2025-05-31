
#include <jni.h>
#include <string.h>

JNIEXPORT jstring JNICALL
Java_com_windroidux_MainActivity_kernelMain(JNIEnv *env, jobject obj) {
    return (*env)->NewStringUTF(env, ">>> WINDROIDUX INITIALIZED. READY TO DOMINATE <<<");
}
