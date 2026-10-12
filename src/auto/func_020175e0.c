#include "m2c.h"

M2C_UNK func_020f538c(void *, M2C_UNK *, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_020f53a0(void *);                      /* extern */
extern s32 data_021458cc;
extern M2C_UNK func_02017644;

void func_020175e0(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x168) == 0) {
        func_020f53a0(arg0 + 0x10);
        return;
    }
    M2C_FIELD(arg0, void **, 0x3C) = arg0;
    func_020f538c(arg0 + 0x10, &func_02017644, 0, 6, 3);
    data_021458cc = M2C_FIELD(arg0, s32 *, 0x168);
}
