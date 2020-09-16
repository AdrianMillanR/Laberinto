#include "Enemy.h"
#include "GameMap.h"
#include "MapCell.h"
#include "iostream"
#include "fstream"
using namespace std;

Enemy::Enemy(int x,int y)
{
    this->x=x;
    this->y=y;
    bandera=0;
}

int Enemy::Getx(){
    return x;
}

int Enemy::Gety(){
    return y;
}

void Enemy::Setx(int x){
    this->x=x;
}

void Enemy::Sety(int y){
    this->y=y;
}

void Enemy::Mover(){
    if(bandera==0){
        y++;
        bandera=!bandera;
    }else{
        y--;
        bandera=!bandera;
    }
}


