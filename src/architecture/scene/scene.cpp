#ifndef SCENE_CPP
#define SCENE_CPP
#include "scene.hpp"
#include <algorithm>

namespace Architecture
{
    void Scene::Initialize()
    {
        root = new GameObjectSystem::GameObject();
    }

    void Scene::Update()
    {
        for(int i = 0; i < gameObjects.size(); i++)
        {
            gameObjects[i]->Update();
        }
    }

    GameObjectSystem::GameObject* Scene::CreateGameObject()
    {
        GameObjectSystem::GameObject* gameObject = new GameObjectSystem::GameObject(); 
        gameObject->SetParent(root);
        gameObject->Initialize();
        gameObjects.push_back(gameObject);
        return gameObject;
    }

    void Scene::DestroyGameObject(GameObjectSystem::GameObject* gameObject)
    {
        auto it = std::find(gameObjects.begin(), gameObjects.end(), gameObject);
        if(it != gameObjects.end())
        {
            gameObjects.erase(it);
        }
        delete gameObject;
    }
}

#endif //SCENE_CPP