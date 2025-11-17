#ifndef TRANSFORM_CPP
#define TRANSFORM_CPP
#include "transform.hpp"
#include <iostream>

namespace Systems::TransformSystem
{
    void Transform::Update()
    {
        std::cout << "Updating Transform Controller" << std::endl;
    }

    void Transform::Initialize()
    {
        vector = new Numerics::Vector2(0, 0);
    }

    void Transform::Start()
    {

    }

    void Transform::Deinitialize()
    {
        delete vector;
    }
    
    void Transform::OnDisable()
    {

    }

    void Transform::OnEnable()
    {

    }
}

#endif //TRANSFORM_CPP