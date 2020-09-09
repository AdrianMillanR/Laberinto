#include <iostream>

using namespace std;


void dibujar_mapa(int PosicionHeroe,char mapa[9]){
    for(int i=0;i<9;i++){
        if(PosicionHeroe==i){
            cout<<"H";
        }else{
            cout<<mapa[i];
        }
    }
}

int main()
{
    char mapa[9];
    for(int i=0;i<sizeof(mapa);i++){
        mapa[i]='1';
    }
    int PosicionHeroe=6;

    dibujar_mapa(PosicionHeroe,mapa);
    /*for(int i=0;i<sizeof(mapa);i++){
        if(PosicionHeroe==i){
            cout<<"H";
        }else{
            cout<<mapa[i];
        }
    }*/
    return 0;
}
