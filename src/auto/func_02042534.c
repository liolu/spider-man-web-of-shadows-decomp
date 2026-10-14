#include "m2c.h"

M2C_UNK func_020421b0(void *);                      /* extern */
M2C_UNK func_020425d0();                            /* extern */
M2C_UNK func_02042654(M2C_UNK *, void *);           /* extern */
extern s32 data_02148cf8;
extern M2C_UNK data_02149388;

void func_02042534(void *arg0) {
    if (((s32) (M2C_FIELD(arg0, s32 *, 0x110) << 0x1F) >> 0x1F) == 0) {
        return;
    }
    func_020425d0(arg0);
    M2C_FIELD(arg0, M2C_UNK(**)(void *), 0x164)(arg0);
    func_02042654(&data_02149388, arg0);
    if (data_02148cf8 != 0) {
        func_02042654(data_02148cf8 + 0x4E0, arg0);
    }
    func_020421b0(arg0);
}
