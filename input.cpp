#include "SDL.h"

class Game_Input{
public:

    void init(SDL_Window* window){
        this->window= window;
    }

    void run(bool inputs[]){
        SDL_PollEvent(&(this->event));
        switch ((this->event).type){
            case SDL_QUIT:
                //std::cout<< "Saiu";
                inputs[0]=1;
                break;
        }
        return;
    };

private:
    SDL_Event event;
    SDL_Window *window;

};