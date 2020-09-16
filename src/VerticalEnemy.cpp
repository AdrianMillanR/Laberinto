#include "VerticalEnemy.h"

VerticalEnemy::VerticalEnemy(int x,int y):Enemy(x,y)
{
    this->x=x;
    this->y=y;
    bandera=0;
}

void VerticalEnemy::Mover(){
    if(bandera==0){
        x++;
        bandera=!bandera;
    }else{
        x--;
        bandera=!bandera;
    }
}
