#include <iostream>
#include <SDL2/SDL.h>

#define CENTERED_POS SDL_WINDOWPOS_CENTERED
#define TIME 1000.0
#define FRAMERATE 60.0
#define SPEED 100.0

using namespace std;

void animate(SDL_Renderer* renderer, SDL_Rect* rect, double deltaTime, double speed) {
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderFillRect(renderer, rect);
    rect->x += speed * deltaTime;
}

int main(int argc, char** argv) {
    SDL_Init(SDL_INIT_VIDEO | SDL_INIT_TIMER);
    SDL_Window* window = SDL_CreateWindow("Game Engine C++", CENTERED_POS, CENTERED_POS, 800, 600, SDL_WINDOW_RESIZABLE);
    SDL_Renderer* renderer = SDL_CreateRenderer(window, 0, SDL_RENDERER_ACCELERATED);
    SDL_Rect rect = {0, 0, 50, 50};

    int passed = 0, framerate = 0;
    double current = 0, past = SDL_GetTicks();

    while (true) {
        SDL_Event e;
        SDL_PollEvent(&e);
        past = current;
        current = SDL_GetTicks();
        double deltaTime = (current - past) / TIME;
        int now = SDL_GetTicks() - passed;
        if(now >= TIME){
            passed = SDL_GetTicks();
            char stream[255];
            sprintf(stream, "Game Engine C++ | FRAMERATE: %d", framerate);
            SDL_SetWindowTitle(window, stream);
            framerate = 0;
        }else SDL_Delay(TIME / FRAMERATE);
        framerate++;
        if(e.type == SDL_QUIT) break;

        animate(renderer, &rect, deltaTime, SPEED);

        SDL_RenderPresent(renderer);
    }

    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
    return 0;
}