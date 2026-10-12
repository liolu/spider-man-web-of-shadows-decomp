#include "m2c.h"

M2C_UNK func_0203d164(s32, M2C_UNK *);              /* extern */
s32 func_0203d4f4(M2C_UNK *);                       /* extern */
s32 func_0203ee10(M2C_UNK *);                       /* extern */
M2C_UNK func_02040064();                            /* extern */
extern M2C_UNK data_02145cb4;
extern M2C_UNK data_02145d60;
extern s32 data_02145d68;
extern M2C_UNK data_02145d6c;

void func_0203d0b4(void) {
    func_02040064();
    if (func_0203d4f4(&data_02145d60) != 0) {
        return;
    }
    if (func_0203ee10(&data_02145d60) != 0) {
        return;
    }
    if (M2C_FIELD(&data_02145cb4, s32 *, 0xB4) == 0x16) {
        return;
    }
    func_0203d164(data_02145d68, &data_02145d6c);
    M2C_FIELD(&data_02145cb4, s32 *, 0xB4) = 0x16;
}
