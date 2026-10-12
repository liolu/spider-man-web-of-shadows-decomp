#include "m2c.h"

extern s16 data_0213da38;
extern s16 data_0214be3c;

void func_020face8(void) {
    s32 temp_ip;

    temp_ip = *(s32 *)0x04000000;
    data_0213da38 = 0;
    data_0214be3c = (s16) ((u32) (temp_ip & 0x30000) >> 0x10);
    *(s32 *)0x04000000 = temp_ip & ~0x30000;
}
