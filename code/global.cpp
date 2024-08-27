#include "global.h"
#include<sstream>

inline vector<string> split(const string& s, char delimiter)
{
    //���ݸ����ķָ��������ַ����ָ�ɶ�����ַ�����������һ���ַ�������
    vector<string>result;
    stringstream ss(s);
    string temp;
    while (ss, temp, delimiter) {
        result.push_back(temp);
    }
    return result;
}

inline int stoi(const string& s)
{
    //���ַ���ת��Ϊ����
    istringstream is(s);
    int num;
    is >> num;
    return num;
}
