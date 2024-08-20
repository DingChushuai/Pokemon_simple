
//以下内容需要根据给出的资源文件进行补充
//游戏音效和音乐 枚举类
enum SoundID
{
    //预留编号0表示无音乐
    MUSI_NONE = 0,
    MUSIC_MAIN = 1,
};

//音乐路径
const char* MUSIC_PATH[] =
{
    "",
    "./resource/music/main.mp3",
};

class Sound
{
private:
    SoundID musicNow;   //当前播放的音乐
public:
    Sound();
    ~Sound();
    bool playSound(SoundID soundID);    //播放音效
    bool playMusic(SoundID soundID);    //播放音乐
    bool stopMusic();    //停止播放当前音乐
};
