#include <string>
#include <vector>
using namespace std;

const char* NPC_INFO_PATH = "resource/NPC_Info.txt";
const char* NPC_STATE_PATH = "save/NPC_State.txt";

//有关NPC的各种状态的信息,在global.h中说明
struct State
{
    int ID;
    string stateTalk;
    string stateNotFinishTalk;
    vector<int> stateAction;    //第一位为动作类型，后面为动作参数
    int stateNext;
};

class NPC
{
public:
    int ID;			//用于在NPC列表中定位
    string name;
    int mapID;
    int x, y;		//NPC在地图中的位置
    int state;		//用于标记NPC当前状态
    NPC(int id);    //根据ID初始化NPC
    ~NPC();
private:
    vector<State> stateList;
	bool LoadInfo();
    bool LoadState();
};