#include <SDL3/SDL_main.h>
#include <iostream>
#include <vector>
#include "systems/character/movement/character_movement_controller.hpp" 
#include "architecture/component_system/component.hpp"
#include "architecture/game_object_system/game_object.hpp"
#include "architecture/object_system/object.hpp"
#include "systems/transform/transform.hpp"
using namespace MovementSystem;
using namespace Architecture::ComponentSystem;
using namespace Architecture::GameObjectSystem;
using namespace Systems::TransformSystem;

GameObject* gameObject = nullptr;

int main()
{
    gameObject = new GameObject();
    gameObject->Initialize();
    gameObject->SetName("Game Object");

    Component* component = gameObject->AddComponent<CharacterMovementController>();
    Component* component2 = gameObject->AddComponent<Transform>();

    component->SetName("Character Movement Controller");
    component2->SetName("Transform Component");

    std::vector<Transform*> transforms = gameObject->GetComponents<Transform>();

    while(true)
    {
        gameObject->Update();
    }

    return 0;
}