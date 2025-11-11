#pragma once
#ifndef SCENE_HPP
#define SCENE_HPP
#include <vector>
#include "../game_object_system/game_object.hpp"

namespace Architecture
{
    class Scene
    {
    private:
        std::vector<GameObjectSystem::GameObject*> gameObjects;
    public:
        void Update();
    };
}

#endif //SCENE_HPP