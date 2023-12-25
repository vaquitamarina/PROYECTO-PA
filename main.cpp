#include <bits/stdc++.h>
#include <windows.h> 
 
#include "extra.h"

#define ARRIBA 119
#define ABAJO 115
#define ENTER 13

using namespace std;
//Funciones de terminal y captura de teclas


class clsPartida{
    private:

    public:
    int menu(string, string[], int);
    void menuPrincipal();
};

int clsPartida::menu(string titulo, string opciones[], int n){
    int opSeleccionada = 1;
    int tecla;

    bool flag = true;

    do{
        system("cls");
        gotoxy(5, 10 + opSeleccionada); cout << "==>" << endl;
        gotoxy(15, 1); cout << titulo;
        for (int i = 0; i < n; ++i) {
            gotoxy(10, 11 + i); cout << i + 1 << ") " << opciones[i];
        }
    

        do {
            tecla = getch2();
        } while (tecla != ARRIBA && tecla != ABAJO && tecla != ENTER);

        switch(tecla){
            case ARRIBA:   
                opSeleccionada--;

                if (opSeleccionada < 1) {
                    opSeleccionada = n;
                }
                break;
 
            case ABAJO:
                opSeleccionada++;
 
                if (opSeleccionada > n) {
                    opSeleccionada = 1;
                }
                break; 
            case ENTER:
                flag = false;
                break;
        }
   }while(flag);
 
   return opSeleccionada;
}

void clsPartida::menuPrincipal(){
    bool flag = true;
    int op;

    string titulo = R"(
________        ___  _______   ________  ________  _______   ________     
|\   __  \      |\  \|\  ___ \ |\   ___ \|\   __  \|\  ___ \ |\_____  \    
\ \  \|\  \     \ \  \ \   __/|\ \  \_|\ \ \  \|\  \ \   __/| \|___/  /|   
 \ \   __  \  __ \ \  \ \  \_|/_\ \  \ \\ \ \   _  _\ \  \_|/__   /  / /   
  \ \  \ \  \|\  \\_\  \ \  \_|\ \ \  \_\\ \ \  \\  \\ \  \_|\ \ /  /_/__  
   \ \__\ \__\ \________\ \_______\ \_______\ \__\\ _\\ \_______\\________\
    \|__|\|__|\|________|\|_______|\|_______|\|__|\|__|\|_______|\|_______| )";
    string opciones[] = {"Iniciar partida","Configuracion", "Salir"};
    int n = 3;

    do{
        op = menu(titulo,opciones,n);

        switch(op){
            case 1:
                system("cls");
                cout<<"hola";
                system("pause>nul");
                break;
            case 2:
                system("cls");
                cout<<"chau";
                system("pause>nul");
                break;
            case 3:
                flag = false;
                break;
        }
    }while(flag);
}

int main (){
    clsPartida prueba;
    prueba.menuPrincipal();
    return 0;
}







