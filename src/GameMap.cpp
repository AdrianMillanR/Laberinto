#include "GameMap.h"
#include "iostream"

using namespace std;

GameMap::GameMap()
{
    PlayerCell=NULL;
}
void GameMap::DrawMap(){
    for(int i=0; i<15;i++){
        for(int j=0; j<10; j++){
            cout<<cells[i][j].id;
        }
        cout<<endl;
    }
}

void GameMap::SetPlayerCell(int PlayerX, int PlayerY){

    if(PlayerCell != NULL){
        //En cada entrada de datos, volver� a poner un 0 en la posici�n que ten�a del jugador, para posteriormente
        //almacenar la nueva direcci�n del jugaoor y poner un 3
        PlayerCell->id=0;
    }
    //PlayerCell es un apuntador que guardar� la direcci�n en memoria donde se encuentra nuestro jugaodr
    //y en esa direccion colocar� un 3
    PlayerCell= &cells[PlayerX][PlayerY];
    PlayerCell->id=3;
}

