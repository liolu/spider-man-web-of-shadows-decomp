/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* AllocUsedBlockFromFreeBlock from https://github.com/RonyxDumb/mkds src/arm9/020179d4_Mem_Exp_CoalesceFreedRegion.c (license:
 * none), reused by tools/donor_match.py */
typedef unsigned short int u16;
typedef unsigned long u32;
typedef struct {
    void *prevObject;
    void *nextObject;

} NNSFndLink;
typedef struct {
    void *headObject;
    void *tailObject;
    u16 numObjects;
    u16 offset;

} NNSFndList;
extern void func_020fffd0(register u32 data, register void *destp, register u32 size);
static inline void MI_CpuFill32(void *dest, u32 data, u32 size) {
    func_020fffd0(data, dest, size);
}
typedef struct NNSiFndHeapHead NNSiFndHeapHead;
typedef u32 NNSiUIntPtr;
struct NNSiFndHeapHead {
    u32 signature;

    NNSFndLink link;
    NNSFndList childList;

    void *heapStart;
    void *heapEnd;

    u32 attribute;
};
static inline NNSiUIntPtr NNSiGetUIntPtr(const void *ptr) {
    return (NNSiUIntPtr) ptr;
}
static inline u32 GetOffsetFromPtr(const void *start, const void *end) {
    return NNSiGetUIntPtr(end) - NNSiGetUIntPtr(start);
}
static inline void *AddU32ToPtr(void *ptr, u32 val) {
    return (void *) (NNSiGetUIntPtr(ptr) + val);
}
static inline void *SubU32ToPtr(void *ptr, u32 val) {
    return (void *) (NNSiGetUIntPtr(ptr) - val);
}
static inline u16 GetOptForHeap(const NNSiFndHeapHead *pHeapHd) {
    return (u16) (((pHeapHd->attribute) >> (0)) & ((1 << (8)) - 1));
}
static inline void FillAllocMemory(NNSiFndHeapHead *pHeapHd, void *address, u32 size) {
    if (GetOptForHeap(pHeapHd) & 1) {
        MI_CpuFill32(address, (0), size);
    }
}
typedef struct NNSiFndExpHeapMBlockHead NNSiFndExpHeapMBlockHead;
struct NNSiFndExpHeapMBlockHead {
    u16 signature;
    u16 attribute;

    u32 blockSize;

    NNSiFndExpHeapMBlockHead *pMBHeadPrev;
    NNSiFndExpHeapMBlockHead *pMBHeadNext;
};
typedef struct NNSiFndExpMBlockList NNSiFndExpMBlockList;
struct NNSiFndExpMBlockList {
    NNSiFndExpHeapMBlockHead *head;
    NNSiFndExpHeapMBlockHead *tail;
};
typedef struct NNSiFndExpHeapHead NNSiFndExpHeapHead;
struct NNSiFndExpHeapHead {
    NNSiFndExpMBlockList mbFreeList;
    NNSiFndExpMBlockList mbUsedList;

    u16 groupID;
    u16 feature;
};
typedef struct NNSiMemRegion {
    void *start;
    void *end;
} NNSiMemRegion;
extern NNSiFndExpHeapMBlockHead *func_020f3b84(NNSiFndExpMBlockList *list, NNSiFndExpHeapMBlockHead *target,
                                               NNSiFndExpHeapMBlockHead *prev);
extern NNSiFndExpHeapMBlockHead *func_020f3bb4(const NNSiMemRegion *pRegion, u16 signature);
extern void *func_020f3c54(NNSiFndExpHeapHead *pEHHead, NNSiFndExpHeapMBlockHead *pMBHeadFree, void *mblock, u32 size,
                           u16 direction);
