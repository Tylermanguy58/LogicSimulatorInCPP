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
        GameObjectSystem::GameObject* root;
        std::vector<GameObjectSystem::GameObject*> gameObjects;
    public:
        void Initialize();
        void Update();
        std::vector<GameObjectSystem::GameObject*> GetGameObjects() { return gameObjects; }
        GameObjectSystem::GameObject* CreateGameObject(); 
        void DestroyGameObject(GameObjectSystem::GameObject* gameObject);
    };
}

#endif //SCENE_HPP