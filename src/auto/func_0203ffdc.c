#include "m2c.h"

M2C_UNK func_020404b8();                            /* extern */
M2C_UNK func_020f8d28();                            /* extern */
M2C_UNK func_020f8d44();                            /* extern */
M2C_UNK func_021009a0();                            /* extern */
M2C_UNK func_02104a4c(M2C_UNK *);                   /* extern */
M2C_UNK func_02104a64(M2C_UNK *);                   /* extern */
extern M2C_UNK data_02145fe0;
extern M2C_UNK data_02145ff0;
extern M2C_UNK data_02145ffc;
extern M2C_UNK func_020400a0;
extern M2C_UNK func_020400d8;

void func_0203ffdc(void) {
    if (M2C_FIELD(&data_02145fe0, s32 *, 4) != 0) {
        return;
    }
    M2C_FIELD(&data_02145fe0, s32 *, 4) = 1;
    func_021009a0();
    M2C_FIELD(&data_02145fe0, M2C_UNK **, 0x1C) = &func_020400a0;
    M2C_FIELD(&data_02145fe0, s32 *, 0x20)      = 0;
    M2C_FIELD(&data_02145fe0, M2C_UNK **, 0x10) = &func_020400d8;
    M2C_FIELD(&data_02145fe0, s32 *, 0x14)      = 0;
    func_02104a4c(&data_02145ffc);
    func_02104a64(&data_02145ff0);
    func_020f8d28();
    func_020f8d44();
    func_020404b8();
    M2C_FIELD(&data_02145fe0, s8 *, 0)    = -1;
    M2C_FIELD(&data_02145fe0, s32 *, 0xC) = 1;
}
