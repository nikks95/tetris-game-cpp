#include <SDL2/SDL.h>
#include<iostream>
#include "game.h"
#include "window.h"
using namespace std;
int main(){
    startGame();
    window *w = new window(10,20,30);
    w->initializeWindow("tetris");
    delete w;
    return 0;
}