#include "m2c.h"

M2C_UNK func_02042534(void *);                      /* extern */
M2C_UNK func_020437a0(void *);                      /* extern */
M2C_UNK func_020fed6c(M2C_UNK *);                   /* extern */
M2C_UNK func_020fedf0(M2C_UNK *);                   /* extern */
extern s32 data_02148cf8;
extern M2C_UNK data_02149370;

void func_0204249c(void *arg0) {
    func_020fed6c(&data_02149370);
    if (data_02148cf8 != 0) {
        func_020fed6c(data_02148cf8 + 0x4C8);
    }
    if (((s32) (M2C_FIELD(arg0, s32 *, 0x110) << 0x1E) >> 0x1F) != 0) {
        func_020437a0(arg0);
    }
    if (((s32) (M2C_FIELD(arg0, s32 *, 0x110) << 0x1F) >> 0x1F) != 0) {
        M2C_FIELD(arg0, M2C_UNK (**)(void *), 0x16C)(arg0);
    }
    func_02042534(arg0);
    func_020fedf0(&data_02149370);
    if (data_02148cf8 == 0) {
        return;
    }
    func_020fedf0(data_02148cf8 + 0x4C8);
}
