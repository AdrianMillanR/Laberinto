#include <iostream>
#include <fstream>

using namespace std;

int PosicionHeroex=0;
int PosicionHeroey=0;
bool GameOver=false;
char mapa[8][8];
string heroe="Unregister";

void dibujar_mapa(){
    for(int i=0;i<8;i++){
        for(int j=0; j<8;j++){
            if(PosicionHeroex==j && PosicionHeroey==i){
                cout<<'H';
            }else{
            cout<<mapa[i][j];
            }
        }
        cout<<endl;
    }
}

void llenar_mapa(){
    for(int i=0;i<8;i++){
        for(int j=0; j<8;j++){
            mapa[i][j]='1';
        }
    }
}

void registrar(){
    ofstream RegistrarDatos("Datos.txt");
    if(RegistrarDatos.is_open()){
        cout<<"Coloca el nombre de tu heroe"<<endl;
        cin>>heroe;
        RegistrarDatos<<heroe<<endl;
    }
}

void obtener_heroe(){
    ifstream ObtenerDatos("Datos.txt");
    string linea;
    if(ObtenerDatos.is_open()){
        while(getline(ObtenerDatos,linea)){
                if(linea!=""){
                    heroe=linea;
                }
            }
    }
}

void menu(){
    int opcion=0;
    cout<<"Bienvenido al laberinto interactivo en c++"<<endl;
    cout<<"Registrate y comienza a jugar"<<endl;
    cout<<"1.- Registrar Heroe"<<endl;
    cout<<"2.- Jugar"<<endl;
    cin>>opcion;
    switch(opcion){
case 1:
    registrar();
    menu();
    break;
case 2:
    break;
default:
    cout<<"Opcion no valida"<<endl;
    menu();
    break;
    }

}

int main()
{
    menu();
    llenar_mapa();
    obtener_heroe();
    char movimiento=' ';
    cout<<"Bienvenido "<<heroe<<endl;
    cout<<"Aqui comienza tu aventura"<<endl;
    dibujar_mapa();

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
        dibujar_mapa();
    }
    return 0;
}
