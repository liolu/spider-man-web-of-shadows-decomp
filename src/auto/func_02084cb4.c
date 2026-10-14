/* compiler: 1.2/sp2p3 -proc arm7tdmi */
#include "m2c.h"

void func_02084cb4(void *arg0) {
    void *temp_r1;

    M2C_FIELD(arg0, s32 *, 0)      = 0;
    temp_r1                        = arg0 + 4;
    M2C_FIELD(arg0, void **, 4)    = NULL;
    M2C_FIELD(temp_r1, void **, 4) = temp_r1;
    M2C_FIELD(arg0, void **, 4)    = temp_r1;
}
