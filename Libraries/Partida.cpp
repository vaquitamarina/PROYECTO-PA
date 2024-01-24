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

Sprite clsPartida::getSprite(int i, int j){
    return pTablero->getSprite(i,j);
}