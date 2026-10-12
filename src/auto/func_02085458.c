#include "m2c.h"
#include "engine.h"

extern s32 data_02145c54;
extern s32 data_02149e34;

s32 func_02085458(s32 arg0, s32 arg1) {
    s32 temp_ip;

    temp_ip = *(M2C_UNK *)arg1;
    *(M2C_UNK *)arg1 = 0;
    data_02145c54 = temp_ip;
    data_02149e34 = 1;
    return arg0;
}
