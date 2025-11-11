#pragma once
#ifndef COMPONENT_HPP
#define COMPONENT_HPP
#include <string> 
#include "../object_system/object.hpp" 

//forward declaration
namespace Architecture::GameObjectSystem
{
    class GameObject;
}

namespace Architecture::ComponentSystem 
{
    class Component : public ObjectSystem::Object
    {
    private:
        GameObjectSystem::GameObject* gameObject;
    public:
        virtual void Update() = 0;
        virtual void Initialize() = 0;
        virtual void Start() = 0;
        GameObjectSystem::GameObject* GetGameObject() { return gameObject; }
        void SetGameObject(GameObjectSystem::GameObject* gameObject) { this->gameObject = gameObject; }
    };
}

#endif //COMPONENT_HPP