
//����������Ҫ���ݸ�������Դ�ļ����в���
//��Ϸ��Ч������ ö����
enum SoundID
{
    //Ԥ�����0��ʾ������
    MUSI_NONE = 0,
    MUSIC_MAIN = 1,
};

//����·��
const char* MUSIC_PATH[] =
{
    "",
    "./resource/music/main.mp3",
};

class Sound
{
private:
    SoundID musicNow;   //��ǰ���ŵ�����
public:
    Sound();
    ~Sound();
    bool playSound(SoundID soundID);    //������Ч
    bool playMusic(SoundID soundID);    //��������
    bool stopMusic();    //ֹͣ���ŵ�ǰ����
};
