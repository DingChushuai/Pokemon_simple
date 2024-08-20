#include "Sound.h"
#include "Backpack.h"


class Game
{
private:
    Sound sound;
    Backpack backpack;

    void Init(); //初始化游戏, 包括载入资源, 载入存档等
    void Save(); //保存
    void Load(); //载入存档
public:
    Game() {}
    ~Game() {}
    void Run(); //开始游戏
    void GameOver(); //游戏结束
};