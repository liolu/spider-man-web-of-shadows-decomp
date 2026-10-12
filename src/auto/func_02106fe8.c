#include "m2c.h"

M2C_UNK func_02107034(M2C_UNK);                     /* extern */
M2C_UNK func_0210f448();                            /* extern */
extern M2C_UNK data_0214eed0;

void func_02106fe8(M2C_UNK arg0) {
    if (M2C_FIELD(&data_0214eed0, s32 *, 0xC) == 0) {
        func_0210f448();
        if (M2C_FIELD(&data_0214eed0, M2C_UNK (**)(), 4) != NULL) {
            M2C_FIELD(&data_0214eed0, M2C_UNK (**)(), 4)();
            M2C_FIELD(&data_0214eed0, M2C_UNK (**)(), 4) = NULL;
        }
    }
    func_02107034(arg0);
}
