#ifndef COMPONENT_HPP
#define COMPONENT_HPP
#include <string> 

namespace ComponentSystem
{
    class Component
    {
    private:
        std::string name;
    public:
        std::string GetName() { return name; }
        virtual void Update() = 0;
        virtual void Initialize() = 0;
    };
}

#endif //COMPONENT_HPP