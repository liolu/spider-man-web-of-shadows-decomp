#include "engine.h"
#include "m2c.h"

void func_020fbce0(M2C_UNK);
void func_020ffcfc(M2C_UNK);

extern s32 data_0213da3c;
extern M2C_UNK data_0214be5c;

s32 func_020fd714(void) {
    if (data_0213da3c != -1) {
        func_020ffcfc(data_0213da3c);
    }
    func_020fbce0(M2C_FIELD(&data_0214be5c, s32 *, 0x18));
    M2C_FIELD(&data_0214be5c, s32 *, 0x18) = 0;
    return (s32) &data_0214be5c;
}
