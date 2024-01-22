#ifndef TABLERO_H
#define TABLERO_H
#include "Casilla.h"
#include "Pieza.h"
class clsTablero{
    private:
        clsCasilla matrizCasilla[8][8];
    public:
        clsTablero(/*clsCasilla matriz[8][8] */);
        void mostrarTablero();
};

#include "Tablero.cpp"

#endif