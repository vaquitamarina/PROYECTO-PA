#ifndef USUARIO_H
#define USUARIO_H

using namespace std;
class clsUsuario{
    private:
        string nombre;
        int mmr;
        string passwd;
    public:
        clsUsuario(string,string,int);
        string getNombre();
        string getPasswd();
};

#include "Usuario.cpp"

#endif