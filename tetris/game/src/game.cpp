#include "../inc/game.h"
#include "../inc/window.h"


void startGame(){
    window *w = new window(10,20,30);
    w->initializeWindow("tetris");
    delete w;
}