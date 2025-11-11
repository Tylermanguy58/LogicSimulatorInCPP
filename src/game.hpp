#pragma once
#ifndef GAME_HPP
#define GAME_HPP
#include <SDL3/SDL.h>
#include "architecture/scene/scene.hpp"

namespace Architecture
{
    class Game
    {
    private:
        bool isActive;
        SDL_Renderer* renderer;
        SDL_Window* window;
        Scene* scene;
    public:
        void Initialize();
        void Update();
        void Cleanup();
        void Quit();
        void Start();
        void Render();
        bool GetIsActive() { return isActive; }
        SDL_Renderer* GetRenderer() { return renderer; }
        SDL_Window* GetWindow() { return window; }
        Scene* GetScene() { return scene; }
    };
}

#endif //GAME_HPP