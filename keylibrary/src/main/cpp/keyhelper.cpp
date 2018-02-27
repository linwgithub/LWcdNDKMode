#include <jni.h>
#include <string>

extern "C"
JNIEXPORT jstring

JNICALL
Java_com_lwcd_keylibrary_KeyHelper_stringKey(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "get key from C++: aaabbbbcccc";
    return env->NewStringUTF(hello.c_str());
}
