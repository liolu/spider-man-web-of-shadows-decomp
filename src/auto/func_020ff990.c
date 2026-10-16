/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */

typedef unsigned int u32;
typedef unsigned short u16;
typedef int s32;
extern u32 func_020ff7b0(void);
extern u32 func_020ff7c4(u32 state);
extern u32 data_0214c264;
extern u16 data_0214c268[9];
u32 func_020ff954(register u32 value);

/* func_02079f00 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/os/os_vramexclusive.c (license: none),
 * reused by tools/donor_match.py */
void func_020ff990(u32 bank, u16 lockID) {
    u32 mask;
    u32 enabled = func_020ff7b0();

    mask = bank & data_0214c264 & 0x1ff;

    while (1) {
        s32 i = 31 - func_020ff954(mask);
        if (i < 0) {
            break;
        }
        mask &= ~(1 << i);
        if (data_0214c268[i] == lockID) {
            data_0214c268[i] = 0;
            data_0214c264 &= ~(1 << i);
        }
    }
    func_020ff7c4(enabled);
}
