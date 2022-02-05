#include <iostream>
#include <SDL2/SDL.h>
#include <game.h>
#include <player.h>

using namespace std;

SDL_Rect rect = {0, 0, 50, 50};
SDL_Color color = {255, 255, 255, 255};
Game::Player* player = new Game::Player(rect, color);

void Game::update(double deltaTime){
}

void Game::render(SDL_Renderer *renderer){
    player->render(renderer);
}