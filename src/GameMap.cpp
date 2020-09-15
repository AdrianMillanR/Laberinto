#include "GameMap.h"
#include "iostream"
#include "fstream"

using namespace std;

GameMap::GameMap()
{
    PlayerCell=NULL;
    LoadMap();
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
        //En cada entrada de datos, volverá a poner un 0 en la posición que tenía del jugador, para posteriormente
        //almacenar la nueva dirección del jugaoor y poner un 3
        PlayerCell->id=' ';
    }
    //PlayerCell es un apuntador que guardará la dirección en memoria donde se encuentra nuestro jugaodr
    //y en esa direccion colocará un 3
    PlayerCell= &cells[PlayerX][PlayerY];
    PlayerCell->id='3';
}

void GameMap::LoadMap(){
    string linea;
    ifstream LeerMapa("Mapa.txt");
    int j=0;

    if(LeerMapa.is_open()){
            while(getline(LeerMapa,linea)){
                for(int i=0;i<10;i++){
                    if(linea[i]=='0'){
                        cells[j][i].id=' ';
                    }else{
                        cells[j][i].id=linea[i];
                    }
                }
                j++;
            }

    }else{
        cout<<"Error al cargar el mapa"<<endl;
    }
    LeerMapa.close();


}

bool GameMap::IsBlock(int x, int y){
    if(cells[x][y].id=='1'){
        return true;
    }else{
        return false;
    }
}

/*
void GameMap::SaveMap(){
    ofstream EscribeMapa("Mapa.txt");
    if(EscribeMapa.is_open()){
        for(int i=0; i<15;i++){
            for(int j=0; j<10; j++){
                if(cells[i][j].id==' '){
                    EscribeMapa<<'0';
                }else{
                    EscribeMapa<<cells[i][j].id;
                    }
            }
        EscribeMapa<<endl;
        }
    }
    EscribeMapa.close();
}*/
