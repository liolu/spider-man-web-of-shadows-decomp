#include "m2c.h"

M2C_UNK func_02022368(s32);                         /* extern */
M2C_UNK func_020f1c8c(void *);                      /* extern */
s32 func_020fa844(s32, s32);                        /* extern */
extern M2C_UNK data_0212018c;

void func_020f1774(void *arg0) {
    func_02022368(M2C_FIELD(arg0, s32 *, 0xC0));
    M2C_FIELD(arg0, s32 *, 0x130) =
        (s32) ((s32) (func_020fa844(M2C_FIELD(arg0, s32 *, 0x108) << 0xC,
                                    (*((M2C_UNK *) ((s8 *) &data_0212018c + (M2C_FIELD(arg0, s32 *, 0x104) * 4))) - 4)
                                        << 0xC) *
                      0xE) >>
               0xC);
    func_020f1c8c(arg0);
}
