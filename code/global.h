
//����ID ö����
enum SceneID
{
    SCENE_MENU = 0, //�˵�����
    SCENE_GAME,     //��Ϸ����
    SCENE_MAP,      //��ͼ����
    SCENE_COMBAT,   //ս������
    SCENE_SHOP,     //�̵곡��
};

//��Ϸ��Ч ö����
enum SoundID
{
    MUSIC_MAIN = 0, //��Ҫ����
};

//����·��
const char* MUSIC_PATH[] =
{
    "music/main.mp3",
};

//�ı���ɫ
enum TextColor
{
    WRITE = 0,  //��ɫ
    RED,        //��ɫ
    YELLOW,  //��ɫ
    BLUE,    //��ɫ
    GREEN,   //��ɫ
    PURPLE,  //��ɫ
};