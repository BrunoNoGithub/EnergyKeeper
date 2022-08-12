#include "SDL.h"
#include "state.cpp"
#include "input.cpp"
class Game{
public:


    Game(){
        this->resolution_height = 720;
        this->resolution_width = 1280;
    }

    void run(){
        this->window= SDL_CreateWindow("Energy Keeper",SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,this->resolution_width,this->resolution_height,SDL_WINDOW_SHOWN);
        this->renderer = SDL_CreateRenderer(window,-1,0);
        bool inputs[18]= {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
        while (inputs[0]==0){ 
            SDL_SetRenderDrawColor(this->renderer,256,0,0,256);
            SDL_RenderClear(this->renderer);
            SDL_RenderPresent(this->renderer);
            this->input.run(inputs);
            std::cout << inputs[0]<<"\n";
        }

    enum GameScreen{
        TITLE,
        SPLASH,
        MENU,
        PAUSE,
        GAME};

    };
private:
    Game_Input input;
    Game_State state;
    SDL_Window *window;
    SDL_Renderer *renderer;
    int resolution_height;
    int resolution_width;

};