#include "m2c.h"

M2C_UNK func_02006188(void *);                      /* extern */
M2C_UNK func_02006194(s32);                         /* extern */
extern void *data_02145c54;
extern s32 data_02149e34;

s32 func_02085484(s32 arg0) {
    s32 temp_r0;
    void **var_r1;
    void *temp_r0_2;
    void *temp_r5;
    void *var_r2;

    temp_r0       = data_02149e34 - 1;
    data_02149e34 = temp_r0;
    if (temp_r0 == 0) {
        temp_r5 = data_02145c54;
        if (temp_r5 != NULL) {
            func_02006194(M2C_FIELD(temp_r5, s32 *, 0x50));
            var_r1 = M2C_FIELD(temp_r5, void ***, 0x40);
            if (var_r1 != NULL) {
                var_r2    = *var_r1;
                temp_r0_2 = temp_r5 + 0x40;
                if (var_r2 != temp_r0_2) {
                    do {
                        var_r1 = var_r2 + 4;
                        var_r2 = M2C_FIELD(var_r2, void **, 4);
                    } while (var_r2 != temp_r0_2);
                }
                *var_r1 = M2C_FIELD(temp_r5, void **, 0x44);
            }
            func_02006188(temp_r5);
        }
        data_02145c54 = NULL;
    }
    return arg0;
}
