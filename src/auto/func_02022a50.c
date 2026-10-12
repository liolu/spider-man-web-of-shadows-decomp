#include "m2c.h"

M2C_UNK func_02022a98();                            /* extern */
M2C_UNK func_02103b24(M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK func_02103fdc(M2C_UNK);                     /* extern */
s32 func_02103ff4(M2C_UNK);                         /* extern */
extern s8 data_02145a54;
extern M2C_UNK data_02145a5e;

void func_02022a50(void) {
    func_02022a98();
    func_02103b24(0x20, 4, &data_02145a5e, 5);
    func_02103fdc(2);
    if (func_02103ff4(2) == 0) {
        data_02145a54 = 1;
    }
}
