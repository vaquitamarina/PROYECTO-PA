#ifndef SCREENPARTIDA_H
#define SCREENPARTIDA_H

#include "Screen.h"
#define _CASILLA 62
#define _CASILLAORIGEN 130
#define _PUNTERODIF 10
class clsScreenPartida : public clsScreen {
    private:
        clsPartida *partida;
        clsPieza *piezas[32];
        Vector2f casillas[8][8];
        string usuarioN;
        string usuarioB;
        int priority;
    public:
        clsScreenPartida(RenderWindow *, clsPartida *);
        void setPointerPos(int,char);
        void setPiezaPos(Vector2f, Vector2f);
        int getCasillaPieza(Vector2f);
        void setPriority(Vector2f);
        void setUsuarios();
        void draw();
};
#include "ScreenPartida.cpp"
#endif