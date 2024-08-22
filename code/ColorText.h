#pragma once
#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <cstdio>
#include <string>
#include <vector>

using namespace std;

class ColorText
{
public:
    //根据需要添加颜色
    const enum Color
    {
        WHITE = 0,
        RED,
        GREEN,
        BLUE,
        YELLOW,
    };

    ColorText();
    ~ColorText();
    void Add(Color color, string str);
    void AddMulti(initializer_list<pair<Color, string>> colorString);
    void Clear();
    void Print();
private:
    vector<pair<Color, string>> colorString;

};

