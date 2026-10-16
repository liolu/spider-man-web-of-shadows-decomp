/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020750cc from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSystem/src/snd/snd_arcload.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef int s32;
typedef s32 BOOL;
typedef struct UnkSndWaveArcInfo {
    u32 fileId : 24;
    u32 flags : 8;
} UnkSndWaveArcInfo;
extern void *func_02040f04(int index);
extern void *func_0204117c(u32 fileId);
extern int func_02041484(int waveArcNo, u32 flags, void *heap, BOOL addToArc, void **pData);
extern void *func_020416f4(u32 fileId, void *heap, BOOL addToArc);
extern void *func_02041760(u32 fileId, void *heap, BOOL addToArc);
int func_02041484(int waveArcNo, u32 flags, void *heap, BOOL addToArc, void **pData) {
    UnkSndWaveArcInfo *info = func_02040f04(waveArcNo);
    void *data;

    if (info == 0) {
        return 5;
    }

    if (flags & 4) {
        if (info->flags & 1) {
            data = func_02041760(info->fileId, heap, addToArc);
        } else {
            data = func_020416f4(info->fileId, heap, addToArc);
        }
        if (data == 0) {
            return 9;
        }
    } else {
        data = func_0204117c(info->fileId);
    }

    if (pData != 0) {
        *pData = data;
    }
    return 0;
}
void *func_020416f4(u32 fileId, void *heap, BOOL addToArc);
void *func_02041760(u32 fileId, void *heap, BOOL addToArc);
