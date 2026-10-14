#include "engine.h"
#include "m2c.h"

M2C_UNK func_0201b294(M2C_UNK);
void func_0201c588(M2C_UNK, M2C_UNK);

s32 func_0201c620(s32 arg0, s32 arg1) {
    void *sp8;
    void *sp4;
    void *sp0;
    s32 temp_r1;

    if ((s32) M2C_FIELD((void *) func_0201b294(M2C_FIELD(arg0, volatile s32 *, 8)), s32 *, 4) < 0) {
        temp_r1 = M2C_FIELD(arg0, volatile s32 *, 8);
        if (arg1 != 0) {
            func_0201c588((s32) &sp8, temp_r1);
            return arg1 - ((s32) M2C_FIELD(sp8, volatile s32 *, 0xC) >> 1);
        }
        func_0201c588((s32) &sp4, temp_r1);
        return (s32) M2C_FIELD(sp4, volatile s32 *, 0xC) >> 1;
    }
    func_0201c588((s32) &sp0, M2C_FIELD(arg0, volatile s32 *, 8));
    return (0 - arg1) + ((s32) M2C_FIELD(sp0, volatile s32 *, 0xC) >> 1);
}
