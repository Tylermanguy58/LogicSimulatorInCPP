#ifndef GAME_MANAGER_HPP
#define GAME_MANAGER_HPP
#include <list>
#include "../game/game.hpp"

namespace GameSystem
{
    class GameManager
    {
    private:
        static GameManager* instance;
        bool isRunning;
        Game* game;
    public:
        GameManager();
        ~GameManager();
        void Init();
        void Update();
        void Render();
        void Clean();
        void HandleEvents();
        bool GetIsRunning() { return isRunning; }
    };
}

#endif //GAME_MANAGER_HPP