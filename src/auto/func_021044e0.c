#include "m2c.h"

M2C_UNK func_020ff820(s32);                         /* extern */
M2C_UNK func_021042cc(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_021044b8(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_021045b4(s32 *, s32 *);                /* extern */
s32 func_02104940(M2C_UNK);                         /* extern */
s32 func_02104960();                                /* extern */

void func_021044e0(M2C_UNK arg0, M2C_UNK arg1) {
    s32 sp4;
    s32 sp0;

    func_020ff820(0x996A00);
    if (func_02104960() != 1) {
        func_021045b4(&sp4, &sp0);
        if (sp4 != 0) {
            func_021044b8(0, 0);
        }
        if (sp0 != 0) {
            func_021044b8(1, 0);
        }
        if (func_02104940(1) == 0) {
            do {
                func_020ff820(0x996A00);
            } while (func_02104940(1) == 0);
        }
    }
    func_021042cc(0xE, arg0, arg1);
}
