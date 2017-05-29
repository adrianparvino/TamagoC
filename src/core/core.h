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
void idle();
void clean();
void init();

#define TAMAGOC_CORE_CORE_H
#endif
