LOCAL_PATH := $(call my-dir)

#########################

include $(CLEAR_VARS)
LOCAL_SRC_FILES :=  bpf.c cache.c dbus.c dhcp.c dnsmasq.c forward.c helper.c lease.c log.c \
                    netlink.c network.c option.c rfc1035.c rfc2131.c tftp.c util.c

LOCAL_MODULE := dnsmasq

LOCAL_C_INCLUDES := external/dnsmasq/src

LOCAL_CFLAGS := -O2 -g -W -Wall -D__ANDROID__ -DNO_IPV6 -DNO_TFTP -DNO_SCRIPT

# For Samsung devices (Convergence R&D Group)
SAMSUNG_PRODUCT_FEATURES := n
ifeq ($(SAMSUNG_PRODUCT_FEATURES),y)
LOCAL_CFLAGS += -DSAMSUNG_PRODUCT_FEATURES
LOCAL_C_INCLUDES += vendor/samsung/feature/SecProductFeature
endif


LOCAL_SYSTEM_SHARED_LIBRARIES := libc libcutils

include $(BUILD_EXECUTABLE)

