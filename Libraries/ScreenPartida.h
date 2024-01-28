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
        Sound effects[10];
    public:
        clsScreenPartida(RenderWindow *);
        void setPointerPos(int,char);
        void setPiezaPos(Vector2f, Vector2f, int);
        bool getTestMovement(Vector2f, int);
        bool getTestEat(Vector2f, int);
        bool getTurn();
        char getPiezaColor(int);
        int getCasillaPieza(Vector2f);
        void setPriority(Vector2f);
        void setUsuarios(string,string);
        void updateCasillas();
        // void comprobarGanador(int i);
        void TurnPlayer();
        void deletePieza(int);
        void setEffectSound(Sound *);
        Sound getEffectSound(int);
        void imprimirMatrizPrueba();

        void draw();
};
#include "ScreenPartida.cpp"
#endif