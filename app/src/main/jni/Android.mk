
LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE    := windroidux
LOCAL_SRC_FILES := entry.c mapper.c
LOCAL_LDLIBS    := -llog

include $(BUILD_SHARED_LIBRARY)
