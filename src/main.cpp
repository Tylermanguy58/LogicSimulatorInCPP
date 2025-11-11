#include <iostream>
#include "movement_controller/character_movement_controller.hpp" 
#include "component_system/component.hpp"
#include "node_system/node.hpp"
using namespace MovementSystem;
using namespace ComponentSystem;
using namespace NodeSystem;

Node* node = new Node();

int main()
{
    node->Initialize();
    Component* component = node->AddComponent<CharacterMovementController>();

    while(true)
    {
        node->Update();
    }

    return 0;
}