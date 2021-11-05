
#ifndef LOG_H
#define LOG_H
#include <android/log.h>

#define LOG_TAG "himem"
#define LOGD(...) __android_log_print(ANDROID_LOG_DEBUG,LOG_TAG ,__VA_ARGS__) // 定义LOGD类型
#define LOGI(...) __android_log_print(ANDROID_LOG_INFO,LOG_TAG ,__VA_ARGS__) // 定义LOGI类型
#define LOGW(...) __android_log_print(ANDROID_LOG_WARN,LOG_TAG ,__VA_ARGS__) // 定义LOGW类型
#define LOGE(...) __android_log_print(ANDROID_LOG_ERROR,LOG_TAG ,__VA_ARGS__) // 定义LOGE类型
#define LOGF(...) __android_log_print(ANDROID_LOG_FATAL,LOG_TAG ,__VA_ARGS__) // 定义LOGF类型

#define LOGD_TAG(tag, ...) __android_log_print(ANDROID_LOG_DEBUG,tag ,__VA_ARGS__) // 定义LOGD类型
#define LOGI_TAG(tag, ...) __android_log_print(ANDROID_LOG_INFO,tag ,__VA_ARGS__) // 定义LOGI类型
#define LOGW_TAG(tag, ...) __android_log_print(ANDROID_LOG_WARN,tag ,__VA_ARGS__) // 定义LOGW类型
#define LOGE_TAG(tag, ...) __android_log_print(ANDROID_LOG_ERROR,tag ,__VA_ARGS__) // 定义LOGE类型
#define LOGF_TAG(tag, ...) __android_log_print(ANDROID_LOG_FATAL,tag ,__VA_ARGS__) // 定义LOGF类型

#endif //LOG_H