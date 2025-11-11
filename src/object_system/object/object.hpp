#ifndef OBJECT_HPP
#define OBJECT_HPP
#include <string>

namespace ObjectSystem
{
    class Object
    {
    private:    
        std::string name;
        int id;
    public:
        Object(std::string name, int id);
        virtual ~Object();
        void SetName(std::string name);
    };
}

#endif //OBJECT_HPP