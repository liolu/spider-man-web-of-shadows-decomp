#include "m2c.h"

M2C_UNK func_020fef94(void *, M2C_UNK);             /* extern */
M2C_UNK func_021009d8();                            /* extern */
M2C_UNK func_021009ec();                            /* extern */

void func_021014c0(void *arg0) {
    void *temp_r6;
    void *var_r0;

    func_021009d8();
    var_r0 = M2C_FIELD(arg0, void **, 0x18);
    if (var_r0 != NULL) {
        do {
            temp_r6                       = M2C_FIELD(var_r0, void **, 4);
            M2C_FIELD(var_r0, s32 *, 0)   = 0;
            M2C_FIELD(var_r0, void **, 4) = NULL;
            func_020fef94(var_r0, 8);
            var_r0 = temp_r6;
        } while (temp_r6 != NULL);
    }
    func_021009ec();
}
