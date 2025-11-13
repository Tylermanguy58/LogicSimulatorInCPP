#ifndef CHARACTER_MOVEMENT_CONTROLLER_HPP
#define CHARACTER_MOVEMENT_CONTROLLER_HPP
#include "../../movement_controller/movement_controller.hpp"

namespace MovementSystem
{
    class CharacterMovementController : public MovementController  
    {
    private:
    public:
        void Move() override;
        void Update() override;
        void Initialize() override;
        void Start() override;
        void Deinitialize() override;
        void OnEnable() override;
        void OnDisable() override;
    };
}

#endif //CHARACTER_MOVEMENT_CONTROLLER_HPP