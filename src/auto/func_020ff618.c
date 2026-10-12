#include "m2c.h"

extern u16 data_0214c22c;

void func_020ff618(s32 arg0) {
    data_0214c22c |= 1 << arg0;
}
