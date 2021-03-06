#include <inttypes.h>

#ifndef TAMAGOC_CORE_TYPES_H
struct TamagoC {
	uint8_t hunger;
	uint8_t happiness;
	uint8_t health;
	uint8_t discipline;
	uint8_t bowel;
    uint8_t poop;
};

struct PlayEnv {
    uint8_t games;
    uint8_t wins;
    uint8_t losses;
};

#define TAMAGOC_CORE_TYPES_H
#endif
