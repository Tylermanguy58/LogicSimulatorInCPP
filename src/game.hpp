#ifndef GAME_HPP
#define GAME_HPP
#include <SDL3/SDL.h>
#include <memory>

namespace Architecture
{
    class Game
    {
    private:
        bool isActive;
        std::unique_ptr<SDL_Renderer> renderer;
        std::unique_ptr<SDL_Window> window;
    public:
        void Initialize();
        void Cleanup();
        SDL_Renderer* GetRenderer() { return renderer.get(); }
        SDL_Window* GetWindow() { return window.get(); }
    };
}

#endif //GAME_HPP