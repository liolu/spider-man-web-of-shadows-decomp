#include "m2c.h"

M2C_UNK func_02022a50();                            /* extern */
s32 func_02103968(M2C_UNK *);                       /* extern */
M2C_UNK func_021039fc(M2C_UNK *);                   /* extern */

void func_020229b8(void) {
    u8 sp0[8];

    if (func_02103968(sp0) != 0) {
        func_021039fc(sp0);
    }
    func_02022a50();
}
