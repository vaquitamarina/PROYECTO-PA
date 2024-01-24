#ifndef CASILLA_H
#define CASILLA_H

#include "Pieza.h"
using namespace std;


class clsCasilla {
    private:
        clsPieza *pPieza;
        bool vacio;
        int posX;
        int posY;
    public:
        clsCasilla();
        clsCasilla(int, int);
        void setPieza(clsPieza *p);
        void setVacio(bool);
        Sprite getSprite();
    
};

#include "Casilla.cpp"

#endif