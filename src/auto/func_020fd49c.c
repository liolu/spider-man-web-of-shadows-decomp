#include "m2c.h"
#include "engine.h"

void func_020fb5a8(M2C_UNK);
void func_020ffcfc(M2C_UNK);

extern s32 data_0213da3c;
extern M2C_UNK data_0214be5c;

s32 func_020fd49c(void) {
    if (data_0213da3c != -1) {
        func_020ffcfc(data_0213da3c);
    }
    func_020fb5a8(M2C_FIELD(&data_0214be5c, s32 *, 0x14));
    M2C_FIELD(&data_0214be5c, s32 *, 0x14) = 0;
    M2C_FIELD(&data_0214be5c, s32 *, 0x10) = 0;
    M2C_FIELD(&data_0214be5c, s32 *, 0xC) = 0;
    return (s32) &data_0214be5c;
}
