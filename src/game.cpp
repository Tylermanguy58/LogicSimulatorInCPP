#ifndef GAME_CPP
#define GAME_CPP
#include "game.hpp"
#include <iostream>
#include "architecture/game_object_system/game_object.hpp"
#include "systems/transform/transform.hpp"

namespace Architecture
{
    void Game::Initialize()
    {
        if(SDL_Init(SDL_INIT_VIDEO))
        {
            isActive = true;
            window = SDL_CreateWindow("sup", 800, 400, 0);
            renderer = SDL_CreateRenderer(window, NULL);
            scene = new Scene();
            scene->Initialize();
            GameObjectSystem::GameObject* gameObject = scene->CreateGameObject();
            gameObject->Initialize();
            gameObject->AddComponent<Systems::TransformSystem::Transform>();
        }
        else
        {
            isActive = false;
        }
    }

    void Game::Cleanup()
    {
        SDL_DestroyRenderer(renderer);
        SDL_DestroyWindow(window);
        delete scene;
        SDL_Quit();
    } 
        
    void Game::Update()
    {
        Render();
        SDL_Event event;
        while (SDL_PollEvent(&event)) 
        {
            if (event.type == SDL_EVENT_QUIT)
            {
                Quit();
            }
        }
    }

    void Game::Quit()
    {
        isActive = false;
    }

    void Game::Render()
    {
        SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
        SDL_RenderClear(renderer);
        SDL_RenderPresent(renderer);
    }
}

#endif //GAME_CPP