#include "ColorText.h"
#include <queue>

class Log
{
    //���ڼ�¼��ҵ���Ϊ����,�繥����������
    //��¼�������Ϊ,����ʾ����Ļ��
    //ʹ�ò�ɫ������ʾ��ͬ����
public:
    Log(int maxLog = 10);
    ~Log();
    void AddLog(ColorText log);
    void ShowLog();
    void clearLog();
private:
    int maxLog;     //��¼���������,������ɾ����ɵ�,Ĭ��Ϊ10
    queue<ColorText> logList;
};