#include "NPC.h"

NPC::NPC(int id)
{
	//����NPC��ID��NPC���������Ը�ֵ
	/*
	ʹ��LoadState���Զ�ȡ�浵�ļ��������ȡ�ɹ������NPC��NPC_ID,NPC_Name,NPC_StateID,MapID,x,y���Ը�ֵ
	�����NPC_INFO_PATH�ж�ȡNPC��ID��Ӧ��NPC�����Ը�ֵ
	ʣ�������ʹ��LoadInfo��ȡ
	*/
}

NPC::~NPC()
{
	//�ͷ�NPC���ڴ�
}

bool NPC::LoadInfo()
{
	//ʹ��global�еĹ��ߺ���
    //���NPC_INFO_PATH�ļ����ڣ����ȡNPC_INFO_PATH�ļ�����NPC�����Ը�ֵ
	//���û�д�LoadState�ж�ȡ��NPC�����ԣ����NPC_INFO_PATH�ж�ȡNPC��ID��Ӧ��NPC�����Ը�ֵ
    //���NPC_INFO_PATH�ļ������ڣ����޷��ҵ�,�򷵻�false
	return false;
}

bool NPC::LoadState()
{
	//ʹ��global�еĹ��ߺ���
	//����浵�ļ�NPC_STATE_PATH���ڣ����ȡ�浵�ļ�����NPC��NPC_ID,NPC_Name,NPC_StateID,MapID,x,y���Ը�ֵ
    //����浵�ļ�NPC_STATE_PATH�����ڣ����޷��ҵ�,�򷵻�false
	return false;
}
