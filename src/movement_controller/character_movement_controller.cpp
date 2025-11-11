#ifndef CHARACTER_MOVEMENT_CONTROLLER_CPP
#define CHARACTER_MOVEMENT_CONTROLLER_CPP
#include "character_movement_controller.hpp"
#include <iostream>

namespace MovementSystem
{
    void CharacterMovementController::Move()
    {
    }

    void CharacterMovementController::Update()
    {
        std::cout << "sup" << std::endl;
    }

    void CharacterMovementController::Initialize()
    {
        std::cout << "hi" << std::endl;
    }
}

#endif //CHARACTER_MOVEMENT_CONTROLLER_CPP