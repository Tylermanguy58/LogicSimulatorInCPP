#ifndef GAME_CPP
#define GAME_CPP
#include "game.hpp"

namespace GameSystem
{
    Game::Game(const char* title, int width, int height, bool fullscreen)
    {
        int flags = 0;
        if(fullscreen)
        {
            flags = SDL_WINDOW_FULLSCREEN;
        }
        window = SDL_CreateWindow(title, width, height, flags);
        renderer = SDL_CreateRenderer(window, NULL);
        SDL_SetRenderDrawColor(renderer, 255, 255, 255, 0);
    }

    Game::~Game()
    {

    }
}

#endif //GAME_CPP