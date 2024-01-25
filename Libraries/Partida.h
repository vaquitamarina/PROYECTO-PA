#ifndef PARTIDA_H
#define PARTIDA_H
using namespace std;

class clsPartida{
    private:
        string usuarioN;
        string usuarioB;
        clsPieza *piezas[32];
        // clsTablero *pTablero;

    public:
        clsPartida(string, string);
        void setPiezas(clsPieza *);
};
#include "Partida.cpp"
#endif