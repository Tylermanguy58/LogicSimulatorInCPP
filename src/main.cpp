#include <SDL3/SDL_main.h>
#include <SDL3/SDL.h>
#include <iostream>
#include <vector>
#include "systems/character/movement/character_movement_controller.hpp" 
#include "architecture/component_system/component.hpp"
#include "architecture/game_object_system/game_object.hpp"
#include "architecture/object_system/object.hpp"
#include "systems/transform/transform.hpp"
#include "game.hpp"
using namespace MovementSystem;
using namespace Architecture::ComponentSystem;
using namespace Architecture::GameObjectSystem;
using namespace Systems::TransformSystem;
using namespace Architecture;

Game* game = nullptr;

int main()
{
    game = new Game();
    game->Initialize();
    while(game->GetIsActive())
    {
        game->Update();
        SDL_Delay(16);
    }

    game->Cleanup();

    return 0;
}