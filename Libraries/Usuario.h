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
        clsUsuario();
        string getNombre();
        string getPasswd();
        int getMmr();
        void setMmr(int);
        void setNombre(string);
        void setPasswd(string);
        bool operator >(clsUsuario);
        bool operator <(clsUsuario);
};

#include "Usuario.cpp"

#endif