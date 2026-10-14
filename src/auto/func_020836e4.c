/* compiler: 1.2/sp2p3 -proc arm7tdmi */
#include "m2c.h"

void func_020836e4(void *arg0) {
    void *temp_r1;

    M2C_FIELD(arg0, s32 *, 0)      = 0;
    M2C_FIELD(arg0, s32 *, 4)      = 0;
    temp_r1                        = arg0 + 8;
    M2C_FIELD(arg0, void **, 8)    = NULL;
    M2C_FIELD(temp_r1, void **, 4) = temp_r1;
    M2C_FIELD(arg0, void **, 8)    = temp_r1;
    M2C_FIELD(arg0, s32 *, 0x10)   = 0;
    M2C_FIELD(arg0, s32 *, 0x14)   = 0x800;
    M2C_FIELD(arg0, s8 *, 0x18)    = 0;
    M2C_FIELD(arg0, s8 *, 0x19)    = 0;
}
