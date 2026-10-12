#include "m2c.h"

M2C_UNK func_020f5c2c();                            /* extern */
extern M2C_UNK data_027e0828;
extern M2C_UNK data_027e0988;

M2C_UNK *func_020f5cbc(void) {
    if (!(M2C_FIELD(&data_027e0828, s32 *, 0xFC) & 0x80)) {
        func_020f5c2c();
        M2C_FIELD(&data_027e0828, s32 *, 0xFC) = (s32) (M2C_FIELD(&data_027e0828, s32 *, 0xFC) | 0x80);
    }
    return &data_027e0988;
}
