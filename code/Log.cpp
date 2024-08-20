#include "Log.h"

Log::Log(int maxLog)
{
	//需要初始化maxLog为10
}

Log::~Log()
{
	//需要释放queue的内存
}

void Log::AddLog(ColorText log)
{
    //需要将log添加到queue中
	//注意：如果queue满了，需要删除最早的log
}

void Log::ShowLog()
{
    //需要将queue中的log输出到控制台
	//调用ColorText的Print函数
}

void Log::clearLog()
{
    //需要清空queue中的log
	//调用queue的clear函数
}


