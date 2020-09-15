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
void Victory(){
    string linea;
    ifstream LeerIntro("Victory.txt");
    if(LeerIntro.is_open()){
            while(getline(LeerIntro,linea)){
                cout<<linea<<endl;
            }
            cout<<"Felicidades, Encontraste el tesoro"<<endl;
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
    Map.SetPlayerCell(Hero.Getx(),Hero.Gety());
    Map.DrawMap();

    while(GameOver==false){
        cout<<"Elige una opcion: (w)Arriba, (s)Abajo, (a)Izquierda, (d)Derecha (g)Guardad"<<endl;
        GameOver=Hero.Mover(Map);
        Map.SetPlayerCell(Hero.Getx(),Hero.Gety());
        Map.DrawMap();
    }
    Victory();
    return 0;
}
