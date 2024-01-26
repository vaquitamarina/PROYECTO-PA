#ifndef SCREENPARTIDA_H
#define SCREENPARTIDA_H

#include "Screen.h"
#define _CASILLA 62
#define _CASILLAORIGEN 130
class clsScreenPartida : public clsScreen {
    private:
        clsPartida *partida;
        clsPieza *piezas[32];
        Vector2f casillas[8][8];
        string usuarioN;
        string usuarioB;
    public:
        clsScreenPartida(RenderWindow *, clsPartida *);
        void setUsuarios();
        void draw();
};
#include "ScreenPartida.cpp"
#endif