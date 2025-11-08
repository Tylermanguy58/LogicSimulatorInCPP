#include "game_management/game_manager.hpp"
using namespace GameManagement;
#include <SDL3/SDL.h>
#include <SDL3/SDL_main.h>
#include <SDL3> 

int main(int argc, char *argv[])
{
    GameManager* gameManager = new GameManager();

    while(true)
    {
        gameManager->Update();
    }

    delete gameManager;

    return 0;
}