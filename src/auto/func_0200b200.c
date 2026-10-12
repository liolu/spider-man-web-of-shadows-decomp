#include "m2c.h"

M2C_UNK func_02006188(s32);                         /* extern */
M2C_UNK func_020062e4(s32);                         /* extern */
M2C_UNK func_0200ab40(void *);                      /* extern */
M2C_UNK func_0200c210(s32);                         /* extern */

void *func_0200b200(void *arg0) {
    s32 temp_r4;
    s32 temp_r4_2;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x5C);
    if (temp_r4 != 0) {
        func_020062e4(temp_r4 + 0x24);
        func_020062e4(temp_r4 + 0x18);
        func_020062e4(temp_r4 + 0xC);
        func_0200c210(temp_r4);
        func_02006188(temp_r4);
    }
    temp_r4_2 = M2C_FIELD(arg0, s32 *, 0x58);
    if (temp_r4_2 != 0) {
        func_020062e4(temp_r4_2 + 0x24);
        func_020062e4(temp_r4_2 + 0x18);
        func_020062e4(temp_r4_2 + 0xC);
        func_0200c210(temp_r4_2);
        func_02006188(temp_r4_2);
    }
    func_02006188(M2C_FIELD(arg0, s32 *, 0x54));
    func_0200ab40(arg0);
    return arg0;
}
