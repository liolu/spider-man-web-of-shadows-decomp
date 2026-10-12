#include "m2c.h"

M2C_UNK func_020776b8(void *);                      /* extern */
M2C_UNK func_020ad648(void *);                      /* extern */

void *func_020ad6f0(void *arg0) {
    void **var_r1;
    void **var_r1_2;
    void **var_r1_3;
    void **var_r1_4;
    void *temp_r0;
    void *temp_r0_2;
    void *temp_r0_3;
    void *temp_r0_4;
    void *var_r2;
    void *var_r2_2;
    void *var_r2_3;
    void *var_r2_4;

    var_r1 = M2C_FIELD(arg0, void ***, 0x98);
    if (var_r1 != NULL) {
        var_r2 = *var_r1;
        temp_r0 = arg0 + 0x98;
        if (var_r2 != temp_r0) {
            do {
                var_r1 = var_r2 + 4;
                var_r2 = M2C_FIELD(var_r2, void **, 4);
            } while (var_r2 != temp_r0);
        }
        *var_r1 = M2C_FIELD(arg0, void **, 0x9C);
    }
    var_r1_2 = M2C_FIELD(arg0, void ***, 0x5C);
    if (var_r1_2 != NULL) {
        var_r2_2 = *var_r1_2;
        temp_r0_2 = arg0 + 0x5C;
        if (var_r2_2 != temp_r0_2) {
            do {
                var_r1_2 = var_r2_2 + 4;
                var_r2_2 = M2C_FIELD(var_r2_2, void **, 4);
            } while (var_r2_2 != temp_r0_2);
        }
        *var_r1_2 = M2C_FIELD(arg0, void **, 0x60);
    }
    var_r1_3 = M2C_FIELD(arg0, void ***, 0x54);
    if (var_r1_3 != NULL) {
        var_r2_3 = *var_r1_3;
        temp_r0_3 = arg0 + 0x54;
        if (var_r2_3 != temp_r0_3) {
            do {
                var_r1_3 = var_r2_3 + 4;
                var_r2_3 = M2C_FIELD(var_r2_3, void **, 4);
            } while (var_r2_3 != temp_r0_3);
        }
        *var_r1_3 = M2C_FIELD(arg0, void **, 0x58);
    }
    var_r1_4 = M2C_FIELD(arg0, void ***, 0x4C);
    if (var_r1_4 != NULL) {
        var_r2_4 = *var_r1_4;
        temp_r0_4 = arg0 + 0x4C;
        if (var_r2_4 != temp_r0_4) {
            do {
                var_r1_4 = var_r2_4 + 4;
                var_r2_4 = M2C_FIELD(var_r2_4, void **, 4);
            } while (var_r2_4 != temp_r0_4);
        }
        *var_r1_4 = M2C_FIELD(arg0, void **, 0x50);
    }
    func_020ad648(arg0 + 0x28);
    func_020776b8(arg0);
    return arg0;
}
