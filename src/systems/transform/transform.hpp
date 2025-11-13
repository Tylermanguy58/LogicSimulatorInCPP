#ifndef TRANSFORM_HPP
#define TRANSFORM_HPP
#include "../../architecture/component_system/component.hpp"
#include "../../numerics/vector2.h"

namespace Systems::TransformSystem
{
    class Transform : public Architecture::ComponentSystem::Component
    {
    private:
        Numerics::Vector2* vector;
    public:
        void Update() override;
        void Initialize() override;
        void Start() override;
        void Deinitialize() override;
        void OnEnable() override;
        void OnDisable() override;
        void SetPosition(Numerics::Vector2 vector2) { *vector = vector2; };
        Numerics::Vector2 GetPosition() { return *vector; };
    };
}

#endif //TRANSFORM_HPP