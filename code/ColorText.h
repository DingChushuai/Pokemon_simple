#pragma once
#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <cstdio>
#include <string>
#include <vector>

using namespace std;

//根据需要添加颜色
enum Color
{
    WHITE = 0,
    RED,
    GREEN,
    BLUE,
    YELLOW,
};

class ColorText
{
	public:
        ColorText();
        ~ColorText();
        void Add(Color color, string str);
        void AddMulti(initializer_list<pair<Color, string>> colorString);
        void Clear();
        void Print();
    private:
        vector<pair<Color, string>> colorString;

};

