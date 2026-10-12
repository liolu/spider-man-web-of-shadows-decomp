#include "m2c.h"

M2C_UNK func_020ff820(s32);                         /* extern */
M2C_UNK func_020ffa18();                            /* extern */
M2C_UNK func_020ffd64(M2C_UNK);                     /* extern */
s32 func_0210458c();                                /* extern */
M2C_UNK func_02106774(M2C_UNK, M2C_UNK);            /* extern */

void func_02106688(void) {
    s32 var_r0;
    s32 var_r5;

    var_r5 = 1;
    func_020ffd64(0);
    func_020ffd64(1);
    func_020ffd64(2);
    func_020ffd64(3);
    if (((s32) (*(u16 *)0x027FFFA8 & 0x8000) >> 0xF) != 0) {
        var_r0 = func_0210458c();
        if (var_r0 == 4) {
            do {
                func_020ff820(0xA3A47);
                var_r0 = func_0210458c();
            } while (var_r0 == 4);
        }
        if (var_r0 == 0) {
            var_r5 = 0;
        }
    }
    if (var_r5 != 0) {
        func_02106774(1, 1);
    }
    func_020ffa18();
}
