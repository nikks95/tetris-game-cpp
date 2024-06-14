#include "../inc/window.h"

window::window(int w, int h, int b): width(w),height(h),blocksize(b),SCREEN_WIDTH(w*b),SCREEN_HEIGHT(h*b){}
window::~window(){
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(screen);
    SDL_Quit();
}

void window::initializeWindow(const char* label){
    screen = SDL_CreateWindow(label,SDL_WINDOWPOS_CENTERED,SDL_WINDOWPOS_CENTERED,SCREEN_WIDTH,SCREEN_HEIGHT,SDL_WINDOW_SHOWN);
    renderer = SDL_CreateRenderer(screen, -1, SDL_RENDERER_ACCELERATED);
}