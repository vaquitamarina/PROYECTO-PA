#include "Usuario.h"
#include <string>
using namespace std;

clsUsuario::clsUsuario(string n, int m, string p){
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