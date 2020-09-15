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
        cout<<"Elige una opcion: (w)Arriba, (s)Abajo, (a)Izquierda, (d)Derecha (g)Guardad"<<endl;
        Hero.Mover(Map);
    }
    return 0;
}
