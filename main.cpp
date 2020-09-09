#include <iostream>

using namespace std;

int tamano=0;
int PosicionHeroe=0;
bool GameOver=false;

void dibujar_mapa(){
    char mapa[tamano];
    for(int i=0;i<sizeof(mapa);i++){
        mapa[i]='1';
    }
    for(int i=0;i<sizeof(mapa);i++){
        if(PosicionHeroe==i){
            cout<<"H";
        }else{
            cout<<mapa[i];
        }
    }
}

int main()
{
    char movimiento=' ';
    cout<<"Bienvenido al laberinto interactivo en c++"<<endl;
    cout<<"Para comenzar coloca de que tamano deseas que sea tu laberinto: ";
    cin>>tamano;

    dibujar_mapa();
    while(GameOver==false){
        cin>>movimiento;
        if(movimiento=='a'){
            PosicionHeroe-=1;
        }else if(movimiento=='d'){
            PosicionHeroe+=1;
        }else if(movimiento=='p'){
            GameOver=true;
        }
        dibujar_mapa();
    }
    return 0;
}
