#include "m2c.h"

M2C_UNK func_02006188(void *);                      /* extern */
M2C_UNK func_020776b8(void *);                      /* extern */
M2C_UNK func_0210f6e4(s32, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
extern M2C_UNK func_020938b8;

void *func_0209f784(void *arg0) {
    void **var_r1;
    void **var_r1_2;
    void *temp_r0;
    void *temp_r0_2;
    void *var_r2;
    void *var_r2_2;

    func_0210f6e4(arg0 + 0x58, 3, 8, &func_020938b8);
    var_r1 = M2C_FIELD(arg0, void ***, 0x3C);
    if (var_r1 != NULL) {
        var_r2 = *var_r1;
        temp_r0 = arg0 + 0x3C;
        if (var_r2 != temp_r0) {
            do {
                var_r1 = var_r2 + 4;
                var_r2 = M2C_FIELD(var_r2, void **, 4);
            } while (var_r2 != temp_r0);
        }
        *var_r1 = M2C_FIELD(arg0, void **, 0x40);
    }
    var_r1_2 = M2C_FIELD(arg0, void ***, 0x34);
    if (var_r1_2 != NULL) {
        var_r2_2 = *var_r1_2;
        temp_r0_2 = arg0 + 0x34;
        if (var_r2_2 != temp_r0_2) {
            do {
                var_r1_2 = var_r2_2 + 4;
                var_r2_2 = M2C_FIELD(var_r2_2, void **, 4);
            } while (var_r2_2 != temp_r0_2);
        }
        *var_r1_2 = M2C_FIELD(arg0, void **, 0x38);
    }
    func_020776b8(arg0);
    func_02006188(arg0);
    return arg0;
}
