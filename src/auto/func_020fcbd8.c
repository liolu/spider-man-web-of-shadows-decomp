#include "m2c.h"
#include "engine.h"

void func_020ffb34(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void func_020fffb4(M2C_UNK, M2C_UNK, M2C_UNK);

extern s32 data_0213da3c;

void func_020fcbd8(s32 arg0, s32 arg1, s32 arg2) {
    if ((data_0213da3c != -1) && ((u32) arg2 > 0x1CU)) {
        func_020ffb34(data_0213da3c, arg0, arg1 + 0x05000600, arg2);
        return;
    }
    func_020fffb4(arg0, arg1 + 0x05000600, arg2);
}
