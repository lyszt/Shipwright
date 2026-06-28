#ifndef Z_ARMS_GUN_H
#define Z_ARMS_GUN_H

#include <libultraship/libultra.h>
#include "global.h"

struct Cal38;

typedef void (*Cal38ActionFunc)(struct Cal38*, PlayState*);

typedef struct Cal38 {
    /* 0x0000 */ Actor actor;
    /* 0x014C */ ColliderQuad collider;
    /* 0x01CC */ WeaponInfo hookInfo;
    /* 0x01E8 */ Vec3f unk_1E8;
    /* 0x01F4 */ Vec3f unk_1F4;
    /* 0x0200 */ Actor* grabbed;
    /* 0x0204 */ Vec3f grabbedDistDiff;
    /* 0x0210 */ s16 timer;
    /* 0x0214 */ Cal38ActionFunc actionFunc;
} Cal38; // size = 0x0218

#endif
