#include "Map.h"
#include "Shop.h"
#include "Log.h"

class Scene
{
    const enum SceneType {
        MENUSCREEN,
        GAME,
        SHOP,
        POKEMON_CENTER,
        WORLD_MAP,
        BATTLE,
    };
    private:
        SceneType sceneType;
        vector<Map> maps;
        Map* mapNow;
        Shop *shop;
        Log *log;
    public:
        Scene();
        ~Scene();

};