/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020ffa18 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/os/os_terminate.c (license: none), reused
 * by tools/donor_match.py */
typedef unsigned int u32;
extern u32 func_020ff7b0(void);
extern void func_020ffa18(void);
extern void func_020ffa28(void);
void func_020ffa18(void) {
    while (1) {
        func_020ff7b0();
        func_020ffa28();
    }
}
void func_020ffa28(void);
