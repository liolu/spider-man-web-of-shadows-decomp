#include "engine.h"
#include "m2c.h"

M2C_UNK func_02104008(void);
void func_02104610(M2C_UNK);
void func_0210486c(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);

extern M2C_UNK data_0214df4c;

s32 func_02104238(s32 arg0, s32 arg1) {
    if (func_02104008() == 0) {
        return 1;
    }
    M2C_FIELD(&data_0214df4c, volatile s32 *, 4) = 0;
    func_02104610(0x03006000);
    do {

    } while (M2C_FIELD(&data_0214df4c, volatile s32 *, 4) == 0);
    M2C_FIELD(&data_0214df4c, volatile s32 *, 4) = 0;
    M2C_FIELD(&data_0214df4c, volatile s32 *, 8) = 0;
    func_0210486c(0, 2, 0, 1);
    func_02104610((u8) arg0 | 0x02006100);
    func_02104610(0x01010000 | (u16) arg1);
    return 0;
}
