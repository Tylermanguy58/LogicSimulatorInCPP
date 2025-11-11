#ifndef OBJECT_MANAGER_HPP
#define OBJECT_MANAGER_HPP

namespace ObjectSystem
{
    class ObjectManager
    {
    private:
        ObjectManager* instance;
    public:
        ObjectManager();
        ~ObjectManager();
        void Initialize();
    };
}

#endif //OBJECT_MANAGER_HPP