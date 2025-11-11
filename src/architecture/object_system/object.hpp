#pragma once
#ifndef OBJECT_HPP
#define OBJECT_HPP
#include <string>

namespace Architecture::ObjectSystem
{
    class Object
    {
    private:
        std::string name;
    public:
        std::string GetName() { return name; }
        void SetName(std::string string) { name = string; }
    };
}

#endif //OBJECT_HPP