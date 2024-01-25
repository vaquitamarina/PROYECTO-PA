#ifndef TABLERO_H
#define TABLERO_H
#include "Casilla.h"
#include "Pieza.h"
class clsTablero{
    private:
        clsCasilla *matrizCasilla[8][8];
        // clsPieza *piezas[32];
    public:
        clsTablero(/*clsCasilla matriz[8][8] */);
        void mostrarTablero();
        // void setPiezas(*[]);
};

#include "Tablero.cpp"

#endif