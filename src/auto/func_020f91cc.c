/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02077204 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSystem/src/snd/snd_seqarc.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef struct UnkSndSeqArcSeqInfo {
    u32 offset;
    u16 bankNo;
    u8 volume;
    u8 channelPrio;
    u8 playerPrio;
    u8 playerNo;
    u16 unk_0a;
} UnkSndSeqArcSeqInfo;
typedef struct UnkSndSeqArc {
    u8 unk_00[0x1C];
    u32 count;
    UnkSndSeqArcSeqInfo table[1];
} UnkSndSeqArc;
UnkSndSeqArcSeqInfo *func_020f91cc(UnkSndSeqArc *seqArc, int index) {
    UnkSndSeqArcSeqInfo *info;

    if (index < 0) {
        return 0;
    }
    if (index >= seqArc->count) {
        return 0;
    }

    info = &seqArc->table[index];
    if (info->offset == 0xFFFFFFFF) {
        return 0;
    }
    return info;
}
