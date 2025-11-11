#ifndef CHARACTER_MOVEMENT_CONTROLLER_HPP
#define CHARACTER_MOVEMENT_CONTROLLER_HPP
#include "movement_controller.hpp"

namespace MovementSystem
{
    class CharacterMovementController : public MovementController  
    {
    private:
    public:
        void Move() override;
        void Update() override;
        void Initialize() override;
    };
}

#endif //CHARACTER_MOVEMENT_CONTROLLER_HPP