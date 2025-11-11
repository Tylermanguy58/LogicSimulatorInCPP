#ifndef MOVEMENT_CONTROLLER_HPP
#define MOVEMENT_CONTROLLER_HPP
#include "../../architecture/component_system/component.hpp"

namespace MovementSystem
{
    class MovementController : public Architecture::ComponentSystem::Component
    {
    private:
    public:
        virtual void Move() = 0;
        void Update() override = 0;
        void Initialize() override = 0;
    };
}

#endif //MOVEMENT_CONTROLLER_HPP