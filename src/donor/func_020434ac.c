/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020af7d4 from projets/dragon-ball-origins/src/donor/func_020af7d4.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef int s32;
typedef s32 BOOL;
typedef struct UnkList {
    void *head;
    void *tail;
    u16 numObjects;
    u16 offset;
} UnkList;
typedef struct UnkLink {
    void *prev;
    void *next;
} UnkLink;
extern void func_020f3834(UnkList *list, u16 offset);
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
extern BOOL data_02149b60;
extern UnkList data_02149b64;
extern void func_020439bc(void *arg);
extern void func_02043a08(void *arg);
void func_020434ac(UnkSndStrm *strm) {
    if (!data_02149b60) {
        func_020f3834(&data_02149b64, 0);
        data_02149b60 = 1;
    }

    strm->preSleepInfo.func  = func_020439bc;
    strm->preSleepInfo.arg   = strm;
    strm->postSleepInfo.func = func_02043a08;
    strm->postSleepInfo.arg  = strm;
    strm->chBitMask          = 0;
    strm->chNum              = 0;
    strm->active             = 0;
    strm->started            = 0;
}
extern void func_020439bc(void *arg);
extern void func_02043a08(void *arg);
