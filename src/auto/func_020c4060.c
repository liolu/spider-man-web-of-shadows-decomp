#include "m2c.h"

void func_020c4060(void *arg0) {
    if (!(M2C_FIELD(arg0, s32 *, 0x64) & 0x200)) {
        M2C_FIELD(arg0, s32 *, 0x80) = 2;
    }
    M2C_FIELD(arg0, s8 *, 0x90) = 0xA;
}
