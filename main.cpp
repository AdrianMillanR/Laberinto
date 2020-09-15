#include <iostream>
#include "Player.h"
#include "MapCell.h"
#include "GameMap.h"
using namespace std;

int main()
{
    bool GameOver=false;
    GameMap Map;
    Player Hero;

    cout<<"Inicia el juego"<<endl;

    while(GameOver==false){
        Map.SetPlayerCell(Hero.Getx(),Hero.Gety());
        Map.DrawMap();
        Hero.Mover();
    }
    return 0;
}
