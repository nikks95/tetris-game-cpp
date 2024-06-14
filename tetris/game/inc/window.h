#ifndef WINDOW_H
#define WINDOW_H

#include <SDL2/SDL.h>
class window
{
private:
    const int width;
    const int height;
    const int blocksize;
    const int SCREEN_HEIGHT;
    const int SCREEN_WIDTH;
    SDL_Window *screen;
    SDL_Renderer *renderer;
public:
    window(int,int,int);
    void initializeWindow(const char* label);
    ~window();
};

#endif