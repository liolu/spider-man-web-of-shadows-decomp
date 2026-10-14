#include "m2c.h"

M2C_UNK func_01ffbf04();                            /* extern */
extern s32 data_0214b82c;

s32 func_020f7304(void) {
    s32 temp_r0;

    func_01ffbf04();
    temp_r0       = data_0214b82c;
    data_0214b82c = 0;
    return temp_r0;
}
