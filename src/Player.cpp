#include "Player.h"
#include <iostream>
#include "GameMap.h"
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
