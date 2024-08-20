#include "Sound.h"
#include "Backpack.h"
#include "Log.h"
#include "Command.h"
#include "Combat.h"
#include "PokemonLib.h"

#define NPC_COUNT 5

class Game
{
private:
    Sound sound;
    Backpack backpack;
    Log log;
    Command command;
    Combat combat;
    PokemonLib pokemonLib;


    //void Init();
    //void Save();
    //void Load();
public:
    //Game() {};
    //~Game() {};
    void Run();
    //void GameOver();
};