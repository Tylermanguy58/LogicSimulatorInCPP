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
        virtual void Update() override = 0;
        virtual void Initialize() override = 0;
        virtual void Start() override = 0;
        virtual void Deinitialize() override = 0;
        virtual void OnEnable() override = 0;
        virtual void OnDisable() override = 0;
    };
}

#endif //MOVEMENT_CONTROLLER_HPP