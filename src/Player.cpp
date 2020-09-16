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

int Player::Mover(GameMap Map){
    char tecla=' ';
    cin>>tecla;
    switch(tecla){
case 'w':
    if(Map.IsEnemy(x-1,y)){
        x--;
        return 3;
    }
    if(Map.IsChest(x-1,y)){
        x--;
        return 1;
    }
    if(Map.IsNextLevel(x-1,y)){
        x--;
        return 2;
    }
    if(Map.IsBlock(x-1,y)){
        return 0;
    }else{
        x--;
        return 0;
    }
    break;
case 's':
    if(Map.IsEnemy(x+1,y)){
        x++;
        return 3;
    }
    if(Map.IsChest(x+1,y)){
        x++;
        return 1;
    }
    if(Map.IsNextLevel(x+1,y)){
        x++;
        return 2;
    }
    if(Map.IsBlock(x+1,y)){
        return 0;
    }else{
        x++;
        return 0;
    }
    break;
case 'a':
    if(Map.IsEnemy(x,y-1)){
        y--;
        return 3;
    }
    if(Map.IsChest(x,y-1)){
        y--;
        return 1;
    }
    if(Map.IsNextLevel(x,y-1)){
        y--;
        return 2;
    }
    if(Map.IsBlock(x,y-1)){
        return 0;
    }else{
        y--;
        return 0;
    }
    break;
case 'd':
    if(Map.IsEnemy(x,y+1)){
        y++;
        return 3;
    }
    if(Map.IsChest(x,y+1)){
        y++;
        return 1;
    }
    if(Map.IsNextLevel(x,y+1)){
        y++;
        return 2;
    }
    if(Map.IsBlock(x,y+1)){
        return 0;
    }else{
        y++;
        return 0;
    }
    break;
default:
    return 0;
    break;
    }
}

int Player::Getx(){
    return x;
}

int Player::Gety(){
    return y;
}

void Player::Setx(int x){
    this->x=x;
}
void Player::Sety(int y){
    this->y=y;
}

