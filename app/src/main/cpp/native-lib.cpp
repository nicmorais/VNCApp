#include <jni.h>
#include <string>
#include "libvncserver/examples/androidvncserver.c"

extern "C" JNIEXPORT jstring JNICALL
Java_io_github_nicmorais_vncapp_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}

extern "C" JNIEXPORT void JNICALL
Java_io_github_nicmorais_vncapp_MainActivity_startVncServer(
        JNIEnv* env,
        jobject /* this */) {
    char *params[1] = {"-k"};

    main(1, params);
}