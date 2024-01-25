#ifndef SCREENPARTIDA_H
#define SCREENPARTIDA_H

#include "Screen.h"

class clsScreenPartida : public clsScreen {
    private:
        clsPartida *partida;
        clsPieza *piezas[32];
    public:
        clsScreenPartida(RenderWindow *, clsPartida *);
        void draw();
};
#include "ScreenPartida.cpp"
#endif