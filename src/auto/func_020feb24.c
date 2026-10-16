/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020feb24 from https://github.com/Yokimitsuro/khrecoded-decomp libs/nitro/os/calls/func_020feb24.c (license:
 * CC0-1.0), reused by tools/donor_match.py */
typedef unsigned long u32;
typedef int OSIntrMode;
typedef struct OSThreadSystemState {
    u32 reserved000;
    u32 rescheduleCount;
} OSThreadSystemState;
extern OSThreadSystemState data_0214befc;
extern OSIntrMode func_020ff7b0(void);
extern OSIntrMode func_020ff7c4(OSIntrMode mode);
u32 func_020feb24(void) {
    OSIntrMode interruptMode = func_020ff7b0();
    u32 count;

    if (data_0214befc.rescheduleCount < (u32) (0 - 1)) {
        count = data_0214befc.rescheduleCount++;
    }
    (void) func_020ff7c4(interruptMode);

    return count;
}
