#ifndef _PLAYER__H
#define _PLAYER__H

#include <SDL.h>
#include <math.h>

struct Entity {
    float x;
    float y;
    int w;
    int h;
    float dx;
    float dy;
    int health;
    int reload;
    int side;
    SDL_Texture *texture;
    bool collision(Entity *other){
        return (std::max(x, other->x) < std::min(x + w, other->x + other->w)) && (std::max(y, other->y) < std::min(y + h, other->y + other->h));
    }
};

struct Debris {
    float x;
    float y;
    float dx;
    float dy;
    SDL_Rect rect;
    SDL_Texture *texture;
    int life;
};

struct Star {
    int x;
    int y;
    int speed;
};

struct Title
{
    SDL_Texture *texture;
    SDL_Rect *rect,*dest;
    Title()
    {
        rect = new SDL_Rect();
        dest = new SDL_Rect();
    }
};

#endif
