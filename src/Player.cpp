#include "Player.h"
#include <iostream>
#include "GameMap.h"
#include <fstream>
using namespace std;
Player::Player()
{
   x=1;
   y=1;
}

void Player::Mover(GameMap Map){
    char tecla=' ';
    cin>>tecla;
    switch(tecla){
case 'w':
    if(Map.IsBlock(x-1,y)){

    }else{
        x--;
    }
    break;
case 's':
    if(Map.IsBlock(x+1,y)){

    }else{
        x++;
    }
    break;
case 'a':
    if(Map.IsBlock(x,y-1)){

    }else{
        y--;
    }
    break;
case 'd':
    if(Map.IsBlock(x,y+1)){

    }else{
        y++;
    }
    break;
case 'g':
    //Map.SaveMap();
    break;
default:
    break;
    }
}

int Player::Getx(){
    return x;
}

int Player::Gety(){
    return y;
}

void Player::LoadHero(){
    string linea;
    ifstream LeerMapa("Mapa.txt");
    int j=0;
    if(LeerMapa.is_open()){
            while(getline(LeerMapa,linea)){
                for(int i=0;i<10;i++){
                    if(linea[i]=='3'){
                        x=j;
                        y=i;
                    }
                }
                j++;
            }
    }else{
        cout<<"Error al cargar Heroe"<<endl;
    }
    LeerMapa.close();


}
