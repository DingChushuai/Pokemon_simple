#include "ColorText.h"
#include <queue>

class Log
{
    //用于记录玩家的行为内容,如攻击、死亡等
    //记录最后几条行为,并显示在屏幕上
    //使用彩色字体显示不同内容
public:
    Log(int maxLog = 10);
    ~Log();
    void AddLog(ColorText log);
    void ShowLog();
    void clearLog();
private:
    int maxLog;     //记录的最大条数,超过则删除最旧的,默认为10
    queue<ColorText> logList;
};