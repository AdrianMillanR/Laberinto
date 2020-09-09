#include <iostream>

using namespace std;

int PosicionHeroex=0;
int PosicionHeroey=0;
bool GameOver=false;

void dibujar_mapa(int x, int y){
    char mapa[x][y];
    for(int i=0;i<x;i++){
        for(int j=0; j<y;j++){
            mapa[i][j]='1';
        }
    }
    for(int i=0;i<x;i++){
        for(int j=0; j<y;j++){
            if(PosicionHeroex==j && PosicionHeroey==i){
                cout<<'H';
            }else{
            cout<<mapa[i][j];
            }
        }
        cout<<endl;
    }
}

int main()
{
    int x=0;
    int y=0;
    char movimiento=' ';
    cout<<"Bienvenido al laberinto interactivo en c++"<<endl;
    cout<<"Para comenzar coloca cuantas filas deseas que tenga tu laberinto: ";
    cin>>x;
    cout<<"Para comenzar coloca cuantas columnas deseas que tenga tu laberinto: ";
    cin>>y;

    dibujar_mapa(x,y);
    while(GameOver==false){
        cin>>movimiento;
        if(movimiento=='a'){
            PosicionHeroex-=1;
        }else if(movimiento=='d'){
            PosicionHeroex+=1;
        }else if(movimiento=='w'){
            PosicionHeroey-=1;
        }else if(movimiento=='s'){
            PosicionHeroey+=1;
        }else if(movimiento=='p'){
            GameOver=true;
        }
        dibujar_mapa(x,y);
    }
    return 0;
}
