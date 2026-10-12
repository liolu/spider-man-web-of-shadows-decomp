#include "m2c.h"

M2C_UNK func_020cfc38(s32, s32 *);                  /* extern */
s32 func_020cff10(s32, s32 *);                      /* extern */

s32 func_020b5e00(s32 arg0) {
    s32 sp4;
    s32 sp0;

    sp4 = 2;
    if (func_020cff10(arg0 + 0x28, &sp4) == 0) {
        return 0x7FFFFFFF;
    }
    sp0 = 2;
    func_020cfc38(arg0 + 0x28, &sp0);
    return 0xF;
}
