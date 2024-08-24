#include <vector>
#include <string>
using namespace std;

class Prop
{
    //���ߵ�����,�Լ�����
    const enum PROP_TYPE 
    {
        NORMAL=0,         //�������,��Ч��
        EREASE_STATUS,  //��������״̬(PokemonStatu(0��ʾ���������κ�״̬))
        CHANGE_POKEMON_ATTRBUTE,  //�ı䱦��������(ATTRIBUTE,�ı�ֵ,...)  //��Ұ��ʹ��Ϊ���øı�,��ս����ʹ��Ϊ��ʱ�ı�
        CHANGE_SKILL_ATTRIBUTE,  //�ı似������(�ı�����,��������,��������,�ı�ֵ,��������,�ı�ֵ...)     //��Ұ��ʹ��Ϊ���øı�,��ս����ʹ��Ϊ��ʱ�ı�
        /*
        * �ı�����,��������:
        * 0.������(������Ч)
        * 1.��������(SkillType)
        * 2.��������(Type)
        ��������id:
        1.power;              //����
        2.accuracy;           //����
        3.PP;                 //pp
        4.maxPP;              //���pp
        */
        BUFF,   //�ı�����״̬����ֵ(����״̬����ֵ,�ı�ֵ,...)  //��ս������ʱ�ı�
        HEAL,  //�ظ�����(����ʱ�Ƿ����,�ظ���ʽ(0���ٷֱ�,1������ֵ),�ٷֱ�/����ֵ)
        GET_SKILL,   //ʹ�����λ�ü���(����ID), ��Чǰ��Ҫ�ж��Ƿ����
        CAPTURE,    //����������(�����ʼӳ�,���ض���Type���Եı�����,�ض������ʼӳ�)

    };
public:
    Prop();
    ~Prop();
private:
    int ID;
    PROP_TYPE type;
    string name;
    string description;
    int num;
    int price;
    int sellPrice;
    vector<int> effectPara;     //Ч������
    int canUseInBattle;      //�Ƿ������ս����ʹ��
    int canUseInField;       //�Ƿ������Ұ��ʹ��

};