#include "ColorText.h"

ColorText::ColorText()
{
	//需要初始化colorString
}

ColorText::~ColorText()
{
	//需要释放colorString占用的空间
	//调用Clear函数
}

void ColorText::Add(Color color, string str)
{
	//将color和对应的str添加到colorString的末尾

}

void ColorText::Print()
{
    //遍历colorString，打印出对应的color和str
	//需要处理colorString为空的情况
}

void ColorText::Clear()
{
    //清空colorString, 释放占用的空间
}

void ColorText::AddMulti(initializer_list<pair<Color, string>> colorString)
{
	//通过initializer_list添加多个color和对应的str
	//调用Add函数
}


