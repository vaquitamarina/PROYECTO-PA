#ifndef CASILLA_H
#define CASILLA_H

#include "Pieza.h"
using namespace std;


class clsCasilla {
    private:
        clsPieza *pPieza;
        bool vacio;
    public:
        clsCasilla();
        void setPieza(clsPieza *p);
        void setVacio(bool);
        string getFigura(bool);
    
};

#include "Casilla.cpp"

#endif