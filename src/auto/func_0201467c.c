#include "m2c.h"

M2C_UNK func_02006188(void *);                      /* extern */
M2C_UNK func_02006194(s32);                         /* extern */
M2C_UNK func_020143a0();                            /* extern */
M2C_UNK func_0201499c(void *);                      /* extern */
M2C_UNK func_020165c0();                            /* extern */
M2C_UNK func_02019a20();                            /* extern */
M2C_UNK func_0201db70();                            /* extern */
M2C_UNK func_0201dde4();                            /* extern */
M2C_UNK func_02043a7c();                            /* extern */
M2C_UNK func_020f7304();                            /* extern */
extern s8 data_02145820;
extern s32 data_027e0120;

void *func_0201467c(void *arg0) {
    void **temp_r1_2;
    void **var_r1;
    void *temp_r1;
    void *temp_r5;

    func_020143a0();
    data_027e0120 = 0;
    func_020165c0();
    func_0201db70();
    func_02043a7c();
    func_0201dde4();
    func_02019a20();
    func_0201499c(arg0);
    func_020f7304();
    data_02145820 = 0;
    temp_r5 = M2C_FIELD(arg0, void **, 0x14);
    if (temp_r5 != NULL) {
        func_02006194(M2C_FIELD(temp_r5, s32 *, 8));
        func_02006194(M2C_FIELD(temp_r5, s32 *, 4));
        func_02006188(temp_r5);
    }
    var_r1 = M2C_FIELD(arg0, void ***, 4);
    if (var_r1 != NULL) {
        do {
            M2C_FIELD(var_r1, void **, 0) = NULL;
            var_r1 = M2C_FIELD(var_r1, void ***, 4);
        } while (var_r1 != NULL);
    }
    temp_r1 = M2C_FIELD(arg0, void **, 0);
    if (temp_r1 != NULL) {
        M2C_FIELD(temp_r1, void ***, 4) = (void **) M2C_FIELD(arg0, void ***, 4);
        temp_r1_2 = M2C_FIELD(arg0, void ***, 4);
        if (temp_r1_2 != NULL) {
            *temp_r1_2 = M2C_FIELD(arg0, void **, 0);
        }
        M2C_FIELD(arg0, void **, 0) = NULL;
    }
    return arg0;
}
