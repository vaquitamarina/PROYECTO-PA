#ifndef REGISTRO_H
#define REGISTRO_H

using namespace std;

class clsRegistro{
    private:
        clsUsuario *usuarios[100];
        int nUsuarios;
    public:
        clsRegistro();
        bool crearUsuario(string,int,string);
        bool iniciarSesion(string,string);
        void generarRanking();
};

#include "Registro.cpp"

#endif