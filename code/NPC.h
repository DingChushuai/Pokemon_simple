#include <string>
#include <vector>
using namespace std;

const char* NPC_INFO_PATH = "resource/NPC_Info.txt";
const char* NPC_STATE_PATH = "save/NPC_State.txt";

//�й�NPC�ĸ���״̬����Ϣ,��global.h��˵��
struct State
{
    int ID;
    string stateTalk;
    string stateNotFinishTalk;
    vector<int> stateAction;    //��һλΪ�������ͣ�����Ϊ��������
    int stateNext;
};

class NPC
{
public:
    int ID;			//������NPC�б��ж�λ
    string name;
    int mapID;
    int x, y;		//NPC�ڵ�ͼ�е�λ��
    int state;		//���ڱ��NPC��ǰ״̬
    NPC(int id);    //����ID��ʼ��NPC
    ~NPC();
private:
    vector<State> stateList;
	bool LoadInfo();
    bool LoadState();
};