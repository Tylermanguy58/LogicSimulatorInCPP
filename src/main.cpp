#include "game_system/game_manager/game_manager.hpp"
using namespace GameSystem;
#include <SDL3/SDL.h>
#include <SDL3/SDL_main.h>

int main(int argc, char *argv[])
{
    const int FPS = 60;
    const int frameDelay = 1000 / FPS;
    Uint32 frameStart;
    int frameTime;
    GameManager* gameManager = new GameManager();
    gameManager->Init();

    while(gameManager->GetIsRunning())
    {
        frameStart = SDL_GetTicks();
        gameManager->Update();
        frameTime = SDL_GetTicks() - frameStart;
        if(frameDelay > frameTime)
        {
            SDL_Delay(frameDelay - frameTime);
        }
    }

    delete gameManager;

    return 0;
}