//
// Created by gutou on 2017/5/11.
//

#ifndef XL_XL_RENAME_H
#define XL_XL_RENAME_H

#include <android/log.h>

#define LOGI(format, ...) __android_log_print(ANDROID_LOG_INFO, "(^_^)", format, ##__VA_ARGS__)
#define LOGE(format, ...) __android_log_print(ANDROID_LOG_ERROR, "(>_<)", format, ##__VA_ARGS__)

#define NDK_MEDIACODEC_VERSION 21

#define xl_message_stop 1
#define xl_message_buffer_empty 2
#define xl_message_buffer_full 3

#define default_buffer_size 1024*1024*5
#define default_buffer_time 5.0f

// 100 ms
#define NULL_LOOP_SLEEP_US 100000
// 10 ms
#define BUFFER_EMPTY_SLEEP_US 10000
// 30 fps
#define WAIT_FRAME_SLEEP_US 33333

#define XL_PIX_FMT_EGL_EXT 10000

#define XL_ROTATION_0 0
#define XL_ROTATION_90 1
#define XL_ROTATION_180 2
#define XL_ROTATION_270 3


//////// rename avframe fields
#define HW_BUFFER_ID pkt_pos
// 0 : 0
// 1 : 90
// 2 : 180
// 3 : 270
#define FRAME_ROTATION sample_rate
#endif //XL_XL_RENAME_H
