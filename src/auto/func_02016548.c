#include "m2c.h"

void *func_02016570();                              /* extern */

void *func_02016548(void) {
    void *temp_r0;

    temp_r0 = func_02016570();
    if (temp_r0 == NULL) {
        return NULL;
    }
    return temp_r0 + M2C_FIELD((temp_r0 + M2C_FIELD(temp_r0, u16 *, 0xE)), s32 *, 0xC);
}
