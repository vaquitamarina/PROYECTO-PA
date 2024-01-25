#include "Partida.h"
using namespace std;

clsPartida::clsPartida(string n, string b){
    usuarioN = n;
    usuarioB = b;
    // pTablero = new clsTablero();
}

void clsPartida::setPiezas(clsPieza *ps){
    piezas[0] = &ps[0];
}