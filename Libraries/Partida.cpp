#include "Partida.h"
using namespace std;

clsPartida::clsPartida(string n, string b){
    usuarioN = n;
    usuarioB = b;
    pTablero = new clsTablero();
}

void clsPartida::mostrarTablero(){
    pTablero -> mostrarTablero();
}

void clsPartida::setPiezas(clsPieza *piezas[]){
    
}