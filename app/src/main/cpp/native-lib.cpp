#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring JNICALL
Java_com_example_librarytestandroidapp_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
extern "C"
JNIEXPORT void JNICALL
Java_com_example_librarytestandroidapp_MainActivity_startCThread(JNIEnv *env, jobject thiz,
                                                                 jobject shared_buffer) {
    // TODO: implement startCThread()
}
extern "C"
JNIEXPORT void JNICALL
Java_com_example_librarytestandroidapp_MainActivity_signalCThread(JNIEnv *env, jobject thiz) {
    // TODO: implement signalCThread()
}
extern "C"
JNIEXPORT void JNICALL
Java_com_example_librarytestandroidapp_MainActivity_waitForCThread(JNIEnv *env, jobject thiz) {
    // TODO: implement waitForCThread()
}