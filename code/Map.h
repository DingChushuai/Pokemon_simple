#include "ColorText.h"

class Map
{
    enum BlockType
    {
        EMPTY,      //可以行走的道路
        WALL,       //障碍物
        GRASS,      //草地,可以行走,可能有宝可梦
        EXIT,       //通往其他地图的出口
        SHOP,       //商店
        HOSPITAL,   //医院,可以回复体力
        POKEMON_CENTER, //宝可梦中心,可以交换宝可梦
    };
    const struct MapBlock
    {
        ColorText::Color color;
        char symbol;
        BlockType type;
    };
public:
    Map(int mapID);
    ~Map();
private:
    int MapID;
    int mapWidth;
    int mapHeight;
    vector<vector<MapBlock>> mapData;
    vector<vector<int>> exits; //记录地图出口信息,每一项包括:出口X坐标/出口Y坐标/出口地图ID/出口地图X坐标/出口地图Y坐标
};