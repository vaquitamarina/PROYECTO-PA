#include "Usuario.h"
#include <string>
using namespace std;

clsUsuario::clsUsuario(string n,string p ,int m ){
    nombre = n;
    mmr = m;
    passwd = p;
}

string clsUsuario::getNombre(){
    return nombre;
}

string clsUsuario::getPasswd(){
    return passwd;
}