#include "m2c.h"

M2C_UNK func_020fc768();                            /* extern */
M2C_UNK func_020fc790();                            /* extern */
M2C_UNK func_020fc940();                            /* extern */

void func_020fc5f0(void) {
    func_020fc768();
    M2C_FIELD((void *) 0x04000504, volatile s32 *, 0) = 0;
    do {

    } while (M2C_FIELD((void *) 0x04000504, volatile s32 *, 0xFC) & 0x08000000);
    M2C_FIELD((void *) 0x04000060, volatile u16 *, 0)     = 0U;
    M2C_FIELD((void *) 0x04000504, volatile s32 *, 0xFC)  = 0;
    M2C_FIELD((void *) 0x04000060, volatile s32 *, -0x50) = 0;
    M2C_FIELD((void *) 0x04000060, volatile u16 *, 0)     = (u16) (M2C_FIELD((void *) 0x04000060, volatile u16 *, 0) | 0x2000);
    M2C_FIELD((void *) 0x04000060, volatile u16 *, 0)     = (u16) (M2C_FIELD((void *) 0x04000060, volatile u16 *, 0) | 0x1000);
    M2C_FIELD((void *) 0x04000060, volatile u16 *, 0) = (u16) (M2C_FIELD((void *) 0x04000060, volatile u16 *, 0) & 0xFFFFCFFD);
    M2C_FIELD((void *) 0x04000060, volatile u16 *, 0) =
        (u16) ((M2C_FIELD((void *) 0x04000060, volatile u16 *, 0) & ~0x3000) | 0x10);
    M2C_FIELD((void *) 0x04000060, volatile u16 *, 0) = (u16) (M2C_FIELD((void *) 0x04000060, volatile u16 *, 0) & 0xCFFB);
    M2C_FIELD((void *) 0x04000504, volatile s32 *, 0xFC) =
        (s32) (M2C_FIELD((void *) 0x04000504, volatile s32 *, 0xFC) | 0x8000);
    M2C_FIELD((void *) 0x04000504, volatile s32 *, 0xFC) =
        (s32) ((M2C_FIELD((void *) 0x04000504, volatile s32 *, 0xFC) & ~0xC0000000) | 0x80000000);
    func_020fc790();
    M2C_FIELD((void *) 0x04000350, volatile s32 *, 0)   = 0;
    M2C_FIELD((void *) 0x04000350, volatile s16 *, 4)   = 0x7FFF;
    M2C_FIELD((void *) 0x04000350, volatile s16 *, 6)   = 0;
    M2C_FIELD((void *) 0x04000350, volatile s32 *, 8)   = 0;
    M2C_FIELD((void *) 0x04000350, volatile s16 *, 0xC) = 0;
    *(u16 *) 0x04000008 &= ~3;
    func_020fc940();
    M2C_FIELD((void *) 0x040004A4, volatile s32 *, 0) = 0x1F0080;
    M2C_FIELD((void *) 0x040004A4, volatile s32 *, 4) = 0;
    M2C_FIELD((void *) 0x040004A4, volatile s32 *, 8) = 0;
}
