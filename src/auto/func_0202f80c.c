#include "m2c.h"

void func_0202f80c(void *arg0, void *arg1, void *arg2) {
    s32 temp_ip;
    s32 temp_ip_2;
    s32 temp_lr;
    s32 temp_lr_2;
    s32 temp_r2;
    s32 temp_r3;

    temp_lr                      = M2C_FIELD(arg1, s32 *, 0);
    temp_ip                      = M2C_FIELD(arg2, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 0)    = (s32) (temp_lr - temp_ip);
    M2C_FIELD(arg0, s32 *, 4)    = (s32) (temp_lr + temp_ip);
    temp_lr_2                    = M2C_FIELD(arg1, s32 *, 4);
    temp_ip_2                    = M2C_FIELD(arg2, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 8)    = (s32) (temp_lr_2 - temp_ip_2);
    M2C_FIELD(arg0, s32 *, 0xC)  = (s32) (temp_lr_2 + temp_ip_2);
    temp_r3                      = M2C_FIELD(arg1, s32 *, 8);
    temp_r2                      = M2C_FIELD(arg2, s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0x10) = (s32) (temp_r3 - temp_r2);
    M2C_FIELD(arg0, s32 *, 0x14) = (s32) (temp_r3 + temp_r2);
}
