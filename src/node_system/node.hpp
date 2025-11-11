#ifndef NODE_HPP
#define NODE_HPP
#include <vector>
#include "../component_system/component.hpp"

namespace NodeSystem
{
    class Node
    {
    private:
        std::vector<ComponentSystem::Component*> components;
        std::vector<Node*> children;
    public:
        void Update();
        void Initialize();

        template <typename T>
        T* AddComponent()
        {
            static_assert(std::is_base_of<ComponentSystem::Component, T>::value, "T must derive from component!");
            T* component = new T();
            components.push_back(component);
            return component;
        }
    };
}

#endif //NODE_HPP