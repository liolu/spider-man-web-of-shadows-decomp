#include "m2c.h"

M2C_UNK func_020f3834(void *, M2C_UNK);             /* extern */
M2C_UNK func_020fe714(void *, M2C_UNK *, void *, s32, s32, s32); /* extern */
M2C_UNK func_020fe9d8(void *);                      /* extern */
M2C_UNK func_020fed54(void *);                      /* extern */
extern M2C_UNK func_0204345c;

void func_020425f4(void *arg0, s32 arg1) {
    func_020fe714(arg0, &func_0204345c, arg0, arg0 + 0x4C0, 0x400, arg1);
    func_020f3834(arg0 + 0x4E0, 0);
    func_020fed54(arg0 + 0x4C8);
    M2C_FIELD(arg0, s32 *, 0x4C4) = 0;
    M2C_FIELD(arg0, s32 *, 0x4C0) = 0;
    func_020fe9d8(arg0);
}
