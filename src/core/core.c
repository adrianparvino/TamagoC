#include <limits.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

#include "core.h"
#include "config.h"

struct TamagoC state;

void death()
{
	state.health = 0;
}

void feed(int n)
{
    state.hunger = (255 - n >= state.hunger)
        ? state.hunger + n
        : 255;
}

void cure(int n)
{
    state.health = (255 - n >= state.health)
        ? state.health + n
        : 255;
}

void enjoy(int n)
{
    state.happiness = (255 - n >= state.happiness)
        ? state.happiness + n
        : 255;
}

void discipline(int n)
{
    state.discipline = (255 - n >= state.discipline)
        ? state.discipline + n
        : 255;
}

void starve()
{
	state.hunger = (state.hunger > starve_rate)
        ? state.hunger - starve_rate
        : 0;
}

void bowel()
{
    state.bowel = (255 - bowel_rate > state.bowel)
        ? state.bowel + bowel_rate
        : 255;
    if (state.bowel > 128)
    {
        if (state.discipline < (rand() % 256))
        {
            if (state.poop != 255) 
                ++state.poop;
        }
    }
}

void start_play(struct PlayEnv **play_env)
{
    *play_env = malloc(sizeof(struct PlayEnv));

    (*play_env)->games = 0;
    (*play_env)->games = 0;
    (*play_env)->games = 0;
}

void play(unsigned int x,
        unsigned int mod,
        bool predicate(unsigned int, unsigned int),
        struct PlayEnv *play_env)
{
    unsigned int temp = rand();
    while (temp >= (RAND_MAX/mod)*mod)
        temp = rand();
    temp %= mod;

    if (predicate(x, mod))
        ++play_env->wins;
    else
        ++play_env->losses;

    ++play_env->games;
}

void end_play(struct PlayEnv **play_env)
{
    free(*play_env);
}

void idle()
{
    starve();
    bowel();
}

void clean()
{
    state.poop = 0;
}

void init()
{
    srand((unsigned) time(NULL));
}
