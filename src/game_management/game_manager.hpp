#ifndef GAME_MANAGER_HPP
#define GAME_MANAGER_HPP

namespace GameManagement
{
    class GameManager
    {
    private:
        static GameManager* instance;
        SDL_Window* window;
    public:
        GameManager();
        ~GameManager();
        void Update();
        bool Init();
    };
}

#endif //GAME_MANAGER_HPP