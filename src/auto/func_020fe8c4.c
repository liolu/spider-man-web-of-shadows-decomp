#include "m2c.h"

M2C_UNK func_020fe3d8(s32, void *);                 /* extern */
M2C_UNK func_020fe4bc(void *);                      /* extern */
M2C_UNK func_020fe970(void *);                      /* extern */
M2C_UNK func_020fea28();                            /* extern */
M2C_UNK func_020feb24();                            /* extern */
M2C_UNK func_020feb58();                            /* extern */
M2C_UNK func_020fee4c(void *);                      /* extern */
M2C_UNK func_020ffa18();                            /* extern */
extern M2C_UNK data_0214befc;

void func_020fe8c4(void) {
    s32 temp_r0;
    void *temp_r4;

    temp_r4 = *M2C_FIELD(&data_0214befc, void ***, 8);
    func_020feb24();
    func_020fee4c(temp_r4);
    temp_r0 = M2C_FIELD(temp_r4, s32 *, 0x78);
    if (temp_r0 != 0) {
        func_020fe3d8(temp_r0, temp_r4);
    }
    func_020fe4bc(temp_r4);
    M2C_FIELD(temp_r4, s32 *, 0x64) = 2;
    func_020fe970(temp_r4 + 0x9C);
    func_020feb58();
    func_020fea28();
    func_020ffa18();
}
