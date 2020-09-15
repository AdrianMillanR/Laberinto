#include "Player.h"
#include <iostream>
using namespace std;
Player::Player()
{
   x=0;
   y=0;
}

void Player::Mover(){
    char tecla=' ';
    cin>>tecla;
    switch(tecla){
case 'w':
    cout<<"Te moviste arriba"<<endl;
    y--;
    break;
case 's':
    cout<<"Te moviste abajo"<<endl;
    y++;
    break;
case 'a':
    cout<<"Te moviste izquierda"<<endl;
    x--;
    break;
case 'd':
    cout<<"Te moviste derecha"<<endl;
    x++;
    break;
default:
    cout<<"Opcion no disponible"<<endl;
    break;
    }
    cout<<"La cordenadas actuales del jugador son: "<<x<<","<<y<<endl;
}
