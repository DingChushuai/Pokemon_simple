/*
* 所有需要补充的代码实现的地方将在底下标出
* 多人协作时, 请更改对应任务的状态标记, 在上传代码前, 请先**同步任务板的状态**, 以免发生冲突
* 请不要删除我提供的注释
* 以下解释为任务状态标记
* 1.(T,score) 表示TODO, 表示该任务需要完成, score为任务难度评分(1-5)
* 2.(F) 表示Finish, 表示该任务已完成
* 3.(P,name) 表示Processing, 表示该任务正在处理中, name为处理该任务的人名(可以使用任何喜欢的标记名称)
* 4.(?,name) 表示任务遇到问题, 或者需要讨论
*/

// 任务状态标记
// 任务的分配基于任务的相关性, 相关性高的任务处于同一个任务组中
/*
1.(T,4) Sound类的三个函数, 需要调用系统的声音播放库, 实现播放音乐, 播放音效, 暂停音乐, 需要自行查阅相关资料
2.(T,1) 补充SoundID和音乐路径的声明, 需要资源组员提供
3.(T,3) 完成ColorText类的实现, 需要理解string, vector, pair, initializer_list, 和彩色文本的原理
4.(T,2) 完成Log类的实现, 需要理解queue的原理和ColorText类的说明
5.(T,2) 完成工具函数的实现, 工具函数在global.h中声明,需要理解vector和string的原理, 以及其他杂项内容
6.(T,3) 完成NPC类的LoadInfo,和LoadState函数, 需要先完成任务5, 需要理解文件的读取和解析, 以及vector和string的原理

*/

/*
对于一些资源文件格式的解释:

资源文件统一存放在./resource文件夹下

音乐和音效文件统一存放在./resource/music文件夹下
音乐文件格式根据使用的库不同而进行调整

gamebar.txt:
	文本化的游戏标题文件, 在载入游戏时, 读取该文件并将其作为游戏标题

NPC_Info.csv
	文本化的NPC信息文件, 在载入游戏时, 读取该文件并将其作为NPC信息
		格式为(每一项以逗号分隔):
		NPC_ID(从0开始),NPC_Name,NPC_DefultPosition(MapID,PositionX,PositionY),NPC_States
		NPC_States(每一项以"/"分隔, 每个参数以"|"分隔):
		NPC_state默认为0, 然后跳转到其他状态, 每个状态包括:
		stateID:状态ID
		stateTalk:该状态下NPC的对话
		stateNotFinishTalk:当状态未完成时, NPC的对话
		stateAction:该状态下NPC的行为
		stateNext:该状态下如果判断状态完成,NPC的下一个状态
		stateAction:不同的行为有不同的参数,每个参数用"\分隔":
				0:无行为, 对话完成后直接跳转到下一个状态
				1:移动到指定位置(MapID,PositionX,PositionY)
				2:触发战斗(BattleID, 位于Battle.csv), 战斗胜利视为状态完成
				3.检查其他NPC状态(NPC_ID,State_ID), 如果NPC_ID的NPC处于State_ID状态, 则状态完成
				4.检查玩家是否拥有指定物品(PropID), 如果拥有, 则状态完成
				5.提交物品(PropID,PropCount), 将玩家拥有的PropID物品,数量为Prop个提交给NPC, 然后状态完成
				6.检查玩家是否拥有指定宝可梦(PokemonID), 如果拥有, 则状态完成
				7.将某个宝可梦(PokemonID)交给玩家, 然后状态完成
				8.将某个道具(PropID,PropCount)交给玩家

		例如:
			某个名为小智的NPC(ID为1),他的行为为:
			0.初次对话后说"你好,我是小智"
			1.再次对话后,小智会要你去找大木博士对话(假设ID为2,对话完成后stateID为3), 然后小智移动到其他地图位置
			2.当你找到大木博士后, 大木博士会告诉你, 小智的位置, 并将一只皮卡丘(假设PokemonID为1)交给你, 然后大木博士移动到其他地图位置
			3.当你找到小智后,他会和你展开一场战斗(假设BattleID为1)
			4.完成战斗后他会夸奖你,然后给你一个道具(PropID为1,PropCount为2), 然后小智移动到其他地图位置
		对应的csv内容为(实际的csv文件中不会进行分行,此处为了演示分行):
		1,小智,1/15/20,		(小智的ID为1,一开始再id为1的地图上的x=15,y=20的位置)
		0|你好,我是小智||0|1 /		(初次对话后说"你好,我是小智",然后跳转到状态1)
		1|请你去找大木博士吧,他有一只皮卡丘可以给你||1\2\18\18|2 /	(小智会要你去找大木博士对话, 然后移动到ID=2的地图上的x=18,y=18的位置,然后跳转到状态2)
		2|很好,你现在有了一只宝可梦了|你还没找到大木博士啊|6\1|3 / (当状态未完成时, 小智会告诉你还没找到大木博士, 当状态完成时, 小智会告诉你, 你现在有了一只宝可梦了, 然后跳转到状态3)
		3|恭喜你,现在我们来打一场战斗吧|你现在还太弱了|2\1|4 /	(触发战斗ID为1的战斗, 战胜后跳转到状态4,否则保持在3)
		4|很好,你现在变得更强大了,我送你两个精灵球吧||8\6|4	(战斗胜利后, 小智会夸奖你, 然后给你两个精灵球ID=6, 然后跳转到状态4)

NPC_State.csv
	对NPC状态的存档文件, 在存档时, 读取该文件并将其作为NPC状态(其位于save文件夹)
	格式为(每一项以逗号分隔):
	NPC_ID,NPC_Name,NPC_StateID,MapID,x,y
*/

//接下来为工具函数
#include <vector>
#include <string>
using namespace std;

inline vector<string> split(const string& s, char delimiter);
inline int stoi(const string& s);