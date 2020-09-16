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
        for(int j=0; j<50; j++){
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
    PlayerCell->id='H';
}

void GameMap::LoadMap(){
    string linea;
    ifstream LeerMapa("Mapa.txt");
    int j=0;

    if(LeerMapa.is_open()){
            while(getline(LeerMapa,linea)){
                for(int i=0;i<50;i++){
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

void GameMap::LoadLevel(int lvl){
    if(lvl==1){
            string linea;
            ifstream LeerMapa("Mapa1.txt");
            int j=0;

            if(LeerMapa.is_open()){
                    while(getline(LeerMapa,linea)){
                        for(int i=0;i<50;i++){
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

    }else if(lvl==2){
            string linea;
            ifstream LeerMapa("Mapa2.txt");
            int j=0;

            if(LeerMapa.is_open()){
                    while(getline(LeerMapa,linea)){
                        for(int i=0;i<50;i++){
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
}

bool GameMap::IsBlock(int x, int y){
    if(cells[x][y].id=='1'){
        return true;
    }else{
        return false;
    }
}

bool GameMap::IsChest(int x, int y){
    if(cells[x][y].id=='$'){
        return true;
    }else{
        return false;
    }
}

bool GameMap::IsNextLevel(int x, int y){
    if(cells[x][y].id=='O'){
        return true;
    }else{
        return false;
    }
}
