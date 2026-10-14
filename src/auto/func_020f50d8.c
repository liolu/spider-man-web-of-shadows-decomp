#include "m2c.h"

M2C_UNK func_020fffd0(M2C_UNK, void *, M2C_UNK);    /* extern */
extern s32 data_0213d8d4;
extern s32 data_0213d8d8;
extern s32 data_0213d8dc;

void func_020f50d8(void *arg0, s32 arg1) {
    func_020fffd0(0, arg0, 0x54);
    M2C_FIELD(arg0, s32 *, 0xC)  = (s32) data_0213d8dc;
    M2C_FIELD(arg0, s32 *, 0x14) = (s32) data_0213d8d8;
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) data_0213d8d4;
    M2C_FIELD(arg0, s32 *, 4)    = arg1;
}
