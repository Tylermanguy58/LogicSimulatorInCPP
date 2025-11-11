#ifndef TRANSFORM_HPP
#define TRANSFORM_HPP
#include "../../architecture/component_system/component.hpp"

namespace Systems::TransformSystem
{
    class Transform : public Architecture::ComponentSystem::Component
    {
    private:
    public:
        void Update() override;
        void Initialize() override;
    };
}

#endif //TRANSFORM_HPP