#include "engine.h"
#include "m2c.h"

void func_020ffac4(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void func_020fffe4(M2C_UNK, M2C_UNK, M2C_UNK);

extern s32 data_0213da3c;

void func_020fcc84(s32 arg0, s32 arg1, s32 arg2) {
    if ((data_0213da3c != -1) && ((u32) arg2 > 0x30U)) {
        func_020ffac4(data_0213da3c, arg0, arg1 + 0x07000400, arg2);
        return;
    }
    func_020fffe4(arg0, arg1 + 0x07000400, arg2);
}
