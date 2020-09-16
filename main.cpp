#include <iostream>
#include "Player.h"
#include "MapCell.h"
#include "GameMap.h"
#include <fstream>
#include "Enemy.h"
#include "VerticalEnemy.h"
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
void Defeat(){
    string linea;
    ifstream LeerIntro("Defeat.txt");
    if(LeerIntro.is_open()){
            while(getline(LeerIntro,linea)){
                cout<<linea<<endl;
            }
            cout<<"Te encontraste a un enemigo"<<endl;
            cout<<"Perdiste"<<endl;
            cout<<"Presiona cualquier tecla para continuar...";
            cin>>linea;

    }else{
        cout<<"Error al cargar el Intro"<<endl;
    }
    LeerIntro.close();
}
int main()
{
    int GameOver=0;
    int Level=0;
    int indicador=10;
    GameMap Map;
    Player Hero;
    Enemy Enemy1(6,19);
    VerticalEnemy Enemy2(8,44);

    intro();
    Map.SetPlayerCell(Hero.Getx(),Hero.Gety());
    Map.SetEnemyCell(Enemy1.Getx(),Enemy1.Gety());
    Map.SetEnemyCell(Enemy2.Getx(),Enemy2.Gety());
    Map.DrawMap();

    while(GameOver==0){
        cout<<"Elige una opcion: (w)Arriba, (s)Abajo, (a)Izquierda, (d)Derecha"<<endl;
        Enemy2.Mover();
        Enemy1.Mover();
        Map.SetEnemyCell(Enemy1.Getx(),Enemy1.Gety());
        Map.SetEnemyCell(Enemy2.Getx(),Enemy2.Gety());
        indicador=Hero.Mover(Map);
        Map.SetPlayerCell(Hero.Getx(),Hero.Gety());
        Map.DrawMap();
        if(indicador==1){
            GameOver=1;
        }else if(indicador==2){
            Level++;
            Hero.Setx(1);
            Hero.Sety(1);
            indicador=10;
            Map.LoadLevel(Level);
            Map.SetPlayerCell(Hero.Getx(),Hero.Gety());
            Map.SetEnemyCell(Enemy1.Getx(),Enemy1.Gety());
            Map.SetEnemyCell(Enemy2.Getx(),Enemy2.Gety());
            Map.DrawMap();
        }else if(indicador==3){
            Defeat();
            return 0;
        }
    }
    Victory();
    return 0;
}
