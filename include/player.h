#ifndef __PLAYER_H__
#define __PLAYER_H__

namespace Game{
    class Player{
        private:
            SDL_Rect transform;
            SDL_Color color;
        public:
            Player(SDL_Rect, SDL_Color);
            void translate(int, int);
            void translateX(int);
            void translateY(int);
            int getX();
            int getY();
            int getWidth();
            int getHeight();
            void render(SDL_Renderer*);
    };
};

#endif