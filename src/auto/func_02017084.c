#include "m2c.h"

void *func_02043dd4(void *, M2C_UNK *);             /* extern */
extern M2C_UNK data_02119564;

void func_02017084(void *arg0, s32 arg1, s32 arg2) {
    void *temp_r0;

    if (M2C_FIELD(arg0, s32 *, 0x18C) == 0) {
        return;
    }
    if (arg1 < 0) {
        return;
    }
    if (arg2 == 0) {
        return;
    }
    temp_r0 = func_02043dd4(arg0 + 0x168, &data_02119564);
    if (temp_r0 != NULL) {
        M2C_FIELD(temp_r0, s32 *, 0) = arg1;
        M2C_FIELD(temp_r0, s32 *, 0x34) = arg2;
    }
}
