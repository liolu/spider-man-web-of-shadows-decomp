/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0210be00 from https://github.com/RonyxDumb/mkds src/arm9/0200d118_Util_VSNPrintF.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned long u32;
typedef signed char s8;
typedef signed long s32;
extern s32 func_0210be00(s8 *buffer, s32 bufsz, const s8 *format, ...);
extern s32 func_0210be28(s8 *buffer, s32 bufsz, const s8 *format, void *args);
s32 func_0210be00(s8 *buffer, s32 bufsz, const s8 *format, ...) {
    void *args = (void *) ((u32 *) ((u32) &format & ~0x3) + 1);
    return func_0210be28(buffer, bufsz, format, args);
}
s32 func_0210be28(s8 *buffer, s32 bufsz, const s8 *format, void *args);
