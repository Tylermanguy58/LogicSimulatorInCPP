#ifndef OBJECT_CPP
#define OBJECT_CPP
#include "object.hpp"

namespace ObjectSystem
{
    Object::Object(std::string name, int id)
    {
        this->name = name;
        this->id = id;
    }

    Object::~Object()
    {

    }
}

#endif //OBJECT_CPP