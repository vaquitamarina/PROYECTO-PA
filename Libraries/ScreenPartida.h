#ifndef SCREENPARTIDA_H
#define SCREENPARTIDA_H

#include "Screen.h"

class clsScreenPartida : public clsScreen {
    private:
        clsPieza *piezas[32];
        Vector2f casillas[8][8];
        bool casillasOcupadas[8][8];
        string usuarioN;
        string usuarioB;
        bool turn = true;
        int priority;
        bool win;
    public:
        clsScreenPartida(RenderWindow *);
        clsScreenPartida(RenderWindow *,Clock *);
        void setPointerPos(int,char);
        void setPiezaPos(Vector2f, Vector2f, int);
        bool getTestMovement(Vector2f, int);
        bool getTestEat(Vector2f, int);
        bool getTurn();
        char getPiezaColor(int);
        string getUsuarioB();
        string getUsuarioN();
        int getCasillaPieza(Vector2f);
        void setPriority(Vector2f);
        void setUsuarios(string,string);
        void updateCasillas();
        void setWin(bool);
        bool getWin();
        void TurnPlayer();
        void deletePieza(int);
        Sound getEffectSound(int);
        void imprimirMatrizPrueba();

        void draw();
};
#include "ScreenPartida.cpp"
#endif