#include<bits/stdc++.h>

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

clsPartida::clsPartida(string n, string b){
    usuarioN = n;
    usuarioB = b;
    pTablero = new clsTablero();
}

void clsPartida::mostrarTablero(){
    pTablero -> mostrarTablero();
}