#include <iostream>
#include <SDL2/SDL.h>

#define CENTERED_POS SDL_WINDOWPOS_CENTERED

using namespace std;

int main(int argc, char** argv) {
    SDL_Init(SDL_INIT_VIDEO | SDL_INIT_TIMER);
    SDL_Window* window = SDL_CreateWindow("Game Engine C++", CENTERED_POS, CENTERED_POS, 800, 600, SDL_WINDOW_RESIZABLE);
    SDL_Renderer* renderer = SDL_CreateRenderer(window, 0, SDL_RENDERER_ACCELERATED);
    SDL_Rect rect = {0, 0, 50, 50};

    while (true) {
        SDL_Event e;
        SDL_PollEvent(&e);
        if(e.type == SDL_QUIT) break;
        SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
        SDL_RenderFillRect(renderer, &rect);

        SDL_RenderPresent(renderer);
    }

    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
    return 0;
}