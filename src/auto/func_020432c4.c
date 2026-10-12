#include "m2c.h"

s32 func_0204117c(M2C_UNK);                         /* extern */
extern M2C_UNK func_02043344;
extern M2C_UNK func_020433b8;
extern M2C_UNK func_020433c8;
extern M2C_UNK func_02043400;
extern M2C_UNK func_02043410;
extern M2C_UNK func_02043438;
extern M2C_UNK func_0204343c;
extern M2C_UNK func_02043458;

void func_020432c4(void *arg0, M2C_UNK arg1) {
    if (func_0204117c(arg1) == 0) {
        M2C_FIELD(arg0, M2C_UNK **, 0x160) = &func_02043344;
        M2C_FIELD(arg0, M2C_UNK **, 0x164) = &func_020433b8;
        M2C_FIELD(arg0, M2C_UNK **, 0x168) = &func_020433c8;
        M2C_FIELD(arg0, M2C_UNK **, 0x16C) = &func_02043400;
        return;
    }
    M2C_FIELD(arg0, M2C_UNK **, 0x160) = &func_02043410;
    M2C_FIELD(arg0, M2C_UNK **, 0x164) = &func_02043438;
    M2C_FIELD(arg0, M2C_UNK **, 0x168) = &func_0204343c;
    M2C_FIELD(arg0, M2C_UNK **, 0x16C) = &func_02043458;
}
