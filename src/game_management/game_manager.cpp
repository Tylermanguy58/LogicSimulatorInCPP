#ifndef GAME_MANAGER_CPP
#define GAME_MANAGER_CPP
#include "game_manager.hpp"
#include <iostream>
#include <SDL3/SDL.h>
#include <SDL3_image/SDL_image.h>

namespace GameManagement
{
    GameManager* GameManager::instance = nullptr;

    GameManager::GameManager()
    {
        if(!instance)
        {
            SDL_Init(SDL_INIT_AUDIO | SDL_INIT_VIDEO | SDL_INIT_CAMERA);
            SDL_SetAppMetadata("game", "v0.0", "0");
            instance = this;
            instance->window = SDL_CreateWindow("hi", 1920, 1080, SDL_WINDOW_FULLSCREEN);
        }
    }

    GameManager::~GameManager()
    {
        SDL_Quit();
    }
        
    bool Init()
    {

    }

    void GameManager::Update()
    {
       // std::cout << "hi" << std::endl;
    }
}

#endif //GAME_MANAGER_CPP