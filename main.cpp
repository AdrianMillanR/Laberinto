#include <iostream>
#include "Player.h"
#include "MapCell.h"
#include "GameMap.h"
using namespace std;

int main()
{
    GameMap Map;
    bool GameOver=false;
    Player Hero;
    cout<<"Inicia el juego"<<endl;
    while(GameOver==false){
        Map.DrawMap();
        Hero.Mover();
    }
    return 0;
}
