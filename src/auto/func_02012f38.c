#include "m2c.h"

M2C_UNK func_02013bf8(void *);                      /* extern */

void func_02012f38(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x1A4) = arg2;
    func_02013bf8(arg0 + 0x1A0);
}
