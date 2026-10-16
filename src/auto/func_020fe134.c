/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020778bc from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/os/os_spinlock.c (license: none), reused
 * by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef int s32;
typedef s32 BOOL;
extern u32 func_020ff7b0(void);
extern u32 func_020ff7c4(u32 irq_flag);
extern u32 func_020ff7dc(void);
extern u32 func_020ff7f0(u32 fiq_flag);
extern s32 func_021002d8(u32 value, void *dst);
typedef struct UnkLockWord {
    u32 lockFlag;
    u16 ownerID;
    u16 extension;
} UnkLockWord;
extern s32 func_020fe134(u16 lockID, UnkLockWord *lockp, void (*ctrlFunc)(void), BOOL disableFiq);
s32 func_020fe134(u16 lockID, UnkLockWord *lockp, void (*ctrlFunc)(void), BOOL disableFiq) {
    s32 lastLockFlag;
    u32 prev;

    if (disableFiq) {
        prev = func_020ff7dc();
    } else {
        prev = func_020ff7b0();
    }

    lastLockFlag = func_021002d8(lockID, &lockp->lockFlag);
    if (lastLockFlag == 0) {
        if (ctrlFunc) {
            ctrlFunc();
        }
        lockp->ownerID = lockID;
    }

    if (disableFiq) {
        func_020ff7f0(prev);
    } else {
        func_020ff7c4(prev);
    }
    return lastLockFlag;
}
