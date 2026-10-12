#include "m2c.h"

s32 func_0200f230(s32 arg0, s32 arg1, s32 arg2) {
    return arg1 + 0x10 + M2C_FIELD((arg1 + (arg2 * 2)), u16 *, 0x10);
}
