#ifndef GAME_OBJECT_CPP
#define GAME_OBJECT_CPP
#include "game_object.hpp"
#include <iostream>

namespace Architecture::GameObjectSystem
{
    void GameObject::Update()
    {
        for(int i = 0; i < components.size(); i++)
        {
            components[i]->Update();
        }
    }

    void GameObject::Initialize()
    {
        for(int i = 0; i < components.size(); i++)
        {
            components[i]->Initialize();
        }
    }
        
    void GameObject::Start()
    {
        for(int i = 0; i < components.size(); i++)
        {
            components[i]->Start();
        }
    }
}

#endif //NODE_CPP