#include "m2c.h"

M2C_UNK func_020c9bd4(s32);                         /* extern */
M2C_UNK func_020cfa48(s32, s32 *);                  /* extern */

void func_020c0ae8(s32 arg0) {
    s32 sp0;

    sp0 = 2;
    func_020cfa48(arg0 + 0x28, &sp0);
    func_020c9bd4(arg0);
}
