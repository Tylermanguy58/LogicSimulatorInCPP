#ifndef GAME_OBJECT_HPP
#define GAME_OBJECT_HPP
#include <vector>
#include "../../component_system/component/component.hpp"

namespace GameObjectSystem
{
    class GameObject
    {
    private:
        GameObject* parent;
        std::vector<GameObject*> children;
        std::vector<ComponentSystem::Component*> components;
    public:
        GameObject();
        ~GameObject();
    };
    
    GameObject::GameObject()
    {
    }
    
    GameObject::~GameObject()
    {
    }
}

#endif //GAME_OBJECT_HPP