#ifndef REGISTRO_H
#define REGISTRO_H

using namespace std;

#include "Usuario.h"
#include <bits/stdc++.h>
class clsRegistro{
    private:
        clsUsuario *usuarios[100];
        int nUsuarios;
        ofstream registroOutput;
        ifstream registroInput;
    public:
        clsRegistro();
        bool crearUsuario(string,int,string);
        bool iniciarSesion(string,string);
        void generarRanking();
};

#include "Registro.cpp"

#endif