#include "global.h"
#include<sstream>

inline vector<string> split(const string& s, char delimiter)
{
    //根据给定的分隔符，将字符串分割成多个子字符串，并返回一个字符串向量
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
    //将字符串转换为整数
    istringstream is(s);
    int num;
    is >> num;
    return num;
}
