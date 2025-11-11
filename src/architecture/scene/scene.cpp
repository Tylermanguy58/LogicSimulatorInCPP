#ifndef SCENE_CPP
#define SCENE_CPP
#include "scene.hpp"

namespace Architecture
{
    void Scene::Update()
    {
        for(int i = 0; i < gameObjects.size(); i++)
        {
            gameObjects[i]->Update();
        }
    }
}

#endif //SCENE_CPP