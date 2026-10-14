#include "engine.h"
#include "m2c.h"

void func_020fb6a8(M2C_UNK);
void func_020ffcfc(M2C_UNK);

extern s32 data_0213da3c;
extern M2C_UNK data_0214be5c;

s32 func_020fd598(void) {
    if (data_0213da3c != -1) {
        func_020ffcfc(data_0213da3c);
    }
    func_020fb6a8(M2C_FIELD(&data_0214be5c, s32 *, 8));
    M2C_FIELD(&data_0214be5c, s32 *, 8) = 0;
    M2C_FIELD(&data_0214be5c, s32 *, 4) = 0;
    return (s32) &data_0214be5c;
}
