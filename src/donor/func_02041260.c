/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02074ea8 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSystem/src/snd/snd_arcload.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef int s32;
typedef s32 BOOL;
typedef struct UnkSndSeqInfo {
    u32 fileId;
    u16 bankNo;
} UnkSndSeqInfo;
extern void *func_02040dd8(int index);
extern void *func_0204117c(u32 fileId);
extern int func_02041260(int seqNo, u32 flags, void *heap, BOOL addToArc, void **pData);
extern int func_02041344(int bankNo, u32 flags, void *heap, BOOL addToArc, void **pData);
extern void *func_020415b0(u32 fileId, void *heap, BOOL addToArc);
int func_02041260(int seqNo, u32 flags, void *heap, BOOL addToArc, void **pData) {
    UnkSndSeqInfo *info = func_02040dd8(seqNo);
    void *data;
    int result;

    if (info == 0) {
        return 2;
    }

    result = func_02041344(info->bankNo, flags, heap, addToArc, 0);
    if (result != 0) {
        return result;
    }

    if (flags & 1) {
        data = func_020415b0(info->fileId, heap, addToArc);
        if (data == 0) {
            return 6;
        }
    } else {
        data = func_0204117c(info->fileId);
    }

    if (pData != 0) {
        *pData = data;
    }
    return 0;
}
int func_02041344(int bankNo, u32 flags, void *heap, BOOL addToArc, void **pData);
void *func_020415b0(u32 fileId, void *heap, BOOL addToArc);
