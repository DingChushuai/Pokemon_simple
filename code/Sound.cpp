#include "Sound.h"


//���캯����������������Ҫ��ʲô,������Ҫ��ʼ��һЩ��Ա����
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
	�����Ƿ�ɹ�����,�߼���Ӧ�����Ƿ���true
    ����soundID������Ӧ����Ч
	��Ч����һ�μ���, ���Ա�������Ч���
	��Ч�Ĳ��Ų���Ӱ�챳�����ֵĲ���
	*/
	return true;
}

bool Sound::playMusic(SoundID soundID)
{
	/*
	�����Ƿ�ɹ�����,�߼���Ӧ�����Ƿ���true
	����soundID������Ӧ�ı�������
	��������Ӧ����ѭ�����ŵ�, ֱ������stopMusic����, ����ʹ��playMusic������������
	*/
    return true;
}

bool Sound::stopMusic()
{
    /*
	�����Ƿ�ɹ�ֹͣ,�����ǰû�в��ű�������,�򷵻�false,���򷵻�true
    ֹͣ��ǰ���ŵı�������,������musicNowΪMUSI_NONE
	*/
    return true;
}
