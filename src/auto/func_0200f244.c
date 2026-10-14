#include "m2c.h"

void func_0200f244(void) {
    M2C_FIELD((void *) 0x04000000, s32 *, 0)      = (s32) ((M2C_FIELD((void *) 0x04000000, s32 *, 0) & 0xFFBFFF9F) | 0x40);
    M2C_FIELD((void *) 0x04000000, s32 *, 0x1000) = (s32) ((M2C_FIELD((void *) 0x04000000, s32 *, 0x1000) & ~0x60) | 0x40);
}
