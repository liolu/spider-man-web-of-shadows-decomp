#include "m2c.h"

M2C_UNK func_020fdd84(M2C_UNK, M2C_UNK *);          /* extern */
M2C_UNK func_020fdec8(M2C_UNK);                     /* extern */
M2C_UNK func_020ff618(M2C_UNK);                     /* extern */
extern M2C_UNK data_0214c230;
extern M2C_UNK func_020ff6ac;

void func_020ff634(void) {
    if (M2C_FIELD(&data_0214c230, u16 *, 0) != 0) {
        return;
    }
    M2C_FIELD(&data_0214c230, u16 *, 0) = 1U;
    func_020ff618(0);
    M2C_FIELD(&data_0214c230, s32 *, 8)       = 0;
    M2C_FIELD(&data_0214c230, s32 *, 0xC)     = 0;
    M2C_FIELD((void *) 0x04000102, s16 *, 0)  = 0;
    M2C_FIELD((void *) 0x04000102, s16 *, -2) = 0;
    M2C_FIELD((void *) 0x04000102, s16 *, 0)  = 0xC1;
    func_020fdd84(8, &func_020ff6ac);
    func_020fdec8(8);
    M2C_FIELD(&data_0214c230, s32 *, 4) = 0;
}
