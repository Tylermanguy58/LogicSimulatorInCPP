#ifndef SHIP_CONTROLLER_HPP
#define SHIP_CONTROLLER_HPP
#include "../../../architecture/component_system/component.hpp"
#include "../../transform/transform.hpp"

namespace Systems::ShipSystem
{
    class ShipController : public Architecture::ComponentSystem::Component
    {
    private:
        TransformSystem::Transform* transform;
    public:
    void Update() override;
    void Initialize() override;
    void Start() override;
    void Deinitialize() override;
    void OnEnable() override;
    void OnDisable() override;
    };
}

#endif //SHIP_CONTROLLER_HPP