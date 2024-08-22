/*
* ������Ҫ����Ĵ���ʵ�ֵĵط����ڵ��±��
* ����Э��ʱ, ����Ķ�Ӧ�����״̬���, ���ϴ�����ǰ, ����**ͬ��������״̬**, ���ⷢ����ͻ
* �벻Ҫɾ�����ṩ��ע��
* ���½���Ϊ����״̬���
* 1.(T,score) ��ʾTODO, ��ʾ��������Ҫ���, scoreΪ�����Ѷ�����(1-5)
* 2.(F) ��ʾFinish, ��ʾ�����������
* 3.(P,name) ��ʾProcessing, ��ʾ���������ڴ�����, nameΪ��������������(����ʹ���κ�ϲ���ı������)
* 4.(?,name) ��ʾ������������, ������Ҫ����
*/

// ����״̬���
// ����ķ����������������, ����Ըߵ�������ͬһ����������
/*
1.(T,4) Sound�����������, ��Ҫ����ϵͳ���������ſ�, ʵ�ֲ�������, ������Ч, ��ͣ����, ��Ҫ���в����������
2.(T,1) ����SoundID������·��������, ��Ҫ��Դ��Ա�ṩ
3.(T,3) ���ColorText���ʵ��, ��Ҫ���string, vector, pair, initializer_list, �Ͳ�ɫ�ı���ԭ��
4.(T,2) ���Log���ʵ��, ��Ҫ���queue��ԭ���ColorText���˵��
5.(T,2) ��ɹ��ߺ�����ʵ��, ���ߺ�����global.h������,��Ҫ���vector��string��ԭ��, �Լ�������������
6.(T,3) ���NPC���LoadInfo,��LoadState����, ��Ҫ���������5, ��Ҫ����ļ��Ķ�ȡ�ͽ���, �Լ�vector��string��ԭ��

*/

/*
����һЩ��Դ�ļ���ʽ�Ľ���:

��Դ�ļ�ͳһ�����./resource�ļ�����

���ֺ���Ч�ļ�ͳһ�����./resource/music�ļ�����
�����ļ���ʽ����ʹ�õĿⲻͬ�����е���

gamebar.txt:
	�ı�������Ϸ�����ļ�, ��������Ϸʱ, ��ȡ���ļ���������Ϊ��Ϸ����

NPC_Info.csv
	�ı�����NPC��Ϣ�ļ�, ��������Ϸʱ, ��ȡ���ļ���������ΪNPC��Ϣ
    	��ʽΪ(ÿһ���Զ��ŷָ�):
    	NPC_ID(��0��ʼ),NPC_Name,NPC_DefultPosition(MapID,PositionX,PositionY),NPC_States
		NPC_States(ÿһ����"/"�ָ�, ÿ��������"|"�ָ�):
		NPC_stateĬ��Ϊ0, Ȼ����ת������״̬, ÿ��״̬����:
		stateID:״̬ID
		stateTalk:��״̬��NPC�ĶԻ�
		stateNotFinishTalk:��״̬δ���ʱ, NPC�ĶԻ�
        stateAction:��״̬��NPC����Ϊ
        stateNext:��״̬������ж�״̬���,NPC����һ��״̬
		stateAction:��ͬ����Ϊ�в�ͬ�Ĳ���,ÿ��������"\�ָ�":
        		0:����Ϊ, �Ի���ɺ�ֱ����ת����һ��״̬
        		1:�ƶ���ָ��λ��(MapID,PositionX,PositionY)
        		2:����ս��(BattleID, λ��Battle.csv), ս��ʤ����Ϊ״̬���
				3.�������NPC״̬(NPC_ID,State_ID), ���NPC_ID��NPC����State_ID״̬, ��״̬���
				4.�������Ƿ�ӵ��ָ����Ʒ(PropID), ���ӵ��, ��״̬���
				5.�ύ��Ʒ(PropID,PropCount), �����ӵ�е�PropID��Ʒ,����ΪProp���ύ��NPC, Ȼ��״̬���
				6.�������Ƿ�ӵ��ָ��������(PokemonID), ���ӵ��, ��״̬���
				7.��ĳ��������(PokemonID)�������, Ȼ��״̬���
				8.��ĳ������(PropID,PropCount)�������



*/

#pragma once
#include <string>
#include <vector>
using namespace std;

inline vector<string> split(const string& s, char delimiter);
inline int stoi(const string& s);