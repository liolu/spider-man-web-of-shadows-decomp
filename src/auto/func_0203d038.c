#include "m2c.h"

M2C_UNK func_0203d2a4(M2C_UNK);                     /* extern */
M2C_UNK func_0203d2cc(M2C_UNK);                     /* extern */
M2C_UNK func_0203d314(M2C_UNK);                     /* extern */
M2C_UNK func_0203d344(M2C_UNK);                     /* extern */
M2C_UNK func_0203ffdc();                            /* extern */
M2C_UNK func_02040b5c(M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_02041b38(M2C_UNK);                     /* extern */
M2C_UNK func_02041d1c(M2C_UNK, M2C_UNK);            /* extern */
extern M2C_UNK data_0212ab54;
extern M2C_UNK data_02145cb4;
extern M2C_UNK data_02145cc0;

void func_0203d038(void) {
    func_0203ffdc();
    M2C_FIELD(&data_02145cb4, s32 *, 0xB4) = 0x16;
    func_02040b5c(&data_02145cc0, &data_0212ab54, 0, 0);
    func_02041b38(2);
    func_0203d2a4(0x7F);
    func_0203d2cc(0x7F);
    func_0203d314(0x7F);
    func_0203d344(0x7F);
    func_02041d1c(0xA, 2);
}
