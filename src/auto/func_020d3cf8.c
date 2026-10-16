#include "engine.h"
#include "m2c.h"

extern s32 data_02149c88;
extern s32 data_02149fc4;

s32 func_020d3cf8(s32 arg0, s32 arg1) {
    s32 temp_ip;

    temp_ip           = *(M2C_UNK *) arg1;
    *(M2C_UNK *) arg1 = 0;
    data_02149c88     = temp_ip;
    data_02149fc4     = 1;
    return arg0;
}
