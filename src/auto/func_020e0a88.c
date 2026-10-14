#include "m2c.h"

M2C_UNK func_020e0aec(void *);                      /* extern */
M2C_UNK func_020e0b94(void *);                      /* extern */
M2C_UNK func_020e7bdc(void *);                      /* extern */
M2C_UNK func_020e7ed0(void *);                      /* extern */
M2C_UNK func_020e853c(void *);                      /* extern */

void func_020e0a88(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 8) != 0) {
        func_020e853c(arg0 + 0xF0);
        func_020e7ed0(arg0 + 0x30);
        if (M2C_FIELD(arg0, u8 *, 1) != 0) {
            func_020e7bdc(arg0 + 0xC);
        }
        func_020e0b94(arg0);
        M2C_FIELD(arg0, u8 *, 8)  = 0U;
        M2C_FIELD(arg0, s32 *, 4) = 0;
    }
    if (M2C_FIELD(arg0, s32 *, 4) != 0) {
        return;
    }
    func_020e0aec(arg0);
}
