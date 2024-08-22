#include "Sound.h"


//构造函数和析构函数不需要做什么,除非需要初始化一些成员变量
Sound::Sound()
{
	musicNow = MUSI_NONE;
}

Sound::~Sound()
{
}

bool Sound::playSound(SoundID soundID)
{
	/*
	返回是否成功播放,逻辑上应当总是返回true
    根据soundID播放相应的音效
	音效播放一次即可, 可以被其他音效打断
	音效的播放不会影响背景音乐的播放
	*/
	return true;
}

bool Sound::playMusic(SoundID soundID)
{
	/*
	返回是否成功播放,逻辑上应当总是返回true
	根据soundID播放相应的背景音乐
	背景音乐应当是循环播放的, 直到调用stopMusic函数, 或者使用playMusic播放其他音乐
	*/
    return true;
}

bool Sound::stopMusic()
{
    /*
	返回是否成功停止,如果当前没有播放背景音乐,则返回false,否则返回true
    停止当前播放的背景音乐,并更改musicNow为MUSI_NONE
	*/
    return true;
}
