#include "ColorText.h"

class Map
{
    enum BlockType
    {
        EMPTY,      //�������ߵĵ�·
        WALL,       //�ϰ���
        GRASS,      //�ݵ�,��������,�����б�����
        EXIT,       //ͨ��������ͼ�ĳ���
        SHOP,       //�̵�
        HOSPITAL,   //ҽԺ,���Իظ�����
        POKEMON_CENTER, //����������,���Խ���������
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
    vector<vector<int>> exits; //��¼��ͼ������Ϣ,ÿһ�����:����X����/����Y����/���ڵ�ͼID/���ڵ�ͼX����/���ڵ�ͼY����
};