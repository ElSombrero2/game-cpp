#include <iostream>
#include <SDL2/SDL.h>

#define CENTERED_POS SDL_WINDOWPOS_CENTERED

using namespace std;

int main(int argc, char** argv) {
    SDL_Init(SDL_INIT_VIDEO | SDL_INIT_TIMER);
    SDL_Window* window = SDL_CreateWindow("Game Engine C++", CENTERED_POS, CENTERED_POS, 800, 600, SDL_WINDOW_RESIZABLE);

    while (1) {
        
    }

    SDL_DestroyWindow(window);
    SDL_Quit();
    return 0;
}