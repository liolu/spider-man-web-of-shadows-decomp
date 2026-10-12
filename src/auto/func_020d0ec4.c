#include "m2c.h"

extern M2C_UNK data_0211bc94;

s32 func_020d0ec4(s32 arg0) {
    return *((M2C_UNK *)((s8 *)&data_0211bc94 + (arg0 * 4)));
}
