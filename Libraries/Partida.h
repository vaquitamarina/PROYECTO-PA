#ifndef PARTIDA_H
#define PARTIDA_H
using namespace std;

class clsPartida{
    private:
        string usuarioN;
        string usuarioB;
        clsTablero *pTablero;

    public:
        clsPartida(string, string);
        void mostrarTablero();
};
#include "Partida.cpp"
#endif