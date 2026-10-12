#include "m2c.h"

s32 func_02100ad4(M2C_UNK);                         /* extern */
M2C_UNK func_02100ca4(M2C_UNK);                     /* extern */
s32 func_02100fc0();                                /* extern */
M2C_UNK func_02101060();                            /* extern */
s32 func_02101088();                                /* extern */
s32 func_021010d0();                                /* extern */

s32 func_02100be4(s32 arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;

    if (func_021010d0() == 0) {
        return 0;
    }
    temp_r0_3 = func_02101088();
    if (temp_r0_3 != 0) {
        return temp_r0_3;
    }
    if (!(arg0 & 1)) {
        return 0;
    }
    if (func_02100fc0() > 0) {
        do {

        } while (func_02100ad4(0) != 0);
        temp_r0_2 = func_02101088();
        if (temp_r0_2 != 0) {
            return temp_r0_2;
        }
        goto block_12;
    }
    func_02100ca4(1);
block_12:
    func_02101060();
    do {
        func_02100ad4(1);
        temp_r0 = func_02101088();
    } while (temp_r0 == 0);
    return temp_r0;
}
