#ifndef TABLERO_H
#define TABLERO_H
#include "Casilla.h"
#include "Pieza.h"
class clsTablero{
    private:
        clsCasilla *matrizCasilla[8][8];
        clsPieza *pieza;
    public:
        clsTablero(/*clsCasilla matriz[8][8] */);
        void mostrarTablero();
        Sprite getSprite(int,int);
};

#include "Tablero.cpp"

#endif