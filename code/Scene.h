#include "Map.h"
#include "Player.h"
#include "Shop.h"
#include "Log.h"

extern enum SceneID;

class Scene
{
    private:
        SceneID senceID;
        Map *map;
        Player *player;
        Shop *shop;
        Log *log;

        void DrawMap();
        void DrawGame();
        void DrawShop();

    public:
        Scene();
        ~Scene();
        void SetSceneID(SceneID sceneID);
        bool LoadScene(SceneID sceneID);
        void DrawScene();

};