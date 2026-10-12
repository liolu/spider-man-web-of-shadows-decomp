#include "m2c.h"
#include "engine.h"

void func_020fba14(M2C_UNK);
void func_020ffcfc(M2C_UNK);

extern s32 data_0213da3c;
extern M2C_UNK data_0214be78;

void func_020fdb84(void) {
    if (data_0213da3c != -1) {
        func_020ffcfc(data_0213da3c);
    }
    func_020fba14(M2C_FIELD(&data_0214be78, s32 *, 0));
    M2C_FIELD(&data_0214be78, s32 *, 0) = 0;
    M2C_FIELD(&data_0214be78, s32 *, 0x10) = 0;
}
