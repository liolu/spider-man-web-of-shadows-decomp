#include "m2c.h"

M2C_UNK func_02031230(M2C_UNK, s32, s32 *, M2C_UNK); /* extern */
s32 func_020312e4(s32 *);                           /* extern */

void func_02031268(M2C_UNK arg0, s32 *arg1) {
    s32 sp0;

    sp0 = func_020312e4(arg1);
    func_02031230(arg0, *arg1, &sp0, 0);
}
