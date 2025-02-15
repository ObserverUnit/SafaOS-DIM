#pragma once
#include <stdint.h>
enum {
    TTY_NON_INSTANT = 1 << 2,
    TTY_ECHO = 1 << 3,
};
enum {
    TTY_IOCTL_GET_FLAGS=0,
    TTY_IOCTL_SET_FLAGS=1,
};
typedef uint8_t ttyflags_t;
