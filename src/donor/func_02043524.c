/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020af84c from projets/dragon-ball-origins/src/donor/func_020af84c.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned char u8;
typedef int s32;
typedef s32 BOOL;
typedef struct UnkLink {
    void *prev;
    void *next;
} UnkLink;
extern BOOL func_020f8c2c(u32 chBitMask);
typedef struct UnkSleepCallbackInfo {
    void (*func)(void *);
    void *arg;
    struct UnkSleepCallbackInfo *next;
} UnkSleepCallbackInfo;
typedef void (*UnkStrmCallback)(int status, int chNum, void **buffer, u32 len, int format, void *arg);
typedef struct UnkSndStrm {
    UnkLink link;
    UnkSleepCallbackInfo preSleepInfo;
    UnkSleepCallbackInfo postSleepInfo;
    int format;
    BOOL active : 1;
    BOOL started : 1;
    u32 bufSize;
    int interval;
    UnkStrmCallback callback;
    void *arg;
    int curBlock;
    int volume;
    int alarmNo;
    u32 chBitMask;
    int chNum;
    u8 chNo[16];
} UnkSndStrm;
BOOL func_02043524(UnkSndStrm *strm, int chNum, const u8 *chNoList) {
    u32 chBitMask = 0;
    int i;

    for (i = 0; i < chNum; i++) {
        strm->chNo[i] = chNoList[i];
        chBitMask |= 1 << chNoList[i];
    }

    if (!func_020f8c2c(chBitMask)) {
        return 0;
    }

    strm->chNum     = chNum;
    strm->chBitMask = chBitMask;
    return 1;
}
