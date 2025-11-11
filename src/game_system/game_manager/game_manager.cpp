#ifndef GAME_MANAGER_CPP
#define GAME_MANAGER_CPP
#include "game_manager.hpp"
#include <SDL3/SDL.h>
#include <SDL3_image/SDL_image.h>
#include <iostream>

namespace GameSystem
{
    GameManager* GameManager::instance = nullptr;

    GameManager::GameManager()
    {
        if(!instance)
        {
            instance = this;
            isRunning = false;
        }
    }

    GameManager::~GameManager()
    {
        Clean();
    }
        
    void GameManager::Init()
    {
        if(SDL_Init(SDL_INIT_VIDEO))
        {
            instance->isRunning = true;
            game = new Game("sup", 800, 400, false);
        }
        else
        {
            instance->isRunning = false;
        }
    }
        
    void GameManager::Clean()
    {
        instance->isRunning = false;
        SDL_Quit();
    }

    void GameManager::Update()
    {
       Render();
    }

    void GameManager::Render()
    {
        SDL_RenderClear(game->GetRenderer());
        SDL_RenderPresent(game->GetRenderer());
    }
}

#endif //GAME_MANAGER_CPP