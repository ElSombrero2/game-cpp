#include <iostream>
#include <SDL2/SDL.h>

using namespace std;

int main(int argc, char** argv) {
    SDL_Init(SDL_INIT_VIDEO | SDL_INIT_TIMER);
    SDL_Window* window = SDL_CreateWindow("Game Engine C++", 0, 0, 800, 600, SDL_WINDOW_RESIZABLE);

    while (true) {
        SDL_Event e;
        SDL_PollEvent(&e);
        if(e.type == SDL_QUIT) break;
    }

    SDL_DestroyWindow(window);
    SDL_Quit();
    return 0;
}