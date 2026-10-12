#include "m2c.h"

extern s32 data_02148cb8;

s32 func_02040db0(s32 arg0) {
    s32 temp_r2;

    temp_r2 = data_02148cb8;
    data_02148cb8 = arg0;
    return temp_r2;
}