extern void func_020f3b30(NNSiMemRegion *region, NNSiFndExpHeapMBlockHead *block);
extern NNSiFndExpHeapMBlockHead *func_020f3b5c(NNSiFndExpMBlockList *list, NNSiFndExpHeapMBlockHead *block);
static inline void SetAllocDirForMBlock(NNSiFndExpHeapMBlockHead *pEHMBHead, u16 direction) {
    do {
        u32 maskBits = (u32) ((1 << (1)) - 1);
        u32 newVal   = (direction) &maskBits;
        (void) (maskBits <<= 15);
        (pEHMBHead->attribute) &= ~maskBits;
        (pEHMBHead->attribute) |= newVal << (15);
    } while (0);
    ;
}
static inline void SetAlignmentForMBlock(NNSiFndExpHeapMBlockHead *pEHMBHead, u16 alignment) {
    do {
        u32 maskBits = (u32) ((1 << (7)) - 1);
        u32 newVal   = (alignment) &maskBits;
        (void) (maskBits <<= 8);
        (pEHMBHead->attribute) &= ~maskBits;
        (pEHMBHead->attribute) |= newVal << (8);
    } while (0);
    ;
}
static inline void SetGroupIDForMBlock(NNSiFndExpHeapMBlockHead *pEHMBHead, u16 groupID) {
    do {
        u32 maskBits = (u32) ((1 << (8)) - 1);
        u32 newVal   = (groupID) &maskBits;
        (void) (maskBits <<= 0);
        (pEHMBHead->attribute) &= ~maskBits;
        (pEHMBHead->attribute) |= newVal << (0);
    } while (0);
    ;
}
static inline NNSiFndHeapHead *GetHeapHeadPtrFromExpHeapHead(NNSiFndExpHeapHead *pEHHead) {
    return SubU32ToPtr(pEHHead, sizeof(NNSiFndHeapHead));
}
void func_020f3b30(NNSiMemRegion *region, NNSiFndExpHeapMBlockHead *block);
NNSiFndExpHeapMBlockHead *func_020f3b5c(NNSiFndExpMBlockList *list, NNSiFndExpHeapMBlockHead *block);
NNSiFndExpHeapMBlockHead *func_020f3b84(NNSiFndExpMBlockList *list, NNSiFndExpHeapMBlockHead *target,
                                        NNSiFndExpHeapMBlockHead *prev);
NNSiFndExpHeapMBlockHead *func_020f3bb4(const NNSiMemRegion *pRegion, u16 signature);
static inline NNSiFndExpHeapMBlockHead *InitFreeMBlock(const NNSiMemRegion *region) {
    return func_020f3bb4(region, 0x4652);
}
static inline void AppendMBlock(NNSiFndExpMBlockList *list, NNSiFndExpHeapMBlockHead *block) {
    (void) func_020f3b84(list, block, list->tail);
}
void *func_020f3c54(NNSiFndExpHeapHead *pEHHead, NNSiFndExpHeapMBlockHead *pMBHeadFree, void *mblock, u32 size,
                    u16 direction) {
    NNSiMemRegion freeRgnT;
    NNSiMemRegion freeRgnB;
    NNSiFndExpHeapMBlockHead *pMBHeadFreePrev;

    func_020f3b30(&freeRgnT, pMBHeadFree);

    freeRgnB.end   = freeRgnT.end;
    freeRgnB.start = AddU32ToPtr(mblock, size);
    freeRgnT.end   = SubU32ToPtr(mblock, sizeof(NNSiFndExpHeapMBlockHead));

    pMBHeadFreePrev = func_020f3b5c(&pEHHead->mbFreeList, pMBHeadFree);

    if (GetOffsetFromPtr(freeRgnT.start, freeRgnT.end) < sizeof(NNSiFndExpHeapMBlockHead)) {
        freeRgnT.end = freeRgnT.start;
    } else {
        pMBHeadFreePrev = func_020f3b84(&pEHHead->mbFreeList, InitFreeMBlock(&freeRgnT), pMBHeadFreePrev);
    }
    if (GetOffsetFromPtr(freeRgnB.start, freeRgnB.end) < sizeof(NNSiFndExpHeapMBlockHead)) {
        freeRgnB.start = freeRgnB.end;
    } else {
        (void) func_020f3b84(&pEHHead->mbFreeList, InitFreeMBlock(&freeRgnB), pMBHeadFreePrev);
    }

    FillAllocMemory(GetHeapHeadPtrFromExpHeapHead(pEHHead), freeRgnT.end, GetOffsetFromPtr(freeRgnT.end, freeRgnB.start));

    NNSiFndExpHeapMBlockHead *pMBHeadNewUsed;
    NNSiMemRegion region;

    region.start = SubU32ToPtr(mblock, sizeof(NNSiFndExpHeapMBlockHead));
    region.end   = freeRgnB.start;

    pMBHeadNewUsed = func_020f3bb4(&region, 0x5544);
    SetAllocDirForMBlock(pMBHeadNewUsed, direction);
    SetAlignmentForMBlock(pMBHeadNewUsed, (u16) GetOffsetFromPtr(freeRgnT.end, pMBHeadNewUsed));
    SetGroupIDForMBlock(pMBHeadNewUsed, pEHHead->groupID);
    AppendMBlock(&pEHHead->mbUsedList, pMBHeadNewUsed);

    return mblock;
}
