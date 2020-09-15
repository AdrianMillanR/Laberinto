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

bool Player::Mover(GameMap Map){
    char tecla=' ';
    cin>>tecla;
    switch(tecla){
case 'w':
    if(Map.IsChest(x-1,y)){
        x--;
        return true;
    }
    if(Map.IsBlock(x-1,y)){
        return false;
    }else{
        x--;
        return false;
    }
    break;
case 's':
    if(Map.IsChest(x+1,y)){
        x++;
        return true;
    }
    if(Map.IsBlock(x+1,y)){
        return false;
    }else{
        x++;
        return false;
    }
    break;
case 'a':
    if(Map.IsChest(x,y-1)){
        y--;
        return true;
    }
    if(Map.IsBlock(x,y-1)){
        return false;
    }else{
        y--;
        return false;
    }
    break;
case 'd':
    if(Map.IsChest(x,y+1)){
        y++;
        return true;
    }
    if(Map.IsBlock(x,y+1)){
        return false;
    }else{
        y++;
        return false;
    }
    break;
case 'g':
    return false;
    break;
default:
    return false;
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
