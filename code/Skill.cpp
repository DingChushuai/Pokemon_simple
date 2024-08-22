#include "Skill.h"

Skill::Skill(int skillID)
{
	//从SKILL_TABLE中读取数据
	//技能表的文件格式在global.h中定义
	//填充所有属性
	//pp默认为最大pp
}

Skill::~Skill()
{
	//release vector and string
}

//以下几个函数较为简单
string Skill::getSkillName()
{
	return string();
}

string Skill::getSkillDescription()
{
	return string();
}

int Skill::getSkillID()
{
	return 0;
}

void Skill::setPP(int PP)
{
}

