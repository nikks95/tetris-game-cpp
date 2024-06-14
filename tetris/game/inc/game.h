#ifndef GAME_H
#define GAME_H

class Game {
    private:    
        bool gameOver;
    public: 
        Game();
        ~Game();
        virtual unsigned int pollEvent();
        virtual void startGame() = 0;
        virtual bool isGameOver();

};

class TetrisGame:public Game{
    public:
        TetrisGame();
        ~TetrisGame();
        void startGame();
        bool isGameOver();
};



#endif
