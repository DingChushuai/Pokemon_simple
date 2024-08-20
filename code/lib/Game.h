#include "Sound.h"
#include "Backpack.h"


class Game
{
private:
    Sound sound;
    Backpack backpack;

    void Init(); //��ʼ����Ϸ, ����������Դ, ����浵��
    void Save(); //����
    void Load(); //����浵
public:
    Game() {}
    ~Game() {}
    void Run(); //��ʼ��Ϸ
    void GameOver(); //��Ϸ����
};