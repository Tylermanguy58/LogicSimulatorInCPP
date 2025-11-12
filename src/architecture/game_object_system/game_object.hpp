#pragma once
#ifndef GAME_OBJECT_HPP
#define GAME_OBJECT_HPP
#include <vector>
#include <memory>
#include <typeinfo>
#include <concepts>
#include "../component_system/component.hpp"
#include "../object_system/object.hpp"

namespace Architecture::GameObjectSystem
{
    class GameObject : public ObjectSystem::Object
    {
    private:
        std::vector<std::unique_ptr<Architecture::ComponentSystem::Component>> components;
        std::vector<GameObject*> children;
        GameObject* parent;
    public:
        void Update();
        void Initialize();
        void SetParent(GameObject* parent) { this->parent = parent; }
        GameObject* GetParent() { return parent; }

        template <typename T>
        T* AddComponent()
        {
            static_assert(std::is_base_of<Architecture::ComponentSystem::Component, T>::value, "T must derive from component!");

            std::unique_ptr<T> component = std::make_unique<T>();
            T* rawPointer = component.get();
            components.push_back(std::move(component));
            return rawPointer;
        }

        template <typename T>
        T* GetComponent()
        {
            static_assert(std::is_base_of<Architecture::ComponentSystem::Component, T>::value, "T must derive from component!");

            for(int i = 0; i < components.size(); i++)
            {
                if(typeid(*components[i].get()) == typeid(T))
                {
                    return dynamic_cast<T*>(components[i].get());
                }
            }
            return nullptr;
        }

        template <typename T>
        std::vector<T*> GetComponents()
        {
            static_assert(std::is_base_of<Architecture::ComponentSystem::Component, T>::value, "T must derive from component!");
            std::vector<T*> result;

            for(int i = 0; i < components.size(); i++)
            {
                if(typeid(*components[i].get()) == typeid(T))
                {
                    result.push_back(dynamic_cast<T*>(components[i].get()));
                }
            }
            return result;
        }
    };
}

#endif //GAME_OBJECT_HPP