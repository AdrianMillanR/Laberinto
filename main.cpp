#include <iostream>
#include "Player.h"
using namespace std;

int main()
{
    bool GameOver=false;
    Player Hero;
    cout<<"Inicia el juego"<<endl;
    while(GameOver==false){;
        Hero.Mover();
    }
    return 0;
}
