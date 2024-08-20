#include "NPC.h"

NPC::NPC(int id)
{
	//根据NPC的ID给NPC的所有属性赋值
	/*
	使用LoadState尝试读取存档文件，如果读取成功，则给NPC的NPC_ID,NPC_Name,NPC_StateID,MapID,x,y属性赋值
	否则从NPC_INFO_PATH中读取NPC的ID对应的NPC的属性赋值
	剩余的属性使用LoadInfo读取
	*/
}

NPC::~NPC()
{
	//释放NPC的内存
}

bool NPC::LoadInfo()
{
	//使用global中的工具函数
    //如果NPC_INFO_PATH文件存在，则读取NPC_INFO_PATH文件，给NPC的属性赋值
	//如果没有从LoadState中读取到NPC的属性，则从NPC_INFO_PATH中读取NPC的ID对应的NPC的属性赋值
    //如果NPC_INFO_PATH文件不存在，或无法找到,则返回false
	return false;
}

bool NPC::LoadState()
{
	//使用global中的工具函数
	//如果存档文件NPC_STATE_PATH存在，则读取存档文件，给NPC的NPC_ID,NPC_Name,NPC_StateID,MapID,x,y属性赋值
    //如果存档文件NPC_STATE_PATH不存在，或无法找到,则返回false
	return false;
}
