#include <SDL2/SDL.h>
#include <player.h>

Game::Player::Player(SDL_Rect rect, SDL_Color color) {
    this->transform.x = rect.x;
    this->transform.y = rect.y;
    this->transform.w = rect.w;
    this->transform.h = rect.h;
    this->color.r = color.r;
    this->color.g = color.g;
    this->color.b = color.b;
    this->color.a = color.a;
}

void Game::Player::render(SDL_Renderer* renderer) {
    SDL_SetRenderDrawColor(renderer, this->color.r, this->color.g, this->color.b, this->color.a);
    SDL_RenderFillRect(renderer, &this->transform);
}

void Game::Player::translate(int x, int y) {
    this->transform.x = x;
    this->transform.y = y;
}

void Game::Player::translateX(int x) { this->transform.x = x; }
void Game::Player::translateY(int y) { this->transform.y = y; }

int Game::Player::getX() { return this->transform.x; }
int Game::Player::getY() { return this->transform.y; }
int Game::Player::getWidth() { return this->transform.w; }
int Game::Player::getHeight() { return this->transform.h; }