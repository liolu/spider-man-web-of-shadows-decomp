#include "m2c.h"

M2C_UNK func_02103c24();                            /* extern */
M2C_UNK func_02103fdc(M2C_UNK);                     /* extern */
s32 func_02103ff4(M2C_UNK);                         /* extern */
extern u8 data_02145a54;

void func_02022a98(void) {
    if (data_02145a54 == 0) {
        return;
    }
    func_02103c24();
    func_02103fdc(4);
    if (func_02103ff4(4) == 0) {
        data_02145a54 = 0;
    }
}
