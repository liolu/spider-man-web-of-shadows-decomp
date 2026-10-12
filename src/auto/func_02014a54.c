#include "m2c.h"

void *func_02014a8c();                              /* extern */

void *func_02014a54(void *arg0) {
    void *temp_r0;
    void *temp_r1;

    temp_r0 = func_02014a8c();
    M2C_FIELD(temp_r0, s32 *, 4) = 0;
    M2C_FIELD(temp_r0, void **, 0) = (void *) M2C_FIELD(arg0, void **, 0);
    temp_r1 = M2C_FIELD(arg0, void **, 0);
    if (temp_r1 != NULL) {
        M2C_FIELD(temp_r1, void **, 4) = temp_r0;
    } else {
        M2C_FIELD(arg0, void **, 4) = temp_r0;
    }
    M2C_FIELD(arg0, void **, 0) = temp_r0;
    return temp_r0 + 8;
}
