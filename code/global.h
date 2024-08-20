
//场景ID 枚举类
enum SceneID
{
    SCENE_MENU = 0, //菜单场景
    SCENE_GAME,     //游戏场景
    SCENE_MAP,      //地图场景
    SCENE_COMBAT,   //战斗场景
    SCENE_SHOP,     //商店场景
};

//游戏音效 枚举类
enum SoundID
{
    MUSIC_MAIN = 0, //主要音乐
};

//音乐路径
const char* MUSIC_PATH[] =
{
    "music/main.mp3",
};

//文本颜色
enum TextColor
{
    WRITE = 0,  //白色
    RED,        //红色
    YELLOW,  //黄色
    BLUE,    //蓝色
    GREEN,   //绿色
    PURPLE,  //紫色
};