#include "m2c.h"

void func_02074dc4(s16 *arg0, void *arg1) {
    void *temp_r2;

    temp_r2 = M2C_FIELD(arg1, void **, 0x30);
    *arg0 = M2C_FIELD(temp_r2, s16 *, 0xDC) - M2C_FIELD(temp_r2, s16 *, 0x184);
}
