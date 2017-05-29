#include <stdbool.h>
#include "types.h"

#ifndef TAMAGOC_CORE_CORE_H

extern struct TamagoC state;

void death();
void feed(int);
void cure(int);
void enjoy(int);
void discipline(int);
void starve();
void bowel();
void clean();

void start_play(struct PlayEnv **);
void play(unsigned int,
        unsigned int,
        bool (unsigned int, unsigned int),
        struct PlayEnv *);
void end_play(struct PlayEnv **);

void idle();
void init();

#define TAMAGOC_CORE_CORE_H
#endif
