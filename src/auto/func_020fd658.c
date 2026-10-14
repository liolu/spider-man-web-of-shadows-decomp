#include "engine.h"
#include "m2c.h"

M2C_UNK func_020fbc60(M2C_UNK);
void func_020ffcfc(M2C_UNK);

extern s32 data_0213da3c;
extern s32 data_0214be5c;

s32 func_020fd658(void) {
    if (data_0213da3c != -1) {
        func_020ffcfc(data_0213da3c);
    }
    func_020fbc60(data_0214be5c);
    data_0214be5c = 0;
    return (s32) &data_0214be5c;
}
