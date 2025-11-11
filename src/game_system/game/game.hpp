#ifndef GAME_HPP
#define GAME_HPP
#include <SDL3/SDL.h>

namespace GameSystem
{
    class Game
    {
    private:
        SDL_Window* window;
        SDL_Renderer* renderer;
    public:
        Game(const char *title, int width, int height, bool fullscreen);
        ~Game();
        SDL_Renderer* GetRenderer() { return renderer; }
        void SetRenderer(SDL_Renderer* renderer);
    };
}

#endif // GAME_HPP
