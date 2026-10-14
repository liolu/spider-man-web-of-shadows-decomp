#include "engine.h"
#include "m2c.h"

void func_020fb92c(M2C_UNK);
void func_020ffcfc(M2C_UNK);

extern s32 data_0213da3c;
extern M2C_UNK data_0214be78;

void func_020fd9dc(void) {
    if (data_0213da3c != -1) {
        func_020ffcfc(data_0213da3c);
    }
    func_020fb92c(M2C_FIELD(&data_0214be78, s32 *, 0xC));
    M2C_FIELD(&data_0214be78, s32 *, 0xC) = 0;
    M2C_FIELD(&data_0214be78, s32 *, 8)   = 0;
}
