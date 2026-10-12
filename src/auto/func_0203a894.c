#include "m2c.h"

M2C_UNK func_0203d564(M2C_UNK *);                   /* extern */
M2C_UNK func_0203d580(M2C_UNK *);                   /* extern */
M2C_UNK func_0203d5b8(M2C_UNK *, s32 *, M2C_UNK);   /* extern */

void func_0203a894(void *arg0) {
    u8 sp4[8];
    s32 sp0;
    u16 *temp_r4;

    temp_r4 = M2C_FIELD(arg0, u16 **, 0xC);
    if ((u32) *temp_r4 >= 0x246U) {
        return;
    }
    func_0203d564(sp4);
    sp0 = (s32) *temp_r4;
    func_0203d5b8(sp4, &sp0, 0);
    func_0203d580(sp4);
}
