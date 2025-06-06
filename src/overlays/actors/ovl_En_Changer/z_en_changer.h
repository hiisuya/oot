#ifndef Z_EN_CHANGER_H
#define Z_EN_CHANGER_H

#include "ultra64.h"
#include "actor.h"

struct EnChanger;

typedef void (*EnChangerActionFunc)(struct EnChanger*, struct PlayState*);

typedef struct EnChanger {
    /* 0x0000 */ Actor actor;
    /* 0x014C */ EnChangerActionFunc actionFunc;
    /* 0x0150 */ struct EnBox* leftChest;
    /* 0x0154 */ struct EnBox* rightChest;
    /* 0x0158 */ struct EnBox* finalChest;
    /* 0x015C */ s16 leftChestNum;
    /* 0x015E */ s16 rightChestNum;
    /* 0x0160 */ s16 leftChestGetItemId;
    /* 0x0162 */ s16 rightChestGetItemId;
    /* 0x0164 */ s16 selectedChest;
    /* 0x0166 */ s16 timer;
    /* 0x0168 */ s16 roomChestsOpened;
} EnChanger; // size = 0x016C

#endif
