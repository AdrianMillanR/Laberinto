#include <iostream>
#include "Player.h"
#include "MapCell.h"
#include "GameMap.h"
#include <fstream>
using namespace std;

void intro(){
    string linea;
    ifstream LeerIntro("Intro.txt");
    if(LeerIntro.is_open()){
            while(getline(LeerIntro,linea)){
                cout<<linea<<endl;
            }
            cout<<"Bienvenido al laberinto"<<endl;
            cout<<"Presiona cualquier tecla para continuar...";
            cin>>linea;

    }else{
        cout<<"Error al cargar el Intro"<<endl;
    }
    LeerIntro.close();
}
int main()
{
    bool GameOver=false;
    GameMap Map;
    Player Hero;
    Hero.LoadHero();

    intro();

    while(GameOver==false){
        Map.SetPlayerCell(Hero.Getx(),Hero.Gety());
        Map.DrawMap();
        cout<<"Elige una opcion: (w)Arriba, (s)Abajo, (a)Izquierda, (d)Derecha (g)Guardad"<<endl;
        Hero.Mover(Map);
    }
    return 0;
}
