

class Log
{
	//用于记录玩家的行为内容,如攻击、死亡、移动等
	//记录最后几条行为,并显示在屏幕上
	//使用彩色字体显示不同内容
    public:
        //Log();
        //~Log();
        //void AddLog(const char* log);
        //void ShowLog();
        //void clearLog();
    private:
        char* lastLog[10];  //记录最后10条日志

};