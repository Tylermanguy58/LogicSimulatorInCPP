#ifndef SHIP_CONTROLLER_CPP
#define SHIP_CONTROLLER_CPP
#include "ship_controller.hpp"
#include <iostream>
#include "../../../architecture/game_object_system/game_object.hpp"
#include "../../../numerics/vector2.h"


namespace Systems::ShipSystem
{
    void ShipController::Initialize()
    {
        std::cout << "Initializing Ship Controller" << std::endl;
    }

    void ShipController::Start()
    {
        transform = GetGameObject()->GetComponent<TransformSystem::Transform>();
    }

    void ShipController::Update()
    {
        std::cout << "Updating Ship Controller" << std::endl;
        Numerics::Vector2* position = new Numerics::Vector2(0, 0);
        transform->SetPosition(*position);
        delete position;
    }

    void ShipController::Deinitialize()
    {

    }

    void ShipController::OnEnable()
    {

    }

    void ShipController::OnDisable()
    {

    }
}

#endif //SHIP_CONTROLLER_CPP