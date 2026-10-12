#include "m2c.h"

M2C_UNK func_0204249c(void *);                      /* extern */
M2C_UNK func_02043584(void *);                      /* extern */
M2C_UNK func_020fed6c(M2C_UNK *);                   /* extern */
M2C_UNK func_020fedf0(M2C_UNK *);                   /* extern */
extern s32 data_02148cf8;
extern M2C_UNK data_02149370;

void func_02042780(s32 arg0, s32 arg1, void *arg2) {
    if (arg0 != M2C_FIELD(arg2, s32 *, 0x12C)) {
        return;
    }
    func_020fed6c(&data_02149370);
    if (data_02148cf8 != 0) {
        func_020fed6c(data_02148cf8 + 0x4C8);
    }
    func_0204249c(arg2);
    M2C_FIELD(arg2, s32 *, 0x12C) = 0;
    M2C_FIELD(arg2, s32 *, 0x130) = 0;
    M2C_FIELD(arg2, s8 *, 0x124) = 0;
    if ((s32) M2C_FIELD(arg2, s32 *, 0x120) > 0) {
        func_02043584(arg2);
        M2C_FIELD(arg2, s32 *, 0x120) = 0;
    }
    func_020fedf0(&data_02149370);
    if (data_02148cf8 == 0) {
        return;
    }
    func_020fedf0(data_02148cf8 + 0x4C8);
}
